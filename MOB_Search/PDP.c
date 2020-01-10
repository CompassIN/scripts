/*-----------------------------------------------------------------------------
    Name:PDP
    Recorded By: anjali
    Date of recording: 06/27/2016 06:42:06
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
	
    //ProductLabel:
    // Check to see if any product is available after sort/Filter....
     if(!strcmp(ns_eval_string("{YodaProductUrlSP}"),"")){  
     	ns_start_transaction("MOB_SearchPDPNoProductFound");
		ns_end_transaction("MOB_SearchPDPNoProductFound",NS_AUTO_STATUS);    
    	ns_exit_session();
     }
     
     int Exituser = ns_get_random_number_int(0,100);
     if(Exituser <= 45){
    	 ns_start_transaction("MOB_AbandonmentBeforePDP");
        ns_end_transaction("MOB_AbandonmentBeforePDP", NS_AUTO_STATUS);
    	ns_exit_session();
    }
	
	char src_buff[512] = "", dest_buf[512] = "";
    int length = 0;
   snprintf(src_buff,512, "%s", ns_eval_string("{YodaProductUrlSP}"));
   length = strlen(src_buff);
  // printf("src_buff = %s , length = %d \n\n",  src_buff, length);
   if (length > 0)
     memset(dest_buf, 0, 512);
     replace(src_buff, dest_buf, length);
   ns_save_string(dest_buf, "YodaProductUrlDP");

    ns_start_transaction("MB_Search_ProductDetailPage");
    ns_web_url ("MB_API_Search_products",
        "URL=https://m.jcpenney.com{YodaProductUrlDP}",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=Accept-application/json;text/plain;*/*",
        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a",
        "PreSnapshot=webpage_1467032959817.png",
        "Snapshot=webpage_1467032963753.png",
        INLINE_URLS,
            "URL=http://m.jcpenney.com/b/assets/img/unavailable-color.png", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/img/arrow_up.svg", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a", END_INLINE
    );
    ns_end_transaction("MB_Search_ProductDetailPage", NS_AUTO_STATUS); 
    
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
   ns_start_transaction("MB_API_Search_RegionProductAggregator_GET");  
   ns_web_url("MB_API_Search_ProductAggregartor",
        //"URL=https://browse-api.jcpenney.com/v1/product-aggregator/ppr5007249108?regionId=high",
        //"URL=https://browse-api.jcpenney.com/v1/product-aggregator/{YodaSearchProductUrlSP}?regionId=high",
        "URL=https://browse-api.jcpenney.com/v2/product-aggregator/{YodaSearchProductUrlSP}?regionId=high",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "HEADER=x-requested-with:XMLHttpRequest",
        "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;AKJCP;dimOrder;lastSearchText;",
        "PreSnapshot=webpage_1416299191395.png",
        "Snapshot=webpage_1416299192869.png"
    );
	ns_end_transaction("MB_API_Search_RegionProductAggregator_GET", NS_AUTO_STATUS);
 	
 	FreeShippingContent:
    


    ns_start_transaction("MB_API_Search_BreadCrumb_GET");
    ns_web_url ("MB_API_Search_BreadCrumb",
        //"URL=https://search-api.jcpenney.com/v1/j/breadcrumb?ppId=ppr5007607907&type=product&productGridView=medium&searchTerm=shirt",
        "URL=https://search-api.jcpenney.com/v1/j/breadcrumb?ppId={YodaProductIdSP}&type=product&version=true&productGridView=medium&searchTerm={SearchTermEncFP}",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a",
        "PreSnapshot=webpage_1467032959817.png",
        "Snapshot=webpage_1467032963753.png",
        INLINE_URLS,
            "URL=http://m.jcpenney.com/b/assets/img/unavailable-color.png", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/img/arrow_up.svg", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a", END_INLINE
    );
    ns_end_transaction("MB_API_Search_BreadCrumb_GET", NS_AUTO_STATUS);
            
    ns_start_transaction("MB_API_Search_ProductAggregator_OPTIONS");
    ns_web_url ("MB_API_Search_ProductAggregator1",
       // "URL=https://m.jcpenney.com/v4/products/{SearchProductIdSP}/inventory",
        //"URL=https://browse-api.jcpenney.com/v1/product-aggregator/{YodaProductIdSP}/inventory/pricing",
        "URL=https://browse-api.jcpenney.com/v2/product-aggregator/{YodaProductIdSP}/additional-details?deliveryAvailabilityCheckRequired=false",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=Access-Control-Request-Headers:accept-version,x-jcp-forwarded-channel,x-jcp-forwarded-host,x-jcp-forwarded-proto",
        "HEADER=Access-Control-Request-Method:GET",
        "PreSnapshot=webpage_1467032964772.png",
        "Snapshot=webpage_1467032970285.png",
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
    ns_end_transaction("MB_API_Search_ProductAggregator_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_Search_ProductAggregator_GET");
    ns_web_url ("MB_API_Search_inventory",
       // "URL=https://m.jcpenney.com/v4/products/{SearchProductIdSP}/inventory",
        //"URL=https://browse-api.jcpenney.com/v1/product-aggregator/{YodaProductIdSP}/inventory/pricing",
        "URL=https://browse-api.jcpenney.com/v2/product-aggregator/{YodaProductIdSP}/additional-details?deliveryAvailabilityCheckRequired=false",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;_IFR_jcpenney.com_fsr.a",
        "PreSnapshot=webpage_1467032964772.png",
        "Snapshot=webpage_1467032970285.png",
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
    ns_end_transaction("MB_API_Search_ProductAggregator_GET", NS_AUTO_STATUS);
    
  
//    ns_start_transaction("MOB_Search_PDP_ProductSummaries_GET");
//    ns_web_url ("MB_API_Search_FilterContent",
//        "URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-summaries-aggregator?ppId={RootPPIDFP}",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//    );
//	ns_end_transaction("MOB_Search_PDP_ProductSummaries_GET", NS_AUTO_STATUS);
	ns_start_transaction("MB_API_Search_PDP_SiteWidePromo_OPTIONS");
    ns_web_url ("MB_API_Search_PDP_SiteWidePromo1",
        //"URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/p/bulwark-flame-resistant-long-sleeve-henley-tee-big-tall/pp5006480540",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo{ProductDetailSP}",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.5",
    );
	ns_end_transaction("MB_API_Search_PDP_SiteWidePromo_OPTIONS", NS_AUTO_STATUS);
			
	ns_start_transaction("MB_API_Search_PDP_SiteWidePromo_GET");
    ns_web_url ("MB_API_Search_PDP_SiteWidePromo",
         //"URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/p/bulwark-flame-resistant-long-sleeve-henley-tee-big-tall/pp5006480540",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo{ProductDetailSP}",
        "HEADER=Accept-Language:en-us,en;q=0.5",
    );
	ns_end_transaction("MB_API_Search_PDP_SiteWidePromo_GET", NS_AUTO_STATUS);	

//	ns_start_transaction("MB_API_Search_PDP_SiteWidePromo_OPTIONS");
//    ns_web_url ("MB_API_Search_PDP_SiteWidePromo1",
//        //"URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/p/bulwark-flame-resistant-long-sleeve-henley-tee-big-tall/pp5006480540",
//        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/s",
//        "METHOD=OPTIONS",
//        "HEADER=Accept-Language:en-us,en;q=0.5",
//    );
//	ns_end_transaction("MB_API_Search_PDP_SiteWidePromo_OPTIONS", NS_AUTO_STATUS);
//			
//	ns_start_transaction("MB_API_Search_PDP_SiteWidePromo_s_GET");
//    ns_web_url ("MB_API_Search_PDP_SiteWidePromo",
//         //"URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/p/bulwark-flame-resistant-long-sleeve-henley-tee-big-tall/pp5006480540",
//        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/s",
//        "HEADER=Accept-Language:en-us,en;q=0.5",
//    );
//	ns_end_transaction("MB_API_Search_PDP_SiteWidePromo_s_GET", NS_AUTO_STATUS);	
	
    ns_start_transaction("MB_API_Search_urgency_GET");
    	ns_web_url ("MB_API_Search_urgency",
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
    ns_end_transaction("MB_API_Search_urgency_GET", NS_AUTO_STATUS);
    
//     if(!strcmp(ns_eval_string("{ProductOfferingSP}"),"")){      //Condition to Check ProductOfferingSP if available
//       ns_start_transaction("MOB_Search_NoProductOfferingAvailable");
//       ns_end_transaction("MOB_Search_NoProductOfferingAvailable", NS_AUTO_STATUS);
//      goto SkipNextRequest;
//    }
    char buff2[64] = "";
    char *SKUOfferingValue;
    char AvailableSKUOffering[128 + 1]="";
    int i;
    
	int SKUAvailable = ns_get_int_val("ProductOfferingSP_count");
	//printf("*******SKUOffering Available=[%d]***********",SKUAvailable);
   if (SKUAvailable < 1)
    {
    	//printf("\n----------------------NoOfferingAvailable--------------------\n");
    	ns_start_transaction("MOB_Search_NoSkuOfferingAvailable");
       	ns_end_transaction("MOB_Search_NoSkuOfferingAvailable", NS_AUTO_STATUS);
       	goto SkipNextRequest;
    }  
    else if(SKUAvailable >= 1) 
    {	
    int a = SKUAvailable;
	if (a > 4)
	{SKUAvailable = 4; }
    	for(i = 1; i <= SKUAvailable; i++)
    	{
      	sprintf(AvailableSKUOffering,"{ProductOfferingSP_%d}", (i)); //To get the index of the Sku
      	//printf("\AvailableSKUOffering is [%s]\n",AvailableSKUOffering);
      	SKUOfferingValue = ns_eval_string(AvailableSKUOffering);
      	//printf("\nStatusType is [%s]\n",SKUOfferingValue);
      	ns_save_string(SKUOfferingValue,"ProductOfferingDP");
      	//printf("\n**********Value of ProductOfferingDP is [%s]\n",ns_eval_string("{ProductOfferingDP}"));
      	
     if(strcmp(ns_eval_string("{ProductOfferingDP}"),"")){      //Condition to Check ProductOfferingSP if available
    snprintf(src_buff,512, "%s", ns_eval_string("{ProductOfferingDP}"));
    length = strlen(src_buff);
    if (length > 0)
     {
        memset(dest_buf, 0, 512);
        replace(src_buff, dest_buf, length);
   }
   ns_save_string(dest_buf, "SKUOfferingDP");
   //printf("\n*********SKUOfferingDP=[[[%s]]]**********\n",ns_eval_string("{SKUOfferingDP}"));
   }
	//ns_web_add_header("jcp_version", "GREEN", 0);
	ns_start_transaction("MB_API_Search_SKUOffering_OPTIONS");
  	ns_web_url("ProductOffering_1",
        //"URL=https://browse-api.jcpenney.com/v1/product-offerings/{ProductOfferingSP}?stores=&delivery=STANDARD",
        "URL=https://browse-api.jcpenney.com/{SKUOfferingDP}?stores=&delivery=STANDARD&subdivision={SubdivisionSP}&deliveryAvailabilityCheckRequired=false",
        //"URL=https://browse-api.jcpenney.com/{ProductOfferingDP}",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "HEADER=x-requested-with:XMLHttpRequest",
    );
	ns_end_transaction("MB_API_Search_SKUOffering_OPTIONS", NS_AUTO_STATUS);
	
	//ns_web_add_header("jcp_version", "GREEN", 0);
	ns_start_transaction("MB_API_Search_SKUOffering_GET");
  	ns_web_url("ProductOffering_2",
        //"URL=https://browse-api.jcpenney.com/v1/product-offerings/{ProductOfferingSP}?stores=&delivery=STANDARD",
       // "URL=https://browse-api.jcpenney.com/{ProductOfferingDP}?stores=&delivery=STANDARD&subdivision={SubdivisionSP}&deliveryAvailabilityCheckRequired=false",
        "URL=https://browse-api.jcpenney.com/{SKUOfferingDP}?stores=&delivery=STANDARD&subdivision={SubdivisionSP}&deliveryAvailabilityCheckRequired=false",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "HEADER=x-requested-with:XMLHttpRequest",
    );
	ns_end_transaction("MB_API_Search_SKUOffering_GET", NS_AUTO_STATUS);
	
	 }
    	}
	SkipNextRequest:
	
    ns_page_think_time(0);	
    

}
