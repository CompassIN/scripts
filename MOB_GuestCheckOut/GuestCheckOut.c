/*-----------------------------------------------------------------------------
    Name:GuestCheckOut
    Recorded By: netstorm
    Date of recording: 06/12/2017 01:44:58
    Flow details:
    Build details: 4.1.7 (build# 63)
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
#include "Util.c"
void GuestCheckOut()
{
  
  int Exituser = ns_get_random_number_int(1,100);
// ************************************* Guest Checkout Starts ***************************************************//    
   
//    ns_start_transaction("MOB_InitiateCheckOut");
//    ns_web_url("MB_API_GC_Cart",
//        "URL=https://m.jcpenney.com/cart",
//        "HEADER=X-Auto-Login:true",
//        "HEADER=Accept-Language:en-us",      
////      "HEADER=DPCluster:{DPClusterId}",
////		"HEADER=X-DPOrder:{DPOrderId}",
////		"HEADER=DPInstance:{DPInstanceId}",
//		"COOKIE=DPCluster;yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;jcp.ab.test;clientTestPool1;recentSearchData;NotValidCookie;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;c13;pn;testVersion;DPJSESSIONID;DPSecureCookie;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;testpool;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;c17;v53;s_ptc;s_cc;CavSF;CavNVC;mp_jcpenney_mixpanel;s_sq;DPUserTracking;jcpvid;DPSessionTimeOutInterval;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier",
//        "PreSnapshot=webpage_1498123344109.png",
//        "Snapshot=webpage_1498123342796.png"
//    );
//	ns_end_transaction("MOB_InitiateCheckOut",NS_AUTO_STATUS);
//    ns_page_think_time(0);
    
    ns_start_transaction("MOB_Guest_CheckOut");
    ns_start_transaction("MB_API_GC_draftorder_OPTIONS");
    ns_web_url ("MB_API_GC_draftorder1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=OPTIONS",
        "HEADER=accept:application/vnd+jcpenney.draft-order+json",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-command",
        "HEADER=Access-Control-Request-Method:POST",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
       // "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;DPSecureCookie;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        "PreSnapshot=webpage_1497249344384.png",
        "Snapshot=webpage_1497249345297.png",
    	    INLINE_URLS,
            "URL=https://sp.analytics.yahoo.com/sp.pl?a=10000&jsonp=YAHOO.ywa.I13N.handleJSONResponse&.yp=25984&f=https%3A%2F%2Fm.jcpenney.com%2Fcart&enc=UTF-8", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=B;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_GC_draftorder_OPTIONS", NS_AUTO_STATUS);

    //ns_web_add_auto_header("customerVidForPerfTestOrder", "false", 0);
    ns_start_transaction("MB_API_GC_draftorder_POST");
    ns_web_url ("MB_API_GC_draftorder2",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=POST",
        "HEADER=accept:application/vnd+jcpenney.draft-order+json",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=x-command:initiate-checkout",
        "HEADER=X-Client-Id:Basic amNwLnJ3ZG06QVVndFRydFc5cg",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
//        BODY_BEGIN,
//            "{}",
//        BODY_END,
        INLINE_URLS,
            "URL=https://sp.analytics.yahoo.com/sp.pl?a=10000&jsonp=YAHOO.ywa.I13N.handleJSONResponse&.yp=25984&f=https%3A%2F%2Fm.jcpenney.com%2Fcart&enc=UTF-8", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=B;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_GC_draftorder_POST", NS_AUTO_STATUS);
    
    
    ns_start_transaction("MOB_checkout");
    ns_web_url ("checkout",
        "URL=https://m.jcpenney.com/checkout",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=X-Auto-Login:true",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;DPJSESSIONID;recentSearchData;c13;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;c17;v53;s_ptc;s_cc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;s_sq;CavNV;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNVC;_4c_",
        "PreSnapshot=webpage_1497249345304.png",
        "Snapshot=webpage_1497249353121.png",
        INLINE_URLS,
            "URL=https://sp.analytics.yahoo.com/sp.pl?a=10000&jsonp=YAHOO.ywa.I13N.handleJSONResponse&.yp=25984&f=https%3A%2F%2Fm.jcpenney.com%2Fcart&enc=UTF-8", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=B;DPCluster;Yoda-checkout", END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=4002289&Ver=2&mid=dbf658d6-87ac-2cbb-1f98-0a3d47c4fa20&evt=pageLoad&sid=e6c9387a-0&lt=11588&pi=-1292315712&lg=en-us&p=https%3A%2F%2Fm.jcpenney.com%2Fcart&r=&rn=601632", END_INLINE,
            "URL=https://ct.pinterest.com/v3/?event=PageVisit&tid=2617891297714&ad=%7B%22loc%22%3A%22https%3A%2F%2Fm.jcpenney.com%2Fcart%2Fsignin%22%2C%22ref%22%3A%22%22%2C%22if%22%3Afalse%2C%22sh%22%3A0%2C%22sw%22%3A0%7D&cb=1497249323140", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/css/styles.css?v=20170610050015", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;DPJSESSIONID;recentSearchData;c13;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;c17;v53;s_ptc;s_cc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;s_sq;CavNV;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNVC;_4c_", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/jc-penney.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;DPJSESSIONID;recentSearchData;c13;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;c17;v53;s_ptc;s_cc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;s_sq;CavNV;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNVC;_4c_", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/phone.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;DPJSESSIONID;recentSearchData;c13;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;c17;v53;s_ptc;s_cc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;s_sq;CavNV;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNVC;_4c_", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/chat-fill.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;DPJSESSIONID;recentSearchData;c13;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;c17;v53;s_ptc;s_cc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;s_sq;CavNV;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNVC;_4c_", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/norton-secured-seal.png", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;DPJSESSIONID;recentSearchData;c13;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;c17;v53;s_ptc;s_cc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;s_sq;CavNV;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNVC;_4c_", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/scripts/vendor.js?v=20170610050015", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;DPJSESSIONID;recentSearchData;c13;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;c17;v53;s_ptc;s_cc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;s_sq;CavNV;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNVC;_4c_", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/scripts/app.js?v=20170610050015", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;DPJSESSIONID;recentSearchData;c13;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;c17;v53;s_ptc;s_cc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;s_sq;CavNV;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNVC;_4c_", END_INLINE,
            "URL=https://code.jquery.com/jquery-3.1.1.slim.min.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/Bootstrap.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
//    ns_end_transaction("MOB_checkout", NS_AUTO_STATUS);
    
//****************************************SSR/CSR Handling************************//
//    if((!strcmp(ns_eval_string("{CheckoutRenderingSP}"),"false"))){
//    ns_end_transaction_as("MOB_checkout", NS_AUTO_STATUS, "MOB_checkout_CSR");}
//    else if((!strcmp(ns_eval_string("{CheckoutRenderingSP}"),"true"))){
//    ns_end_transaction_as("MOB_checkout", NS_AUTO_STATUS, "MOB_checkout_SSR");
//    goto SkipDraftOrder;
//    }
//    else {
//    ns_end_transaction_as("MOB_checkout", NS_AUTO_STATUS, "MOB_checkout");}
//************************************************************************************//
        
//****************************************SSR/CSR Handling************************//
    if((!strcmp(ns_eval_string("{GuestGroupIdSP}"),""))){
    ns_end_transaction_as("MOB_checkout", NS_AUTO_STATUS, "MOB_checkout_CSR");}
    else {
    ns_end_transaction_as("MOB_checkout", NS_AUTO_STATUS, "MOB_checkout_SSR");
    goto SkipDraftOrder;
    }
 
//************************************************************************************//
   
	ns_start_transaction("MB_API_GC_draftorder_OPTIONS1");
    ns_web_url("MB_API_GC_draftorder4",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&isGiftRegistry=false&initGetDraftOrder=false&expand=status%2Cdelivery",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&isGiftRegistry=false&initGetDraftOrder=false&expand=status",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-command",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_GC_draftorder_OPTIONS1", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_GC_draftorder_GET");
    ns_web_url("MB_API_GC_draftorder3",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&isGiftRegistry=false&initGetDraftOrder=false&expand=status%2Cdelivery",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&isGiftRegistry=false&initGetDraftOrder=false&expand=status",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_GC_draftorder_GET", NS_AUTO_STATUS);
    
    SkipDraftOrder:
    
    ns_end_transaction("MOB_Guest_CheckOut", NS_AUTO_STATUS);
    ns_page_think_time(0);

    
  //   Fill Shipping Address
//     Continue from shipping Address
   ns_start_transaction("MOB_Guest_ShippingAddress");
    ns_start_transaction("MB_API_GC_Zipcode_GET");
    ns_web_url("MB_API_GC_Zipcode",
        "URL=https://account-api.jcpenney.com/v1/zipCodes/{ZipCodeFP}",
       // "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
       // "HEADER=Accept-Version:2.1",
//      "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us"
    );
    ns_end_transaction("MB_API_GC_Zipcode_GET", NS_AUTO_STATUS);
    
    
    ns_start_transaction("MB_API_GC_deliverygroup_OPTIONS");
    ns_web_url("MB_API_GC_deliverygroups1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/delivery/groups/{GuestGroupIdSP}",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:PUT",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=X-Auto-Login:true",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us"
    );

    ns_end_transaction("MB_API_GC_deliverygroup_OPTIONS", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_GC_deliverygroups_PUT");
    ns_web_url ("MB_API_GC_deliverygroups2",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/delivery/groups/{GuestGroupIdSP}",
        "METHOD=PUT",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPSecureCookie;_ga;_gid;_uetsid;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;LPVID;LPSID-58507821;LPCKEY-58507821;_4c_;Yoda-checkout",
        "PreSnapshot=webpage_1497249623979.png",
        "Snapshot=webpage_1497249641384.png",
        //"{"address":{"lineOne":"83  DRAKEFORD AVE","city":"northbabylon","state":"NY","country":"US","phone":"( 219 ) 623 - 6808","zip":"11703","firstName":"test","lastName":"Load","id":"sg6546150060"},"instructions":[{}],"type":"HOME"}",
        //"{"address":{"lineOne":"{AddressFP}","city":"{CityFP}","state":"{StateFP}","country":"US","phone":"{PhonenoFP}","zip":"{ZipCodeFP}","firstName":"{FirstNameFP}","lastName":"{LastNameFP}","id":"{GuestGroupIdSP}"},"instructions":[{}],"type":"HOME"}",
       //{"address":{"id":"sg6579333956","lineOne":"6035  HIGHLAND PL","city":"West New York","state":"NE","country":"US","phone":"9999975245","zip":"07093","firstName":"load","lastName":"test"},"instructions":[{}],"type":"HOME"}
        BODY_BEGIN,
            "{"address":{"lineOne":"{AddressFP}","city":"{GuestCitySP}","state":"{GuestStateSP}","country":"US","phone":"{PhoneNoFP}","zip":"{ZipCodeFP}","firstName":"{FirstNameFP}","lastName":"{LastNameFP}","id":"{GuestGroupIdSP}"},"instructions":[{}],"type":"HOME"}",
        BODY_END
    );

    ns_end_transaction("MB_API_GC_deliverygroups_PUT", NS_AUTO_STATUS);
    
	    ns_start_transaction("MB_API_GC_ServiceLevels_OPTIONS");
    ns_web_url("MB_API_GC_ServiceLevels1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status%2Cdelivery&origin=shipping",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us"
    );

    ns_end_transaction("MB_API_GC_ServiceLevels_OPTIONS", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_GC_ServiceLevels_GET");
    ns_web_url("MB_API_GC_ServiceLevels2",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status%2Cdelivery&origin=shipping",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status",
         "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPSecureCookie;_ga;_gid;_uetsid;DPUserTracking;testpool;DPSessionTimeOutInterval;LPVID;LPSID-58507821;LPCKEY-58507821;_4c_;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;Yoda-checkout",
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=6mikaxJUSUa1KUnoqJN3gQ&cb=lpCb67940x33432&t=ip&ts=1497249630401&pid=9328124919&tid=7196377331&vid=Y5MjAzNzg0ZDM2MWFmYTk4", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=6mikaxJUSUa1KUnoqJN3gQ&cb=lpCb34649x70495&t=ip&ts=1497249640647&pid=9328124919&tid=7196377331&vid=Y5MjAzNzg0ZDM2MWFmYTk4", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    
    ns_end_transaction("MB_API_GC_ServiceLevels_GET", NS_AUTO_STATUS);
    ns_end_transaction("MOB_Guest_ShippingAddress", NS_AUTO_STATUS);
     ns_page_think_time(0);
     
     //Continue to Payment 
 

     //Page Auto splitted for Method = PUT
    ns_start_transaction("MOB_Guest_ShippingMethod");  
    ns_start_transaction("MB_API_GC_SM_IncludeServiceLevels_OPTIONS");
    ns_web_url("MB_API_GC_SM_ServiceLevels1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status%2Cdelivery%2Cbilling&origin=billing",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status",
        "HEADER=Access-Control-Request-Headers:authorization,content-type",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
    );
    ns_end_transaction("MB_API_GC_SM_IncludeServiceLevels_OPTIONS", NS_AUTO_STATUS);   
       
    ns_start_transaction("MB_API_GC_SM_IncludeServiceLevels_GET");
    ns_web_url("MB_API_GC_SM_ServiceLevels",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status%2Cdelivery%2Cbilling&origin=billing",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
    );
    ns_end_transaction("MB_API_GC_SM_IncludeServiceLevels_GET", NS_AUTO_STATUS);  
    
	    ns_start_transaction("MB_API_GC_SM_draftorder_OPTIONS");
    	ns_web_url("MB_API_GC_SM_draftorder1",
      	"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&includeServiceLevels=true",
      	//"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
      	"METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Headers:authorization,content-type",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
    );
    ns_end_transaction("MB_API_GC_SM_draftorder_OPTIONS", NS_AUTO_STATUS);
	   
    ns_start_transaction("MB_API_GC_SM_draftorder_GET");
    ns_web_url("MB_API_GC_SM_draftorder",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&includeServiceLevels=true",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
    );
    ns_end_transaction("MB_API_GC_SM_draftorder_GET", NS_AUTO_STATUS); 
    ns_end_transaction("MOB_Guest_ShippingMethod", NS_AUTO_STATUS);
    ns_page_think_time(0);

//    if(Exituser <= 27){
//    	 ns_start_transaction("MOB_AbandonmentAtOrderReview");
//    ns_end_transaction("MOB_AbandonmentAtOrderReview", NS_AUTO_STATUS);
//    	ns_exit_session();
//    }    

	//  Click on Review Order
	ns_start_transaction("MOB_Guest_PaymentInfo");
	ns_start_transaction("MB_API_GC_contactmethods_OPTIONS");
    	ns_web_url("MB_API_GC_contactmethods1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/contact-methods",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us"
    );
    ns_end_transaction("MB_API_GC_contactmethods_OPTIONS", NS_AUTO_STATUS);
 	
    ns_start_transaction("MB_API_GC_contactmethods_POST");
    ns_web_url ("MB_API_GC_contactmethods2",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/contact-methods",
        "METHOD=POST",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPSecureCookie;_ga;_gid;_uetsid;LPVID;LPSID-58507821;LPCKEY-58507821;_4c_;DPInstance;DPUserTracking;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;Yoda-checkout",
        "PreSnapshot=webpage_1497249806931.png",
        "Snapshot=webpage_1497249807923.png",
        BODY_BEGIN,
            "{"type":"EMAIL","purpose":"TRANSACTIONAL","value":"{GuestEmailIdFP}"}",
        BODY_END
    );

    ns_end_transaction("MB_API_GC_contactmethods_POST", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_GC_creditcards_OPTIONS");
    ns_web_url("MB_API_GC_creditcards1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/credit-cards",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us"
    );
    ns_end_transaction("MB_API_GC_creditcards_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_GC_creditcards_POST");
    ns_web_url ("MB_API_GC_creditcards2",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/credit-cards",
        "METHOD=POST",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPSecureCookie;_ga;_gid;_uetsid;LPVID;LPSID-58507821;LPCKEY-58507821;_4c_;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;Yoda-checkout",
        "REDIRECT=YES",
        "LOCATION=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order/billing/credit-cards/pg6400110055",
        "PreSnapshot=webpage_1497249807923.png",
        "Snapshot=webpage_1497249813309.png",
        //"{"type":"JCP","number":"88888888888","cvv":"123","address":{"city":"northbabylon","country":"US","firstName":"test","lastName":"Load","lineOne":"83  DRAKEFORD AVE","phone":"( 219 ) 623 - 6808","state":"NY","zip":"11703"}}"
        //"{"type":"JCP","number":"{CardnoFP}","cvv":"123","address":{"city":"{CitySP}","country":"US","firstName":"{FirstNameFP}","lastName":"{LastNameFP}","lineOne":"{AddressFP}","phone":"{PhoneNoFP}","state":"{StateSP}","zip":"{ZipCodeFP}"}}",
        //{"address":{"city":"PLANO","country":"US","firstName":"Kalyani","lastName":"Patki","lineOne":"6820 PRESTON RD APT 1201","phone":"(469) 714-1235","state":"TX","zip":"75024"},"type":"JCP","cvv":"123","number":"88888888888"}
        BODY_BEGIN,
            "{"address":{"city":"{GuestCitySP}","country":"US","firstName":"{FirstNameFP}","lastName":"{LastNameFP}","lineOne":"{AddressFP}","phone":"{PhoneNoFP}","state":"{GuestStateSP}","zip":"{ZipCodeFP}"},"type":"JCP","cvv":"123","number":"{CardnoFP}"}",
        BODY_END
    );
    ns_end_transaction("MB_API_GC_creditcards_POST", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_GC_RO_draftorderbilling_OPTIONS");
    	ns_web_url("MB_API_GC_Financing1",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/credit-cards/{CCIdSP}/financing?cardId={CCIdSP}",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=billing&origin=billing",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Headers:authorization,content-type",
        "HEADER=Access-Control-Request-Method:GET",
      	//"HEADER=DPCluster:{DPClusterId}",
		//"HEADER=X-DPOrder:{DPOrderId}",
		//"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_GC_RO_draftorderbilling_OPTIONS", NS_AUTO_STATUS);
          
    ns_start_transaction("MB_API_GC_RO_draftorderbilling_GET");
    ns_web_url("MB_API_GC_Financing",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/credit-cards/{CCIdSP}/financing?cardId={CCIdSP}",
         "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=billing&origin=billing",
        "HEADER=authorization:Bearer {AccessTokenSP}",
       // "HEADER=X-Auto-Login:true",
        //"HEADER=DPCluster:{DPClusterId}",
		//"HEADER=X-DPOrder:{DPOrderId}",
		//"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_GC_RO_draftorderbilling_GET", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_GC_RO_draftorder_OPTIONS");
    	ns_web_url("MB_API_GC_Payment_draftorder1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&origin=billing&includeServiceLevels=true",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Headers:authorization,content-type",
        "HEADER=Access-Control-Request-Method:GET",
//      "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_GC_RO_draftorder_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_GC_RO_draftorder_GET");
    ns_web_url("MB_API_GC_Payment_draftorder",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&origin=billing&includeServiceLevels=true",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
//       "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_GC_RO_draftorder_GET", NS_AUTO_STATUS);
    ns_end_transaction("MOB_Guest_PaymentInfo", NS_AUTO_STATUS);
    ns_page_think_time(0);
    
//       char *EtagId = ns_get_cookie_val_ex("X-ETag", NULL, NULL); 
//       if (EtagId == NULL)
//             {
//    	        ns_start_transaction("MOB_EtagCookieNotSetByServer_Guest_CheckOut");
//    	        ns_end_transaction("MOB_EtagCookieNotSetByServer_Guest_CheckOut",NS_AUTO_STATUS);
//    	        ns_exit_session();
//              }
//         else{
//         	     ns_save_string(EtagId, "EtagIdDP");  
//             }
    
    
    
    if(Exituser <= 53){
    	 ns_start_transaction("MOB_AbandonmentAtOrderReview");
         ns_end_transaction("MOB_AbandonmentAtOrderReview", NS_AUTO_STATUS);
    	ns_exit_session();
    }
    
   
    ns_start_transaction("TotalSubmitOrder");
    ns_start_transaction("MOB_SubmitOrder");
    ns_start_transaction("MOB_Guest_SubmitOrder");
   
	ns_start_transaction("MB_API_GC_PO_draftorder_OPTIONS");
    	ns_web_url("MB_API_GC_PO_draftorder1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-command",
        "HEADER=Access-Control-Request-Method:POST",
//      "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_GC_PO_draftorder_OPTIONS", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_GC_PO_draftorder_POST");
    ns_web_url ("MB_API_GC_PO_draftorder2",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=POST",
        //"HEADER=accept:application/vnd+jcpenney.draft-order+json",
        "HEADER=Accept: application/json",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=x-command:submit",
        "HEADER=X-Auto-Login:true",
        "HEADER=X-Client-Id:Basic amNwLnJ3ZG06QVVndFRydFc5cg",
//      "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
		"HEADER=X-ETag: {EtagIdSP}.Disabled",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
//        BODY_BEGIN,
//            "{}",
//        BODY_END,
        INLINE_URLS,
            "URL=https://m.jcpenney.com/v4/categories/root?expand=true&fields=groups.categories.id,groups.categories.name,groups.categories.href,groups.categories.links,groups.categories.image,groups.categories.leaf", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;DPJSESSIONID;recentSearchData;c13;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;yoda-checkout;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;DPSecureCookie;_ga;_gid;_uetsid;s_ptc;s_cc;LPVID;LPSID-58507821;LPCKEY-58507821;c17;v53;s_sq;_4c_;CavSF;CavNVC;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;OrderId", END_INLINE,
            "URL=https://code.jquery.com/jquery-3.1.1.slim.min.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://edge1.certona.net/cd/c50f7c7c/jcpenney.com/scripts/resonance.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/google-play.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;DPJSESSIONID;recentSearchData;c13;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;yoda-checkout;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;DPSecureCookie;_ga;_gid;_uetsid;s_ptc;s_cc;LPVID;LPSID-58507821;LPCKEY-58507821;c17;v53;s_sq;_4c_;CavSF;CavNVC;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;OrderId", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/pl-credit-card.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;DPJSESSIONID;recentSearchData;c13;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;yoda-checkout;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;DPSecureCookie;_ga;_gid;_uetsid;s_ptc;s_cc;LPVID;LPSID-58507821;LPCKEY-58507821;c17;v53;s_sq;_4c_;CavSF;CavNVC;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;OrderId", END_INLINE,
            "URL=https://www.res-x.com/ws/r2/Resonance.aspx?appid=jcpenney01&tk=557392045131057&ss=156133258179673&sg=1&pg=res17061201724427073521240&vr=5.5x&bx=true&sc=orderconfirm1_rr&ev=purchase&ei=17b99ee&qty=1&pr=59.5&tt=39.99&cu=&tr=2017163510007605&no=50&ccb=certonaRecommendations&ur=https%3A%2F%2Fm.jcpenney.com%2Fcheckout%2Foc&plk=&rf=https%3A%2F%2Fm.jcpenney.com%2Fcart%2Fsignin", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://netvision.cavisson.com/test_rum?s=000466925896863842559&p=0&op=timing&pi=7&pid=21&d=1|0|-1|-1|-1|-1|-1|-1|-1|-1|-1|-1|-1|-1|306|306|21|-1|0|-1|https%3A%2F%2Fm.jcpenney.com%2Fcart%2Fsignin|https%3A%2F%2Fm.jcpenney.com%2Fcheckout%2Foc|m.jcpenney.com|DPCluster%3DL1%3B%20Yoda-checkout%3Dtrue%3B%20Yoda-SID%3Dd263e462-4108-4ca7-9aa8-fc0ee33f1274%3B%20BNSOrigin%3DA%3B%20BNSPrevPercentage%3D100%3B%20ssl%3D0%3B%20NotValidCookie%3D1%3B%20marketing%3Ddirect%3B%20TLTSID%3DF5IZXIZG8VRAXQ0UD44AANS3L5HJ54LD%3B%20cmTPSet%3DY%3B%20AMCVS_CEEB350F5746CDE97F000101%2540AdobeOrg%3D1%3B%20AMCV_CEEB350F5746CDE97F000101%2540AdobeOrg%3D-1176276602%25PIPE%25MCMID%25PIPE%2552012190610124911741697237201225140975%25PIPE%25MCAAMLH-1497853855%25PIPE%259%25PIPE%25MCAAMB-1497853855%25PIPE%25cIBAx_aQzFEHcPoEv0GwcQ%25PIPE%25MCOPTOUT-1497256255s%25PIPE%25NONE%25PIPE%25MCAID%25PIPE%25NONE%3B%20jcp.ab.test%3D%3B%20clientTestPool1%3Drwd%3B%20recentSearchData%3D%255B%2522jeans%2522%255D%3B%20c13%3Djeans%3B%20pn%3D7%3B%20NSPrevPercentage%3D100%3B%20NSOrigin%3DA%3B%20mbox%3Dsession%231497249047726-115921%231497251060%25PIPE%25PC%231497249047726-115921.22_21%231498458800%25PIPE%25check%23true%231497249260%3B%20fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef%3D%22uAqq3gjSqOaMx6G8eQNnNpjxp2EvdsSi%2BAgJr4UMM8E%3D%22%3B%20yoda-checkout%3Dtrue%3B%20CavNV%3D4639893250391469109-50000-108714822421-0-9-0-24155-11-126-348%3B%20DPSecureCookie%3D6f252b5e6ddc841e2f8f8b22ecd72098%3B%20_ga%3DGA1.2.1685050983.1497249055%3B|0|0|-1|-1|-1|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%2010.0%3B%20WOW64)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F56.0.2924.87%20SAFARI%2F537.36|en-us|%5Bobject%20PluginArray%5D|Mozilla|0|PC|56.0|10|50000|1|0|254|%7B-1%7D|-1|-1|%7B-1%7D&lts=108715417&d2=-1|-1|-1|2|100", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_GC_PO_draftorder_POST", NS_AUTO_STATUS);
   
    ns_start_transaction("MOB_OrderConfirmation");
    	ns_web_url("MB_OrderConfirmation",
       // "URL=https://m.jcpenney.com/checkout/oc",
       //"URL=https://m.jcpenney.com/checkout/oc?OrderId=L16298208538",
       "URL=https://m.jcpenney.com/checkout/oc?OrderId={OrderIdSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
    );
 //   ns_end_transaction("MOB_OrderConfirmation", NS_AUTO_STATUS);
  
        //***********************************SSR/CSR Handling**************************//
    if((!strcmp(ns_eval_string("{OrderNoSP1}"),""))){
    ns_end_transaction_as("MOB_OrderConfirmation", NS_AUTO_STATUS, "MOB_OrderConfirmation_CSR");}
    else {
    ns_end_transaction_as("MOB_OrderConfirmation", NS_AUTO_STATUS, "MOB_OrderConfirmation_SSR");
    goto SkipOrderConfirmation;
    }
//********************************************************************************//  
   
    ns_start_transaction("MB_API_GC_PO_order_OPTIONS");
    	ns_web_url("MB_API_GC_PO_order1",
        "URL=https://order-api.jcpenney.com/order-api/v1/orders/{OrderIdSP}",
     	"METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Headers:authorization,content-type",
        "HEADER=Access-Control-Request-Method:GET",
//      "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
    );
    ns_end_transaction("MB_API_GC_PO_order_OPTIONS", NS_AUTO_STATUS);
      
    ns_start_transaction("MB_API_GC_PO_order_GET");
    ns_web_url("MB_API_GC_PO_order",
        "URL=https://order-api.jcpenney.com/order-api/v1/orders/{OrderIdSP}",
        //"URL=https://order-api.jcpenney.com/order-api/v1/orders/L16007171595",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
//      "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
    );
    ns_end_transaction("MB_API_GC_PO_order_GET", NS_AUTO_STATUS);
    
    SkipOrderConfirmation:
    
    ns_end_transaction("MOB_Guest_SubmitOrder", NS_AUTO_STATUS);
    ns_end_transaction("MOB_SubmitOrder", NS_AUTO_STATUS);
    ns_end_transaction("TotalSubmitOrder", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_GC_SiteWidePromo_OPTIONS");
    	ns_web_url ("MB_API_GC_SiteWidePromo1",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/checkout/oc",
        "METHOD=OPTIONS",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
    );
    ns_end_transaction("MB_API_GC_SiteWidePromo_OPTIONS",NS_AUTO_STATUS);

    ns_start_transaction("MB_API_GC_SiteWidePromo_GET");
    	ns_web_url ("MB_API_GC_SiteWidePromo",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/checkout/oc",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
    );
    ns_end_transaction("MB_API_GC_SiteWidePromo_GET",NS_AUTO_STATUS);
         
//    ns_start_transaction("MB_API_GC_PO_Online_GET");
//    	ns_web_url("MB_API_GC_PO_Online",
//        "URL=https://m.jcpenney.com/v2/content/pg40071600006/online/S1",
//        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=Accept-Language:en-us",
//        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
//    );
//    ns_end_transaction("MB_API_GC_PO_Online_GET", NS_AUTO_STATUS);

//    ns_start_transaction("MOB_GC_PO_ProductSummaries_GET");
//    ns_web_url("MB_API_GC_PO_FilterContent",
//        "URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-summaries-aggregator?ppId={RootPPIDFP}",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//        INLINE_URLS,
//            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
//    );
//	ns_end_transaction("MOB_GC_PO_ProductSummaries_GET", NS_AUTO_STATUS);
    ns_page_think_time(0);
   
     //********************* To Save Order No *********************//
	get_Orderdetail();
  
}
