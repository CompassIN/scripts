/*-----------------------------------------------------------------------------
    Name:PDP
    Recorded By: anjali
    Date of recording: 06/27/2016 02:50:18
    Flow details:
    Build details: 4.1.4 (build# 43)
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
void PDP()
{

    // Check to see if any product is available after sort/Filter....
     if(!strcmp(ns_eval_string("{YodaProductUrlSP}"),"")){      
    	ns_start_transaction("MOB_BrowsePDPNoProductFound");
		ns_end_transaction("MOB_BrowsePDPNoProductFound",NS_AUTO_STATUS);
    	ns_exit_session();
     }
     
     //printf("\n***********ProductURL=[%s]*******\n",ns_eval_string("{YodaProductUrlSP}"));

    char src_buff[512] = "", dest_buf[512] = "";
    int length = 0;
   snprintf(src_buff,512, "%s", ns_eval_string("{YodaProductUrlSP}"));
   length = strlen(src_buff);
  // printf("src_buff = %s , length = %d \n\n",  src_buff, length);
   if (length > 0)
     memset(dest_buf, 0, 512);
     replace(src_buff, dest_buf, length);
   ns_save_string(dest_buf, "YodaProductUrlDP");
    
    ns_start_transaction("MOB_Browse_ProductDetailPage"); 
    ns_web_url ("MB_API_Browse_products",
        // "URL=https://m.jcpenney.com/p/arizona-long-sleeve-flannel-shirt/ppr5007272247?pTmplType=regular&catId=cat100240025&deptId=dept20000014&urlState=/g/arizona-mens-shirts/N-bwo3yD1nohp5Z42&sort=NA&page=2",
        "URL=https://m.jcpenney.com{YodaProductUrlDP}",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=Accept-application/json;text/plain;*/*",
        INLINE_URLS,
            "URL=http://m.jcpenney.com/b/assets/img/unavailable-color.png", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/img/arrow_up.svg", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a", END_INLINE
    );
    ns_end_transaction("MOB_Browse_ProductDetailPage", NS_AUTO_STATUS);
    
 //   printf("\n*************UrlState=%s***************",ns_eval_string("{UrlStateSP}"));
    
    char s_buff[512] = "", d_buf[512] = "";
    int len = 0;
   	snprintf(s_buff,512, "%s", ns_eval_string("{UrlStateSP}"));
   	len = strlen(s_buff);
   	if (len > 0)
      memset(d_buf, 0, 512);
     replace(s_buff, d_buf, len);
   ns_save_string(d_buf, "UrlStateDP");
    
    if(!strcmp(ns_eval_string("{YodaProductIdSP}"),""))
    {
    	//printf("**********************Client Side Rendering**********************");
    	ns_start_transaction("MOB_PDP_CSR"); 
     ns_end_transaction("MOB_PDP_CSR", NS_AUTO_STATUS);
    	goto ProductAggregator;
    }
    else
    {
    	//printf("**********************Server Side Rendering**********************");
    	ns_start_transaction("MOB_PDP_SSR"); 
     ns_end_transaction("MOB_PDP_SSR", NS_AUTO_STATUS); 
    	goto FreeShippingContent;    	
    }
  	ProductAggregator:
   ns_start_transaction("MB_API_Browse_RegionProductAggregator_GET");  
   ns_web_url("MB_API_Browse_ProductAggregartor",
        //"URL=https://browse-api.jcpenney.com/v1/product-aggregator/ppr5007249108?regionId=high",
        //"URL=https://browse-api.jcpenney.com/v1/product-aggregator/{YodaCatProductUrlSP}?regionId=high",
        "URL=https://browse-api.jcpenney.com/v2/product-aggregator/{YodaCatProductUrlSP}?regionId=high",
        "HEADER=Accept-Language:en-us,en;q=0.5",
    );
	ns_end_transaction("MB_API_Browse_RegionProductAggregator_GET", NS_AUTO_STATUS);
 	
 	FreeShippingContent:
 	 
      ns_start_transaction("MB_API_Browse_BreadCrumb_GET");
     ns_web_url ("MB_API_Browse_BreadCrumb",
        //"URL=https://search-api.jcpenney.com/v1/j/breadcrumb?ppId=ppr5007731758&type=product&productGridView=medium&urlState=%2Fg%2Fwomens-pants%2FN-bwo3xD1nopgv",
        "URL=https://search-api.jcpenney.com/v1/j/breadcrumb?ppId={YodaProductIdSP}&type=product&version=true&productGridView=medium&urlState={UrlStateDP}",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1416316862915.png",
        "Snapshot=webpage_1416316882585.png",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
    );
        ns_end_transaction("MB_API_Browse_BreadCrumb_GET", NS_AUTO_STATUS);


    ns_start_transaction("MB_API_Browse_inventory_OPTIONS");
    ns_web_url ("MB_API_Browse_inventoryFetchCall",
        //"URL=https://browse-api.jcpenney.com/v1/product-aggregator/{YodaProductIdSP}/inventory/pricing",
        "URL=https://browse-api.jcpenney.com/v2/product-aggregator/{YodaProductIdSP}/additional-details?deliveryAvailabilityCheckRequired=false",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=Access-Control-Request-Headers:accept-version,x-jcp-forwarded-channel,x-jcp-forwarded-host,x-jcp-forwarded-proto",
        "HEADER=Access-Control-Request-Method:GET",
        "PreSnapshot=webpage_1467019200976.png",
        "Snapshot=webpage_1467019202690.png",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Product%3ACity%20Triangles%C2%AE%20Strapless%20Lace-Inset%20Embellished%20Long%20Slim%20Dress-%20Juniors(pp5006300703)&cg=dept20000013%7Ccat100210008&sr=1&rnd=1467026446719&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fcity-triangles-strapless-lace-inset-embellished-long-slim-dress%2Fprod.jump%3FppId%3Dpp5006300703%26catId%3Dcat100210008%26N%3D1724%26Ntt%3D", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;90024642_reset;mmapi.store.p.0;mmapi.store.s.0;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT", END_INLINE,
            "URL=http://www88.jcpenney.com/cm?tid=5&ci=90024642&vn2=e4.0&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Product%3ACity%20Triangles%C2%AE%20Strapless%20Lace-Inset%20Embellished%20Long%20Slim%20Dress-%20Juniors(pp5006300703)&pr=2210493&pm=Product%3ACity%20Triangles%C2%AE%20Strapless%20Lace-Inset%20Embellished%20Long%20Slim%20Dress-%20Juniors&cg=dept20000013%7Ccat100210008&pc=N&rnd=1467024570228&pr_a24=City%20Triangle&pr_a25=pp5006300703&pr_a32=US&pr_a33=USD&ul=http%3A%2F%2Fm.jcpenney.com%2Fcity-triangles-strapless-lace-inset-embellished-long-slim-dress%2Fprod.jump%3FppId%3Dpp5006300703%26catId%3Dcat100210008%26N%3D1724%26Ntt%3D", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;90024642_reset;mmapi.store.p.0;mmapi.store.s.0;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583059M?$product_pdp$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583068M?$product_pdp$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://apps.nexus.bazaarvoice.com/JCPenney/1573-en_us/bv.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/1573-en_us/pp5006300703/reviews.djs?format=embeddedhtml", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/static/1573-en_us/bazaarvoice.css", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://ajax.googleapis.com/ajax/libs/jquery/1.6.3/jquery.min.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/module/1573-en_us/cmn/1573redes/display.pkg.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/module/1573-en_us/rr/1573redes/display.pkg.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/js/perfect-scrollbar.min.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau", END_INLINE,
            "URL=http://www88.jcpenney.com/cm?tid=8&ci=90024642&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Product%3ACity%20Triangles%C2%AE%20Strapless%20Lace-Inset%20Embellished%20Long%20Slim%20Dress-%20Juniors(pp5006300703)&ti=1467019201559&hr=%23swatchNavypp5006300703&ul=http%3A%2F%2Fm.jcpenney.com", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;mmapi.store.p.0;mmapi.store.s.0;fsr.s;90024642_reset;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583072S.jpg?$swatch_large$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://analytics-static.ugc.bazaarvoice.com/prod/static/3/bv-analytics.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/1573-en_us/crossdomain.htm?format=embedded#origin=http%3A%2F%2Fm.jcpenney.com", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://widget.criteo.com/event?a=11251&v=4.0.0&p0=e%3Dexd%26site_type%3Dm&p1=e%3Dvp%26p%3D%2522pp5006300703%2522&p2=e%3Ddis%26a%3D%255B11251%252C11251%255D&adce=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=uid", "REDIRECT=YES", "LOCATION=http://widget.us.criteo.com/event?a=11251&v=4.0.0&p0=e%3Dexd%26site_type%3Dm&p1=e%3Dvp%26p%3D%2522pp5006300703%2522&p2=e%3Ddis%26a%3D%255B11251%252C11251%255D&adce=1", END_INLINE,
            "URL=http://www.google-analytics.com/plugins/ua/ec.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/974303325/?random=1467019202303&cv=8&fst=1467019202303&num=1&fmt=3&guid=ON&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_his=7&u_tz=330&u_java=true&u_nplug=8&u_nmime=53&data=ecomm_prodid%3Dpp5006300703%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&frm=0&url=http%3A//m.jcpenney.com/city-triangles-strapless-lace-inset-embellished-long-slim-dress/prod.jump%3FppId%3Dpp5006300703%26catId%3Dcat100210008%26N%3D1724%26Ntt%3D&tiba=City%20Triangles%C2%AE%20Strapless%20Lace-Inset%20Embellished%20Long%20Slim%20Dress-%20Juniors%20-%20JCPenney&async=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=id;IDE", "REDIRECT=YES", "LOCATION=https://www.google.com/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/city-triangles-strapless-lace-inset-embellished-long-slim-dress/prod.jump%3FppId%3Dpp5006300703%26catId%3Dcat100210008%26N%3D1724%26Ntt%3D&data=ecomm_prodid%3Dpp5006300703%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&random=250668411", END_INLINE,
            "URL=https://www.google.com/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/city-triangles-strapless-lace-inset-embellished-long-slim-dress/prod.jump%3FppId%3Dpp5006300703%26catId%3Dcat100210008%26N%3D1724%26Ntt%3D&data=ecomm_prodid%3Dpp5006300703%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&random=250668411", "HEADER=Accept-Language:en-US,en;q=0.8", "REDIRECT=YES", "LOCATION=https://www.google.co.in/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/city-triangles-strapless-lace-inset-embellished-long-slim-dress/prod.jump%3FppId%3Dpp5006300703%26catId%3Dcat100210008%26N%3D1724%26Ntt%3D&data=ecomm_prodid%3Dpp5006300703%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&random=250668411&ipr=y", END_INLINE
    );
    ns_end_transaction("MB_API_Browse_inventory_OPTIONS", NS_AUTO_STATUS);   
    
    ns_start_transaction("MB_API_Browse_inventory_GET");
    ns_web_url ("MB_API_Browse_inventory",
        //"URL=https://browse-api.jcpenney.com/v1/product-aggregator/{YodaProductIdSP}/inventory/pricing",
        "URL=https://browse-api.jcpenney.com/v2/product-aggregator/{YodaProductIdSP}/additional-details?deliveryAvailabilityCheckRequired=false",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau",
        "PreSnapshot=webpage_1467019200976.png",
        "Snapshot=webpage_1467019202690.png",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Product%3ACity%20Triangles%C2%AE%20Strapless%20Lace-Inset%20Embellished%20Long%20Slim%20Dress-%20Juniors(pp5006300703)&cg=dept20000013%7Ccat100210008&sr=1&rnd=1467026446719&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fcity-triangles-strapless-lace-inset-embellished-long-slim-dress%2Fprod.jump%3FppId%3Dpp5006300703%26catId%3Dcat100210008%26N%3D1724%26Ntt%3D", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;90024642_reset;mmapi.store.p.0;mmapi.store.s.0;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT", END_INLINE,
            "URL=http://www88.jcpenney.com/cm?tid=5&ci=90024642&vn2=e4.0&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Product%3ACity%20Triangles%C2%AE%20Strapless%20Lace-Inset%20Embellished%20Long%20Slim%20Dress-%20Juniors(pp5006300703)&pr=2210493&pm=Product%3ACity%20Triangles%C2%AE%20Strapless%20Lace-Inset%20Embellished%20Long%20Slim%20Dress-%20Juniors&cg=dept20000013%7Ccat100210008&pc=N&rnd=1467024570228&pr_a24=City%20Triangle&pr_a25=pp5006300703&pr_a32=US&pr_a33=USD&ul=http%3A%2F%2Fm.jcpenney.com%2Fcity-triangles-strapless-lace-inset-embellished-long-slim-dress%2Fprod.jump%3FppId%3Dpp5006300703%26catId%3Dcat100210008%26N%3D1724%26Ntt%3D", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;90024642_reset;mmapi.store.p.0;mmapi.store.s.0;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583059M?$product_pdp$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583068M?$product_pdp$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://apps.nexus.bazaarvoice.com/JCPenney/1573-en_us/bv.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/1573-en_us/pp5006300703/reviews.djs?format=embeddedhtml", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/static/1573-en_us/bazaarvoice.css", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://ajax.googleapis.com/ajax/libs/jquery/1.6.3/jquery.min.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/module/1573-en_us/cmn/1573redes/display.pkg.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/module/1573-en_us/rr/1573redes/display.pkg.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/js/perfect-scrollbar.min.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau", END_INLINE,
            "URL=http://www88.jcpenney.com/cm?tid=8&ci=90024642&st=1467018877608&vn1=4.16.9&ec=utf-8&pi=Product%3ACity%20Triangles%C2%AE%20Strapless%20Lace-Inset%20Embellished%20Long%20Slim%20Dress-%20Juniors(pp5006300703)&ti=1467019201559&hr=%23swatchNavypp5006300703&ul=http%3A%2F%2Fm.jcpenney.com", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;mmapi.store.p.0;mmapi.store.s.0;fsr.s;90024642_reset;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1202201501583072S.jpg?$swatch_large$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://analytics-static.ugc.bazaarvoice.com/prod/static/3/bv-analytics.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/1573-en_us/crossdomain.htm?format=embedded#origin=http%3A%2F%2Fm.jcpenney.com", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://widget.criteo.com/event?a=11251&v=4.0.0&p0=e%3Dexd%26site_type%3Dm&p1=e%3Dvp%26p%3D%2522pp5006300703%2522&p2=e%3Ddis%26a%3D%255B11251%252C11251%255D&adce=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=uid", "REDIRECT=YES", "LOCATION=http://widget.us.criteo.com/event?a=11251&v=4.0.0&p0=e%3Dexd%26site_type%3Dm&p1=e%3Dvp%26p%3D%2522pp5006300703%2522&p2=e%3Ddis%26a%3D%255B11251%252C11251%255D&adce=1", END_INLINE,
            "URL=http://www.google-analytics.com/plugins/ua/ec.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/974303325/?random=1467019202303&cv=8&fst=1467019202303&num=1&fmt=3&guid=ON&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_his=7&u_tz=330&u_java=true&u_nplug=8&u_nmime=53&data=ecomm_prodid%3Dpp5006300703%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&frm=0&url=http%3A//m.jcpenney.com/city-triangles-strapless-lace-inset-embellished-long-slim-dress/prod.jump%3FppId%3Dpp5006300703%26catId%3Dcat100210008%26N%3D1724%26Ntt%3D&tiba=City%20Triangles%C2%AE%20Strapless%20Lace-Inset%20Embellished%20Long%20Slim%20Dress-%20Juniors%20-%20JCPenney&async=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=id;IDE", "REDIRECT=YES", "LOCATION=https://www.google.com/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/city-triangles-strapless-lace-inset-embellished-long-slim-dress/prod.jump%3FppId%3Dpp5006300703%26catId%3Dcat100210008%26N%3D1724%26Ntt%3D&data=ecomm_prodid%3Dpp5006300703%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&random=250668411", END_INLINE,
            "URL=https://www.google.com/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/city-triangles-strapless-lace-inset-embellished-long-slim-dress/prod.jump%3FppId%3Dpp5006300703%26catId%3Dcat100210008%26N%3D1724%26Ntt%3D&data=ecomm_prodid%3Dpp5006300703%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&random=250668411", "HEADER=Accept-Language:en-US,en;q=0.8", "REDIRECT=YES", "LOCATION=https://www.google.co.in/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/city-triangles-strapless-lace-inset-embellished-long-slim-dress/prod.jump%3FppId%3Dpp5006300703%26catId%3Dcat100210008%26N%3D1724%26Ntt%3D&data=ecomm_prodid%3Dpp5006300703%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&random=250668411&ipr=y", END_INLINE
    );
    ns_end_transaction("MB_API_Browse_inventory_GET", NS_AUTO_STATUS);   
    
    ns_start_transaction("MB_Browse_PDP_ProductCompare_OPTIONS");
    ns_web_url ("MB_API_Browse_ProductCompare1",
        //"URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-compare?ppId=ppr5007258830,ppr5007767484,ppr5007368275,ppr5007768814",
        //"URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-compare?ppId={$CAVREPEAT_BLOCK_START,sep(,),Num(5)}{RootPPIDFP}{$CAVREPEAT_BLOCK_END}",
        "URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-compare?ppId={$CAVREPEAT_BLOCK_START,sep(,),Num(5)}{RoorPpIdSP}{$CAVREPEAT_BLOCK_END}",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/jsp/browse/pp/rrPriceData.jsp?ppIds=ens6004510101,ens6004510109,ens6004770080,pp5002260106,pp5004201371", "HEADER=Accept-Language:en-us,en;q=0.5", "HEADER=x-requested-with:XMLHttpRequest", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;", "PreSnapshot=webpage_1416316884323.png", "Snapshot=webpage_1416316971362.png",             END_INLINE,
            "URL=https://192.208.179.137/nv/JCPenney/cav_nv.js", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/jsp/cart/shoppingBagPreview.jsp", "METHOD=POST", "HEADER=Accept-Language:en-us,en;q=0.5", "HEADER=Content-Length:50", "HEADER=x-requested-with:XMLHttpRequest", "HEADER=Content-Type:application/x-www-form-urlencoded; charset=UTF-8", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", "PreSnapshot=webpage_1416316971362.png", "Snapshot=webpage_1416316972424.png", 
            BODY_BEGIN,
                "_dyncharset=UTF-8&_dynSessConf=2420069153869486914",
            BODY_END,
            END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
    );
	ns_end_transaction("MB_Browse_PDP_ProductCompare_OPTIONS", NS_AUTO_STATUS);
			
	ns_start_transaction("MB_Browse_PDP_ProductCompare_GET");
    ns_web_url ("MB_API_Browse_ProductCompare",
        //"URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-compare?ppId=ppr5007258830,ppr5007767484,ppr5007368275,ppr5007768814",
        //"URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-compare?ppId={$CAVREPEAT_BLOCK_START,sep(,),Num(5)}{RootPPIDFP}{$CAVREPEAT_BLOCK_END}",
        "URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-compare?ppId={$CAVREPEAT_BLOCK_START,sep(,),Num(5)}{RoorPpIdSP}{$CAVREPEAT_BLOCK_END}",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/jsp/browse/pp/rrPriceData.jsp?ppIds=ens6004510101,ens6004510109,ens6004770080,pp5002260106,pp5004201371", "HEADER=Accept-Language:en-us,en;q=0.5", "HEADER=x-requested-with:XMLHttpRequest", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;", "PreSnapshot=webpage_1416316884323.png", "Snapshot=webpage_1416316971362.png",             END_INLINE,
            "URL=https://192.208.179.137/nv/JCPenney/cav_nv.js", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/jsp/cart/shoppingBagPreview.jsp", "METHOD=POST", "HEADER=Accept-Language:en-us,en;q=0.5", "HEADER=Content-Length:50", "HEADER=x-requested-with:XMLHttpRequest", "HEADER=Content-Type:application/x-www-form-urlencoded; charset=UTF-8", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", "PreSnapshot=webpage_1416316971362.png", "Snapshot=webpage_1416316972424.png", 
            BODY_BEGIN,
                "_dyncharset=UTF-8&_dynSessConf=2420069153869486914",
            BODY_END,
            END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
    );
	ns_end_transaction("MB_Browse_PDP_ProductCompare_GET", NS_AUTO_STATUS);
    

	ns_start_transaction("MB_Browse_PDP_SiteWidePromo_OPTIONS");
    ns_web_url ("MB_API_Browse_SiteWidePromo1",
        //"URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/p/bulwark-flame-resistant-long-sleeve-henley-tee-big-tall/pp5006480540",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo{ProductDetailSP}",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.5",
    );
	ns_end_transaction("MB_Browse_PDP_SiteWidePromo_OPTIONS", NS_AUTO_STATUS);
			
	ns_start_transaction("MB_Browse_PDP_SiteWidePromo_GET");
    ns_web_url ("MB_API_Browse_SiteWidePromo",
         //"URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/p/bulwark-flame-resistant-long-sleeve-henley-tee-big-tall/pp5006480540",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo{ProductDetailSP}",
        "HEADER=Accept-Language:en-us,en;q=0.5",
    );
	ns_end_transaction("MB_Browse_PDP_SiteWidePromo_GET", NS_AUTO_STATUS);
	
	
	ns_start_transaction("MB_API_Browse_urgency_GET");
    	ns_web_url ("MB_API_Browse_urgency",
        "URL=https://api.jcpapi.com/p/urgency/{YodaProductIdSP}?channel=MWEB",
        "HEADER=accept-language:en-US,en;q=0.9",
        "HEADER=authority:api.jcpapi.com",
         INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467032499374&vn1=4.16.9&ec=utf-8&pi=Product%3ABeautees%20Short-Sleeve%20Screen%20Print%20Tee%20with%20Print%20Vest%20and%20Faux%20Suede%20Scarf%20-%20Girls%207-16(pp5007570110)&cg=Search%20Results&sr=1&rnd=1467034778360&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fbeautees-short-sleeve-screen-print-tee-with-print-vest-and-faux-suede-scarf-girls-7-16%2Fprod.jump%3FppId%3Dpp5007570110%26N%3D510%26Ntt%3Dshirts", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;90024642_reset;mmapi.store.p.0;mmapi.store.s.0;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT", END_INLINE,
            "URL=http://www88.jcpenney.com/cm?tid=5&ci=90024642&vn2=e4.0&st=1467032499374&vn1=4.16.9&ec=utf-8&pi=Product%3ABeautees%20Short-Sleeve%20Screen%20Print%20Tee%20with%20Print%20Vest%20and%20Faux%20Suede%20Scarf%20-%20Girls%207-16(pp5007570110)&pr=3722091&pm=Product%3ABeautees%20Short-Sleeve%20Screen%20Print%20Tee%20with%20Print%20Vest%20and%20Faux%20Suede%20Scarf%20-%20Girls%207-16&cg=Search%20Results&pc=N&rnd=1467034206239&pr_a21=shirts&pr_a24=BEAUTEES&pr_a25=pp5007570110&pr_a32=US&pr_a33=USD&ul=http%3A%2F%2Fm.jcpenney.com%2Fbeautees-short-sleeve-screen-print-tee-with-print-vest-and-faux-suede-scarf-girls-7-16%2Fprod.jump%3FppId%3Dpp5007570110%26N%3D510%26Ntt%3Dshirts", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;90024642_reset;mmapi.store.p.0;mmapi.store.s.0;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0525201617103637M?$product_pdp$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0525201617103626M?$product_pdp$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/js/perfect-scrollbar.min.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0525201617103647S.jpg?$swatch_large$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0525201617103642S.jpg?$swatch_large$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://apps.nexus.bazaarvoice.com/JCPenney/1573-en_us/bv.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/1573-en_us/pp5007570110/reviews.djs?format=embeddedhtml", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/static/1573-en_us/bazaarvoice.css", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://ajax.googleapis.com/ajax/libs/jquery/1.6.3/jquery.min.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/module/1573-en_us/cmn/1573redes/display.pkg.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/module/1573-en_us/rr/1573redes/display.pkg.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://widget.criteo.com/event?a=11251&v=4.0.0&p0=e%3Dexd%26site_type%3Dm&p1=e%3Dvp%26p%3D%2522pp5007570110%2522&p2=e%3Ddis%26a%3D%255B11251%252C11251%255D&adce=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=uid", END_INLINE,
            "URL=http://www.google-analytics.com/plugins/ua/ec.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/974303325/?random=1467032965816&cv=8&fst=1467032965816&num=1&fmt=3&guid=ON&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_his=6&u_tz=330&u_java=true&u_nplug=8&u_nmime=53&data=ecomm_prodid%3Dpp5007570110%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&frm=0&url=http%3A//m.jcpenney.com/beautees-short-sleeve-screen-print-tee-with-print-vest-and-faux-suede-scarf-girls-7-16/prod.jump%3FppId%3Dpp5007570110%26N%3D510%26Ntt%3Dshirts&tiba=Beautees%20Short-Sleeve%20Screen%20Print%20Tee%20with%20Print%20Vest%20and%20Faux%20Suede%20Scarf%20-%20Girls%207-16%20-%20JCPen&async=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=id;IDE", "REDIRECT=YES", "LOCATION=https://www.google.com/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/beautees-short-sleeve-screen-print-tee-with-print-vest-and-faux-suede-scarf-girls-7-16/prod.jump%3FppId%3Dpp5007570110%26N%3D510%26Ntt%3Dshirts&data=ecomm_prodid%3Dpp5007570110%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&random=3292773216", END_INLINE,
            "URL=http://www.google-analytics.com/collect?v=1&_v=j44&a=1983272905&t=pageview&_s=5&dl=http%3A%2F%2Fm.jcpenney.com%2F&ul=en-us&de=UTF-8&dt=Beautees%20Short-Sleeve%20Screen%20Print%20Tee%20with%20Print%20Vest%20and%20Faux%20Suede%20Scarf%20-%20Girls%207-16%20-%20JCPenney&sd=24-bit&sr=1366x768&vp=784x464&je=1&_u=SGAAgEIJ~&jid=&cid=1047313294.1467032525&tid=UA-43509801-1&pa=detail&pr1nm=Beautees%20Short-Sleeve%20Screen%20Print%20Tee%20with%20Print%20Vest%20and%20Faux%20Suede%20Scarf%20-%20Girls%207-16&pr1ca=Division%20undefined%2FEntity%20undefined%2FSubdivision%20undefined&z=1231998732", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://www.google.com/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/beautees-short-sleeve-screen-print-tee-with-print-vest-and-faux-suede-scarf-girls-7-16/prod.jump%3FppId%3Dpp5007570110%26N%3D510%26Ntt%3Dshirts&data=ecomm_prodid%3Dpp5007570110%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&random=3292773216", "HEADER=Accept-Language:en-US,en;q=0.8", "REDIRECT=YES", "LOCATION=https://www.google.co.in/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/beautees-short-sleeve-screen-print-tee-with-print-vest-and-faux-suede-scarf-girls-7-16/prod.jump%3FppId%3Dpp5007570110%26N%3D510%26Ntt%3Dshirts&data=ecomm_prodid%3Dpp5007570110%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&random=3292773216&ipr=y", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=1563570357241998&ev=ViewContent&cd[content_type]=product&cd[content_ids]=%5B%22790277%22%5D&cd[product_catalog_id]=1012187682206761&cd[criteo_audience_3_0]=B3&cd[external_id]=86060b9c-bfbe-46a8-9ad1-56233d4e0312&cd[application_id]=423936147658676", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://dis.us.criteo.com/dis/dis.aspx?p=11251&cb=25983854708&ref=&sc_r=1366x768&sc_d=24&site_type=m", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=uid", END_INLINE,
            "URL=https://www.google.co.in/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/beautees-short-sleeve-screen-print-tee-with-print-vest-and-faux-suede-scarf-girls-7-16/prod.jump%3FppId%3Dpp5007570110%26N%3D510%26Ntt%3Dshirts&data=ecomm_prodid%3Dpp5007570110%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&random=3292773216&ipr=y", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://analytics-static.ugc.bazaarvoice.com/prod/static/3/bv-analytics.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/1573-en_us/crossdomain.htm?format=embedded#origin=http%3A%2F%2Fm.jcpenney.com", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://ums.adtechus.com/mapuser?providerid=1019;userid=86060b9c-bfbe-46a8-9ad1-56233d4e0312", "HEADER=Accept-Language:en-US,en;q=0.8", "REDIRECT=YES", "LOCATION=http://ums.adtechus.com/mapuser?providerid=1019;cfp=1;rndc=1467032968;userid=86060b9c-bfbe-46a8-9ad1-56233d4e0312", END_INLINE,
            "URL=http://pixel.rubiconproject.com/tap.php?v=5421&nid=2054&put=86060b9c-bfbe-46a8-9ad1-56233d4e0312&expires=30", "HEADER=Accept-Language:en-US,en;q=0.8", "REDIRECT=YES", "LOCATION=/tap.php?cookie_redirect=1&v=5421&nid=2054&put=86060b9c-bfbe-46a8-9ad1-56233d4e0312&expires=30", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/static/1573-en_us/translucent.gif", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/static/1573-en_us/filteringBusy.gif", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/static/1573-en_us/link-facebook.gif", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/static/1573-en_us/link-digg.gif", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/static/1573-en_us/link-delicious.gif", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://analytics-static.ugc.bazaarvoice.com/prod/static/3/bv-analytics.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s3.amazonaws.com/bv-gallery-prod/gallery/jcpenney/prod/loader.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/static/1573-en_us/r_0_ispacer.gif?_=0", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://network.bazaarvoice.com/sid.gif?_=961gst", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://pixel.rubiconproject.com/tap.php?cookie_redirect=1&v=5421&nid=2054&put=86060b9c-bfbe-46a8-9ad1-56233d4e0312&expires=30", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=c", END_INLINE,
            "URL=http://ums.adtechus.com/mapuser?providerid=1019;cfp=1;rndc=1467032968;userid=86060b9c-bfbe-46a8-9ad1-56233d4e0312", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=CfP", END_INLINE,
            "URL=http://static.curations.bazaarvoice.com/gallery/jcpenney/prod/2016-06-23T16.41.27.920Z/styles/main.css", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://static.curations.bazaarvoice.com/gallery/jcpenney/prod/2016-06-23T16.41.27.920Z/scripts/main.min.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("MB_API_Browse_urgency_GET", NS_AUTO_STATUS);	
    
//     if(!strcmp(ns_eval_string("{ProductOfferingSP}"),"")){      //Condition to Check ProductOfferingSP if available
//       ns_start_transaction("MOB_Browse_NoProductOfferingAvailable");
//       ns_end_transaction("MOB_Browse_NoProductOfferingAvailable", NS_AUTO_STATUS);
//      goto SkipNextRequest;
//    }
    
    char buff2[64] = "";
    char *SKUOfferingValue;
    char AvailableSKUOffering[128 + 1]="";
    int i;
    
	int SKUAvailable = ns_get_int_val("ProductOfferingSP_count");
//	printf("*******SKUOffering Available=[%d]***********",SKUAvailable);
   if (SKUAvailable < 1)
    {
    	//printf("\n----------------------NoOfferingAvailable--------------------\n");
    	ns_start_transaction("MOB_Browse_NoSkuOfferingAvailable");
       	ns_end_transaction("MOB_Browse_NoSkuOfferingAvailable", NS_AUTO_STATUS);
       	goto SkipNextRequest;
    }  
    else if(SKUAvailable >= 1) 
    {	
    int a = SKUAvailable;
	if (a > 2)
	{SKUAvailable = 2; }
    	for(i = 1; i <= SKUAvailable; i++)
    	{
      	sprintf(AvailableSKUOffering,"{ProductOfferingSP_%d}", (i)); //To get the index of the Sku
      	//printf("\AvailableSKUOffering is [%s]\n",AvailableSKUOffering);
      	SKUOfferingValue = ns_eval_string(AvailableSKUOffering);
      	//printf("\nStatusType is [%s]\n",SKUOfferingValue);
      	ns_save_string(SKUOfferingValue,"ProductOfferingDP");
   //   	printf("\n**********Value of ProductOfferingDP is [%s]\n",ns_eval_string("{ProductOfferingDP}"));
      	
     if(strcmp(ns_eval_string("{ProductOfferingDP}"),"")){      //Condition to Check ProductOfferingSP if available
    snprintf(src_buff,512, "%s", ns_eval_string("{ProductOfferingDP}"));
    length = strlen(src_buff);
    if (length > 0)
     {
        memset(dest_buf, 0, 512);
        replace1(src_buff, dest_buf, length);
   }
   ns_save_string(dest_buf, "SKUOfferingDP");
 //  printf("\n*********SKUOfferingDP=[[[%s]]]**********\n",ns_eval_string("{SKUOfferingDP}"));
   }
	  
	//ns_web_add_header("jcp_version", "GREEN", 0);
	ns_start_transaction("MB_API_Browse_SKUOffering_OPTIONS");
  	ns_web_url("ProductOffering_1",
       // "URL=https://browse-api.jcpenney.com/v1/product-offerings/{ProductOfferingSP}?stores=&delivery=STANDARD",
        "URL=https://browse-api.jcpenney.com/{SKUOfferingDP}?stores=&delivery=STANDARD&subdivision={SubdivisionSP}&deliveryAvailabilityCheckRequired=false",
       // "URL=https://browse-api.jcpenney.com/{ProductOfferingDP}",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "HEADER=x-requested-with:XMLHttpRequest",
    );
	ns_end_transaction("MB_API_Browse_SKUOffering_OPTIONS", NS_AUTO_STATUS);
	
	//ns_web_add_header("jcp_version", "GREEN", 0);
	ns_start_transaction("MB_API_Browse_SKUOffering_GET");
  	ns_web_url("ProductOffering_2",
       // "URL=https://browse-api.jcpenney.com/v1/product-offerings/{ProductOfferingSP}?stores=&delivery=STANDARD",
       // "URL=https://browse-api.jcpenney.com/{ProductOfferingDP}?stores=&delivery=STANDARD&subdivision={SubdivisionSP}&deliveryAvailabilityCheckRequired=false",
        "URL=https://browse-api.jcpenney.com/{SKUOfferingDP}?stores=&delivery=STANDARD&subdivision={SubdivisionSP}&deliveryAvailabilityCheckRequired=false",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "HEADER=x-requested-with:XMLHttpRequest",
    );
	ns_end_transaction("MB_API_Browse_SKUOffering_GET", NS_AUTO_STATUS);

	 }
    	}
	SkipNextRequest:
    			
    ns_page_think_time(0);


}
