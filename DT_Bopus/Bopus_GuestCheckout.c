/*-----------------------------------------------------------------------------
    Name:Bopus_GuestCheckout
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

void Bopus_GuestCheckout()
{
 	int Exituser = ns_get_random_number_int(1,100);
    
//    ns_start_transaction("COM_BOPUS_InitiateCheckOut");
//    ns_web_url("API_Bopus_GC_cart",
//        "URL=https://www.jcpenney.com/cart",
//        //"HEADER=X-Auto-Login:true",
//        "HEADER=Accept-Language:en-us",
//        "COOKIE=DPCluster;yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;jcp.ab.test;clientTestPool1;recentSearchData;NotValidCookie;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;c13;pn;testVersion;DPJSESSIONID;DPSecureCookie;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;testpool;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;c17;v53;s_ptc;s_cc;CavSF;CavNVC;mp_jcpenney_mixpanel;s_sq;DPUserTracking;jcpvid;DPSessionTimeOutInterval;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier",
//        "PreSnapshot=webpage_1498123344109.png",
//        "Snapshot=webpage_1498123342796.png"
//    );
//    ns_end_transaction("COM_BOPUS_InitiateCheckOut",NS_AUTO_STATUS);
//    ns_page_think_time(0);
    

    ns_start_transaction("COM_BOPUS_Guest_CheckOut");
    ns_start_transaction("DT_API_Bopus_GC_draftorder_OPTIONS");
    ns_web_url("DT_API_Bopus_GC_draftorder_opt",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:authorization, content-type, x-command",
        INLINE_URLS,
            "URL=https://nexus.ensighten.com/jcpenney/prod/serverComponent.php?r=7619.223301849783&ClientID=730&PageID=https%3A%2F%2Fwww.jcpenney.com%2Fcheckout", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("DT_API_Bopus_GC_draftorder_OPTIONS", NS_AUTO_STATUS);

    //ns_web_add_auto_header("customerVidForPerfTestOrder", "false", 0);
    ns_start_transaction("DT_API_Bopus_GC_draftorder_POST");
    ns_web_url ("DT_API_Bopus_GC_draftorder",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=POST",
        "HEADER=accept:application/vnd+jcpenney.draft-order+json",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=x-command:initiate-checkout",
        "HEADER=X-Client-Id:Basic amNwOnlvZGF3Ojc1NTU4NTk2",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1499162862765.png",
        "Snapshot=webpage_1499162864447.png"
//   		  BODY_BEGIN,
//            "{}",
//        BODY_END,
        INLINE_URLS,
            "URL=https://sp.analytics.yahoo.com/sp.pl?a=10000&jsonp=YAHOO.ywa.I13N.handleJSONResponse&.yp=25984&f=https%3A%2F%2Fwww.jcpenney.com%2Fcart&enc=UTF-8", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=B;DPCluster;Yoda-checkout", END_INLINE
    );

    ns_end_transaction("DT_API_Bopus_GC_draftorder_POST", NS_AUTO_STATUS);


    ns_start_transaction("COM_Bopus_Checkout");
    ns_web_url ("checkout",
        "URL=https://www.jcpenney.com/checkout",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1499162864294.png",
        "Snapshot=webpage_1499162869223.png",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/static-checkout/css/styles.css?v=20170630041737", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;c13;pn;testVersion;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;s_sq;testpool;NSPrevPercentage;NSOrigin;Yoda-SID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;s_ptc;s_cc;mp_jcpenney_mixpanel;_ga;_gid;_gat;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;BNSPrevPercentage;BNSOrigin;CavSF;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;_4c_;CavNVC", END_INLINE,
             "URL=https://nexus.ensighten.com/jcpenney/Bootstrap.js", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
//	ns_end_transaction("DT_Bopus_checkout", NS_AUTO_STATUS);
	
//************************************SSR/CSR Handling*******************************************//
    if((!strcmp(ns_eval_string("{GroupIdSP}"),""))){
    ns_end_transaction_as("COM_Bopus_Checkout", NS_AUTO_STATUS, "COM_Bopus_Checkout_CSR");}
    else {
    ns_end_transaction_as("COM_Bopus_Checkout", NS_AUTO_STATUS, "COM_Bopus_Checkout_SSR");
    goto SkipDraftOrder;
    }
//*************************************************************************************************//

    ns_start_transaction("DT_API_Bopus_GC_draftorder_OPTIONS");
    ns_web_url("Bopus_API_GC_draftorder2_opt",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&isGiftRegistry=false&initGetDraftOrder=false&expand=status%2Cdelivery",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status%2Cdelivery%2Cbilling&origin=billing",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type, x-command",
        INLINE_URLS,
            "URL=https://nexus.ensighten.com/jcpenney/prod/serverComponent.php?r=7619.223301849783&ClientID=730&PageID=https%3A%2F%2Fwww.jcpenney.com%2Fcheckout", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("DT_API_Bopus_GC_draftorder_OPTIONS", NS_AUTO_STATUS);
   
    ns_start_transaction("DT_API_Bopus_GC_draftorder_GET");
    ns_web_url ("Bopus_API_GC_draftorder2",
       // "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&isGiftRegistry=false&initGetDraftOrder=false&expand=status%2Cdelivery",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status%2Cdelivery%2Cbilling&origin=billing",
        "HEADER=authorization:Bearer {AccessTokenSP}",
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
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/8.11.0.3-release_2848/le_secure_storage/storage.secure.min.html?loc=https%3A%2F%2Fwww.jcpenney.com&site=58507821&asmr=15&env=prod", "HEADER=yoda-checkout:true", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("DT_API_Bopus_GC_draftorder_GET", NS_AUTO_STATUS);
    
    SkipDraftOrder:
        
   	ns_end_transaction("COM_BOPUS_Guest_CheckOut", NS_AUTO_STATUS);

    // Continue To Payment

    ns_start_transaction("COM_BOPUS_Guest_PickUpItem");    
//    ns_start_transaction("DT_API_Bopus_GC_deliverygroups_OPTIONS");
//    ns_web_url ("Bopus_API_GC_deliverygroups_opt",
//        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/delivery/groups/{GroupIdSP}/pickup",
//        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/delivery/groups/{GroupIdSP}",
//        "METHOD=OPTIONS",
////        "HEADER=X-DPOrder:{DPOrderId}",
//        "HEADER=Access-Control-Request-Method:GET",
//        "HEADER=Access-Control-Request-Headers:authorization, content-type, x-command",
//    );
//
//    ns_end_transaction("DT_API_Bopus_GC_deliverygroups_OPTIONS", NS_AUTO_STATUS);
//    
//    ns_start_transaction("DT_API_Bopus_GC_deliverygroups_PUT");
//    ns_web_url ("Bopus_API_GC_deliverygroups",
//        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order/billing/credit-cards",
//        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/delivery/groups/{GroupIdSP}/pickup",
//       //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/delivery/groups/{GroupIdSP}",
//        "METHOD=PUT",
//        "HEADER=authorization:Bearer {AccessTokenSP}",
//        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=Accept-Language:en-us",
////        "HEADER=X-DPOrder:{DPOrderId}",
//        "COOKIE=NotValidCookie;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;DPJSESSIONID;ssl;mbox;clientTestPool1;SDPU_ZIPCACHE;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;_4c_;NSPrevPercentage;NSOrigin;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;BNSPrevPercentage;BNSOrigin;DP_SFL_PPIDS;DPSecureCookie;LPVID;LPSID-58507821;LPCKEY-58507821;_uetsid;testpool;DPInstance;DPUserTracking;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;yoda-checkout",
//        "PreSnapshot=webpage_1499163080050.png",
//        "Snapshot=webpage_1499163081160.png",
//         BODY_BEGIN,
//            "{"alternatePerson":false}",
//        BODY_END
//    );
//
//    ns_end_transaction("DT_API_Bopus_GC_deliverygroups_PUT", NS_AUTO_STATUS);
//    
    ns_start_transaction("DT_API_Bopus_GC_PM_ServiceLevels_OPTIONS");
    ns_web_url ("API_Bopus_GC_PM_ServiceLevels_opt",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status%2Cdelivery%2Cbilling&origin=billing",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type, x-command",
    );

    ns_end_transaction("DT_API_Bopus_GC_PM_ServiceLevels_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_Bopus_GC_PM_ServiceLevels_GET");
    ns_web_url("API_Bopus_GC_PM_ServiceLevels",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status%2Cdelivery%2Cbilling&origin=billing",
        // "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=NotValidCookie;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;DPJSESSIONID;ssl;mbox;clientTestPool1;SDPU_ZIPCACHE;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;_4c_;NSPrevPercentage;NSOrigin;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;BNSPrevPercentage;BNSOrigin;DP_SFL_PPIDS;DPSecureCookie;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;LPVID;LPSID-58507821;LPCKEY-58507821;_uetsid;yoda-checkout",
        "PreSnapshot=webpage_1499162928972.png",
        "Snapshot=webpage_1499162929393.png",
    );
	ns_end_transaction("DT_API_Bopus_GC_PM_ServiceLevels_GET", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_Bopus_GC_PM_draftorder_OPTIONS");
    ns_web_url ("Bopus_API_GC_PM_draftorder_opt",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&origin=billing&includeServiceLevels=true",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type, x-command",
    );

    ns_end_transaction("DT_API_Bopus_GC_PM_draftorder_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_Bopus_GC_PM_draftorder_GET");
    ns_web_url ("Bopus_API_GC_PM_draftorder",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&origin=billing&includeServiceLevels=true",
       // "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://maps.gstatic.com/mapfiles/api-3/images/powered-by-google-on-white3.png", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://maps.gstatic.com/mapfiles/api-3/images/autocomplete-icons.png", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://maps.googleapis.com/maps/api/js/AuthenticationService.Authenticate?1shttps%3A%2F%2Fm.jcpenney.com%2Fcheckout&4sAIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&callback=_xdc_._ityvdz&token=46617", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("DT_API_Bopus_GC_PM_draftorder_GET", NS_AUTO_STATUS);
	
   ns_start_transaction("DT_API_Bopus_GC_Zipcode_GET");
   ns_web_url("Bopus_API_GC_Zipcode",
        "URL=https://account-api.jcpenney.com/v1/zipCodes/{ZipCodeFP}",
       // "HEADER=accept-version:2.1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1499163042341.png",
        "Snapshot=webpage_1499163048488.png"
    );
	ns_end_transaction("DT_API_Bopus_GC_Zipcode_GET", NS_AUTO_STATUS);
	ns_end_transaction("COM_BOPUS_Guest_PickUpItem", NS_AUTO_STATUS);
	ns_page_think_time(0);
	
	
	ns_start_transaction("COM_BOPUS_Guest_PaymentInfo");
    ns_start_transaction("DT_API_Bopus_GC_contactmethods_OPTIONS");
    ns_web_url ("Bopus_API_GC_contactmethods_opt",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/contact-methods",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:authorization, content-type, x-command",
    );

    ns_end_transaction("DT_API_Bopus_GC_contactmethods_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_Bopus_GC_contactmethods_POST");
    ns_web_url ("Bopus_API_GC_contactmethods",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/contact-methods",
        "METHOD=POST",
        "HEADER=authorization:Bearer {AccessTokenSP}",
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

    ns_end_transaction("DT_API_Bopus_GC_contactmethods_POST", NS_AUTO_STATUS);
	
    ns_start_transaction("DT_API_Bopus_GC_creditcards_OPTIONS");
    ns_web_url ("Bopus_API_GC_creditcards_opt",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/credit-cards",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:authorization, content-type, x-command",
    );

    ns_end_transaction("DT_API_Bopus_GC_creditcards_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_Bopus_GC_creditcards_POST");
    ns_web_url ("Bopus_API_GC_creditcards",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order/billing/credit-cards",
         "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/credit-cards",
        "METHOD=POST",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
       "HEADER=X-STANDARDIZATION-REQUIRED:false",
        BODY_BEGIN,
        	"{"address":{"city":"{CitySP1}","country":"US","firstName":"{FirstNameFP}","lastName":"{LastNameFP}","lineOne":"{AddressFP}","phone":"{PhonenoFP}","state":"{StateSP1}","zip":"{ZipCodeFP}"},"type":"JCP","cvv":"123","isXStandardizationRequired":"false","number":"{CreditCardNumberFP}"}",
        BODY_END
    );

    ns_end_transaction("DT_API_Bopus_GC_creditcards_POST", NS_AUTO_STATUS);
   
    ns_start_transaction("DT_API_Bopus_GC_RO_billing_OPTIONS");
    ns_web_url ("Bopus_API_GC_RO_billing_opt",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cbilling&origin=billing",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type, x-command",
    );

   	ns_end_transaction("DT_API_Bopus_GC_RO_billing_OPTIONS", NS_AUTO_STATUS);

    ns_start_transaction("DT_API_Bopus_GC_RO_billing_GET");
    ns_web_url ("Bopus_API_GC_RO_billing",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order?expand=status",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cbilling&origin=billing",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
    );

    ns_end_transaction("DT_API_Bopus_GC_RO_billing_GET", NS_AUTO_STATUS);
        
    ns_start_transaction("DT_API_Bopus_GC_draftorder_OPTIONS");
    ns_web_url ("Bopus_API_GC_draftorder_opt",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&origin=billing&includeServiceLevels=true",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type, x-command",
    );

    ns_end_transaction("DT_API_Bopus_GC_draftorder_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_Bopus_GC_RO_draftorder_GET");
    ns_web_url ("Bopus_API_GC_RO_draftorder",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order/billing/credit-cards/pg6496224201/financing?cardId=pg6496224201",
       // "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/credit-cards/{CCIdSP}/financing?cardId={CCIdSP}",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&origin=billing&includeServiceLevels=true",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=NotValidCookie;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;DPJSESSIONID;ssl;mbox;clientTestPool1;SDPU_ZIPCACHE;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;_4c_;NSPrevPercentage;NSOrigin;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;BNSPrevPercentage;BNSOrigin;DP_SFL_PPIDS;DPSecureCookie;LPVID;LPSID-58507821;LPCKEY-58507821;_uetsid;testpool;DPInstance;DPUserTracking;DPSessionTimeOutInterval;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;yoda-checkout",
        "PreSnapshot=webpage_1499163081160.png",
        "Snapshot=webpage_1499163082113.png",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/static-checkout/images/jcp-plcc.svg", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;c13;pn;testVersion;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;testpool;NSPrevPercentage;NSOrigin;Yoda-SID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DP_SFL_PPIDS;DPSecureCookie;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;mp_jcpenney_mixpanel;_ga;_gid;c17;v53;s_cc;_uetsid;s_ptc;CavSF;CavNVC;_4c_;s_sq;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE
    );
    ns_end_transaction("DT_API_Bopus_GC_RO_draftorder_GET", NS_AUTO_STATUS);
    ns_end_transaction("COM_BOPUS_Guest_PaymentInfo", NS_AUTO_STATUS);
	ns_page_think_time(0);
      
    // Place Order
    
	if(Exituser <= 38){
    	 ns_start_transaction("COM_AbandonmentAtBopusOrderReview");
    ns_end_transaction("COM_AbandonmentAtBopusOrderReview", NS_AUTO_STATUS);
    	ns_exit_session();
    }

    //Page Auto splitted for Method = POST
     ns_start_transaction("TotalSubmitOrder");
 	 ns_start_transaction("Dotcom_SubmitOrder");
 	 ns_start_transaction("Dotcom_BOPUS_SubmitOrder");
 	 ns_start_transaction("COM_BOPUS_Guest_SubmitOrder");
 	 ns_start_transaction("DT_API_Bopus_GC_PO_draftorder_OPTIONS");
     ns_web_url("GC_Checkout5",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:authorization, content-type, x-command",
        "HEADER=Accept-Language:en-us"
    );
    ns_end_transaction("DT_API_Bopus_GC_PO_draftorder_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_Bopus_GC_PO_draftorder_POST");
    ns_web_url ("Bopus_API_GC_PO_draftorder1",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=POST",
        "HEADER=accept:application/json",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Client-Id:Basic amNwOnlvZGF3Ojc1NTU4NTk2",
        "HEADER=X-ETag: {EtagIdSP}.Disabled",
        "HEADER=x-command:submit",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
//        BODY_BEGIN,
//            "{}",
//        BODY_END,
        INLINE_URLS,
        
    );

    ns_end_transaction("DT_API_Bopus_GC_PO_draftorder_POST", NS_AUTO_STATUS);
    
    ns_start_transaction("COM_Bopus_OrderConfirmation");
        ns_web_url ("Bopus_Guest_OrderConfirm",
        "URL=https://www.jcpenney.com/checkout/oc?OrderId={OrderIdSP}",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://nexus.ensighten.com/jcpenney/Bootstrap.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://order-api.jcpenney.com/order-api/v1/orders/L16019753232", "METHOD=OPTIONS", "HEADER=Origin:https://m.jcpenney.com", "HEADER=yoda-checkout:true", "HEADER=Access-Control-Request-Method:GET", "HEADER=Access-Control-Request-Headers:authorization, content-type", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/static-checkout/images/inline-loader.gif", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;mp_jcpenney_mixpanel;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;_uetsid;s_ptc;s_cc;_ga;_gid;LPVID;LPSID-58507821;LPCKEY-58507821;jcpvid;_gat;c17;v53;s_sq;CavSF;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;OrderId;ItemCount;_4c_;CavNVC", END_INLINE
    );
//    ns_end_transaction("COM_Bopus_OrderConfirmation", NS_AUTO_STATUS);

//***********************************SSR/CSR Handling**************************//
    if((!strcmp(ns_eval_string("{OrderNoSP1}"),""))){
    ns_end_transaction_as("COM_Bopus_OrderConfirmation", NS_AUTO_STATUS, "COM_Bopus_OrderConfirmation_CSR");}
    else {
    ns_end_transaction_as("COM_Bopus_OrderConfirmation", NS_AUTO_STATUS, "COM_Bopus_OrderConfirmation_SSR");
    goto SkipOrderConfirmation;
    }
//********************************************************************************//   
    
    ns_start_transaction("DT_API_Bopus_GC_PO_order_OPTIONS");
    ns_web_url("Bopus_API_GC_PO_order_opt",
        "URL=https://order-api.jcpenney.com/order-api/v1/orders/{OrderIdSP}",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
    );
   ns_end_transaction("DT_API_Bopus_GC_PO_order_OPTIONS", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("DT_API_Bopus_GC_PO_order_GET");
    ns_web_url ("Bopus_API_GC_PO_order",
        //"URL=https://order-api.jcpenney.com/order-api/v1/orders/C16034363269",
        "URL=https://order-api.jcpenney.com/order-api/v1/orders/{OrderIdSP}",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1064647855/?value=17.60&label=i_tvCLXclwIQr_nU-wM&guid=ON&script=0&ctc_id=CAIVAgAAAB0CAAAA&ct_cookie_present=false&convclickts=0&ocp_id=LDVWWbfVK8urogPBgKHABw&random=40076975", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=id;IDE;yoda-checkout", END_INLINE,
            "URL=https://tracking.deepsearch.adlucent.com/adl.js", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://static.criteo.net/js/ld/ld.js", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=4002289&Ver=2&mid=72762192-18d1-9415-5be7-04d26ec0587f&evt=pageLoad&sid=6c95fa35-0&lt=44590&pi=-1292315712&lg=en-us&r=https%3A%2F%2Fm.jcpenney.com%2Fcart%2Fsignin&p=https%3A%2F%2Fm.jcpenney.com%2Fcheckout%2Foc&rn=203204", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=MUID;MR;MUIDB;yoda-checkout", END_INLINE
    );

    ns_end_transaction("DT_API_Bopus_GC_PO_order_GET", NS_AUTO_STATUS); 
    SkipOrderConfirmation:
    ns_end_transaction("COM_BOPUS_Guest_SubmitOrder", NS_AUTO_STATUS);
    ns_end_transaction("Dotcom_BOPUS_SubmitOrder", NS_AUTO_STATUS);
    ns_end_transaction("Dotcom_SubmitOrder", NS_AUTO_STATUS);
    ns_end_transaction("TotalSubmitOrder", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_Bopus_GC_stores_OPTIONS");
    ns_web_url ("API_Bopus_GC_stores1",
        "URL=https://browse-api.jcpenney.com/v1//stores/{StoreIDSP}",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Accept-Language:en-us",
        "Snapshot=webpage_1499506883086.png",
        INLINE_URLS,
            "URL=https://edge1.certona.net/cd/c50f7c7c/jcpenney.com/scripts/resonance.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/jcp-plcc.svg", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;mp_jcpenney_mixpanel;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;_uetsid;s_ptc;s_cc;_ga;_gid;LPVID;LPSID-58507821;LPCKEY-58507821;jcpvid;_gat;c17;v53;s_sq;CavSF;OrderId;_4c_;CavNVC;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;OrderSource;XSessionId", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/DP1106201520405599C", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://netvision.cavisson.com/nv/JCPenney/cav_nv.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://lptag.liveperson.net/tag/tag.js?site=58507821", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("DT_API_Bopus_GC_stores_OPTIONS", NS_AUTO_STATUS);
  
    ns_start_transaction("DT_API_Bopus_GC_stores_GET");
    ns_web_url ("API_Bopus_GC_stores",
        "URL=https://browse-api.jcpenney.com/v1//stores/{StoreIDSP}",
        "HEADER=Accept-Language:en-us",
        "Snapshot=webpage_1499506883086.png",
        INLINE_URLS,
            "URL=https://edge1.certona.net/cd/c50f7c7c/jcpenney.com/scripts/resonance.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/jcp-plcc.svg", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;mp_jcpenney_mixpanel;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;_uetsid;s_ptc;s_cc;_ga;_gid;LPVID;LPSID-58507821;LPCKEY-58507821;jcpvid;_gat;c17;v53;s_sq;CavSF;OrderId;_4c_;CavNVC;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;OrderSource;XSessionId", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/DP1106201520405599C", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://netvision.cavisson.com/nv/JCPenney/cav_nv.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://lptag.liveperson.net/tag/tag.js?site=58507821", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("DT_API_Bopus_GC_stores_GET", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_Bopus_GC_SiteWidePromo_OPTIONS");
    	ns_web_url ("DT_API_Bopus_GC_SiteWidePromo1",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/checkout/oc",
        "METHOD=OPTIONS",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
    );
    ns_end_transaction("DT_API_Bopus_GC_SiteWidePromo_OPTIONS",NS_AUTO_STATUS);

    ns_start_transaction("DT_API_Bopus_GC_SiteWidePromo_GET");
    	ns_web_url ("DT_API_Bopus_GC_SiteWidePromo",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/checkout/oc",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
    );
    ns_end_transaction("DT_API_Bopus_GC_SiteWidePromo_GET",NS_AUTO_STATUS);
	
//	ns_start_transaction("DT_API_Bopus_GC_ContentOnline_GET");
//    ns_web_url ("API_Bopus_GC_ContentOnline",
//        "URL=https://www.jcpenney.com/v2/content/pg40071600006/online/S1",
//        "HEADER=X-Requested-With:XMLHttpRequest",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//        INLINE_URLS,
//            "URL=https://www.jcpenney.com/dotcom/jsp/search/suggest.jsp?term=GE%20dray", "HEADER=X-Requested-With:XMLHttpRequest", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;SyndicateSiteRedirectHost;DPSessionTimeOutInterval;cmTPSet;previousUrlCookie;x-apm-brtm-geo;DP_USER_FAVCOUNT;rr_rcs;x-apm-brtm-bt-p;x-apm-brtm-bt-pv;x-apm-brtm-bt-url;WMRUMC;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;lastReferredSource;firstVisitedDate;referredSources;__gads;x-apm-brtm-response-bt-id", "PreSnapshot=webpage_1449828292249.png", "Snapshot=webpage_1449828292890.png", END_INLINE,
//            "URL=https://www.jcpenney.com/dotcom/jsp/search/suggest.jsp?term=GE%20drayer", "HEADER=X-Requested-With:XMLHttpRequest", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;SyndicateSiteRedirectHost;DPSessionTimeOutInterval;cmTPSet;previousUrlCookie;x-apm-brtm-geo;DP_USER_FAVCOUNT;rr_rcs;x-apm-brtm-bt-p;x-apm-brtm-bt-pv;x-apm-brtm-bt-url;WMRUMC;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;lastReferredSource;firstVisitedDate;referredSources;__gads;x-apm-brtm-response-bt-id", "PreSnapshot=webpage_1449828292890.png", "Snapshot=webpage_1449828294131.png",             END_INLINE,
//            "URL=https://www.jcpenney.com/dotcom/jsp/search/suggest.jsp?term=GE%20dr", "HEADER=X-Requested-With:XMLHttpRequest", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;SyndicateSiteRedirectHost;DPSessionTimeOutInterval;cmTPSet;previousUrlCookie;x-apm-brtm-geo;DP_USER_FAVCOUNT;rr_rcs;x-apm-brtm-bt-p;x-apm-brtm-bt-pv;x-apm-brtm-bt-url;WMRUMC;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;lastReferredSource;firstVisitedDate;referredSources;__gads;x-apm-brtm-response-bt-id", "PreSnapshot=webpage_1449828294131.png", "Snapshot=webpage_1449828295287.png", END_INLINE,
//            "URL=https://www.jcpenney.com/dotcom/jsp/search/suggest.jsp?term=GE%20dryer", "HEADER=X-Requested-With:XMLHttpRequest", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=x-apm-brtm-response-bt-page;DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;SyndicateSiteRedirectHost;DPSessionTimeOutInterval;cmTPSet;previousUrlCookie;x-apm-brtm-geo;rr_rcs;x-apm-brtm-bt-p;x-apm-brtm-bt-pv;x-apm-brtm-bt-url;WMRUMC;__gads;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;lastReferredSource;firstVisitedDate;referredSources;DP_USER_FAVCOUNT;x-apm-brtm-response-bt;x-apm-brtm-response-bt-id", "PreSnapshot=webpage_1449828297481.png", "Snapshot=webpage_1449828297767.png",             END_INLINE,
//            "URL=https://www.jcpenney.com/dotcom/jsp/search/suggest.jsp?term=GE%20dr", END_INLINE
//    );
//	ns_end_transaction("DT_API_Bopus_GC_ContentOnline_GET", NS_AUTO_STATUS);
  
  
//	ns_start_transaction("DT_Bopus_GC_ProductSummaries_GET");
//    ns_web_url ("API_Bopus_GC_filterContent",
//        "URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-summaries-aggregator?ppId={RRPricePPIDFP}",
//        "HEADER=Accept-Language:en-us",
//
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
//	ns_end_transaction("DT_Bopus_GC_ProductSummaries_GET", NS_AUTO_STATUS);
    ns_page_think_time(0);

   //********************* To Save Order No *********************//
     char orderno [128 + 1]="";
     snprintf(orderno,128,"%s",ns_eval_string("{OrderNoSP1}"));
     ns_save_data_eval("/home/netstorm/work/data/JCPenney/OrderDetail/Bopus/COM_BopusGuestOrderId.txt", NS_APPEND_FILE, orderno);


}
