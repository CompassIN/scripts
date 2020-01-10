/*-----------------------------------------------------------------------------
    Name:BopusGuestCheckout
    Recorded By: anjali
    Date of recording: 06/30/2017 06:27:27
    Flow details:
    Build details: 4.1.7 (build# 63)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void BopusGuestCheckout()
{
 	int Exituser = ns_get_random_number_int(1,100);
    
//    ns_start_transaction("MOB_Bopus_InitiateCheckOut");
//	 	ns_web_url("API_Bopus_GC_Cart",
//        "URL=https://m.jcpenney.com/cart",
//        "HEADER=X-Auto-Login:true",
//        "HEADER=Accept-Language:en-us",
//        "COOKIE=DPCluster;yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;jcp.ab.test;clientTestPool1;recentSearchData;NotValidCookie;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;c13;pn;testVersion;DPJSESSIONID;DPSecureCookie;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;testpool;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;c17;v53;s_ptc;s_cc;CavSF;CavNVC;mp_jcpenney_mixpanel;s_sq;DPUserTracking;jcpvid;DPSessionTimeOutInterval;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier",
//        "PreSnapshot=webpage_1498123344109.png",
//        "Snapshot=webpage_1498123342796.png"
//    );
//    ns_end_transaction("MOB_Bopus_InitiateCheckOut",NS_AUTO_STATUS);
//    ns_page_think_time(0);
   
	ns_start_transaction("MOB_Bopus_Guest_CheckOut");    
    ns_start_transaction("MB_API_Bopus_GC_draftorder_OPTIONS");		
	  	ns_web_url ("API_GC_draftorder1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=OPTIONS",
        "HEADER=accept:application/vnd+jcpenney.draft-order+json",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-command",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
    	    INLINE_URLS,
            "URL=https://sp.analytics.yahoo.com/sp.pl?a=10000&jsonp=YAHOO.ywa.I13N.handleJSONResponse&.yp=25984&f=https%3A%2F%2Fm.jcpenney.com%2Fcart&enc=UTF-8", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=B;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_GC_draftorder_OPTIONS", NS_AUTO_STATUS);	

    //ns_web_add_auto_header("customerVidForPerfTestOrder", "false", 0);
    ns_start_transaction("MB_API_Bopus_GC_draftorder_POST");
    ns_web_url ("API_Bopus_GC_draftorder",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=POST",
        "HEADER=accept:application/vnd+jcpenney.draft-order+json",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=x-command:initiate-checkout",
        "HEADER=X-Client-Id:Basic amNwLnJ3ZG06QVVndFRydFc5cg",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
//   		  BODY_BEGIN,
//            "{}",
//        BODY_END,
        INLINE_URLS,
            "URL=https://sp.analytics.yahoo.com/sp.pl?a=10000&jsonp=YAHOO.ywa.I13N.handleJSONResponse&.yp=25984&f=https%3A%2F%2Fm.jcpenney.com%2Fcart&enc=UTF-8", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=B;DPCluster;Yoda-checkout", END_INLINE
    );

    ns_end_transaction("MB_API_Bopus_GC_draftorder_POST", NS_AUTO_STATUS);


    ns_start_transaction("MOB_Bopus_checkout");
    ns_web_url ("checkout",
        "URL=https://m.jcpenney.com/checkout",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        "COOKIE=DPCluster;yoda-checkout;Yoda-SID;NotValidCookie;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;DPJSESSIONID;c13;pn;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;ssl;mbox;jcp.ab.test;clientTestPool1;SDPU_ZIPCACHE;PICKUP_STORE_SEARCH;s_sq;shoppingBagStore;userStoreInfo;_4c_;NSPrevPercentage;NSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;CavNV;testpool;_uetsid;s_ptc;BNSPrevPercentage;BNSOrigin;CavSF;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNVC",
        "PreSnapshot=webpage_1499162864294.png",
        "Snapshot=webpage_1499162869223.png",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-checkout/css/styles.css?v=20170630041737", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;c13;pn;testVersion;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;s_sq;testpool;NSPrevPercentage;NSOrigin;Yoda-SID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;s_ptc;s_cc;mp_jcpenney_mixpanel;_ga;_gid;_gat;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;BNSPrevPercentage;BNSOrigin;CavSF;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;_4c_;CavNVC", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/jc-penney.svg", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;c13;pn;testVersion;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;s_sq;testpool;NSPrevPercentage;NSOrigin;Yoda-SID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;s_ptc;s_cc;mp_jcpenney_mixpanel;_ga;_gid;_gat;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;BNSPrevPercentage;BNSOrigin;CavSF;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;_4c_;CavNVC", END_INLINE,
            "URL=https://m.jcpenney.com/#cart", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;c13;pn;testVersion;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;s_sq;testpool;NSPrevPercentage;NSOrigin;Yoda-SID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;s_ptc;s_cc;mp_jcpenney_mixpanel;_ga;_gid;_gat;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;BNSPrevPercentage;BNSOrigin;CavSF;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;_4c_;CavNVC", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/phone.svg", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;c13;pn;testVersion;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;s_sq;testpool;NSPrevPercentage;NSOrigin;Yoda-SID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;s_ptc;s_cc;mp_jcpenney_mixpanel;_ga;_gid;_gat;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;CavSF;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;_4c_;CavNVC;BNSPrevPercentage;BNSOrigin", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/chat-fill.svg", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;c13;pn;testVersion;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;s_sq;testpool;NSPrevPercentage;NSOrigin;Yoda-SID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;s_ptc;s_cc;mp_jcpenney_mixpanel;_ga;_gid;_gat;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;CavSF;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;_4c_;CavNVC;BNSPrevPercentage;BNSOrigin", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/norton-secured-seal.png", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;c13;pn;testVersion;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;s_sq;testpool;NSPrevPercentage;NSOrigin;Yoda-SID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;s_ptc;s_cc;mp_jcpenney_mixpanel;_ga;_gid;_gat;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;CavSF;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;_4c_;CavNVC;BNSPrevPercentage;BNSOrigin", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/scripts/vendor.js?v=20170630041737", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;c13;pn;testVersion;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;s_sq;testpool;NSPrevPercentage;NSOrigin;Yoda-SID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;s_ptc;s_cc;mp_jcpenney_mixpanel;_ga;_gid;_gat;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;CavSF;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;_4c_;CavNVC;BNSPrevPercentage;BNSOrigin", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/scripts/app.js?v=20170630041737", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;c13;pn;testVersion;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;s_sq;testpool;NSPrevPercentage;NSOrigin;Yoda-SID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;s_ptc;s_cc;mp_jcpenney_mixpanel;_ga;_gid;_gat;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;CavSF;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;_4c_;CavNVC;BNSPrevPercentage;BNSOrigin", END_INLINE,
            "URL=https://code.jquery.com/jquery-3.1.1.slim.min.js", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/Bootstrap.js", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
//	ns_end_transaction("MOB_Bopus_checkout", NS_AUTO_STATUS);

//	 if((!strcmp(ns_eval_string("{CheckoutRenderingSP}"),"false"))){
//    ns_end_transaction_as("MOB_Bopus_checkout", NS_AUTO_STATUS, "MOB_Bopus_checkout_CSR");}
//    else if((!strcmp(ns_eval_string("{CheckoutRenderingSP}"),"true"))){
//    ns_end_transaction_as("MOB_Bopus_checkout", NS_AUTO_STATUS, "MOB_Bopus_checkout_SSR");
//    goto SkipDraftOrder;
//    }
//    else {
//    ns_end_transaction_as("MOB_Bopus_checkout", NS_AUTO_STATUS, "MOB_Bopus_checkout");}
	
    if((!strcmp(ns_eval_string("{GroupIdSP}"),""))){
    ns_end_transaction_as("MOB_Bopus_checkout", NS_AUTO_STATUS, "MOB_Bopus_checkout_CSR");}
    else {
    ns_end_transaction_as("MOB_Bopus_checkout", NS_AUTO_STATUS, "MOB_Bopus_checkout_SSR");
    goto SkipDraftOrder;
    }
  
    ns_start_transaction("MB_API_Bopus_GC_draftorder_OPTIONS");		
	    ns_web_url("YODA_API_GC_draftorder4",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&isGiftRegistry=false&initGetDraftOrder=false&expand=status",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&isGiftRegistry=false&initGetDraftOrder=false&expand=status%2Cdelivery",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/jPIYegSO2BPzGCyV5ejP/draft-order?includeServiceLevels=true&expand=status",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-command",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_GC_draftorder_OPTIONS", NS_AUTO_STATUS);    

    ns_start_transaction("MB_API_Bopus_GC_draftorder_GET");
    ns_web_url ("Bopus_API_GC_draftorder2",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&isGiftRegistry=false&initGetDraftOrder=false&expand=status",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&isGiftRegistry=false&initGetDraftOrder=false&expand=status%2Cdelivery",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=NotValidCookie;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;DPJSESSIONID;ssl;mbox;clientTestPool1;SDPU_ZIPCACHE;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;_4c_;NSPrevPercentage;NSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;_uetsid;BNSPrevPercentage;BNSOrigin;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;yoda-checkout",
        "PreSnapshot=webpage_1499162869223.png",
        "Snapshot=webpage_1499162871033.png",
        INLINE_URLS,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/13c43a2b654be81df7e48e7dd455cb76.js?conditionId0=324309", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/e8a1cfbc60fb3ede73d6ededaee3202c.js?conditionId0=335310", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/e19986a275419c95137dbe43c6a73580.js?conditionId0=454795", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/917c49a2004d2d8ef510e0d6f92ed48d.js?conditionId0=346183", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/b393a43c13956bcc4615501f0401ae7b.js?conditionId0=422808", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/f0b61507c4f08985f8787218cfb152f4.js?conditionId0=375492&conditionId1=335514", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://netvision.cavisson.com/nv/JCPenney/cav_nv.js", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://lptag.liveperson.net/tag/tag.js?site=58507821", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://netvision.cavisson.com/nv/JCPenney/Mobile/config.js", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://lptag.liveperson.net/lptag/api/account/58507821/configuration/applications/taglets/.jsonp?df=0&b=1", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/8.11.0.3-release_2848/le_secure_storage/storage.secure.min.html?loc=https%3A%2F%2Fm.jcpenney.com&site=58507821&asmr=15&env=prod", "HEADER=yoda-checkout:true", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_Bopus_GC_draftorder_GET", NS_AUTO_STATUS);
    
    SkipDraftOrder:
	ns_end_transaction("MOB_Bopus_Guest_CheckOut", NS_AUTO_STATUS);

    // Continue To Payment

   	ns_start_transaction("MOB_BOPUS_Guest_PickUpStore");
   	
   	 ns_start_transaction("MB_API_Bopus_GC_deliverygroups_OPTIONS");
    ns_web_url ("API_Bopus_GC_deliverygroups_opt",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/delivery/groups/{GroupIdSP}/pickup",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type, x-command",
    );

    ns_end_transaction("MB_API_Bopus_GC_deliverygroups_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_Bopus_GC_deliverygroups_PUT");
    ns_web_url ("API_Bopus_GC_deliverygroups",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order/billing/credit-cards",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/delivery/groups/{GroupIdSP}/pickup",
       // "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/delivery/groups/346d28b7-5ab2-4921-80ac-d5fa0a2ebd90/pickup",
        "METHOD=PUT",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=NotValidCookie;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;DPJSESSIONID;ssl;mbox;clientTestPool1;SDPU_ZIPCACHE;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;_4c_;NSPrevPercentage;NSOrigin;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;BNSPrevPercentage;BNSOrigin;DP_SFL_PPIDS;DPSecureCookie;LPVID;LPSID-58507821;LPCKEY-58507821;_uetsid;testpool;DPInstance;DPUserTracking;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;yoda-checkout",
        "PreSnapshot=webpage_1499163080050.png",
        "Snapshot=webpage_1499163081160.png",
         BODY_BEGIN,
            "{"alternatePerson":false}",
        BODY_END
    );

    ns_end_transaction("MB_API_Bopus_GC_deliverygroups_PUT", NS_AUTO_STATUS);
   	
   	
    ns_start_transaction("MB_API_Bopus_PM_ServiceLevels_OPTIONS");		
	    ns_web_url("API_Bopus_GC_PM_ServiceLevels1",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status%2Cdelivery%2Cbilling&origin=billing",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/jPIYegSO2BPzGCyV5ejP/draft-order?includeServiceLevels=true&expand=status",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-command",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_PM_ServiceLevels_OPTIONS", NS_AUTO_STATUS);  
    
    
    ns_start_transaction("MB_API_Bopus_GC_PM_ServiceLevels_GET");
    ns_web_url("API_Bopus_GC_PM_ServiceLevels",
       //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status%2Cdelivery%2Cbilling&origin=billing",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=NotValidCookie;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;DPJSESSIONID;ssl;mbox;clientTestPool1;SDPU_ZIPCACHE;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;_4c_;NSPrevPercentage;NSOrigin;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;BNSPrevPercentage;BNSOrigin;DP_SFL_PPIDS;DPSecureCookie;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;LPVID;LPSID-58507821;LPCKEY-58507821;_uetsid;yoda-checkout",
        "PreSnapshot=webpage_1499162928972.png",
        "Snapshot=webpage_1499162929393.png",
    );
	ns_end_transaction("MB_API_Bopus_GC_PM_ServiceLevels_GET", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_Bopus_PM_draftorder_OPTIONS");		
	    ns_web_url("Bopus_API_GC_PM_draftorder1",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&origin=billing&includeServiceLevels=true",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-command",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_PM_draftorder_OPTIONS", NS_AUTO_STATUS);  
    
    
    ns_start_transaction("MB_API_Bopus_GC_PM_draftorder_GET");
    ns_web_url ("Bopus_API_GC_PM_draftorder",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&origin=billing&includeServiceLevels=true",
        "HEADER=Origin:https://m.jcpenney.com",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=NotValidCookie;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;DPJSESSIONID;ssl;mbox;clientTestPool1;SDPU_ZIPCACHE;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;_4c_;NSPrevPercentage;NSOrigin;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;BNSPrevPercentage;BNSOrigin;DP_SFL_PPIDS;DPSecureCookie;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;LPVID;LPSID-58507821;LPCKEY-58507821;_uetsid;yoda-checkout",
        "PreSnapshot=webpage_1499162929393.png",
        "Snapshot=webpage_1499162933999.png",
        INLINE_URLS,
            "URL=https://maps.gstatic.com/mapfiles/api-3/images/powered-by-google-on-white3.png", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://maps.gstatic.com/mapfiles/api-3/images/autocomplete-icons.png", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://maps.googleapis.com/maps-api-v3/api/js/29/8/stats.js", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://maps.googleapis.com/maps/api/js/AuthenticationService.Authenticate?1shttps%3A%2F%2Fm.jcpenney.com%2Fcheckout&4sAIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&callback=_xdc_._ityvdz&token=46617", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_Bopus_GC_PM_draftorder_GET", NS_AUTO_STATUS);
	
	ns_start_transaction("MB_API_Bopus_GC_Zipcode_GET");
    	ns_web_url("Bopus_API_GC_Zipcode",
        "URL=https://account-api.jcpenney.com/v1/zipCodes/{ZipCodeFP}",
     //   "HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        "COOKIE=DPCluster;yoda-checkout;Yoda-SID;NotValidCookie;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;DPJSESSIONID;c13;pn;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;ssl;mbox;jcp.ab.test;clientTestPool1;SDPU_ZIPCACHE;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;_4c_;NSPrevPercentage;NSOrigin;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;testpool;BNSPrevPercentage;BNSOrigin;DP_SFL_PPIDS;DPSecureCookie;LPVID;LPSID-58507821;LPCKEY-58507821;c17;v53;s_cc;s_ptc;_uetsid;CavSF;CavNVC;s_sq;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval",
        "PreSnapshot=webpage_1499163042341.png",
        "Snapshot=webpage_1499163048488.png"
    );
	ns_end_transaction("MB_API_Bopus_GC_Zipcode_GET", NS_AUTO_STATUS);
    ns_end_transaction("MOB_BOPUS_Guest_PickUpStore", NS_AUTO_STATUS);
	ns_page_think_time(0);

    
    	
	ns_start_transaction("MOB_BOPUS_Guest_PaymentInfo");
	ns_start_transaction("MB_API_Bopus_GC_contactmethods_OPTIONS");		
	    ns_web_url("Bopus_API_GC_contactmethods1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/contact-methods",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-command",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_GC_contactmethods_OPTIONS", NS_AUTO_STATUS); 
		
		
    ns_start_transaction("MB_API_Bopus_GC_contactmethods_POST");
    ns_web_url ("Bopus_API_GC_contactmethods",
         "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/contact-methods",
        "METHOD=POST",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=NotValidCookie;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;DPJSESSIONID;ssl;mbox;clientTestPool1;SDPU_ZIPCACHE;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;_4c_;NSPrevPercentage;NSOrigin;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;BNSPrevPercentage;BNSOrigin;DP_SFL_PPIDS;DPSecureCookie;LPVID;LPSID-58507821;LPCKEY-58507821;_uetsid;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;CavNV;DPCluster;testpool;yoda-checkout",
        "PreSnapshot=webpage_1499163077187.png",
        "Snapshot=webpage_1499163078256.png",
        BODY_BEGIN,
            "{"type":"EMAIL","purpose":"TRANSACTIONAL","value":"{GuestEmailIdFP}"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://m.jcpenney.com/checkout/#check", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;c13;pn;testVersion;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;testpool;NSPrevPercentage;NSOrigin;Yoda-SID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DP_SFL_PPIDS;DPSecureCookie;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;mp_jcpenney_mixpanel;_ga;_gid;c17;v53;s_cc;_uetsid;s_ptc;CavSF;CavNVC;_4c_;s_sq;DPInstance;DPUserTracking;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE,
            "URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order/billing/credit-cards", "METHOD=OPTIONS", "HEADER=Origin:https://m.jcpenney.com", "HEADER=yoda-checkout:true", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:authorization, content-type", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_Bopus_GC_contactmethods_POST", NS_AUTO_STATUS);

     ns_start_transaction("MB_API_Bopus_GC_creditcards_OPTIONS");		
	    ns_web_url("Bopus_API_GC_creditcards1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/credit-cards",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-command",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_GC_creditcards_OPTIONS", NS_AUTO_STATUS); 
	

    ns_start_transaction("MB_API_Bopus_GC_creditcards_POST");
    ns_web_url ("Bopus_API_GC_creditcards",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order/billing/credit-cards",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/credit-cards",
        "METHOD=POST",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
	   "HEADER=X-STANDARDIZATION-REQUIRED:false",
        //"{"address":{"city":"Brooklyn","country":"US","firstName":"laod","lastName":"test","lineOne":"202 S 2ND ST  APT 9","phone":"(587) 469-8574","state":"NY","zip":"11211"},"type":"JCP","cvv":"123","number":"88888888888"}",
        //"{"address":{"city":"Beverly Hills","country":"US","firstName":"loadd","lastName":"tesst","lineOne":"4316 N BACALL LOOP","phone":"(999) 994-1013","state":"FL","zip":"34465"},"type":"JCP","cvv":"122","number":"88888888888"}",
        BODY_BEGIN,
        	"{"address":{"city":"{CitySP}","country":"US","firstName":"{FirstNameFP}","lastName":"{LastNameFP}","lineOne":"{AddressFP}","phone":"{PhoneNoFP}","state":"{StateSP}","zip":"{ZipCodeFP}"},"type":"JCP","cvv":"123","isXStandardizationRequired":"false","number":"{CardnoFP}"}",
        BODY_END
    );

    ns_end_transaction("MB_API_Bopus_GC_creditcards_POST", NS_AUTO_STATUS);
	
/*	
	ns_start_transaction("MB_API_Bopus_GC_creditcards_OPTIONS");		
	    ns_web_url("Bopus_API_GC_creditcards3",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/credit-cards",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-command",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_GC_creditcards_OPTIONS", NS_AUTO_STATUS); 

    ns_start_transaction("MB_API_Bopus_GC_creditcards_GET");
    ns_web_url ("Bopus_API_GC_creditcards2",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order/billing/credit-cards",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/credit-cards",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=NotValidCookie;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;DPJSESSIONID;ssl;mbox;clientTestPool1;SDPU_ZIPCACHE;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;_4c_;NSPrevPercentage;NSOrigin;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;BNSPrevPercentage;BNSOrigin;DP_SFL_PPIDS;DPSecureCookie;LPVID;LPSID-58507821;LPCKEY-58507821;_uetsid;testpool;DPInstance;DPUserTracking;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;yoda-checkout",
        "PreSnapshot=webpage_1499163080050.png",
        "Snapshot=webpage_1499163081160.png",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/checkout/#check", END_INLINE,
            "URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order/billing/credit-cards/pg6496224201/financing?cardId=pg6496224201", "METHOD=OPTIONS", "HEADER=Origin:https://m.jcpenney.com", "HEADER=yoda-checkout:true", "HEADER=Access-Control-Request-Method:GET", "HEADER=Access-Control-Request-Headers:authorization, content-type", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_Bopus_GC_creditcards_GET", NS_AUTO_STATUS);
*/
	
	ns_start_transaction("MB_API_Bopus_GC_billing_OPTIONS");		
	    ns_web_url("Bopus_API_GC_billing1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cbilling&origin=billing",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-command",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_GC_billing_OPTIONS", NS_AUTO_STATUS); 

    ns_start_transaction("MB_API_Bopus_GC_billing_GET");
    ns_web_url ("Bopus_API_GC_billing",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order/billing/credit-cards/pg6496224201/financing?cardId=pg6496224201",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cbilling&origin=billing",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=NotValidCookie;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;DPJSESSIONID;ssl;mbox;clientTestPool1;SDPU_ZIPCACHE;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;_4c_;NSPrevPercentage;NSOrigin;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;BNSPrevPercentage;BNSOrigin;DP_SFL_PPIDS;DPSecureCookie;LPVID;LPSID-58507821;LPCKEY-58507821;_uetsid;testpool;DPInstance;DPUserTracking;DPSessionTimeOutInterval;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;yoda-checkout",
        "PreSnapshot=webpage_1499163081160.png",
        "Snapshot=webpage_1499163082113.png",
        INLINE_URLS,
            "URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order?expand=status", "METHOD=OPTIONS", "HEADER=Origin:https://m.jcpenney.com", "HEADER=yoda-checkout:true", "HEADER=Access-Control-Request-Method:GET", "HEADER=Access-Control-Request-Headers:authorization, content-type", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order?expand=status", "METHOD=OPTIONS", "HEADER=Origin:https://m.jcpenney.com", "HEADER=yoda-checkout:true", "HEADER=Access-Control-Request-Method:GET", "HEADER=Access-Control-Request-Headers:authorization, content-type", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/jcp-plcc.svg", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;c13;pn;testVersion;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;testpool;NSPrevPercentage;NSOrigin;Yoda-SID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DP_SFL_PPIDS;DPSecureCookie;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;mp_jcpenney_mixpanel;_ga;_gid;c17;v53;s_cc;_uetsid;s_ptc;CavSF;CavNVC;_4c_;s_sq;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_GC_billing_GET", NS_AUTO_STATUS);

	ns_start_transaction("MB_API_Bopus_RO_draftorder_OPTIONS");		
	    ns_web_url("Bopus_API_GC_RO_draftorder1",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&origin=billing&includeServiceLevels=true",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-command",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_RO_draftorder_OPTIONS", NS_AUTO_STATUS); 

    ns_start_transaction("MB_API_Bopus_GC_RO_draftorder_GET");
    ns_web_url ("Bopus_API_GC_RO_draftorder",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order?expand=status",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&origin=billing&includeServiceLevels=true",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;clientTestPool1;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;testpool;NSPrevPercentage;NSOrigin;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DP_SFL_PPIDS;DPSecureCookie;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;mp_jcpenney_mixpanel;_ga;_gid;_uetsid;_4c_;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;yoda-checkout",
        "PreSnapshot=webpage_1498821912796.png",
        "Snapshot=webpage_1498821913414.png"
    );

    ns_end_transaction("MB_API_Bopus_GC_RO_draftorder_GET", NS_AUTO_STATUS);
    ns_end_transaction("MOB_BOPUS_Guest_PaymentInfo", NS_AUTO_STATUS);
	ns_page_think_time(0);
	
	
//    ns_start_transaction("MB_API_Bopus_GC_device_PUT");
//     ns_web_url ("Bopus_API_GC_device",
//        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/device",
//        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L110088407554/draft-order/billing/credit-cards/pg6402040215/financing?cardId=pg6402040215",
//        "HEADER=authorization:Bearer {AccessTokenSP}",
//        "METHOD=PUT",
//        "HEADER=X-Auto-Login:true",
//        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=Accept-Language:en-us",
//        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;DPInstance;DPUserTracking;testpool;jcpvid;DPSessionTimeOutInterval;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;yoda-checkout",
//        "PreSnapshot=webpage_1497335115810.png",
//        "Snapshot=webpage_1497335117098.png",
//         BODY_BEGIN,
//            "{"fingerPrint":"0400UtAq9oNuGZLjK9GFecOQi6J78FsLZBYVzcZUHM8fMjaPv/th4ubweWmlk78A/xyXwu6PnQXtx2hD4p0RbCNGyebHa83CDZB6O3Jo1IqtMev2kdSYnZmn4J3X6ArFherahm4ApyE7fpAN/K3i4T048VeZIkdkFY3qx9fY6yAgVWVwPpPV0ZSMv0pOn4e4STOPzgEDSHboRwABzGpMLbn14XVsMRQyFzgPwACd+q1SZ92KGlihh5IAhgdwKLI4UXFQ4Y/MxdJgfkbap+4LwTdYTkgYYWKMojzAkUm+oMc9K1N2j/euErQ/Tjp253OEa5BI2NELhuoh3ECzQm+3qhD9kvuslEKlpFm7ziHA3t4riiNjc7VnhLpRAxah37+pYGavaCgLLnCsYJGw2iZpWeEwggo5VNMvaDXfGkgnVvJhnLTokpKH6zy0FykaEiBB3lJ7bHky/TqomdCBURnl+Pl458GvHaKsyJLsFmQWppRl6BuJMg+PFGrtYOHt39bvxE86eVaYJEF00M3FA0nRr0GSTlg9pkYcshA3C8N7p1aTfoKGS0wEYRz1ObzNM6zByOCPOKrx+TQBuxXd5qqTH6bqqAOa9raHxzbghlz5wlRFwWJi0FRulruXQYQonmwROuiCfyJ/eg8nLV8JdqJazYFDT5Eawk05xEoCHroB1MVbmjSFiBEQQSAOd2g48BAA46MBs+SXGtm16GaljzOC8rHfIxgF74x9JktQwkGouP5PPyvQ78T0AGn/16+Vx63F6egNooPmHSsxiCQQwLLSzeFEufTxOH0WU0cM9spFd7LTpxjhrt64WqIxSDOpvCmZZrwjc50aG83FfTPgI9fmSz/YMqIV04jBK7Qt+BHov7DgSuiBmGobyp70bhkwfCqvl92YR6kKmB7k4E5HkpM/NABtMtGw+9tqLY6/tQzpGfcm0cR8X2Fd1ngNFFpoJLl9l88D3d4fjEi5e7dFaRYe7mA6xQycM+LiuNbgxSF1gKG4ihgazeAGgOH2ObOgSQ0Fzflca1WxiZ1a0z2Q2sBcS9tbDnGL9SBAEfPHnVbvD7VbMEbSt0oGtrebhoLo8CjOqUXCgFlPptX6geQLpskg0KpwX6y0J0f+d5urBeiOThsX3U8ypsgabbPtLxa/yjVvpzecVK+EK/SrgYNtlPDdrPIsZo8spXWvLb/6zYYbKOqfKMEQiKdMLUW5qIdMpSRnzNZuX6t2xsBNqMDIx5G6nzZ9jXlFnBT3M8OkylzzTG0IB31ca14VNvRUUTS4zWJ0T9HruwLLNTE9qpy8lLqQ8tlZHR0onXj01kz4n2K0A/mix0aaEBpw9Wmc8YIYY+aPvlMO7wrfHDjv8c45uyt1lgW/Z7wgfsUp7XhUmfPZAX0P+o9CPjyZdN3GZa+XDi7xXTgSgV8VmU9I9cPzgx/uGvukwUkxbgC7vA3TC4V9MZfv3/mQKc2nV487pyQiFWbX2mU5sTBuk/0bwFAxT4ToHTNjCIZfJ0PbVNoIIAsY29y1WZFmyHKk57sRn4pvHGdSbkGmPj4dZeygTCRuZSWFinmTWj4DzHExxdBPAPqZsyrallp28QjD9GV0brenO8CxEmMyXb4bTtYpcAB7WAcx77sLlJEf/OpBTRivzaukOwTB2HQP4q/t6imMryjTr/MEe30kPJ9QFiCkwSE5Vq9QQc5VJm4nZpLWmJP1Yg8CuMOt5MLq4WCiHMbq2DOn2ywzLXg6OB80iCYN86VMYLx3Tzh5jIoJMMuXBKWa15362ubh5w8cjVspt9PJQZoKdLsnNr6F;0400kiT06bmrRsHjK9GFecOQi4Mhx9C0w/+fYE05AP0ODwYaUe0LbFB/cU/3qMFgvPUpm3+mT3Vx/QfCnNaY+M3l9ebHa83CDZB6SKkdidw8WmoEUmS7/wN7Uiy1IKdI5nxjO2VboIF/CA9tiqr1ZCgSTe20+RUJT79Mx9fY6yAgVWVwPpPV0ZSMvxSoCobuGR60vb3ALI0LkmTrDTc2sihYfZy8giCOuHWAFYJj6NQpb4yZJ1mBMLATxwAS/jZymQ/QZNfbcjbO4PM9imFTBzwIUfedXhDUeljjDX/eJYrNc7YqE/QNQ0oYACozBACRW94LKPN7uMDpYXcfdF254+ODaNgC5Ve9MAOHKNOv8wR7fSS8EQoCF/TPqIu6cQg+ZAff5S+EiuKzwaG+xcMhBad5MOmH9P6UyVFM+njX+UOAT4kMnSoJziAyl0wCL/2lNvotLFVo1ifJbMwQVd9S9FT4ccsYCmYi4eMBiK7pMCw9zdTk0B48ux+V4QZkghiV83r43i2l0JNQ+Ze8VDdLGBfK9PH/LgnAtMTg2IfHpjJ8Lmc4E53jv+jyhjzIXuPlsmXN4teOV1Vbeg8NJ41aGOCjvkC6RzpZeDGCV1vBk5ASuMVi1psnvvg7OT/KhUgGeNqKwHaf9f8MJCcHThbM1JfmhGMs0T9E09leVguGdCj5lhez1zksJ0y/h/rJz/fklocMTg4MOf8AYtgpGhIgQd5Se2x5Mv06qJnQgVEZ5fj5eOchXjkS1TGVAMSmRZOWcyLmDiaZgrFVtGu/TDp0UzLYSzsntGrOrjOhiSkiHcDvTuVFWopiv1Rjk4/VcdsVtZ270iAXyzfkdDMJdmNWP4mnL/4vmY2YuAxWZxG8sa3/lRxoOPAQAOOjAbPklxrZtehmpY8zgvKx3yObsQN3liQI4BKePA1UZdKAiG6NLIoDGPximIcyCQ5pgVLB6M5fl2EoMEAoEitEttHc0GHp9GI20AawSLpe9s/GlP/Y/bIla3uhAW+90s3OyOr0u+myONqfYXyFHBbsmyyzb0vSwWRA+eSMeWgCk0M8RW2VNSUjHuZ8YD1Y+HjfzcCq9DH/qIFmTmy+T80eupzWRi9fUfh2QMuqkCAFZf7vBDL+bbK9Z4OZ9E3t5QZ/JZFJvqDHPStTdo/3rhK0P07ivvg26OUqRuMcUB6uXbFs8sQyiQagYnEu9ZxlPvr4R6Dgg12f7b2RYDvethm0ixWW2kQsFCmaX9vxHNZ3NkrhGk0Z9BtTQmWgtX2yvT0J9WFAGVlsDIdMuZlYWDDtCk5EB5KVM4z1cElKRgk1OUYQhh1UvdQ54MO4uq9KPIjwtFEx1+Oo3i7jSp05qPv7zbA1j3CRsBUWaQHOv15iaok6TeVvdlGCixNWnN09PKTpEM8uPjCyJtQ1lMDUcEEYtMprUTPpDYWZtJf/TppldFWfVNctIjl/nB1lQBmZ8DNmmOW3Rp8MfQ+z9Bnqa8cJ8TCz4D2oX8xddNQeGwCeB4LeMGvZTGoZ0R93bXSTdAfdndT16TeM5diEHf7WUtiodkR5qOuFcjUcXPMfTGiY9fV6h4uSWINrsGJyjGpYgtuYTO7YwkJKLXY0MOcVkGcC7wRiUDSB6zqHMg=="}",
//        BODY_END
//    );
//    ns_end_transaction("MB_API_Bopus_GC_device_PUT", NS_AUTO_STATUS);

//    //Page Auto splitted for application/json type
//    ns_start_transaction("draft_order_7");
//    ns_web_url ("draft_order_7",
//        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order?expand=status",
//        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
//        "PreSnapshot=webpage_1498821913414.png",
//        "Snapshot=webpage_1498821913689.png"
//    );
//
//    ns_end_transaction("draft_order_7", NS_AUTO_STATUS);

      
    // Place Order
    

	
	if(Exituser <= 38){
    	 ns_start_transaction("MOB_AbandonmentAtBopusOrderReview");
    ns_end_transaction("MOB_AbandonmentAtBopusOrderReview", NS_AUTO_STATUS);
    	ns_exit_session();
    }

    //Page Auto splitted for Method = POST
     ns_start_transaction("TotalSubmitOrder");
 	 ns_start_transaction("MOB_SubmitOrder");
 	 ns_start_transaction("MOB_Bopus_SubmitOrder");
 	 ns_start_transaction("MOB_Bopus_Guest_SubmitOrder");
 	 ns_start_transaction("MB_API_Bopus_PO_draftorder_OPTIONS");		
	    ns_web_url("Bopus_API_GC_PO_draftorder1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-command",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_PO_draftorder_OPTIONS", NS_AUTO_STATUS); 
 	 
    ns_start_transaction("MB_API_Bopus_GC_PO_draftorder_POST");
    ns_web_url ("Bopus_API_GC_PO_draftorder",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=POST",
        "HEADER=accept:application/json",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=x-command:submit",
        "HEADER=X-Client-Id:Basic amNwLnJ3ZG06QVVndFRydFc5cg",
        "HEADER=X-ETag: {EtagIdSP}.Disabled",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
//        BODY_BEGIN,
//            "{}",
//        BODY_END,
        INLINE_URLS,
        
    );

    ns_end_transaction("MB_API_Bopus_GC_PO_draftorder_POST", NS_AUTO_STATUS);

    ns_start_transaction("MOB_Bopus_OrderConfirmation");	
	  	ns_web_url("YODA_OrderConfirmation1",
        "URL=https://m.jcpenney.com/checkout/oc?OrderId={OrderIdSP}",
         "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
    );
//    ns_end_transaction("MOB_Bopus_OrderConfirmation", NS_AUTO_STATUS);	

				//***********************************SSR/CSR Handling**************************//
    if((!strcmp(ns_eval_string("{OrderNoSP1}"),""))){
    ns_end_transaction_as("MOB_Bopus_OrderConfirmation", NS_AUTO_STATUS, "MOB_Bopus_OrderConfirmation_CSR");}
    else {
    ns_end_transaction_as("MOB_Bopus_OrderConfirmation", NS_AUTO_STATUS, "MOB_Bopus_OrderConfirmation_SSR");
    goto SkipOrderConfirmation;
    }
//********************************************************************************// 


	ns_start_transaction("MB_API_Bopus_GC_PO_order_OPTIONS");		
	    ns_web_url("Bopus_API_GC_PO_order1",
        "URL=https://order-api.jcpenney.com/order-api/v1/orders/{OrderIdSP}",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-command",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_GC_PO_order_OPTIONS", NS_AUTO_STATUS); 

    ns_start_transaction("MB_API_Bopus_GC_PO_order_GET");
    ns_web_url ("Bopus_API_GC_PO_order",
        //"URL=https://order-api.jcpenney.com/order-api/v1/orders/C16034363269",
        "URL=https://order-api.jcpenney.com/order-api/v1/orders/{OrderIdSP}",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;clientTestPool1;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPSecureCookie;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;mp_jcpenney_mixpanel;_ga;_gid;_gat;_4c_;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;OrderId;ItemCount;_uetsid;DPCluster;testpool;yoda-checkout",
        "PreSnapshot=webpage_1498821932671.png",
        "Snapshot=webpage_1498821933023.png",
        INLINE_URLS,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1064647855/?value=17.60&label=i_tvCLXclwIQr_nU-wM&guid=ON&script=0&ctc_id=CAIVAgAAAB0CAAAA&ct_cookie_present=false&convclickts=0&ocp_id=LDVWWbfVK8urogPBgKHABw&random=40076975", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=id;IDE;yoda-checkout", END_INLINE,
            "URL=https://tracking.deepsearch.adlucent.com/adl.js", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://static.criteo.net/js/ld/ld.js", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=4002289&Ver=2&mid=72762192-18d1-9415-5be7-04d26ec0587f&evt=pageLoad&sid=6c95fa35-0&lt=44590&pi=-1292315712&lg=en-us&r=https%3A%2F%2Fm.jcpenney.com%2Fcart%2Fsignin&p=https%3A%2F%2Fm.jcpenney.com%2Fcheckout%2Foc&rn=203204", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=MUID;MR;MUIDB;yoda-checkout", END_INLINE
    );

    ns_end_transaction("MB_API_Bopus_GC_PO_order_GET", NS_AUTO_STATUS);   
    SkipOrderConfirmation:
    ns_end_transaction("MOB_Bopus_Guest_SubmitOrder", NS_AUTO_STATUS);
    ns_end_transaction("MOB_Bopus_SubmitOrder", NS_AUTO_STATUS);
    ns_end_transaction("MOB_SubmitOrder", NS_AUTO_STATUS);
    ns_end_transaction("TotalSubmitOrder", NS_AUTO_STATUS);
    


    ns_start_transaction("MB_API_Bopus_GC_SiteWidePromo_OPTIONS");
    	ns_web_url ("MB_API_Bopus_GC_SiteWidePromo1",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/checkout/oc",
        "METHOD=OPTIONS",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
    );
    ns_end_transaction("MB_API_Bopus_GC_SiteWidePromo_OPTIONS",NS_AUTO_STATUS);

    ns_start_transaction("MB_API_Bopus_GC_SiteWidePromo_GET");
    	ns_web_url ("MB_API_Bopus_GC_SiteWidePromo",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/checkout/oc",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
    );
    ns_end_transaction("MB_API_Bopus_GC_SiteWidePromo_GET",NS_AUTO_STATUS);
    
	ns_start_transaction("MB_API_Bopus_GC_PO_stores_OPTIONS");		
	ns_web_url("Bopus_API_GC_PO_storesFetchCall",
        "URL=https://browse-api.jcpenney.com/v1//stores/{StoreIDSP}",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-command",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_GC_PO_stores_OPTIONS", NS_AUTO_STATUS); 

    ns_start_transaction("MB_API_Bopus_GC_PO_stores_GET");
    ns_web_url ("Bopus_API_GC_PO_stores",
        "URL=https://browse-api.jcpenney.com/v1//stores/{StoreIDSP}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;clientTestPool1;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPSecureCookie;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;mp_jcpenney_mixpanel;_ga;_gid;_gat;_4c_;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;OrderId;ItemCount;_uetsid;DPCluster;testpool;yoda-checkout",
        "PreSnapshot=webpage_1498821932671.png",
        "Snapshot=webpage_1498821933023.png",
        INLINE_URLS,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1064647855/?value=17.60&label=i_tvCLXclwIQr_nU-wM&guid=ON&script=0&ctc_id=CAIVAgAAAB0CAAAA&ct_cookie_present=false&convclickts=0&ocp_id=LDVWWbfVK8urogPBgKHABw&random=40076975", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=id;IDE;yoda-checkout", END_INLINE,
            "URL=https://tracking.deepsearch.adlucent.com/adl.js", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://static.criteo.net/js/ld/ld.js", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=4002289&Ver=2&mid=72762192-18d1-9415-5be7-04d26ec0587f&evt=pageLoad&sid=6c95fa35-0&lt=44590&pi=-1292315712&lg=en-us&r=https%3A%2F%2Fm.jcpenney.com%2Fcart%2Fsignin&p=https%3A%2F%2Fm.jcpenney.com%2Fcheckout%2Foc&rn=203204", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=MUID;MR;MUIDB;yoda-checkout", END_INLINE
    );

    ns_end_transaction("MB_API_Bopus_GC_PO_stores_GET", NS_AUTO_STATUS);

//	ns_start_transaction("MOB_Bopus_GC_ProductSummaries_GET");
//    ns_web_url ("API_Bopus_GC_filterContent",
//        "URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-summaries-aggregator?ppId={RootPPIDFP}",
//        "HEADER=Accept-Language:en-us",
//        INLINE_URLS,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0407201717340797M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1031201617145920M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0923201617143886M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1027201618045948M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1207201617243319M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0417201520502192C?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0316201717071246M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1216201617185802M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0303201717491380M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1104201317072500M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1216201617191301M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1216201617173439M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0812201504315204M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1209201617131066M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0901201620301959C?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1221201617122041M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1017201617220248M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1219201617111681M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0513201417082870M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1129201621481266M?wid=450&amp;hei=450&amp;op_sharpen=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE
//    );
//	ns_end_transaction("MOB_Bopus_GC_ProductSummaries_GET", NS_AUTO_STATUS);
    ns_page_think_time(0);
  
  //********************* To Save Order No *********************//
     char orderno [128 + 1]="";
     snprintf(orderno,128,"%s",ns_eval_string("{OrderNoSP1}"));
     ns_save_data_eval("/home/netstorm/work/data/JCPenney/OrderDetail/Bopus/Mob_GuestOrderId.txt", NS_APPEND_FILE, orderno);

  




}
