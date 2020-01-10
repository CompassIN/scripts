/*-----------------------------------------------------------------------------
    Name: Sorting
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


void Sorting()
{
 	if(!(strcmp(ns_eval_string("{YodaSortOptionUrlSP}"),""))){
            ns_start_transaction("COM_BrowseNoSortingAvailable");
		    ns_end_transaction("COM_BrowseNoSortingAvailable",NS_AUTO_STATUS);
		   //ns_exit_session();
		goto PDPLabel;
      }
      
    char src_buff[512] = "", dest_buf[512] = "";
    int length = 0;
   snprintf(src_buff,512, "%s", ns_eval_string("{YodaSortOptionUrlSP}"));
   length = strlen(src_buff);
   if (length > 0)
    {
   	 memset(dest_buf, 0, 512);
     replace(src_buff, dest_buf, length);
   }
   ns_save_string(dest_buf, "YodaSortOptionUrlDP");

	 ns_start_transaction("COM_Browse_Sort");
    ns_web_url ("DT_Browse_sortBy",
        //"URL=https://www.jcpenney.com/g/baby/nursery-decor?cm_re=3%7CZB-_-LF-_-Baby_Nursery_Decor&id=cat100260094&sort=BS&productGridView=medium",
        "URL=https://www.jcpenney.com/{SortingUrlSP}",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Category%3Adresses(undefined)&cg=Mobile&sr=437&rnd=1467026349318&pv_a11=1&pv_a12=pricehightolow&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26N%3D1724", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;90024642_reset;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0203201617053761M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1021201517030561M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501582819M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0203201617053753M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0120201617035113M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1021201517030585M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583158M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583059M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://netvision.cavisson.com/test_rum?s=000337088352555632764&op=timing&pi=4&d=1|0|-1|-1|-1|1212|-1|-1|-1|-1|-1|-1|-1|-1|2469|1460|21|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26Ns%3Dpricehightolow%26N%3D1724|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.359%3B%20clientTestPool1%3Drwd%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20rr_rcs%3DeF4FwbENgDAMBMAmFbs88tuO4xFYgxghUdAB83PX2lvbOclkDcxSg6sURKJQ7D3ce-3U5f6e61ipAXoMYWaqDoMZwB97_xEH%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DggP7goM0KV2vOhm0pJmZthYcmUZTgskT%3B%20_ga%3DGA1.2.2003552312.1467018899%3B%20_gat%3D1%3B%20CavSID%3D000337088352555632764%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467019154237%2C%2C%2C%3B%20CavLTS%3D78484753%3B%20CavPI%3D4%3B%20fsr.s%3D%257B%2522v2%2522%253A1%252C%2522v1%2522%253A1%252C%2522cp%2522%253A%257B%2522cxreplayaws%2522%253A%2522true%2522%252C%2522SignedIn%2522%253A%25220%2522%252C%2522OrderSubmitted%2522%253A%2522No%2522%252C%2522OrderTotalDollars%2522%253A%2522None%2522%257D%252C%2522rid%2522%253A%2522de07bd3-77908666-cca5-7d34-a6647%2522%252C%2522to%2522%253A4%252C%2522rc%2522%253Atrue%252C%2522rcp%2522%253Atrue%252C%2522c%2522%253A%2522http%253A%252F%252Fm.jcpenney.com%252Fwomen%252Fdept.jump%2522%252C%2522pv%2522%253A2%252C%2522lc%2522%253A%257B%2522d2%2522%253A%257B%2522v%2522%253A2%252C%2522s%2522%253Afalse%257D%257D%252C%2522cd%2522%253A2%252C%2522sd%2522%253A2%257D%3B%20DPInstance%3DDTAPIEXPR1C1J3_11%3B%20DPLastAccessedTime%3D1467019169669%3B%20DPCluster%3DC1%3B%20DPIdentifier%3DDigitalPlatform%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78484753&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
   ns_end_transaction("COM_Browse_Sort", NS_AUTO_STATUS);  


    ns_start_transaction("DT_API_Browse_sortBy_productGridView_OPTIONS");
    ns_web_url ("DT_API_Browse_sortBy1",
       // "URL=https://search-api.jcpenney.com{YodaSortOptionUrlDP}?responseType=content&sort={YodaSortOptionSP}",
       //"URL=https://search-api.jcpenney.com/v1/search-service/g/men/mens-shirts?responseType=content&cm_re=ZA-_-LF-_-Mens_Clothing_Shirts%7C1&id=cat100240025&productGridView=medium&sort=BS",
        //"URL=https://search-api.jcpenney.com{YodaSortOptionUrlSP}?responseType=content&{YodaSortOptionSP}&productGridView=medium",
       // "URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/g/men/mens-shirts?cm_re=ZH-_-IM-_-DEPT-MENS-_-VN-2-_-Shirts&id=cat100240025&sort=NA&productGridView=medium",
         "URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/{SortingUrlSP}",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Category%3Adresses(undefined)&cg=Mobile&sr=437&rnd=1467026349318&pv_a11=1&pv_a12=pricehightolow&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26N%3D1724", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;90024642_reset;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0203201617053761M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1021201517030561M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501582819M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0203201617053753M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0120201617035113M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1021201517030585M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583158M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583059M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://netvision.cavisson.com/test_rum?s=000337088352555632764&op=timing&pi=4&d=1|0|-1|-1|-1|1212|-1|-1|-1|-1|-1|-1|-1|-1|2469|1460|21|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26Ns%3Dpricehightolow%26N%3D1724|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.359%3B%20clientTestPool1%3Drwd%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20rr_rcs%3DeF4FwbENgDAMBMAmFbs88tuO4xFYgxghUdAB83PX2lvbOclkDcxSg6sURKJQ7D3ce-3U5f6e61ipAXoMYWaqDoMZwB97_xEH%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DggP7goM0KV2vOhm0pJmZthYcmUZTgskT%3B%20_ga%3DGA1.2.2003552312.1467018899%3B%20_gat%3D1%3B%20CavSID%3D000337088352555632764%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467019154237%2C%2C%2C%3B%20CavLTS%3D78484753%3B%20CavPI%3D4%3B%20fsr.s%3D%257B%2522v2%2522%253A1%252C%2522v1%2522%253A1%252C%2522cp%2522%253A%257B%2522cxreplayaws%2522%253A%2522true%2522%252C%2522SignedIn%2522%253A%25220%2522%252C%2522OrderSubmitted%2522%253A%2522No%2522%252C%2522OrderTotalDollars%2522%253A%2522None%2522%257D%252C%2522rid%2522%253A%2522de07bd3-77908666-cca5-7d34-a6647%2522%252C%2522to%2522%253A4%252C%2522rc%2522%253Atrue%252C%2522rcp%2522%253Atrue%252C%2522c%2522%253A%2522http%253A%252F%252Fm.jcpenney.com%252Fwomen%252Fdept.jump%2522%252C%2522pv%2522%253A2%252C%2522lc%2522%253A%257B%2522d2%2522%253A%257B%2522v%2522%253A2%252C%2522s%2522%253Afalse%257D%257D%252C%2522cd%2522%253A2%252C%2522sd%2522%253A2%257D%3B%20DPInstance%3DDTAPIEXPR1C1J3_11%3B%20DPLastAccessedTime%3D1467019169669%3B%20DPCluster%3DC1%3B%20DPIdentifier%3DDigitalPlatform%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78484753&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
   ns_end_transaction("DT_API_Browse_sortBy_productGridView_OPTIONS", NS_AUTO_STATUS);
      
    ns_start_transaction("DT_API_Browse_sortBy_productGridView_GET");
    ns_web_url ("DT_API_Browse_sortBy",
        //"URL=https://search-api.jcpenney.com{YodaSortOptionUrlDP}?responseType=content&sort={YodaSortOptionSP}",
        //"URL=https://search-api.jcpenney.com{YodaSortOptionUrlSP}?responseType=content&{YodaSortOptionSP}&productGridView=medium",
        "URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/{SortingUrlSP}",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Category%3Adresses(undefined)&cg=Mobile&sr=437&rnd=1467026349318&pv_a11=1&pv_a12=pricehightolow&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26N%3D1724", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;90024642_reset;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0203201617053761M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1021201517030561M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501582819M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0203201617053753M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0120201617035113M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1021201517030585M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583158M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583059M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://netvision.cavisson.com/test_rum?s=000337088352555632764&op=timing&pi=4&d=1|0|-1|-1|-1|1212|-1|-1|-1|-1|-1|-1|-1|-1|2469|1460|21|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26Ns%3Dpricehightolow%26N%3D1724|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.359%3B%20clientTestPool1%3Drwd%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20rr_rcs%3DeF4FwbENgDAMBMAmFbs88tuO4xFYgxghUdAB83PX2lvbOclkDcxSg6sURKJQ7D3ce-3U5f6e61ipAXoMYWaqDoMZwB97_xEH%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DggP7goM0KV2vOhm0pJmZthYcmUZTgskT%3B%20_ga%3DGA1.2.2003552312.1467018899%3B%20_gat%3D1%3B%20CavSID%3D000337088352555632764%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467019154237%2C%2C%2C%3B%20CavLTS%3D78484753%3B%20CavPI%3D4%3B%20fsr.s%3D%257B%2522v2%2522%253A1%252C%2522v1%2522%253A1%252C%2522cp%2522%253A%257B%2522cxreplayaws%2522%253A%2522true%2522%252C%2522SignedIn%2522%253A%25220%2522%252C%2522OrderSubmitted%2522%253A%2522No%2522%252C%2522OrderTotalDollars%2522%253A%2522None%2522%257D%252C%2522rid%2522%253A%2522de07bd3-77908666-cca5-7d34-a6647%2522%252C%2522to%2522%253A4%252C%2522rc%2522%253Atrue%252C%2522rcp%2522%253Atrue%252C%2522c%2522%253A%2522http%253A%252F%252Fm.jcpenney.com%252Fwomen%252Fdept.jump%2522%252C%2522pv%2522%253A2%252C%2522lc%2522%253A%257B%2522d2%2522%253A%257B%2522v%2522%253A2%252C%2522s%2522%253Afalse%257D%257D%252C%2522cd%2522%253A2%252C%2522sd%2522%253A2%257D%3B%20DPInstance%3DDTAPIEXPR1C1J3_11%3B%20DPLastAccessedTime%3D1467019169669%3B%20DPCluster%3DC1%3B%20DPIdentifier%3DDigitalPlatform%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78484753&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
   ns_end_transaction("DT_API_Browse_sortBy_productGridView_GET", NS_AUTO_STATUS);  

   ns_start_transaction("DT_API_Browse_sortBy_Organic_OPTIONS");
   ns_web_url ("DT_API_Browse_sortBy_Organic1",
        //"URL=https://search-api.jcpenney.com{YodaSortOptionUrlDP}?productGridView=medium&sort={YodaSortOptionSP}&responseType=organic",
        //"URL=https://search-api.jcpenney.com/v1/search-service/g/men/mens-shirts?productGridView=medium&cm_re=ZA-_-LF-_-Mens_Clothing_Shirts%7C1&id=cat100240025&sort=BS&responseType=organic",
         "URL=https://search-api.jcpenney.com{YodaSortOptionUrlSP}?productGridView=medium&{YodaSortOptionSP}&responseType=organic",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Category%3Adresses(undefined)&cg=Mobile&sr=437&rnd=1467026349318&pv_a11=1&pv_a12=pricehightolow&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26N%3D1724", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;90024642_reset;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0203201617053761M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1021201517030561M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501582819M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0203201617053753M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0120201617035113M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1021201517030585M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583158M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583059M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://netvision.cavisson.com/test_rum?s=000337088352555632764&op=timing&pi=4&d=1|0|-1|-1|-1|1212|-1|-1|-1|-1|-1|-1|-1|-1|2469|1460|21|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26Ns%3Dpricehightolow%26N%3D1724|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.359%3B%20clientTestPool1%3Drwd%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20rr_rcs%3DeF4FwbENgDAMBMAmFbs88tuO4xFYgxghUdAB83PX2lvbOclkDcxSg6sURKJQ7D3ce-3U5f6e61ipAXoMYWaqDoMZwB97_xEH%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DggP7goM0KV2vOhm0pJmZthYcmUZTgskT%3B%20_ga%3DGA1.2.2003552312.1467018899%3B%20_gat%3D1%3B%20CavSID%3D000337088352555632764%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467019154237%2C%2C%2C%3B%20CavLTS%3D78484753%3B%20CavPI%3D4%3B%20fsr.s%3D%257B%2522v2%2522%253A1%252C%2522v1%2522%253A1%252C%2522cp%2522%253A%257B%2522cxreplayaws%2522%253A%2522true%2522%252C%2522SignedIn%2522%253A%25220%2522%252C%2522OrderSubmitted%2522%253A%2522No%2522%252C%2522OrderTotalDollars%2522%253A%2522None%2522%257D%252C%2522rid%2522%253A%2522de07bd3-77908666-cca5-7d34-a6647%2522%252C%2522to%2522%253A4%252C%2522rc%2522%253Atrue%252C%2522rcp%2522%253Atrue%252C%2522c%2522%253A%2522http%253A%252F%252Fm.jcpenney.com%252Fwomen%252Fdept.jump%2522%252C%2522pv%2522%253A2%252C%2522lc%2522%253A%257B%2522d2%2522%253A%257B%2522v%2522%253A2%252C%2522s%2522%253Afalse%257D%257D%252C%2522cd%2522%253A2%252C%2522sd%2522%253A2%257D%3B%20DPInstance%3DDTAPIEXPR1C1J3_11%3B%20DPLastAccessedTime%3D1467019169669%3B%20DPCluster%3DC1%3B%20DPIdentifier%3DDigitalPlatform%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78484753&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
   ns_end_transaction("DT_API_Browse_sortBy_Organic_OPTIONS", NS_AUTO_STATUS);
      
   ns_start_transaction("DT_API_Browse_sortBy_Organic_GET");
   ns_web_url ("DT_API_Browse_sortBy_Organic",
        //"URL=https://search-api.jcpenney.com{YodaSortOptionUrlDP}?productGridView=medium&sort={YodaSortOptionSP}&responseType=organic",
        "URL=https://search-api.jcpenney.com{YodaSortOptionUrlSP}?productGridView=medium&{YodaSortOptionSP}&responseType=organic",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Category%3Adresses(undefined)&cg=Mobile&sr=437&rnd=1467026349318&pv_a11=1&pv_a12=pricehightolow&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26N%3D1724", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;90024642_reset;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0203201617053761M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1021201517030561M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501582819M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0203201617053753M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0120201617035113M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1021201517030585M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583158M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583059M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://netvision.cavisson.com/test_rum?s=000337088352555632764&op=timing&pi=4&d=1|0|-1|-1|-1|1212|-1|-1|-1|-1|-1|-1|-1|-1|2469|1460|21|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26Ns%3Dpricehightolow%26N%3D1724|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.359%3B%20clientTestPool1%3Drwd%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20rr_rcs%3DeF4FwbENgDAMBMAmFbs88tuO4xFYgxghUdAB83PX2lvbOclkDcxSg6sURKJQ7D3ce-3U5f6e61ipAXoMYWaqDoMZwB97_xEH%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DggP7goM0KV2vOhm0pJmZthYcmUZTgskT%3B%20_ga%3DGA1.2.2003552312.1467018899%3B%20_gat%3D1%3B%20CavSID%3D000337088352555632764%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467019154237%2C%2C%2C%3B%20CavLTS%3D78484753%3B%20CavPI%3D4%3B%20fsr.s%3D%257B%2522v2%2522%253A1%252C%2522v1%2522%253A1%252C%2522cp%2522%253A%257B%2522cxreplayaws%2522%253A%2522true%2522%252C%2522SignedIn%2522%253A%25220%2522%252C%2522OrderSubmitted%2522%253A%2522No%2522%252C%2522OrderTotalDollars%2522%253A%2522None%2522%257D%252C%2522rid%2522%253A%2522de07bd3-77908666-cca5-7d34-a6647%2522%252C%2522to%2522%253A4%252C%2522rc%2522%253Atrue%252C%2522rcp%2522%253Atrue%252C%2522c%2522%253A%2522http%253A%252F%252Fm.jcpenney.com%252Fwomen%252Fdept.jump%2522%252C%2522pv%2522%253A2%252C%2522lc%2522%253A%257B%2522d2%2522%253A%257B%2522v%2522%253A2%252C%2522s%2522%253Afalse%257D%257D%252C%2522cd%2522%253A2%252C%2522sd%2522%253A2%257D%3B%20DPInstance%3DDTAPIEXPR1C1J3_11%3B%20DPLastAccessedTime%3D1467019169669%3B%20DPCluster%3DC1%3B%20DPIdentifier%3DDigitalPlatform%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78484753&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
   ns_end_transaction("DT_API_Browse_sortBy_Organic_GET", NS_AUTO_STATUS);  

   
//   ns_start_transaction("DT_API_Browse_sortBy_sitepromo_GET");
//   ns_web_url ("DT_API_Browse_sortBy_sitepromo",
//       //"URL=https://browse-api.jcpenney.com/v1/j/sitepromo/N-bwo3yD1nohp5Z1z0pixl",
//        "URL=https://browse-api.jcpenney.com/v1/j/sitepromo/N-{YodaCategoryIdDP}",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//        INLINE_URLS,
//            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Category%3Adresses(undefined)&cg=Mobile&sr=437&rnd=1467026349318&pv_a11=1&pv_a12=pricehightolow&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26N%3D1724", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;90024642_reset;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0203201617053761M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1021201517030561M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501582819M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0203201617053753M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0120201617035113M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1021201517030585M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583158M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583059M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://netvision.cavisson.com/test_rum?s=000337088352555632764&op=timing&pi=4&d=1|0|-1|-1|-1|1212|-1|-1|-1|-1|-1|-1|-1|-1|2469|1460|21|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26Ns%3Dpricehightolow%26N%3D1724|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.359%3B%20clientTestPool1%3Drwd%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20rr_rcs%3DeF4FwbENgDAMBMAmFbs88tuO4xFYgxghUdAB83PX2lvbOclkDcxSg6sURKJQ7D3ce-3U5f6e61ipAXoMYWaqDoMZwB97_xEH%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DggP7goM0KV2vOhm0pJmZthYcmUZTgskT%3B%20_ga%3DGA1.2.2003552312.1467018899%3B%20_gat%3D1%3B%20CavSID%3D000337088352555632764%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467019154237%2C%2C%2C%3B%20CavLTS%3D78484753%3B%20CavPI%3D4%3B%20fsr.s%3D%257B%2522v2%2522%253A1%252C%2522v1%2522%253A1%252C%2522cp%2522%253A%257B%2522cxreplayaws%2522%253A%2522true%2522%252C%2522SignedIn%2522%253A%25220%2522%252C%2522OrderSubmitted%2522%253A%2522No%2522%252C%2522OrderTotalDollars%2522%253A%2522None%2522%257D%252C%2522rid%2522%253A%2522de07bd3-77908666-cca5-7d34-a6647%2522%252C%2522to%2522%253A4%252C%2522rc%2522%253Atrue%252C%2522rcp%2522%253Atrue%252C%2522c%2522%253A%2522http%253A%252F%252Fm.jcpenney.com%252Fwomen%252Fdept.jump%2522%252C%2522pv%2522%253A2%252C%2522lc%2522%253A%257B%2522d2%2522%253A%257B%2522v%2522%253A2%252C%2522s%2522%253Afalse%257D%257D%252C%2522cd%2522%253A2%252C%2522sd%2522%253A2%257D%3B%20DPInstance%3DDTAPIEXPR1C1J3_11%3B%20DPLastAccessedTime%3D1467019169669%3B%20DPCluster%3DC1%3B%20DPIdentifier%3DDigitalPlatform%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78484753&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
//    );
//   ns_end_transaction("DT_API_Browse_sortBy_sitepromo_GET", NS_AUTO_STATUS);
   
   
//   ns_start_transaction("DT_Browse_sortBy_ProductSummaries_GET");
//    	ns_web_url ("DT_API_Browse_sortBy_FilterContent",
//        "URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-summaries-aggregator?ppId={RRPricePPIDFP}",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//        INLINE_URLS,
//            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Category%3Adresses(undefined)&cg=Mobile&sr=437&rnd=1467026349318&pv_a11=1&pv_a12=pricehightolow&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26N%3D1724", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;90024642_reset;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0203201617053761M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1021201517030561M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501582819M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0203201617053753M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0120201617035113M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1021201517030585M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583158M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583059M?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://netvision.cavisson.com/test_rum?s=000337088352555632764&op=timing&pi=4&d=1|0|-1|-1|-1|1212|-1|-1|-1|-1|-1|-1|-1|-1|2469|1460|21|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fwomen%2Fdresses%2Fcat.jump%3Fid%3Dcat100210008%26Ns%3Dpricehightolow%26N%3D1724|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.359%3B%20clientTestPool1%3Drwd%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20rr_rcs%3DeF4FwbENgDAMBMAmFbs88tuO4xFYgxghUdAB83PX2lvbOclkDcxSg6sURKJQ7D3ce-3U5f6e61ipAXoMYWaqDoMZwB97_xEH%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DggP7goM0KV2vOhm0pJmZthYcmUZTgskT%3B%20_ga%3DGA1.2.2003552312.1467018899%3B%20_gat%3D1%3B%20CavSID%3D000337088352555632764%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467019154237%2C%2C%2C%3B%20CavLTS%3D78484753%3B%20CavPI%3D4%3B%20fsr.s%3D%257B%2522v2%2522%253A1%252C%2522v1%2522%253A1%252C%2522cp%2522%253A%257B%2522cxreplayaws%2522%253A%2522true%2522%252C%2522SignedIn%2522%253A%25220%2522%252C%2522OrderSubmitted%2522%253A%2522No%2522%252C%2522OrderTotalDollars%2522%253A%2522None%2522%257D%252C%2522rid%2522%253A%2522de07bd3-77908666-cca5-7d34-a6647%2522%252C%2522to%2522%253A4%252C%2522rc%2522%253Atrue%252C%2522rcp%2522%253Atrue%252C%2522c%2522%253A%2522http%253A%252F%252Fm.jcpenney.com%252Fwomen%252Fdept.jump%2522%252C%2522pv%2522%253A2%252C%2522lc%2522%253A%257B%2522d2%2522%253A%257B%2522v%2522%253A2%252C%2522s%2522%253Afalse%257D%257D%252C%2522cd%2522%253A2%252C%2522sd%2522%253A2%257D%3B%20DPInstance%3DDTAPIEXPR1C1J3_11%3B%20DPLastAccessedTime%3D1467019169669%3B%20DPCluster%3DC1%3B%20DPIdentifier%3DDigitalPlatform%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78484753&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
//    );
//   ns_end_transaction("DT_Browse_sortBy_ProductSummaries_GET", NS_AUTO_STATUS);
   
   PDPLabel:
   ns_page_think_time(0.105);


}

