/*-----------------------------------------------------------------------------
    Name: Refinement
    Recorded By: abhishek
    Date of recording: 02/18/2017 12:56:02
    Flow details:
    Build details: 4.1.6 (build# 53)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void Refinement()
{
   
    // Refinement

       if(!(strcmp(ns_eval_string("{FilterTypeSP}"),""))){
            ns_start_transaction("COM_BrowseNoFilterAvailable");
		    ns_end_transaction("COM_BrowseNoFilterAvailable",NS_AUTO_STATUS);
		   //ns_exit_session();
		goto PDPLabel;
      }
          
                      
    char src_buff[512] = "", dest_buf[512] = "";
    int length = 0;
    snprintf(src_buff,512, "%s", ns_eval_string("{FilterTypeSP}"));
   length = strlen(src_buff);
//   printf("src_buff = %s , length = %d \n\n",  src_buff, length);
   if (length > 0)
     {
   	 memset(dest_buf, 0, 512);
     replace(src_buff, dest_buf, length);
   }
   ns_save_string(dest_buf, "FilterTypeDP");
//   printf("\n\n**************YodaFilterUrlDP = %s\n\n", ns_eval_string("{YodaFilterUrlDP}"));

	ns_start_transaction("COM_Browse_Refinement"); 
    ns_web_url ("DT_Browse_filters",
       // "URL=https://www.jcpenney.com/g/baby/nursery-decor?product_type=wall+decor&id=cat100260094&productGridView=medium&cm_re=3%7CZB-_-LF-_-Baby_Nursery_Decor&activeFacetId=4",
        "URL=https://www.jcpenney.com/{RefinementUrlSP}&activeFacetId={YodaFacetIdSP}",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Category%3Adresses(cat100210008)&cg=Mobile%7Ccat100210008&sr=3092&rnd=1467022424847&pv_a5=Size%20Range&pv_a6=juniors&pv_a7=Size%20Range&pv_a8=juniors&pv_a9=Size%20Range&pv_a10=juniors&pv_a12=bestmatch&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;90024642_reset;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://dms.netmng.com/si/CM/Tracking/ClickTracking.aspx?siclientid=1637&jscript=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=u", END_INLINE
    );
    ns_end_transaction("COM_Browse_Refinement", NS_AUTO_STATUS);
 
    ns_start_transaction("DT_API_Browse_filters_ProductGridView_OPTIONS");
    ns_web_url ("DT_API_Browse_filters1",
        //"URL=https://search-api.jcpenney.com/v1/search-service/g/liz-claiborne-womens-tops/N-bwo3xD1nnujaZ68?responseType=content&activeFacetId=8&productGridView=medium",
        //"URL=https://search-api.jcpenney.com{YodaFilterUrlDP}?responseType=content&activeFacetId={YodaFacetIdSP}&productGridView=medium",
        //"URL=https://search-api.jcpenney.com/v1/search-service/g/men/mens-shirts?responseType=content&activeFacetId=8&brand=adidas&cm_re=1%7CZA-_-LF-_-Mens_Clothing_Shirts&id=cat100240025&productGridView=medium",
         //"URL=https://search-api.jcpenney.com/v1/search-service/g{YodagalleryNameDP}?responseType=content&activeFacetId={YodaFacetIdSP}&{FilterTypeDP}&productGridView=medium",
        //"URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/g/men/mens-shirts?brand=nike&id=cat100240025&productGridView=medium&cm_re=ZH-_-IM-_-DEPT-MENS-_-VN-2-_-Shirts&activeFacetId=8",
         "URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/{RefinementUrlSP}&activeFacetId={YodaFacetIdSP}",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://sp.analytics.yahoo.com/sp.pl?a=10000&jsonp=YAHOO.ywa.I13N.handleJSONResponse&.yp=25984&f=https%3A%2F%2Fm.jcpenney.com%2Fcart&enc=UTF-8", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=B;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("DT_API_Browse_filters_ProductGridView_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_Browse_filters_ProductGridView_GET"); 
    ns_web_url ("DT_API_Browse_filters",
    	//"URL=https://search-api.jcpenney.com/v1/search-service/g/mens-pants/N-bwo3yD1nopetZ1z0q5g2?responseType=content&activeFacetId=15&productGridView=medium",
        //"URL=https://search-api.jcpenney.com{YodaFilterUrlDP}?responseType=content&activeFacetId={YodaFacetIdSP}&productGridView=medium",
        //"URL=https://search-api.jcpenney.com/v1/search-service/g{YodagalleryNameDP}?responseType=content&activeFacetId={YodaFacetIdSP}&{FilterTypeDP}&productGridView=medium",
         "URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/{RefinementUrlSP}&activeFacetId={YodaFacetIdSP}",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Category%3Adresses(cat100210008)&cg=Mobile%7Ccat100210008&sr=3092&rnd=1467022424847&pv_a5=Size%20Range&pv_a6=juniors&pv_a7=Size%20Range&pv_a8=juniors&pv_a9=Size%20Range&pv_a10=juniors&pv_a12=bestmatch&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;90024642_reset;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0526201617040306M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0421201617033654M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0523201617051833M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0510201617025821M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://netvision.cavisson.com/test_rum?s=000337088352555632764&op=timing&pi=3&d=1|0|-1|-1|-1|1212|-1|-1|-1|-1|-1|-1|-1|-1|1804|801|21|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26N%3D1724|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.359%3B%20clientTestPool1%3Drwd%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20rr_rcs%3DeF4FwbENgDAMBMAmFbs88tuO4xFYgxghUdAB83PX2lvbOclkDcxSg6sURKJQ7D3ce-3U5f6e61ipAXoMYWaqDoMZwB97_xEH%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DggP7goM0KV2vOhm0pJmZthYcmUZTgskT%3B%20_ga%3DGA1.2.2003552312.1467018899%3B%20_gat%3D1%3B%20CavSID%3D000337088352555632764%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467019114150%2C%2C%2C%3B%20CavLTS%3D78484713%3B%20CavPI%3D3%3B%20fsr.s%3D%257B%2522v2%2522%253A1%252C%2522v1%2522%253A1%252C%2522cp%2522%253A%257B%2522cxreplayaws%2522%253A%2522true%2522%252C%2522SignedIn%2522%253A%25220%2522%252C%2522OrderSubmitted%2522%253A%2522No%2522%252C%2522OrderTotalDollars%2522%253A%2522None%2522%257D%252C%2522rid%2522%253A%2522de07bd3-77908666-cca5-7d34-a6647%2522%252C%2522to%2522%253A4%252C%2522rc%2522%253Atrue%252C%2522rcp%2522%253Atrue%252C%2522c%2522%253A%2522http%253A%252F%252Fm.jcpenney.com%252Fwomen%252Fdept.jump%2522%252C%2522pv%2522%253A2%252C%2522lc%2522%253A%257B%2522d2%2522%253A%257B%2522v%2522%253A2%252C%2522s%2522%253Afalse%257D%257D%252C%2522cd%2522%253A2%252C%2522sd%2522%253A2%257D%3B%20DPInstance%3DDTAPIEXPR1C1J3_11%3B%20DPLastAccessedTime%3D1467019149224%3B%20DPCluster%3DC1%3B%20DPIdentifier%3DDigitalPlatform%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78484713&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://widget.criteo.com/event?a=11251&v=4.0.0&p0=e%3Dexd%26site_type%3Dm&p1=e%3Dvl%26p%3D%255B%252522pp5007560227%252522%252C%252522pp5007280155%252522%252C%252522pp5007510265%252522%255D&p2=e%3Ddis&adce=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=uid", "REDIRECT=YES", "LOCATION=http://widget.us.criteo.com/event?a=11251&v=4.0.0&p0=e%3Dexd%26site_type%3Dm&p1=e%3Dvl%26p%3D%255B%252522pp5007560227%252522%252C%252522pp5007280155%252522%252C%252522pp5007510265%252522%255D&p2=e%3Ddis&adce=1", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/974303325/?random=1467019154102&cv=8&fst=1467019154102&num=1&fmt=3&guid=ON&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_his=5&u_tz=330&u_java=true&u_nplug=8&u_nmime=53&data=ecomm_prodid%3D%3Becomm_pagetype%3Dcategory%3Becomm_totalvalue%3D0.00&frm=0&url=http%3A//m.jcpenney.com/women/dresses/cat.jump%3Fid%3Dcat100210008%26N%3D1724&tiba=Dresses%20for%20Women&async=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=id;IDE", "REDIRECT=YES", "LOCATION=https://www.google.com/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/women/dresses/cat.jump%3Fid%3Dcat100210008%26N%3D1724&data=ecomm_prodid%3D%3Becomm_pagetype%3Dcategory%3Becomm_totalvalue%3D0.00&random=1951771641", END_INLINE,
            "URL=http://www.google-analytics.com/collect?v=1&_v=j44&a=1808085754&t=pageview&_s=4&dl=http%3A%2F%2Fm.jcpenney.com%2F&ul=en-us&de=UTF-8&dt=Dresses%20for%20Women&sd=24-bit&sr=1366x768&vp=784x464&je=1&_u=CGAAgEAB~&jid=&cid=2003552312.1467018899&tid=UA-43509801-1&z=597719895", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://dms.netmng.com/si/CM/Tracking/ClickTracking.aspx?siclientid=1637&jscript=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=u", END_INLINE
    );
    ns_end_transaction("DT_API_Browse_filters_ProductGridView_GET", NS_AUTO_STATUS);

    ns_start_transaction("DT_API_Browse_filters_Organic_OPTIONS"); 
    ns_web_url ("DT_API_Browse_filters_Organic1",
    	//"URL=https://search-api.jcpenney.com/v1/search-service/g/mens-pants/N-bwo3yD1nopetZ1z0q5g2?responseType=content&activeFacetId=15&productGridView=medium",
        //"URL=https://search-api.jcpenney.com{YodaFilterUrlDP}?productGridView=medium&activeFacetId={YodaFacetIdSP}&responseType=organic",
        //"URL=https://search-api.jcpenney.com/v1/search-service/g/men/mens-shirts?productGridView=medium&activeFacetId=8&brand=adidas&cm_re=1%7CZA-_-LF-_-Mens_Clothing_Shirts&id=cat100240025&responseType=organic",
        "URL=https://search-api.jcpenney.com/v1/search-service/g{YodagalleryNameDP}?productGridView=medium&activeFacetId={YodaFacetIdSP}&{FilterTypeDP}&responseType=organic",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Category%3Adresses(cat100210008)&cg=Mobile%7Ccat100210008&sr=3092&rnd=1467022424847&pv_a5=Size%20Range&pv_a6=juniors&pv_a7=Size%20Range&pv_a8=juniors&pv_a9=Size%20Range&pv_a10=juniors&pv_a12=bestmatch&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;90024642_reset;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0526201617040306M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0421201617033654M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0523201617051833M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0510201617025821M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://netvision.cavisson.com/test_rum?s=000337088352555632764&op=timing&pi=3&d=1|0|-1|-1|-1|1212|-1|-1|-1|-1|-1|-1|-1|-1|1804|801|21|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26N%3D1724|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.359%3B%20clientTestPool1%3Drwd%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20rr_rcs%3DeF4FwbENgDAMBMAmFbs88tuO4xFYgxghUdAB83PX2lvbOclkDcxSg6sURKJQ7D3ce-3U5f6e61ipAXoMYWaqDoMZwB97_xEH%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DggP7goM0KV2vOhm0pJmZthYcmUZTgskT%3B%20_ga%3DGA1.2.2003552312.1467018899%3B%20_gat%3D1%3B%20CavSID%3D000337088352555632764%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467019114150%2C%2C%2C%3B%20CavLTS%3D78484713%3B%20CavPI%3D3%3B%20fsr.s%3D%257B%2522v2%2522%253A1%252C%2522v1%2522%253A1%252C%2522cp%2522%253A%257B%2522cxreplayaws%2522%253A%2522true%2522%252C%2522SignedIn%2522%253A%25220%2522%252C%2522OrderSubmitted%2522%253A%2522No%2522%252C%2522OrderTotalDollars%2522%253A%2522None%2522%257D%252C%2522rid%2522%253A%2522de07bd3-77908666-cca5-7d34-a6647%2522%252C%2522to%2522%253A4%252C%2522rc%2522%253Atrue%252C%2522rcp%2522%253Atrue%252C%2522c%2522%253A%2522http%253A%252F%252Fm.jcpenney.com%252Fwomen%252Fdept.jump%2522%252C%2522pv%2522%253A2%252C%2522lc%2522%253A%257B%2522d2%2522%253A%257B%2522v%2522%253A2%252C%2522s%2522%253Afalse%257D%257D%252C%2522cd%2522%253A2%252C%2522sd%2522%253A2%257D%3B%20DPInstance%3DDTAPIEXPR1C1J3_11%3B%20DPLastAccessedTime%3D1467019149224%3B%20DPCluster%3DC1%3B%20DPIdentifier%3DDigitalPlatform%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78484713&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://widget.criteo.com/event?a=11251&v=4.0.0&p0=e%3Dexd%26site_type%3Dm&p1=e%3Dvl%26p%3D%255B%252522pp5007560227%252522%252C%252522pp5007280155%252522%252C%252522pp5007510265%252522%255D&p2=e%3Ddis&adce=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=uid", "REDIRECT=YES", "LOCATION=http://widget.us.criteo.com/event?a=11251&v=4.0.0&p0=e%3Dexd%26site_type%3Dm&p1=e%3Dvl%26p%3D%255B%252522pp5007560227%252522%252C%252522pp5007280155%252522%252C%252522pp5007510265%252522%255D&p2=e%3Ddis&adce=1", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/974303325/?random=1467019154102&cv=8&fst=1467019154102&num=1&fmt=3&guid=ON&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_his=5&u_tz=330&u_java=true&u_nplug=8&u_nmime=53&data=ecomm_prodid%3D%3Becomm_pagetype%3Dcategory%3Becomm_totalvalue%3D0.00&frm=0&url=http%3A//m.jcpenney.com/women/dresses/cat.jump%3Fid%3Dcat100210008%26N%3D1724&tiba=Dresses%20for%20Women&async=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=id;IDE", "REDIRECT=YES", "LOCATION=https://www.google.com/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/women/dresses/cat.jump%3Fid%3Dcat100210008%26N%3D1724&data=ecomm_prodid%3D%3Becomm_pagetype%3Dcategory%3Becomm_totalvalue%3D0.00&random=1951771641", END_INLINE,
            "URL=http://www.google-analytics.com/collect?v=1&_v=j44&a=1808085754&t=pageview&_s=4&dl=http%3A%2F%2Fm.jcpenney.com%2F&ul=en-us&de=UTF-8&dt=Dresses%20for%20Women&sd=24-bit&sr=1366x768&vp=784x464&je=1&_u=CGAAgEAB~&jid=&cid=2003552312.1467018899&tid=UA-43509801-1&z=597719895", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://dms.netmng.com/si/CM/Tracking/ClickTracking.aspx?siclientid=1637&jscript=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=u", END_INLINE
    );
    ns_end_transaction("DT_API_Browse_filters_Organic_OPTIONS", NS_AUTO_STATUS);
            
    ns_start_transaction("DT_API_Browse_filters_Organic_GET"); 
    ns_web_url ("DT_API_Browse_filters_Organic",
    	//"URL=https://search-api.jcpenney.com/v1/search-service/g/mens-pants/N-bwo3yD1nopetZ1z0q5g2?responseType=content&activeFacetId=15&productGridView=medium",
        //"URL=https://search-api.jcpenney.com{YodaFilterUrlDP}?productGridView=medium&activeFacetId={YodaFacetIdSP}&responseType=organic",
        "URL=https://search-api.jcpenney.com/v1/search-service/g{YodagalleryNameDP}?productGridView=medium&activeFacetId={YodaFacetIdSP}&{FilterTypeDP}&responseType=organic",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Category%3Adresses(cat100210008)&cg=Mobile%7Ccat100210008&sr=3092&rnd=1467022424847&pv_a5=Size%20Range&pv_a6=juniors&pv_a7=Size%20Range&pv_a8=juniors&pv_a9=Size%20Range&pv_a10=juniors&pv_a12=bestmatch&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;90024642_reset;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0526201617040306M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0421201617033654M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0523201617051833M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0510201617025821M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://netvision.cavisson.com/test_rum?s=000337088352555632764&op=timing&pi=3&d=1|0|-1|-1|-1|1212|-1|-1|-1|-1|-1|-1|-1|-1|1804|801|21|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26N%3D1724|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.359%3B%20clientTestPool1%3Drwd%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20rr_rcs%3DeF4FwbENgDAMBMAmFbs88tuO4xFYgxghUdAB83PX2lvbOclkDcxSg6sURKJQ7D3ce-3U5f6e61ipAXoMYWaqDoMZwB97_xEH%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DggP7goM0KV2vOhm0pJmZthYcmUZTgskT%3B%20_ga%3DGA1.2.2003552312.1467018899%3B%20_gat%3D1%3B%20CavSID%3D000337088352555632764%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467019114150%2C%2C%2C%3B%20CavLTS%3D78484713%3B%20CavPI%3D3%3B%20fsr.s%3D%257B%2522v2%2522%253A1%252C%2522v1%2522%253A1%252C%2522cp%2522%253A%257B%2522cxreplayaws%2522%253A%2522true%2522%252C%2522SignedIn%2522%253A%25220%2522%252C%2522OrderSubmitted%2522%253A%2522No%2522%252C%2522OrderTotalDollars%2522%253A%2522None%2522%257D%252C%2522rid%2522%253A%2522de07bd3-77908666-cca5-7d34-a6647%2522%252C%2522to%2522%253A4%252C%2522rc%2522%253Atrue%252C%2522rcp%2522%253Atrue%252C%2522c%2522%253A%2522http%253A%252F%252Fm.jcpenney.com%252Fwomen%252Fdept.jump%2522%252C%2522pv%2522%253A2%252C%2522lc%2522%253A%257B%2522d2%2522%253A%257B%2522v%2522%253A2%252C%2522s%2522%253Afalse%257D%257D%252C%2522cd%2522%253A2%252C%2522sd%2522%253A2%257D%3B%20DPInstance%3DDTAPIEXPR1C1J3_11%3B%20DPLastAccessedTime%3D1467019149224%3B%20DPCluster%3DC1%3B%20DPIdentifier%3DDigitalPlatform%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78484713&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://widget.criteo.com/event?a=11251&v=4.0.0&p0=e%3Dexd%26site_type%3Dm&p1=e%3Dvl%26p%3D%255B%252522pp5007560227%252522%252C%252522pp5007280155%252522%252C%252522pp5007510265%252522%255D&p2=e%3Ddis&adce=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=uid", "REDIRECT=YES", "LOCATION=http://widget.us.criteo.com/event?a=11251&v=4.0.0&p0=e%3Dexd%26site_type%3Dm&p1=e%3Dvl%26p%3D%255B%252522pp5007560227%252522%252C%252522pp5007280155%252522%252C%252522pp5007510265%252522%255D&p2=e%3Ddis&adce=1", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/974303325/?random=1467019154102&cv=8&fst=1467019154102&num=1&fmt=3&guid=ON&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_his=5&u_tz=330&u_java=true&u_nplug=8&u_nmime=53&data=ecomm_prodid%3D%3Becomm_pagetype%3Dcategory%3Becomm_totalvalue%3D0.00&frm=0&url=http%3A//m.jcpenney.com/women/dresses/cat.jump%3Fid%3Dcat100210008%26N%3D1724&tiba=Dresses%20for%20Women&async=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=id;IDE", "REDIRECT=YES", "LOCATION=https://www.google.com/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/women/dresses/cat.jump%3Fid%3Dcat100210008%26N%3D1724&data=ecomm_prodid%3D%3Becomm_pagetype%3Dcategory%3Becomm_totalvalue%3D0.00&random=1951771641", END_INLINE,
            "URL=http://www.google-analytics.com/collect?v=1&_v=j44&a=1808085754&t=pageview&_s=4&dl=http%3A%2F%2Fm.jcpenney.com%2F&ul=en-us&de=UTF-8&dt=Dresses%20for%20Women&sd=24-bit&sr=1366x768&vp=784x464&je=1&_u=CGAAgEAB~&jid=&cid=2003552312.1467018899&tid=UA-43509801-1&z=597719895", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://dms.netmng.com/si/CM/Tracking/ClickTracking.aspx?siclientid=1637&jscript=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=u", END_INLINE
    );
    ns_end_transaction("DT_API_Browse_filters_Organic_GET", NS_AUTO_STATUS);
    
//	ns_start_transaction("DT_API_Browse_filters_sitepromo_GET"); 
//    ns_web_url ("DT_API_Browse_filters_sitepromo",
//        //"URL=https://browse-api.jcpenney.com/v1/j/sitepromo/N-bwo3yD1nohp5Z1z0pixl",
//        "URL=https://browse-api.jcpenney.com/v1/j/sitepromo/N-{YodaFilterIdSP1}",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//        INLINE_URLS,
//            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Category%3Adresses(cat100210008)&cg=Mobile%7Ccat100210008&sr=3092&rnd=1467022424847&pv_a5=Size%20Range&pv_a6=juniors&pv_a7=Size%20Range&pv_a8=juniors&pv_a9=Size%20Range&pv_a10=juniors&pv_a12=bestmatch&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;90024642_reset;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0526201617040306M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0421201617033654M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0523201617051833M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0510201617025821M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://netvision.cavisson.com/test_rum?s=000337088352555632764&op=timing&pi=3&d=1|0|-1|-1|-1|1212|-1|-1|-1|-1|-1|-1|-1|-1|1804|801|21|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26N%3D1724|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.359%3B%20clientTestPool1%3Drwd%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20rr_rcs%3DeF4FwbENgDAMBMAmFbs88tuO4xFYgxghUdAB83PX2lvbOclkDcxSg6sURKJQ7D3ce-3U5f6e61ipAXoMYWaqDoMZwB97_xEH%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DggP7goM0KV2vOhm0pJmZthYcmUZTgskT%3B%20_ga%3DGA1.2.2003552312.1467018899%3B%20_gat%3D1%3B%20CavSID%3D000337088352555632764%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467019114150%2C%2C%2C%3B%20CavLTS%3D78484713%3B%20CavPI%3D3%3B%20fsr.s%3D%257B%2522v2%2522%253A1%252C%2522v1%2522%253A1%252C%2522cp%2522%253A%257B%2522cxreplayaws%2522%253A%2522true%2522%252C%2522SignedIn%2522%253A%25220%2522%252C%2522OrderSubmitted%2522%253A%2522No%2522%252C%2522OrderTotalDollars%2522%253A%2522None%2522%257D%252C%2522rid%2522%253A%2522de07bd3-77908666-cca5-7d34-a6647%2522%252C%2522to%2522%253A4%252C%2522rc%2522%253Atrue%252C%2522rcp%2522%253Atrue%252C%2522c%2522%253A%2522http%253A%252F%252Fm.jcpenney.com%252Fwomen%252Fdept.jump%2522%252C%2522pv%2522%253A2%252C%2522lc%2522%253A%257B%2522d2%2522%253A%257B%2522v%2522%253A2%252C%2522s%2522%253Afalse%257D%257D%252C%2522cd%2522%253A2%252C%2522sd%2522%253A2%257D%3B%20DPInstance%3DDTAPIEXPR1C1J3_11%3B%20DPLastAccessedTime%3D1467019149224%3B%20DPCluster%3DC1%3B%20DPIdentifier%3DDigitalPlatform%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78484713&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://widget.criteo.com/event?a=11251&v=4.0.0&p0=e%3Dexd%26site_type%3Dm&p1=e%3Dvl%26p%3D%255B%252522pp5007560227%252522%252C%252522pp5007280155%252522%252C%252522pp5007510265%252522%255D&p2=e%3Ddis&adce=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=uid", "REDIRECT=YES", "LOCATION=http://widget.us.criteo.com/event?a=11251&v=4.0.0&p0=e%3Dexd%26site_type%3Dm&p1=e%3Dvl%26p%3D%255B%252522pp5007560227%252522%252C%252522pp5007280155%252522%252C%252522pp5007510265%252522%255D&p2=e%3Ddis&adce=1", END_INLINE,
//            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/974303325/?random=1467019154102&cv=8&fst=1467019154102&num=1&fmt=3&guid=ON&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_his=5&u_tz=330&u_java=true&u_nplug=8&u_nmime=53&data=ecomm_prodid%3D%3Becomm_pagetype%3Dcategory%3Becomm_totalvalue%3D0.00&frm=0&url=http%3A//m.jcpenney.com/women/dresses/cat.jump%3Fid%3Dcat100210008%26N%3D1724&tiba=Dresses%20for%20Women&async=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=id;IDE", "REDIRECT=YES", "LOCATION=https://www.google.com/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/women/dresses/cat.jump%3Fid%3Dcat100210008%26N%3D1724&data=ecomm_prodid%3D%3Becomm_pagetype%3Dcategory%3Becomm_totalvalue%3D0.00&random=1951771641", END_INLINE,
//            "URL=http://www.google-analytics.com/collect?v=1&_v=j44&a=1808085754&t=pageview&_s=4&dl=http%3A%2F%2Fm.jcpenney.com%2F&ul=en-us&de=UTF-8&dt=Dresses%20for%20Women&sd=24-bit&sr=1366x768&vp=784x464&je=1&_u=CGAAgEAB~&jid=&cid=2003552312.1467018899&tid=UA-43509801-1&z=597719895", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://dms.netmng.com/si/CM/Tracking/ClickTracking.aspx?siclientid=1637&jscript=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=u", END_INLINE
//    );
//	ns_end_transaction("DT_API_Browse_filters_sitepromo_GET", NS_AUTO_STATUS);	
	
//	ns_start_transaction("DT_Browse_filters_ProductSummaries_GET"); 
//    ns_web_url ("DT_API_Browse_filters_FilterContent",
//        "URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-summaries-aggregator?ppId={RRPricePPIDFP}",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//        INLINE_URLS,
//            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Category%3Adresses(cat100210008)&cg=Mobile%7Ccat100210008&sr=3092&rnd=1467022424847&pv_a5=Size%20Range&pv_a6=juniors&pv_a7=Size%20Range&pv_a8=juniors&pv_a9=Size%20Range&pv_a10=juniors&pv_a12=bestmatch&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;90024642_reset;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0526201617040306M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0421201617033654M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0523201617051833M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0510201617025821M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://netvision.cavisson.com/test_rum?s=000337088352555632764&op=timing&pi=3&d=1|0|-1|-1|-1|1212|-1|-1|-1|-1|-1|-1|-1|-1|1804|801|21|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26N%3D1724|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.359%3B%20clientTestPool1%3Drwd%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20rr_rcs%3DeF4FwbENgDAMBMAmFbs88tuO4xFYgxghUdAB83PX2lvbOclkDcxSg6sURKJQ7D3ce-3U5f6e61ipAXoMYWaqDoMZwB97_xEH%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DggP7goM0KV2vOhm0pJmZthYcmUZTgskT%3B%20_ga%3DGA1.2.2003552312.1467018899%3B%20_gat%3D1%3B%20CavSID%3D000337088352555632764%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467019114150%2C%2C%2C%3B%20CavLTS%3D78484713%3B%20CavPI%3D3%3B%20fsr.s%3D%257B%2522v2%2522%253A1%252C%2522v1%2522%253A1%252C%2522cp%2522%253A%257B%2522cxreplayaws%2522%253A%2522true%2522%252C%2522SignedIn%2522%253A%25220%2522%252C%2522OrderSubmitted%2522%253A%2522No%2522%252C%2522OrderTotalDollars%2522%253A%2522None%2522%257D%252C%2522rid%2522%253A%2522de07bd3-77908666-cca5-7d34-a6647%2522%252C%2522to%2522%253A4%252C%2522rc%2522%253Atrue%252C%2522rcp%2522%253Atrue%252C%2522c%2522%253A%2522http%253A%252F%252Fm.jcpenney.com%252Fwomen%252Fdept.jump%2522%252C%2522pv%2522%253A2%252C%2522lc%2522%253A%257B%2522d2%2522%253A%257B%2522v%2522%253A2%252C%2522s%2522%253Afalse%257D%257D%252C%2522cd%2522%253A2%252C%2522sd%2522%253A2%257D%3B%20DPInstance%3DDTAPIEXPR1C1J3_11%3B%20DPLastAccessedTime%3D1467019149224%3B%20DPCluster%3DC1%3B%20DPIdentifier%3DDigitalPlatform%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78484713&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://widget.criteo.com/event?a=11251&v=4.0.0&p0=e%3Dexd%26site_type%3Dm&p1=e%3Dvl%26p%3D%255B%252522pp5007560227%252522%252C%252522pp5007280155%252522%252C%252522pp5007510265%252522%255D&p2=e%3Ddis&adce=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=uid", "REDIRECT=YES", "LOCATION=http://widget.us.criteo.com/event?a=11251&v=4.0.0&p0=e%3Dexd%26site_type%3Dm&p1=e%3Dvl%26p%3D%255B%252522pp5007560227%252522%252C%252522pp5007280155%252522%252C%252522pp5007510265%252522%255D&p2=e%3Ddis&adce=1", END_INLINE,
//            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/974303325/?random=1467019154102&cv=8&fst=1467019154102&num=1&fmt=3&guid=ON&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_his=5&u_tz=330&u_java=true&u_nplug=8&u_nmime=53&data=ecomm_prodid%3D%3Becomm_pagetype%3Dcategory%3Becomm_totalvalue%3D0.00&frm=0&url=http%3A//m.jcpenney.com/women/dresses/cat.jump%3Fid%3Dcat100210008%26N%3D1724&tiba=Dresses%20for%20Women&async=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=id;IDE", "REDIRECT=YES", "LOCATION=https://www.google.com/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/women/dresses/cat.jump%3Fid%3Dcat100210008%26N%3D1724&data=ecomm_prodid%3D%3Becomm_pagetype%3Dcategory%3Becomm_totalvalue%3D0.00&random=1951771641", END_INLINE,
//            "URL=http://www.google-analytics.com/collect?v=1&_v=j44&a=1808085754&t=pageview&_s=4&dl=http%3A%2F%2Fm.jcpenney.com%2F&ul=en-us&de=UTF-8&dt=Dresses%20for%20Women&sd=24-bit&sr=1366x768&vp=784x464&je=1&_u=CGAAgEAB~&jid=&cid=2003552312.1467018899&tid=UA-43509801-1&z=597719895", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://dms.netmng.com/si/CM/Tracking/ClickTracking.aspx?siclientid=1637&jscript=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=u", END_INLINE
//    );
//	ns_end_transaction("DT_Browse_filters_ProductSummaries_GET", NS_AUTO_STATUS);	
	
	PDPLabel:
    ns_page_think_time(0);
    
	
}
