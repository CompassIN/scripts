/*-----------------------------------------------------------------------------
    Name:BOPUSPPID
    Recorded By: anjali
    Date of recording: 10/13/2017 01:08:38
    Flow details:
    Build details: 4.1.8 (build# 50)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
#include "Util.c"

void BOPUSPPID()
{	

	ns_advance_param("CloudEnvFP"); 
	 char DPClusterbuff1[64 + 1]="";
   
     snprintf(DPClusterbuff1,64,"%s",ns_eval_string("{CookieFP}"));
     ns_add_cookie_val_ex("DPCluster", NULL, NULL, DPClusterbuff1);

	char cloudEnv[64 + 1]="";
	snprintf(cloudEnv,64,"%s",ns_eval_string("{CloudEnvFP}"));
    ns_web_add_auto_header("X-JCPCloud-Origin", cloudEnv, 0);

    
    ns_add_cookie_val_ex("JCPPragView", NULL, NULL, "1");
		
 	ns_web_add_auto_header("Origin", "https://www.jcpenney.com", 0);
 	goto SkipPDP;
	ns_start_transaction("COM_Bopus_ProductDetailPage"),
    ns_web_url ("BOPUS_PPidPage",
        //"URL=https://www.jcpenney.com/p/product/ppr5007170021?pTmplType=regular",
        "URL=https://www.jcpenney.com/p/product/{BopusPPIdFP}?pTmplType=regular",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/static-pdp/css/styles.css?v=20171005173848", "HEADER=yoda-desktop:true", "HEADER=Accept-Language:en-us", "HEADER=yoda-browse-test:true", "COOKIE=yoda-desktop;yoda-browse-test;_abck;akacd_desktop-prod-cloud;ak_bmsc;DP-Cloud-Origin;_userLoc;yoda-checkout-desktop;LegacyIdentifier;DPIdentifier;DP-Cloud-Cluster;bm_sz", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/DP1010201617054266S", "HEADER=yoda-desktop:true", "HEADER=Accept-Language:en-us", "HEADER=yoda-browse-test:true", END_INLINE
    );
  	ns_end_transaction("COM_Bopus_ProductDetailPage",NS_AUTO_STATUS);
  	
//     if(!strcmp(ns_eval_string("{CloudSP}"),"")){      //Condition to Check cloudEnv
//      ns_start_transaction("NoCloudletSet");
//      ns_end_transaction("NoCloudletSet", NS_AUTO_STATUS);          
//     } 
//	else
//	{
//	ns_start_transaction("{CloudSP}");
//    ns_end_transaction("{CloudSP}", NS_AUTO_STATUS); 
//	}

    if(!strcmp(ns_eval_string("{PPIdSP}"),""))
    {
    	//printf("**********************Client Side Rendering**********************");
    	goto ProductAggregator;
    }
    else
    {
    	//printf("**********************Server Side Rendering**********************");
    	goto FreeShippingContent;    	
    }
  	ProductAggregator:
     ns_start_transaction("DT_API_Bopus_PDP_RegionProductAggregator_GET");  
   	 ns_web_url("BOPUS_ProductAggregartor",
        //"URL=https://browse-api.jcpenney.com/v1/product-aggregator/ppr5007249108?regionId=high",
        "URL=https://browse-api.jcpenney.com/v1/product-aggregator/{BopusPPIdFP}?regionId=high",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "HEADER=x-requested-with:XMLHttpRequest",
    );
	ns_end_transaction("DT_API_Bopus_PDP_RegionProductAggregator_GET", NS_AUTO_STATUS);
	
 	FreeShippingContent:
 	
   ns_start_transaction("DT_API_Bopus_PDP_sharedcomponents_OPTIONS");  
   ns_web_url("DT_API_Bopus_PDP_sharedcomponents1",
        //"URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/s1/pdp?pTmplType=&ppid=pp5006480540",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/s1/pdp?pTmplType=&ppid={BopusPPIdFP}",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.5",
       // "HEADER=x-requested-with:XMLHttpRequest",
    );
	ns_end_transaction("DT_API_Bopus_PDP_sharedcomponents_OPTIONS", NS_AUTO_STATUS); 
	   	    	 
   ns_start_transaction("DT_API_Bopus_PDP_sharedcomponents_GET");  
   ns_web_url("DT_API_Bopus_PDP_freeshippingcontent",
        //"URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/s1/pdp?pTmplType=&ppid=pp5006480540",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/s1/pdp?pTmplType=&ppid={BopusPPIdFP}",
        "HEADER=Accept-Language:en-us,en;q=0.5",
       // "HEADER=x-requested-with:XMLHttpRequest",
    );
	ns_end_transaction("DT_API_Bopus_PDP_sharedcomponents_GET", NS_AUTO_STATUS); 

//    ns_start_transaction("DT_API_Bopus_PDP_productspecifications_OPTIONS");
//    ns_web_url ("DT_API_PDP_productspecifications1",
//        "URL=https://browse-api.jcpenney.com/v3/product-specifications/{WebIdSP}",
//        "METHOD=OPTIONS",
//        "HEADER=Access-Control-Request-Method:GET",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//        INLINE_URLS,
//            "URL=http://m.jcpenney.com/b/assets/img/unavailable-color.png", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a", END_INLINE,
//            "URL=http://m.jcpenney.com/b/assets/img/arrow_up.svg", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a", END_INLINE
//    );
//    ns_end_transaction("DT_API_Bopus_PDP_productspecifications_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_Bopus_PDP_productspecifications_OPTIONS"),
    ns_web_url("BOPUS_productspecifications1",
        "URL=https://browse-api.jcpenney.com/v3/product-specifications/{WebIdSP}",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:x-guest-user, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("DT_API_Bopus_PDP_productspecifications_OPTIONS",NS_AUTO_STATUS);

	ns_start_transaction("DT_API_Bopus_PDP_productspecifications_GET"),
    ns_web_url ("BOPUS_productspecifications2",
        "URL=https://browse-api.jcpenney.com/v3/product-specifications/{WebIdSP}",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1507874710370.png",
        "Snapshot=webpage_1507874711082.png",
        INLINE_URLS,
            "URL=https://order-api.jcpenney.com/order-api/v1/accounts/QXxV3g4x2Cnwg0WUd5xl/draft-order", "METHOD=OPTIONS", "HEADER=Origin:https://www.jcpenney.com", "HEADER=yoda-desktop:true", "HEADER=Access-Control-Request-Method:GET", "HEADER=Access-Control-Request-Headers:authorization, content-type", "HEADER=Accept-Language:en-us", "HEADER=yoda-browse-test:true", END_INLINE
    );
    ns_end_transaction("DT_API_Bopus_PDP_productspecifications_GET",NS_AUTO_STATUS);
    
   
    
    ns_start_transaction("DT_API_Bopus_PDP_BreadCrumb_GET");
    ns_web_url ("DT_API_PDP_BreadCrumb",
        //"URL=https://search-api.jcpenney.com/v1/j/breadcrumb?ppId=ppr5007433488&type=product",
        "URL=https://search-api.jcpenney.com/v1/j/breadcrumb?ppId={BopusPPIdFP}&type=product&version=true",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://m.jcpenney.com/b/assets/img/unavailable-color.png", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/img/arrow_up.svg", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a", END_INLINE
    );
    ns_end_transaction("DT_API_Bopus_PDP_BreadCrumb_GET", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_Bopus_API_PDP_ProductAggregator_OPTIONS"),
    ns_web_url("BOPUS_inventory1",
        //"URL=https://browse-api.jcpenney.com/v1/product-aggregator/{BopusPPIdFP}/inventory/pricing",
        "URL=https://browse-api.jcpenney.com/v2/product-aggregator/{BopusPPIdFP}/additional-details?deliveryAvailabilityCheckRequired=false",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:x-guest-user, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
        ns_end_transaction("DT_Bopus_API_PDP_ProductAggregator_OPTIONS",NS_AUTO_STATUS);

    ns_start_transaction("DT_API_Bopus_PDP_ProductAggregator_GET"),
    ns_web_url ("BOPUS_inventory2",
        //"URL=https://browse-api.jcpenney.com/v1/product-aggregator/ppr5007170021/inventory/pricing?stores=2795",
        //"URL=https://browse-api.jcpenney.com/v1/product-aggregator/{BopusPPIdFP}/inventory/pricing",
        "URL=https://browse-api.jcpenney.com/v2/product-aggregator/{BopusPPIdFP}/additional-details?deliveryAvailabilityCheckRequired=false",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1507874535078.png",
        "Snapshot=webpage_1507874534759.png"
    );

    ns_end_transaction("DT_API_Bopus_PDP_ProductAggregator_GET",NS_AUTO_STATUS);

	ns_start_transaction("DT_API_Bopus_PDP_SiteWidePromo_OPTIONS");
    ns_web_url ("DT_API_Bopus_SiteWidePromo1",
        //"URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/p/bulwark-flame-resistant-long-sleeve-henley-tee-big-tall/pp5006480540",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/p/product/{BopusPPIdFP}",
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
	ns_end_transaction("DT_API_Bopus_PDP_SiteWidePromo_OPTIONS", NS_AUTO_STATUS);
			
	ns_start_transaction("DT_API_Bopus_PDP_SiteWidePromo_GET");
    ns_web_url ("DT_API_Bopus_SiteWidePromo",
         //"URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/p/bulwark-flame-resistant-long-sleeve-henley-tee-big-tall/pp5006480540",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/p/product/{BopusPPIdFP}",
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
	ns_end_transaction("DT_API_Bopus_PDP_SiteWidePromo_GET", NS_AUTO_STATUS);
	
	ns_start_transaction("DT_API_Bopus_PDP_urgency_GET");
    	ns_web_url ("PDP_urgency",
        "URL=https://api.jcpapi.com/p/urgency/{BopusPPIdFP}?channel=MWEB",
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
    ns_end_transaction("DT_API_Bopus_PDP_urgency_GET", NS_AUTO_STATUS);

	char buff1[64] = "", buff2[64] = "";
	if(strcmp(ns_eval_string("{ProductOfferingSP}"),"")){      //Condition to Check ProductOfferingSP if available
    snprintf(buff1,64,"%s",ns_eval_string("{ProductOfferingSP}"));
	ns_save_string(buff1, "ProductOfferingDP"); 
    }
    else if(strcmp(ns_eval_string("{ProductOfferingSP1}"),"")){
    snprintf(buff2,64,"%s",ns_eval_string("{ProductOfferingSP1}"));
	ns_save_string(buff2, "ProductOfferingDP"); 
    }
    else{
    ns_start_transaction("COM_Bopus_NoProductOfferingAvailable");
    ns_end_transaction("COM_Bopus_NoProductOfferingAvailable", NS_AUTO_STATUS);
      // ns_exit_session();
    goto AddToBagLabel;
    }	
    
    
//    if(!strcmp(ns_eval_string("{ProductOfferingSP}"),"")){      //Condition to Check ProductOfferingSP if available
//       ns_start_transaction("COM_NoProductOfferingAvailable");
//       ns_end_transaction("COM_NoProductOfferingAvailable", NS_AUTO_STATUS);
//      // ns_exit_session();
//      goto AddToBagLabel;
//    }
	ns_web_add_header("jcp_version", "GREEN", 0);
	ns_start_transaction("DT_API_Bopus_PDP_ProductOfferings_OPTIONS"),
    ns_web_url ("BOPUS_EnterZipCodePage1",
        "URL=https://browse-api.jcpenney.com/v1/product-offerings/{ProductOfferingDP}?stores=&delivery=STANDARD",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:x-guest-user, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("DT_API_Bopus_PDP_ProductOfferings_OPTIONS",NS_AUTO_STATUS);

 	ns_web_add_header("jcp_version", "GREEN", 0);
 	ns_start_transaction("DT_API_Bopus_PDP_ProductOfferings_GET"),
    ns_web_url ("BOPUS_EnterZipCodePage2",
        "URL=https://browse-api.jcpenney.com/v1/product-offerings/{ProductOfferingDP}?stores=&delivery=STANDARD",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1507874535078.png",
        "Snapshot=webpage_1507874534759.png"
    );

    ns_end_transaction("DT_API_Bopus_PDP_ProductOfferings_GET",NS_AUTO_STATUS);
    SkipPDP: 
    AddToBagLabel:
    ns_add_cookie_val_ex("Aurora", NULL, NULL, "microservice");
    ns_add_cookie_val_ex("DPCPT", NULL, NULL, "CP1Y|CP2Y");
   
    ns_start_transaction("COM_Bopus_EnterZipCode");
	ns_start_transaction("DT_API_Bopus_Accounts_OPTIONS"),
    ns_web_url("BOPUS_Accounts5",
        "URL=https://account-api.jcpenney.com/v5/oauth2/guest",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:x-guest-user, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
        ns_end_transaction("DT_API_Bopus_Accounts_OPTIONS",NS_AUTO_STATUS);

    ns_start_transaction("DT_API_Bopus_Accounts_POST"),
    ns_web_url ("BOPUS_Accounts6",
        "URL=https://account-api.jcpenney.com/v5/oauth2/guest",
        "METHOD=POST",
        "HEADER=x-guest-user:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1507874710370.png",
        "Snapshot=webpage_1507874711082.png",
        INLINE_URLS,
            "URL=https://order-api.jcpenney.com/order-api/v1/accounts/QXxV3g4x2Cnwg0WUd5xl/draft-order", "METHOD=OPTIONS", "HEADER=Origin:https://www.jcpenney.com", "HEADER=yoda-desktop:true", "HEADER=Access-Control-Request-Method:GET", "HEADER=Access-Control-Request-Headers:authorization, content-type", "HEADER=Accept-Language:en-us", "HEADER=yoda-browse-test:true", END_INLINE
    );

    ns_end_transaction("DT_API_Bopus_Accounts_POST",NS_AUTO_STATUS);
    
    
    char RefreshTokenbuff1[512 + 1]="";
          snprintf(RefreshTokenbuff1,512,"%s",ns_eval_string("{RefreshTokenSP}"));
          ns_add_cookie_val_ex("Refresh_Token", NULL, NULL, RefreshTokenbuff1);
          
          
	 char AccountIdbuff[64 + 1]="";
          snprintf(AccountIdbuff,64,"%s",ns_eval_string("{CustomerIdSP}"));
          ns_add_cookie_val_ex("ACCOUNT_ID", NULL, NULL, AccountIdbuff);
          
      char AccessTokenbuff[1024 + 1]="";
          snprintf(AccessTokenbuff,1024,"%s",ns_eval_string("{AccessTokenSP}"));
          ns_add_cookie_val_ex("Access_Token", NULL, NULL, AccessTokenbuff);

	ns_start_transaction("DT_API_Bopus_CheckStoreAvailability_OPTIONS"),
    ns_web_url("BOPUS_CheckStoreAvailability1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/stores?showAvailable=true&radius=25&address={StoreLatFP}%2C{StoreLngFP}&skus={BopusSkuIdFP}",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:x-guest-user, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("DT_API_Bopus_CheckStoreAvailability_OPTIONS",NS_AUTO_STATUS);

    ns_start_transaction("DT_API_Bopus_CheckStoreAvailability_GET"),
    ns_web_url ("BOPUS_CheckStoreAvailability2",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/xkTZUtiN4pZlIerSRLDa/draft-order/stores?showAvailable=true&radius=25&address=33.0787152%2C-96.8083063&skus=51620201024",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/stores?showAvailable=true&radius=25&address={StoreLatFP}%2C{StoreLngFP}&skus={BopusSkuIdFP}",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s87207905628362?AQB=1&ndh=1&pf=1&t=13%2F9%2F2017%201%3A4%3A12%205%20300&mid=20924368257923756882054860679979991374&aamlh=3&ce=UTF-8&ns=jcpenney&pageName=d%3Apdp%3Appr5007170021%3Ast.%20john%27s%20bay%20legacy%20flat%20front%20stretch%20short&g=https%3A%2F%2Fwww.jcpenney.com%2Fp%2Fproduct%2Fppr5007170021%3FCOLOR%3DBlack%26pTmplType%3Dregular&cc=USD&ch=men&server=DTCOMEXPR1C1J2_15&events=event68%2Cevent69&products=%3Bppr5007170021%3B1%3B36.00%3Bevent68%3D36.00%7Cevent69%3D36.00%3Bevar6%3D5162020%7Cevar4%3Dst.%20john%27s%20bay%20legacy%20flat%20front%20stretch%20short%7Cevar13%3Dno%7Cevar64%3Dno%7Cevar66%3Dno%7Cevar51%3Dbuy%20more%20and%20save%20with%20code%3A%204yousave%7Cevar20%3Dbuy%20more%20and%20save%7Cevar32%3D4.69%3A206%7Cevar35%3Dboth&c1=men&v1=D%3Dc1&c2=school%20uniforms&v2=D%3Dc2&c6=pdp%3Appr5007170021%3Ast.%20john%27s%20bay%20legacy%20flat%20front%20stretch%20short&c7=https%3A%2F%2Fwww.jcpenney.com%2Fp%2Fproduct%2Fppr5007170021%3FCOLOR%3DBlack%26pTmplType%3Dregular&v7=1%3A02%20AM%7CFriday&c10=2017%20yoda%20pdp%201%20-%20regular&c11=pdp&v11=D%3Dc11&v16=D%3DpageName&c19=DU-2478764%2CMU-2478767%2CGT-2478563%2CABC-2478923%2CAET-2475188%2CAGV-2336264&c44=desktop&v44=D%3Dc44&pe=lnk_o&pev2=storeSearch&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=yoda-desktop:true", "HEADER=Accept-Language:en-us", "HEADER=yoda-browse-test:true", END_INLINE
    );

    ns_end_transaction("DT_API_Bopus_CheckStoreAvailability_GET",NS_AUTO_STATUS);
	ns_end_transaction("COM_Bopus_EnterZipCode", NS_AUTO_STATUS);
    ns_page_think_time(0);
    
/*	char *DPOrder = ns_get_cookie_val_ex("DPOrder", NULL, NULL);
	
	if (DPOrder == NULL)
         {
    	   ns_start_transaction("COM_CookieNotSetByServer_Bopus_PPID");
    	   ns_end_transaction("COM_CookieNotSetByServer_Bopus_PPID",NS_AUTO_STATUS);
    	   ns_exit_session();
         }
    else{
         ns_save_string(DPOrder, "DPOrderDP");
     }
	*/
    // ***************************** Select avilable store *****************************
    

	 if(!strcmp(ns_eval_string("{ProductOfferingDP}"),"")){      //Condition to Check ProductOfferingSP if available
      goto NextLabel;
    }
	ns_web_add_header("jcp_version", "GREEN", 0);
    ns_start_transaction("DT_API_Bopus_ProductOfferings_OPTIONS"),
    ns_web_url("BOPUS_ProductOfferings3",
        //"URL=https://browse-api.jcpenney.com/v1/product-offerings/{ProductOfferingDP}?stores={StoreIDSP}&delivery=STANDARD",
        //"URL=https://browse-api.jcpenney.com/v2/sku-offerings/5045206/NTA0NTIwNjAwNzV8RkN8MjAxMw?stores=1832&delivery=STANDARD&subdivision=504&occasionName=Casual&deliveryAvailabilityCheckRequired=false",
        "URL=https://browse-api.jcpenney.com/v2/sku-offerings/{WebIdSP}/{ProductOfferingDP}?stores={StoreIDSP}&delivery=STANDARD&subdivision={SubdivisionSP}&occasionName=Casual&zipCode={StoreZipcodeFP}&deliveryAvailabilityCheckRequired=false",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:PUT",
        "HEADER=Access-Control-Request-Headers:x-guest-user, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("DT_API_Bopus_ProductOfferings_OPTIONS",NS_AUTO_STATUS);

	ns_web_add_header("jcp_version", "GREEN", 0);
    ns_start_transaction("DT_API_Bopus_ATB_ProductOfferings_GET"),
    ns_web_url ("BOPUS_ProductOfferings4",
        //"URL=https://browse-api.jcpenney.com/v1/product-offerings/{ProductOfferingDP}?stores={StoreIDSP}&delivery=STANDARD",
         //"URL=https://browse-api.jcpenney.com/v2/sku-offerings/5045206/NTA0NTIwNjAwNzV8RkN8MjAxMw?stores=1832&delivery=STANDARD&subdivision=504&occasionName=Casual&deliveryAvailabilityCheckRequired=false",
        "URL=https://browse-api.jcpenney.com/v2/sku-offerings/{WebIdSP}/{ProductOfferingDP}?stores={StoreIDSP}&delivery=STANDARD&subdivision={SubdivisionSP}&occasionName=Casual&zipCode={StoreZipcodeFP}&deliveryAvailabilityCheckRequired=false",
       "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1507874689281.png",
        "Snapshot=webpage_1507874689762.png"
    );

    ns_end_transaction("DT_API_Bopus_ATB_ProductOfferings_GET",NS_AUTO_STATUS);
    
    NextLabel:
    ns_page_think_time(0);
    
    // ***************************** Add to cart *****************************
    
//         char RefreshTokenbuff1[512 + 1]="";
//          snprintf(RefreshTokenbuff1,512,"%s",ns_eval_string("{RefreshTokenSP}"));
//          ns_add_cookie_val_ex("Refresh_Token", NULL, NULL, RefreshTokenbuff1);
//          
//          
//	 char AccountIdbuff[64 + 1]="";
//          snprintf(AccountIdbuff,64,"%s",ns_eval_string("{CustomerIdSP}"));
//          ns_add_cookie_val_ex("ACCOUNT_ID", NULL, NULL, AccountIdbuff);
//          
//      char AccessTokenbuff[1024 + 1]="";
//          snprintf(AccessTokenbuff,1024,"%s",ns_eval_string("{AccessTokenSP}"));
//          ns_add_cookie_val_ex("Access_Token", NULL, NULL, AccessTokenbuff);
    
//    ns_add_cookie_val_ex("Aurora", NULL, NULL, "microservice");
    ns_start_transaction("COM_BOPUS_AddToBag");
	ns_start_transaction("DT_API_Bopus_AB_BagItems_OPTIONS"),
    ns_web_url("BOPUS_BagItems1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/bag/items",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:PUT",
        "HEADER=Access-Control-Request-Headers:x-guest-user, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("DT_API_Bopus_AB_BagItems_OPTIONS",NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_Bopus_AB_BagItems_POST"),
    ns_web_url ("BOPUS_BagItems2",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/bag/items",
        "METHOD=POST",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "HEADER=X-Cart-Interstitial:true",
		// "{"data":[{"skuId":"51620201024","quantity":1,"ppId":"ppr5007170021","deliveryOption":{"type":"BOPIS","selected":true,"zipcode":"","label":"Ship to Home or Store","storeId":"2055"},"childItems":[]}]}",
		//"{"data":[{"skuId":"{BopusSkuIdFP}","quantity":1,"ppId":"{BopusPPIdFP}","deliveryOption":{"type":"BOPIS","selected":true,"label":"Ship to Home or Store","storeId":"{StoreIDSP}"},"childItems":[]}]}",
        //{"isStoreModalAtc":true,"sdpuStoreInfo":{"storeId":"2055","storeName":"Collin Creek Mall","zipCode":"75075"},"deliveryOption":{"shipToHomeOrStore":{"label":"Ship to Home or Store","deliveryMessage":"est. delivery: aug 7th - aug 9th","availabilityMessage":"","isshipToStoreDisabled":false,"isRadioButtonDisabled":false,"disabled":"","isChecked":true,"surcharges":"","isShipToHomeOrStoreAvailable":true,"maxQuantity":"","isQuantityAvailable":true,"maxQuantityMsgDisplay":false,"quantityReachMaxPosition":false,"updatedAsOf":"","rawDeliveryDateStart":"Wed Aug 07 00:00:00 CDT 2019"},"sameDayPickUp":{"availabilityMessage":"","storeAvailabilityMessage":"Out Of Stock","isSameDayPickupDisabled":true,"isRadioButtonDisabled":false,"storeMessage":"Check store availability","disabled":"disabled","isChecked":false,"channelOfferingLabel":"","isVisitStoreToPurchase":false,"storeInfoVisitToPurchase":"","updatedAsOf":""}},"isChangeStoreAtc":false,"data":[{"skuId":"42382180141","ppId":"ppr5007678548","quantity":1,"deliveryOption":{"type":"BOPIS","selected":true,"label":"Ship to Home or Store","storeId":"2055"},"childItems":[]}]}
        BODY_BEGIN,
            "{"isStoreModalAtc":true,"sdpuStoreInfo":{"storeId":"{StoreNumberSP}","storeName":"{StoreNameSP}","zipCode":"{StoreZipCodeSP}"},"deliveryOption":{"shipToHomeOrStore":{"label":"Ship to Home or Store","deliveryMessage":"est. delivery: aug 7th - aug 9th","availabilityMessage":"","isshipToStoreDisabled":false,"isRadioButtonDisabled":false,"disabled":"","isChecked":true,"surcharges":"","isShipToHomeOrStoreAvailable":true,"maxQuantity":"","isQuantityAvailable":true,"maxQuantityMsgDisplay":false,"quantityReachMaxPosition":false,"updatedAsOf":"","rawDeliveryDateStart":"Wed Aug 07 00:00:00 CDT 2019"},"sameDayPickUp":{"availabilityMessage":"","storeAvailabilityMessage":"Out Of Stock","isSameDayPickupDisabled":true,"isRadioButtonDisabled":false,"storeMessage":"Check store availability","disabled":"disabled","isChecked":false,"channelOfferingLabel":"","isVisitStoreToPurchase":false,"storeInfoVisitToPurchase":"","updatedAsOf":""}},"isChangeStoreAtc":false,"data":[{"skuId":"{BopusSkuIdFP}","ppId":"{BopusPPIdFP}","quantity":1,"deliveryOption":{"type":"BOPIS","selected":true,"label":"Ship to Home or Store","storeId":"{StoreNumberSP}"},"childItems":[]}]}"
        BODY_END
    );

    ns_end_transaction("DT_API_Bopus_AB_BagItems_POST",NS_AUTO_STATUS);

	ns_add_cookie_val_ex("userStore", NULL, NULL, ns_eval_string("{StoreNumberSP}"));
	
	GetStoreInfo();
	ns_add_cookie_val_ex("userStoreInfo", NULL, NULL, ns_eval_string("{StoreDetailsDP}"));

	ns_start_transaction("DT_API_Bopus_AB_DraftOrder_OPTIONS"),
    ns_web_url("BOPUS_DraftOrderAccounts1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?origin=pdp",
        "METHOD=OPTIONS",
       // "HEADER=X-DPOrder:{DPOrderDP}",
        "HEADER=Access-Control-Request-Method:PUT",
        "HEADER=Access-Control-Request-Headers:x-guest-user, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("DT_API_Bopus_AB_DraftOrder_OPTIONS",NS_AUTO_STATUS);

    ns_start_transaction("DT_API_Bopus_AB_DraftOrder_GET"),
    ns_web_url ("BOPUS_DraftOrderAccounts2",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/xkTZUtiN4pZlIerSRLDa/draft-order",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?origin=pdp",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        //"HEADER=X-DPOrder:{DPOrderDP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://account-api.jcpenney.com/v5/accounts", "METHOD=OPTIONS", "HEADER=Origin:https://www.jcpenney.com", "HEADER=yoda-desktop:true", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:content-type, x-guest-user", "HEADER=Accept-Language:en-us", "HEADER=yoda-browse-test:true", END_INLINE
    );

    ns_end_transaction("DT_API_Bopus_AB_DraftOrder_GET",NS_AUTO_STATUS);
	ns_end_transaction("COM_BOPUS_AddToBag",NS_AUTO_STATUS);
	
    ns_page_think_time(0);
}


