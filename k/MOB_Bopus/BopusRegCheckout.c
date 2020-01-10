/*-----------------------------------------------------------------------------
    Name:BopusRegCheckout
    Recorded By: anjali
    Date of recording: 07/08/2017 04:42:22
    Flow details:
    Build details: 4.1.7 (build# 63)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void BopusRegCheckout()
{
    
  int Exituser = ns_get_random_number_int(1,100);

//      ns_start_transaction("MOB_Bopus_InitiateCheckOut");
//      ns_web_url ("API_checkout_cart",
//        "URL=https://m.jcpenney.com/cart",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0;clientTestPool1;akaau",
//        "PreSnapshot=webpage_1467031199481.png",
//        "Snapshot=webpage_1467031200277.png",
//        INLINE_URLS,
//            "URL=http://libs.coremetrics.com/configs/90024642.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://www88.jcpenney.com/cookie-id.js?fn=eluminate2316", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0;clientTestPool1", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1003201417030645M.tif?$department_main$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://m.jcpenney.com/v2.1/products/ens6004030003?fields=prices,images,rating,id,manufacturerAdvertisedPrice,marketingLabel,isNew,name,isPreOrder", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0;clientTestPool1;cmTPSet;akaau;rr_rcs", "PreSnapshot=webpage_1467031203361.png", "Snapshot=webpage_1467031203411.png", END_INLINE
//    );
//    ns_end_transaction("MOB_Bopus_InitiateCheckOut", NS_AUTO_STATUS);
//    ns_page_think_time(0);
    
 /*     char *OrderID = ns_get_cookie_val_ex("DPOrder", NULL, NULL);
       
      if (OrderID == NULL)
           {
    	      ns_start_transaction("MOB_CookieNotSetByServer_Reg_CheckOut");
    	      ns_end_transaction("MOB_CookieNotSetByServer_Reg_CheckOut",NS_AUTO_STATUS);
    	      ns_exit_session();
           }
       else{
       	      ns_save_string(OrderID, "OrderIDDP");
           }

    */
//      char *Instance = ns_get_cookie_val_ex("DPInstance", NULL, NULL);
//      ns_save_string(Instance, "InstanceDP"); 

    ns_start_transaction("MOB_Bopus_Reg_CheckOut");    
    ns_start_transaction("MB_API_Bopus_RC_OuathToken_OPTIONS");    	
    	 ns_web_url("API_RC_OauthToken2",
        "URL=https://account-api.jcpenney.com/v5/oauth2/token",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=DPCluster:{DPClusterId}",
		//"HEADER=X-DPOrder:{OrderIDDP}",
		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        //"HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_RC_OuathToken_OPTIONS", NS_AUTO_STATUS);    
    
    
    ns_start_transaction("MB_API_Bopus_RC_OuathToken_POST");
    ns_web_url ("API_Bopus_RC_OuathToken",
        "URL=https://account-api.jcpenney.com/v5/oauth2/token",
        "METHOD=POST",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "HEADER=DPCluster:{DPClusterId}",
      //  "HEADER=X-DPOrder:{OrderIDDP}",
        "HEADER=DPInstance:{DPInstanceId}",
        "HEADER=X-Origin:Legacy-Adapter",
	    "HEADER=X-Src-Acc-Id:{CustomerIdSP}",
        "HEADER=X-Replace-Bag:true",
        BODY_BEGIN,
           "{"email":"{EmailIdFP}","password":"{PasswordFP}","isXOriginHeaderRequired":true,"xOriginValue":"Legacy-Adapter"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order", "METHOD=OPTIONS", "HEADER=Origin:https://m.jcpenney.com", "HEADER=yoda-checkout:true", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:authorization, content-type, x-client-id, x-command", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_Bopus_RC_OuathToken_POST", NS_AUTO_STATUS);
    
          char AccountIdbuff1[64 + 1]="";
   snprintf(AccountIdbuff1,64,"%s",ns_eval_string("{CustomerIdSP}"));
   ns_add_cookie_val_ex("ACCOUNT_ID", NULL, NULL, AccountIdbuff1);
   
   char AccessTbuff1[1024 + 1]="";
   snprintf(AccessTbuff1,1024,"%s",ns_eval_string("{AccessTokenSP}"));
   ns_add_cookie_val_ex("Access_Token", NULL, NULL, AccessTbuff1);
   
    ns_start_transaction("MB_API_Bopus_RC_draftorder_OPTIONS");    	
    	 ns_web_url("API_Bopus_RC_draftorder6",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        //"HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_RC_draftorder_OPTIONS", NS_AUTO_STATUS);    
    
   // ns_web_add_auto_header("customerVidForPerfTestOrder", "false", 0);
    ns_start_transaction("MB_API_Bopus_RC_draftorder_POST");
    ns_web_url ("API_Bopus_RC_draftorder1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order",
        "METHOD=POST",
        "HEADER=accept:application/vnd+jcpenney.draft-order+json",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Client-Id:Basic amNwLnJ3ZG06QVVndFRydFc5cg",
        "HEADER=x-command:initiate-checkout",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
    );

    ns_end_transaction("MB_API_Bopus_RC_draftorder_POST", NS_AUTO_STATUS);
 

    ns_start_transaction("MOB_Bopus_checkout");
    ns_web_url ("Checkout",
        "URL=https://m.jcpenney.com/checkout",
        "HEADER=yoda-checkout:true",
        "HEADER=Upgrade-Insecure-Requests:1",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;s_sq;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;DPSessionTimeOutInterval;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;_ga;_gid;_gat;c17;v53;s_ptc;s_cc;mp_jcpenney_mixpanel;_uetsid;CavSF;LPVID;LPSID-58507821;LPCKEY-58507821;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNVC;_4c_",
        "PreSnapshot=webpage_1499506786126.png",
        "Snapshot=webpage_1499506788541.png",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-checkout/css/styles.css?v=20170706214825", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;s_sq;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;DPSessionTimeOutInterval;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;_ga;_gid;_gat;c17;v53;s_ptc;s_cc;mp_jcpenney_mixpanel;_uetsid;CavSF;LPVID;LPSID-58507821;LPCKEY-58507821;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNVC;_4c_", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/jc-penney.svg", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;s_sq;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;DPSessionTimeOutInterval;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;_ga;_gid;_gat;c17;v53;s_ptc;s_cc;mp_jcpenney_mixpanel;_uetsid;CavSF;LPVID;LPSID-58507821;LPCKEY-58507821;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNVC;_4c_", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/phone.svg", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;s_sq;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;DPSessionTimeOutInterval;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;_ga;_gid;_gat;c17;v53;s_ptc;s_cc;mp_jcpenney_mixpanel;_uetsid;CavSF;LPVID;LPSID-58507821;LPCKEY-58507821;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNVC;_4c_", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/chat-fill.svg", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;s_sq;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;DPSessionTimeOutInterval;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;_ga;_gid;_gat;c17;v53;s_ptc;s_cc;mp_jcpenney_mixpanel;_uetsid;CavSF;LPVID;LPSID-58507821;LPCKEY-58507821;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNVC;_4c_", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/norton-secured-seal.png", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;s_sq;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;DPSessionTimeOutInterval;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;_ga;_gid;_gat;c17;v53;s_ptc;s_cc;mp_jcpenney_mixpanel;_uetsid;CavSF;LPVID;LPSID-58507821;LPCKEY-58507821;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNVC;_4c_", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/scripts/vendor.js?v=20170706214825", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;s_sq;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;DPSessionTimeOutInterval;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;_ga;_gid;_gat;c17;v53;s_ptc;s_cc;mp_jcpenney_mixpanel;_uetsid;CavSF;LPVID;LPSID-58507821;LPCKEY-58507821;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNVC;_4c_", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/scripts/app.js?v=20170706214825", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;s_sq;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;DPSessionTimeOutInterval;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;_ga;_gid;_gat;c17;v53;s_ptc;s_cc;mp_jcpenney_mixpanel;_uetsid;CavSF;LPVID;LPSID-58507821;LPCKEY-58507821;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNVC;_4c_", END_INLINE,
            "URL=https://code.jquery.com/jquery-3.1.1.slim.min.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/Bootstrap.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order?includeServiceLevels=true&expand=status", "METHOD=OPTIONS", "HEADER=Origin:https://m.jcpenney.com", "HEADER=yoda-checkout:true", "HEADER=Access-Control-Request-Method:GET", "HEADER=Access-Control-Request-Headers:authorization, content-type", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.jcpenney.com/c/components/lib/DeviceFingerPrint/config.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;s_sq;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;DPSessionTimeOutInterval;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;_ga;_gid;_gat;c17;v53;s_ptc;s_cc;mp_jcpenney_mixpanel;_uetsid;CavSF;LPVID;LPSID-58507821;LPCKEY-58507821;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNVC;_4c_", END_INLINE,
            "URL=https://m.jcpenney.com/c/components/lib/DeviceFingerPrint/iovation.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;s_sq;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;DPSessionTimeOutInterval;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;_ga;_gid;_gat;c17;v53;s_ptc;s_cc;mp_jcpenney_mixpanel;_uetsid;CavSF;LPVID;LPSID-58507821;LPCKEY-58507821;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNVC;_4c_", END_INLINE
    );

  //  ns_end_transaction("MOB_Bopus_checkout", NS_AUTO_STATUS);
  
//*****************************************SSR/CSR Handling****************************************//    
//   if((!strcmp(ns_eval_string("{CheckoutRenderingSP}"),"false"))){
//    ns_end_transaction_as("MOB_Bopus_checkout", NS_AUTO_STATUS, "MOB_Bopus_checkout_CSR");}
//    else if((!strcmp(ns_eval_string("{CheckoutRenderingSP}"),"true"))){
//    ns_end_transaction_as("MOB_Bopus_checkout", NS_AUTO_STATUS, "MOB_Bopus_checkout_SSR");
//    goto SkipDraftOrder;
//    }
//    else {
//    ns_end_transaction_as("MOB_Bopus_checkout", NS_AUTO_STATUS, "MOB_Bopus_checkout");}
    
//***************************************************************************************************//    

 //*****************************************SSR/CSR Handling****************************************//    
   if((!strcmp(ns_eval_string("{GroupIdSP}"),""))){
    ns_end_transaction_as("MOB_Bopus_checkout", NS_AUTO_STATUS, "MOB_Bopus_checkout_CSR");}
    else {
    ns_end_transaction_as("MOB_Bopus_checkout", NS_AUTO_STATUS, "MOB_Bopus_checkout_SSR");
    goto SkipDraftOrder;
    }
 
//***************************************************************************************************//   
    

	ns_start_transaction("MB_API_Bopus_RC_draftorder_OPTIONS");    	
    	 ns_web_url("API_Bopus_RC_draftorder5",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&isGiftRegistry=false&initGetDraftOrder=false&expand=status%2Cdelivery%2Cbilling",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        //"HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_RC_draftorder_OPTIONS", NS_AUTO_STATUS); 


    ns_start_transaction("MB_API_Bopus_RC_draftorder_GET");
    ns_web_url ("API_Bopus_RC_draftorder2",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&isGiftRegistry=false&initGetDraftOrder=false&expand=status%2Cdelivery%2Cbilling",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order?includeServiceLevels=true&expand=status",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        //"HEADER=authorization:Bearer eyJhbGciOiJSUzI1NiJ9.eyJpc3MiOiJhcGkuamNwZW5uZXkuY29tIiwiaWF0IjoxNDk5NTA2Nzc4OTYwLCJhdWQiOiJqY3Blbm5leS5jb20iLCJzdWIiOiJyUy1FSWJPUFBKSDdYdXgxN2d1NSIsInV1aWQiOiJlMzhmMzE4OC1lOTNmLTQ4ZGMtYTU0My00YWM2YmJiZTFlZGUiLCJhdXRob3JpdGllcyI6W10sInN0YXRlIjoxLCJjbGllbnQtaXAiOiIxODIuNzEuMTE5LjIxMiIsImV4cCI6MTQ5OTUxMzk3OH0.P19d_fBqxwVdpb0vW-9bcJt3JjTeKWIh_LMLLvCH0k4ijOSuwgdcfc35OnQ2vI4w0HJ-tQVXeT6Mj6cFfRyvIw_d3EtcQCVeiBfYn5pqbvFMayIqNLYftZK5CQc2aopHI8QCsAWT0UBRvAASDakXjsQsrq1l8tWFj7kl6I8O_HffbVEGmCl2gwKjr7dcQ-VEtIeExEEawPiAam7CAvmLJpY74ojMFDWN6CYbQYLqsQjHNtZVUHswk5s_zmKqlCb9ojXnTSrdqPRRwEr1bPhrj8VRz4clFuo76nUpd0KrHgK7LXfMnFh37BE-fFXR4ih4kzCupmAI2hOC37ULBrQcmw",
        "HEADER=Origin:https://m.jcpenney.com",
        "HEADER=yoda-checkout:true",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=ssl;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;clientTestPool1;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;DPSessionTimeOutInterval;_ga;_gid;_gat;mp_jcpenney_mixpanel;_uetsid;LPVID;LPSID-58507821;LPCKEY-58507821;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;_4c_;yoda-checkout",
        "PreSnapshot=webpage_1499506788541.png",
        "Snapshot=webpage_1499506789597.png",
        INLINE_URLS,
            "URL=https://nexus.ensighten.com/jcpenney/prod/serverComponent.php?r=43.98659582366147&ClientID=730&PageID=https%3A%2F%2Fm.jcpenney.com%2Fcheckout", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/13c43a2b654be81df7e48e7dd455cb76.js?conditionId0=324309", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/e8a1cfbc60fb3ede73d6ededaee3202c.js?conditionId0=335310", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/917c49a2004d2d8ef510e0d6f92ed48d.js?conditionId0=346183", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/4c03a229d81a608ef9671cd5de428725.js?conditionId0=422808", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/d4a24a5875e209005b8a62807cf02f62.js?conditionId0=375492&conditionId1=335514", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://account-api.jcpenney.com/v5/accounts/rS-EIbOPPJH7Xux17gu5/rewards-profile?expand=points%2Ccertificates%2Crecentactivity", "METHOD=OPTIONS", "HEADER=Origin:https://m.jcpenney.com", "HEADER=yoda-checkout:true", "HEADER=Access-Control-Request-Method:GET", "HEADER=Access-Control-Request-Headers:accept-version, authorization, content-type", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/DP1106201520405599C", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.jcpenney.com/iojs/5.0.0/dyn_wdp.js?loaderVer=5.0.0&compat=false&tp=true&tp_split=false&fp_static=true&fp_dyn=true&flash=true", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;s_sq;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;_ga;_gid;_gat;c17;v53;s_ptc;s_cc;mp_jcpenney_mixpanel;_uetsid;CavSF;LPVID;LPSID-58507821;LPCKEY-58507821;DP_USER_FAVCOUNT;DP_SFL_PPIDS;CavNVC;_4c_;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE,
            "URL=https://mpsnare.iesnare.com/5.0.0/wdp.js?loaderVer=5.0.0&compat=false&tp=true&tp_split=false&fp_static=true&fp_dyn=true&flash=true", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=io_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;yoda-checkout", END_INLINE,
            "URL=https://netvision.cavisson.com/nv/JCPenney/cav_nv.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://lptag.liveperson.net/tag/tag.js?site=58507821", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_Bopus_RC_draftorder_GET", NS_AUTO_STATUS);
    
	SkipDraftOrder:
 /*      
    ns_start_transaction("MB_API_Bopus_RC_Rewardsprofile_OPTIONS");    	
    	 ns_web_url("API_Bopus_RC_Rewardsprofile1",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/rewards-profile?expand=points%2Ccertificates%2Crecentactivity",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        //"HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_RC_Rewardsprofile_OPTIONS", NS_AUTO_STATUS); 


    ns_start_transaction("MB_API_Bopus_RC_Rewardsprofile_GET");
    ns_web_url ("API_Bopus_RC_Rewardsprofile",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/rewards-profile?expand=points%2Ccertificates%2Crecentactivity",
        //"URL=https://account-api.jcpenney.com/v5/accounts/rS-EIbOPPJH7Xux17gu5/rewards-profile?expand=points%2Ccertificates%2Crecentactivity",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=accept-version:5",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "COOKIE=ssl;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;clientTestPool1;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;_ga;_gid;_gat;mp_jcpenney_mixpanel;_uetsid;LPVID;LPSID-58507821;LPCKEY-58507821;DP_USER_FAVCOUNT;DP_SFL_PPIDS;_4c_;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;yoda-checkout",
        "PreSnapshot=webpage_1499506789597.png",
        "Snapshot=webpage_1499506794154.png",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/iojs/5.0.0/logo.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;s_sq;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;_ga;_gid;_gat;c17;v53;s_ptc;s_cc;mp_jcpenney_mixpanel;_uetsid;CavSF;LPVID;LPSID-58507821;LPCKEY-58507821;DP_USER_FAVCOUNT;DP_SFL_PPIDS;CavNVC;_4c_;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef", END_INLINE,
            "URL=https://mpsnare.iesnare.com/5.0.0/logo.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=io_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;yoda-checkout", END_INLINE,
            "URL=https://netvision.cavisson.com/nv/JCPenney/Mobile/config.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://bat.bing.com/bat.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=MUID;MR;MUIDB;yoda-checkout", END_INLINE,
            "URL=https://gateway.foresee.com/sites/jcpenney/production/gateway.min.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://d2e0sxz09bo7k2.cloudfront.net/attribution.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://a.wishabi.com/track.gif?aid=attrib&goal_id=2&goal_value=1&merchant_id=2207", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=gid;yoda-checkout", END_INLINE,
            "URL=https://s.pinimg.com/ct/core.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://connect.facebook.net/en_US/fbevents.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.google-analytics.com/analytics.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://s.yimg.com/wi/ytc.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://static.ads-twitter.com/uwt.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://netvision.cavisson.com/test_rum?s=000476621927285261262&p=0&op=timing&pi=6&pid=21&d=1|0|-1|18|145|-1|5|29|112|33|0|5181|0|21|5341|2212|21|2212|0|60|https%3A%2F%2Fm.jcpenney.com%2Fcart%2FSignIn|https%3A%2F%2Fm.jcpenney.com%2Fcheckout|m.jcpenney.com|yoda-checkout%3Dtrue%3B%20ssl%3D1%3B%20CavNV%3D4640122093291552796-50000-110972131072-0-9-0-31230-14-153-1616%3B%20marketing%3Ddirect%3B%20AMCVS_CEEB350F5746CDE97F000101%2540AdobeOrg%3D1%3B%20AMCV_CEEB350F5746CDE97F000101%2540AdobeOrg%3D-1176276602%25PIPE%25MCMID%25PIPE%2507183790005432435100747711248291693333%25PIPE%25MCAAMLH-1500111396%25PIPE%253%25PIPE%25MCAAMB-1500111396%25PIPE%25cIBAx_aQzFEHcPoEv0GwcQ%25PIPE%25MCOPTOUT-1499513796s%25PIPE%25NONE%25PIPE%25MCAID%25PIPE%25NONE%3B%20yoda-gallery%3Dfalse%3B%20mbox%3Dsession%234aa72a7bc70640758ffe057153624415%231499508511%25PIPE%25PC%234aa72a7bc70640758ffe057153624415.22_19%231500716251%25PIPE%25check%23true%231499506711%3B%20jcp.ab.test%3D%3B%20clientTestPool1%3Drwd%3B%20jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney%3Djluuid_21221883-7224-4814-8412-321686a2a665%3B%20SDPU_ZIPCACHE%3D%257B%252218052%2522%253A%252240.6572331%252C-75.49855209999998%2522%257D%3B%20PICKUP_STORE_SEARCH%3D18052%3B%20s_sq%3D%255B%255BB%255D%255D%3B%20shoppingBagStore%3D0067%253A18052%3B%20userStoreInfo%3D0067%25PIPE%25Lehigh%2520Valley%2520Mall%25PIPE%252%25PIPE%25false%3B%20NSPrevPercentage%3D0%3B%20NSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20BNSOrigin%3DB%3B|0|0|-1|-1|-1|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%2010.0%3B%20WOW64)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F56.0.2924.87%20SAFARI%2F537.36|en-us|%5Bobject%20PluginArray%5D|Mozilla|0|PC|56.0|10|50000|1|0|0|%7B-1%7D&lts=110972361&d2=-1|-1|-1|2|100", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.feedback.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.survey.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.utils.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.trigger.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://ct.pinterest.com/v3/?event=PageVisit&tid=2617891297714&ad=%7B%22loc%22%3A%22https%3A%2F%2Fm.jcpenney.com%2Fcheckout%22%2C%22ref%22%3A%22https%3A%2F%2Fm.jcpenney.com%2Fcart%2FSignIn%22%2C%22if%22%3Afalse%2C%22sh%22%3A0%2C%22sw%22%3A0%7D&cb=1499506791669", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=4002289&Ver=2&mid=7db0106f-339c-fd42-1f80-7c405ea4abd4&evt=pageLoad&sid=0e70f90f-0&lt=5362&pi=-1292315712&lg=en-us&r=https%3A%2F%2Fm.jcpenney.com%2Fcart%2FSignIn&p=https%3A%2F%2Fm.jcpenney.com%2Fcheckout&rn=458934", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=MUID;MR;MUIDB;yoda-checkout", END_INLINE,
            "URL=https://lptag.liveperson.net/lptag/api/account/58507821/configuration/applications/taglets/.jsonp?df=0&s=mobile-sales-english&b=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s31420709910450?AQB=1&ndh=1&pf=1&t=8%2F6%2F2017%204%3A39%3A51%206%20300&mid=07183790005432435100747711248291693333&aamlh=3&ce=UTF-8&ns=jcpenney&pageName=d%3Acheckout%3Acheckout%20shipping&g=https%3A%2F%2Fm.jcpenney.com%2Fcheckout&r=https%3A%2F%2Fm.jcpenney.com%2Fcart%2FSignIn&cc=USD&ch=checkout&server=DTAPIEXPR1L2J2_12&events=scCheckout%3AL16019753232%2Cevent27%3AL16019753232%2Cevent77%3AL16019753232%2Cevent3%2Cevent70%3D12.00&products=%3Bpp5005142254%3B1%3B12.00%3Bevent27%3D12.00%3Bevar6%3D4565114%7Cevar4%3Dsephora%20collection%20retractable%20waterproof%20eyeliner%7Cevar51%3Dno%20product%20marketing%20label%7Cevar20%3Dregular%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D45651140026%7Cevar35%3Dcongruent%7Cevar41%3Dsame%20day%20pickup&aamb=cIBAx_aQzFEHcPoEv0GwcQ&c1=checkout&v1=D%3Dc1&c6=checkout%3Acheckout%20shipping&c7=http%3A%2F%2Fm.jcpenney.com%2Fcheckout&v7=4%3A39%20AM%7CSaturday&c10=2017%20yoda%20checkout%20DELPHI&c11=checkout&v11=D%3Dc11&c12=release-2.0.71-%3A1.7.0&c15=D%3Dr&v16=D%3DpageName&c17=d%3Acheckout%3Acheckout%20shipping&v17=D%3Dc17&c19=DU-2365957%2CMU-2364233%2CGT-2362732%2CABC-2364628%2CAET-421401%2CAGV-2336264&c20=0&c31=0067%7Clehigh%20valley%20mall%7C2%7Cfalse&v31=D%3Dc31&c33=20244041177&v33=D%3Dc33&v38=L16019753232&c39=no%20type%3Alogged-in&v39=D%3Dc39&v42=standard&c44=desktop&v44=D%3Dc44&c45=no%20rewards%20account&v45=D%3Dc45&c46=rS-EIbOPPJH7Xux17gu5&v46=D%3Dc46&c47=active%7Ccredit&v47=D%3Dc47&v48=D%3Dmid&v49=no&v50=%2B1&v53=checkout&v55=2017-07-08&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.google-analytics.com/collect?v=1&_v=j56&a=583180434&t=pageview&_s=1&dl=https%3A%2F%2Fm.jcpenney.com%2Fcheckout&ul=en-us&de=UTF-8&sd=0-bit&sr=0x0&vp=1349x590&je=0&_u=QACAAAABI~&jid=&gjid=&cid=893756951.1499506596&tid=UA-43509801-1&_gid=905544133.1499506596&cd13=Account%3A%20Logged%20In&z=339161197", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.frame.html?d=m.jcpenney.com&_cv_=19.3.6&_vt_=b49y123&uid=893756951.1499506596", "HEADER=yoda-checkout:true", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.gateway.js", "HEADER=Origin:https://gateway.foresee.com", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.frame.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.utils.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/templates/feedback/default/fs.feedback.css", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/templates/feedback/default/badge___html.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/templates/feedback/default/serviceunavailable___html.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/templates/feedback/default/epilogue___html.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/templates/feedback/default/surveycontents___html.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://lptag.liveperson.net/lptag/api/account/58507821/configuration/applications/taglets/.jsonp?df=0&b=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.trueconversion.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/templates/feedback/default/aspark100.png", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://sp.analytics.yahoo.com/sp.pl?a=10000&jsonp=YAHOO.ywa.I13N.handleJSONResponse&d=Sat%2C%2008%20Jul%202017%2009%3A39%3A52%20GMT&n=5d&.yp=25984&f=https%3A%2F%2Fm.jcpenney.com%2Fcheckout&e=https%3A%2F%2Fm.jcpenney.com%2Fcart%2FSignIn&enc=UTF-8", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=B;yoda-checkout", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/8.11.0.3-release_2848/le_secure_storage/storage.secure.min.html?loc=https%3A%2F%2Fm.jcpenney.com&site=58507821&asmr=15&env=prod", "HEADER=yoda-checkout:true", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_Bopus_RC_Rewardsprofile_GET", NS_AUTO_STATUS);
*/ 
    

        ns_start_transaction("MB_API_Bopus_RC_addresses_OPTIONS");    	
    	 ns_web_url("API_Bopus_RC_addressesfetchCall",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/addresses?filter=intl",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        //"HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_RC_addresses_OPTIONS", NS_AUTO_STATUS); 


    ns_start_transaction("MB_API_Bopus_RC_addresses_GET");
    ns_web_url ("API_Bopus_RC_addresses",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/addresses?filter=intl",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=accept-version:5",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "COOKIE=ssl;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;clientTestPool1;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;_ga;_gid;_gat;mp_jcpenney_mixpanel;_uetsid;LPVID;LPSID-58507821;LPCKEY-58507821;DP_USER_FAVCOUNT;DP_SFL_PPIDS;_4c_;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;yoda-checkout",
        "PreSnapshot=webpage_1499506789597.png",
        "Snapshot=webpage_1499506794154.png",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/iojs/5.0.0/logo.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;s_sq;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;_ga;_gid;_gat;c17;v53;s_ptc;s_cc;mp_jcpenney_mixpanel;_uetsid;CavSF;LPVID;LPSID-58507821;LPCKEY-58507821;DP_USER_FAVCOUNT;DP_SFL_PPIDS;CavNVC;_4c_;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef", END_INLINE,
            "URL=https://mpsnare.iesnare.com/5.0.0/logo.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=io_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;yoda-checkout", END_INLINE,
            "URL=https://netvision.cavisson.com/nv/JCPenney/Mobile/config.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://bat.bing.com/bat.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=MUID;MR;MUIDB;yoda-checkout", END_INLINE,
            "URL=https://gateway.foresee.com/sites/jcpenney/production/gateway.min.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://d2e0sxz09bo7k2.cloudfront.net/attribution.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://a.wishabi.com/track.gif?aid=attrib&goal_id=2&goal_value=1&merchant_id=2207", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=gid;yoda-checkout", END_INLINE,
            "URL=https://s.pinimg.com/ct/core.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://connect.facebook.net/en_US/fbevents.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.google-analytics.com/analytics.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://s.yimg.com/wi/ytc.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://static.ads-twitter.com/uwt.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://netvision.cavisson.com/test_rum?s=000476621927285261262&p=0&op=timing&pi=6&pid=21&d=1|0|-1|18|145|-1|5|29|112|33|0|5181|0|21|5341|2212|21|2212|0|60|https%3A%2F%2Fm.jcpenney.com%2Fcart%2FSignIn|https%3A%2F%2Fm.jcpenney.com%2Fcheckout|m.jcpenney.com|yoda-checkout%3Dtrue%3B%20ssl%3D1%3B%20CavNV%3D4640122093291552796-50000-110972131072-0-9-0-31230-14-153-1616%3B%20marketing%3Ddirect%3B%20AMCVS_CEEB350F5746CDE97F000101%2540AdobeOrg%3D1%3B%20AMCV_CEEB350F5746CDE97F000101%2540AdobeOrg%3D-1176276602%25PIPE%25MCMID%25PIPE%2507183790005432435100747711248291693333%25PIPE%25MCAAMLH-1500111396%25PIPE%253%25PIPE%25MCAAMB-1500111396%25PIPE%25cIBAx_aQzFEHcPoEv0GwcQ%25PIPE%25MCOPTOUT-1499513796s%25PIPE%25NONE%25PIPE%25MCAID%25PIPE%25NONE%3B%20yoda-gallery%3Dfalse%3B%20mbox%3Dsession%234aa72a7bc70640758ffe057153624415%231499508511%25PIPE%25PC%234aa72a7bc70640758ffe057153624415.22_19%231500716251%25PIPE%25check%23true%231499506711%3B%20jcp.ab.test%3D%3B%20clientTestPool1%3Drwd%3B%20jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney%3Djluuid_21221883-7224-4814-8412-321686a2a665%3B%20SDPU_ZIPCACHE%3D%257B%252218052%2522%253A%252240.6572331%252C-75.49855209999998%2522%257D%3B%20PICKUP_STORE_SEARCH%3D18052%3B%20s_sq%3D%255B%255BB%255D%255D%3B%20shoppingBagStore%3D0067%253A18052%3B%20userStoreInfo%3D0067%25PIPE%25Lehigh%2520Valley%2520Mall%25PIPE%252%25PIPE%25false%3B%20NSPrevPercentage%3D0%3B%20NSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20BNSOrigin%3DB%3B|0|0|-1|-1|-1|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%2010.0%3B%20WOW64)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F56.0.2924.87%20SAFARI%2F537.36|en-us|%5Bobject%20PluginArray%5D|Mozilla|0|PC|56.0|10|50000|1|0|0|%7B-1%7D&lts=110972361&d2=-1|-1|-1|2|100", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.feedback.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.survey.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.utils.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.trigger.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://ct.pinterest.com/v3/?event=PageVisit&tid=2617891297714&ad=%7B%22loc%22%3A%22https%3A%2F%2Fm.jcpenney.com%2Fcheckout%22%2C%22ref%22%3A%22https%3A%2F%2Fm.jcpenney.com%2Fcart%2FSignIn%22%2C%22if%22%3Afalse%2C%22sh%22%3A0%2C%22sw%22%3A0%7D&cb=1499506791669", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=4002289&Ver=2&mid=7db0106f-339c-fd42-1f80-7c405ea4abd4&evt=pageLoad&sid=0e70f90f-0&lt=5362&pi=-1292315712&lg=en-us&r=https%3A%2F%2Fm.jcpenney.com%2Fcart%2FSignIn&p=https%3A%2F%2Fm.jcpenney.com%2Fcheckout&rn=458934", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=MUID;MR;MUIDB;yoda-checkout", END_INLINE,
            "URL=https://lptag.liveperson.net/lptag/api/account/58507821/configuration/applications/taglets/.jsonp?df=0&s=mobile-sales-english&b=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s31420709910450?AQB=1&ndh=1&pf=1&t=8%2F6%2F2017%204%3A39%3A51%206%20300&mid=07183790005432435100747711248291693333&aamlh=3&ce=UTF-8&ns=jcpenney&pageName=d%3Acheckout%3Acheckout%20shipping&g=https%3A%2F%2Fm.jcpenney.com%2Fcheckout&r=https%3A%2F%2Fm.jcpenney.com%2Fcart%2FSignIn&cc=USD&ch=checkout&server=DTAPIEXPR1L2J2_12&events=scCheckout%3AL16019753232%2Cevent27%3AL16019753232%2Cevent77%3AL16019753232%2Cevent3%2Cevent70%3D12.00&products=%3Bpp5005142254%3B1%3B12.00%3Bevent27%3D12.00%3Bevar6%3D4565114%7Cevar4%3Dsephora%20collection%20retractable%20waterproof%20eyeliner%7Cevar51%3Dno%20product%20marketing%20label%7Cevar20%3Dregular%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D45651140026%7Cevar35%3Dcongruent%7Cevar41%3Dsame%20day%20pickup&aamb=cIBAx_aQzFEHcPoEv0GwcQ&c1=checkout&v1=D%3Dc1&c6=checkout%3Acheckout%20shipping&c7=http%3A%2F%2Fm.jcpenney.com%2Fcheckout&v7=4%3A39%20AM%7CSaturday&c10=2017%20yoda%20checkout%20DELPHI&c11=checkout&v11=D%3Dc11&c12=release-2.0.71-%3A1.7.0&c15=D%3Dr&v16=D%3DpageName&c17=d%3Acheckout%3Acheckout%20shipping&v17=D%3Dc17&c19=DU-2365957%2CMU-2364233%2CGT-2362732%2CABC-2364628%2CAET-421401%2CAGV-2336264&c20=0&c31=0067%7Clehigh%20valley%20mall%7C2%7Cfalse&v31=D%3Dc31&c33=20244041177&v33=D%3Dc33&v38=L16019753232&c39=no%20type%3Alogged-in&v39=D%3Dc39&v42=standard&c44=desktop&v44=D%3Dc44&c45=no%20rewards%20account&v45=D%3Dc45&c46=rS-EIbOPPJH7Xux17gu5&v46=D%3Dc46&c47=active%7Ccredit&v47=D%3Dc47&v48=D%3Dmid&v49=no&v50=%2B1&v53=checkout&v55=2017-07-08&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.google-analytics.com/collect?v=1&_v=j56&a=583180434&t=pageview&_s=1&dl=https%3A%2F%2Fm.jcpenney.com%2Fcheckout&ul=en-us&de=UTF-8&sd=0-bit&sr=0x0&vp=1349x590&je=0&_u=QACAAAABI~&jid=&gjid=&cid=893756951.1499506596&tid=UA-43509801-1&_gid=905544133.1499506596&cd13=Account%3A%20Logged%20In&z=339161197", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.frame.html?d=m.jcpenney.com&_cv_=19.3.6&_vt_=b49y123&uid=893756951.1499506596", "HEADER=yoda-checkout:true", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.gateway.js", "HEADER=Origin:https://gateway.foresee.com", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.frame.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.utils.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/templates/feedback/default/fs.feedback.css", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/templates/feedback/default/badge___html.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/templates/feedback/default/serviceunavailable___html.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/templates/feedback/default/epilogue___html.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/templates/feedback/default/surveycontents___html.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://lptag.liveperson.net/lptag/api/account/58507821/configuration/applications/taglets/.jsonp?df=0&b=1", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/fs.trueconversion.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.6/templates/feedback/default/aspark100.png", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://sp.analytics.yahoo.com/sp.pl?a=10000&jsonp=YAHOO.ywa.I13N.handleJSONResponse&d=Sat%2C%2008%20Jul%202017%2009%3A39%3A52%20GMT&n=5d&.yp=25984&f=https%3A%2F%2Fm.jcpenney.com%2Fcheckout&e=https%3A%2F%2Fm.jcpenney.com%2Fcart%2FSignIn&enc=UTF-8", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=B;yoda-checkout", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/8.11.0.3-release_2848/le_secure_storage/storage.secure.min.html?loc=https%3A%2F%2Fm.jcpenney.com&site=58507821&asmr=15&env=prod", "HEADER=yoda-checkout:true", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_Bopus_RC_addresses_GET", NS_AUTO_STATUS);
    
    	ns_end_transaction("MOB_Bopus_Reg_CheckOut", NS_AUTO_STATUS);    
    ns_page_think_time(0);
   
    // Continue To Payment


   
    ns_start_transaction("MOB_Bopus_Reg_PickUpStore"); 
    
    ns_start_transaction("MB_API_Bopus_RC_draftorder_OPTIONS");    	
    	 ns_web_url("API_Bopus_RC_draftorder7",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        //"HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_RC_draftorder_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_Bopus_RC_draftorder_GET");
    ns_web_url ("API_Bopus_RC_draftorder3",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order?expand=status",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=ssl;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;clientTestPool1;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;mp_jcpenney_mixpanel;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;_uetsid;_ga;_gid;LPVID;LPSID-58507821;LPCKEY-58507821;_4c_;yoda-checkout",
        "PreSnapshot=webpage_1499506824758.png",
        "Snapshot=webpage_1499506824764.png"
    );

    ns_end_transaction("MB_API_Bopus_RC_draftorder_GET", NS_AUTO_STATUS);

	ns_start_transaction("MB_API_Bopus_RC_Paymentmethods_OPTIONS");    	
    	 ns_web_url("API_Bopus_RC_Paymentmethods3",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/payment-methods",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        //"HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_RC_Paymentmethods_OPTIONS", NS_AUTO_STATUS);
	
    ns_start_transaction("MB_API_Bopus_RC_Paymentmethods_GET");
    ns_web_url ("API_Bopus_RC_Paymentmethods1",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/payment-methods",
        //"URL=https://account-api.jcpenney.com/v5/accounts/rS-EIbOPPJH7Xux17gu5/payment-methods",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=accept-version:5",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=ssl;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;clientTestPool1;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;mp_jcpenney_mixpanel;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;_uetsid;_ga;_gid;LPVID;LPSID-58507821;LPCKEY-58507821;_4c_;yoda-checkout",
        "PreSnapshot=webpage_1499506824764.png",
        "Snapshot=webpage_1499506829306.png",
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps/api/js?key=AIzaSyAsZRiRJG343_m11hBJIv9Gh_2WOBr2ewg&libraries=places", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/icon-jcp.svg", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;mp_jcpenney_mixpanel;DP_USER_FAVCOUNT;DP_SFL_PPIDS;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;_uetsid;c17;v53;s_ptc;s_cc;_ga;_gid;CavSF;CavNVC;LPVID;LPSID-58507821;LPCKEY-58507821;_4c_;s_sq;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE
    );

    ns_end_transaction("MB_API_Bopus_RC_Paymentmethods_GET", NS_AUTO_STATUS);
	ns_end_transaction("MOB_Bopus_Reg_PickUpStore", NS_AUTO_STATUS);
  	ns_page_think_time(0);

    // Order Review

   
	 ns_start_transaction("MOB_Bopus_Reg_PaymentInfo"); 
     ns_start_transaction("MB_API_Bopus_RC_PM_OPTIONS");    	
    	 ns_web_url("API_Bopus_RC_Paymentmethods4",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/payment-methods/{PaymentMethodIdSP}",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:PUT",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        //"HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_RC_PM_OPTIONS", NS_AUTO_STATUS);
    
    if(!((strcmp((ns_eval_string("{CardAuthRequiredSP}")),"CardNumberRentryRequired")))){
    	ns_start_transaction("MOB_Bopus_CardAuthRequired");
    	ns_end_transaction("MOB_Bopus_CardAuthRequired", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_Bopus_RC_Paymentmethods_PUT");
    ns_web_url ("API_Bopus_RC_Paymentmethods5",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/payment-methods/{PaymentMethodIdSP}",
        //"URL=https://account-api.jcpenney.com/v5/accounts/rS-EIbOPPJH7Xux17gu5/payment-methods/8db0b9a0-6140-11e7-b1b8-a5e7c1c1b5f1",
        "METHOD=PUT",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=accept-version:5",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "HEADER=X-STANDARDIZATION-REQUIRED:true",
        "COOKIE=ssl;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;clientTestPool1;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;mp_jcpenney_mixpanel;DP_USER_FAVCOUNT;DP_SFL_PPIDS;_uetsid;_ga;_gid;LPVID;LPSID-58507821;LPCKEY-58507821;_4c_;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;yoda-checkout",
        "PreSnapshot=webpage_1499506856331.png",
        "Snapshot=webpage_1499506857247.png",
        //"{"type":"JCP","cvv":"123","address":{"id":"5f1e9350-6140-11e7-bd0c-371acde13d75","firstName":"load","lastName":"test","addressLineOne":"4316 N BACALL LOOP","addressLineTwo":"","country":"US","city":"BEVERLY HILLS","state":"FL","zip":"34465","phone":"9999941013","addressVid":"20244041177","href":"https://services.prod.dp-prod.jcpcloud2.net/v1/accounts/rS-EIbOPPJH7Xux17gu5/addresses/5f1e9350-6140-11e7-bd0c-371acde13d75","lineOne":"4316 N BACALL LOOP","lineTwo":""},"cardId":"8db0b9a0-6140-11e7-b1b8-a5e7c1c1b5f1","id":"8db0b9a0-6140-11e7-b1b8-a5e7c1c1b5f1","number":false}",
        BODY_BEGIN,
            "{"type":"JCP","cvv":"123","address":{"id":"{AddressIdSP1}","firstName":"{FirstNameSP}","lastName":"{LastNameSP}","addressLineOne":"{AddressSP}","country":"US","city":"{CitySP}","state":"{StateSP}","zip":"{ZipcodeSP}","phone":"{PhoneNoSP}","addressVid":"{AddressVidSP}","href":{ServicesProdSP}","lineOne":"{AddressSP}"},"cardId":"{PaymentMethodIdSP}","id":"{PaymentMethodIdSP}","cardNumber":"{CardnoFP}"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order/billing/credit-cards", "METHOD=OPTIONS", "HEADER=Origin:https://m.jcpenney.com", "HEADER=yoda-checkout:true", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:authorization, content-type", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_RC_Paymentmethods_PUT", NS_AUTO_STATUS);
    }
    else{
    	ns_start_transaction("MB_API_Bopus_RC_Paymentmethods_PUT");
    ns_web_url ("API_Bopus_RC_Paymentmethods2",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/payment-methods/{PaymentMethodIdSP}",
        //"URL=https://account-api.jcpenney.com/v5/accounts/rS-EIbOPPJH7Xux17gu5/payment-methods/8db0b9a0-6140-11e7-b1b8-a5e7c1c1b5f1",
        "METHOD=PUT",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=accept-version:5",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "HEADER=X-STANDARDIZATION-REQUIRED:true",
        "COOKIE=ssl;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;clientTestPool1;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;mp_jcpenney_mixpanel;DP_USER_FAVCOUNT;DP_SFL_PPIDS;_uetsid;_ga;_gid;LPVID;LPSID-58507821;LPCKEY-58507821;_4c_;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;yoda-checkout",
        "PreSnapshot=webpage_1499506856331.png",
        "Snapshot=webpage_1499506857247.png",
        //"{"type":"JCP","cvv":"123","address":{"id":"5f1e9350-6140-11e7-bd0c-371acde13d75","firstName":"load","lastName":"test","addressLineOne":"4316 N BACALL LOOP","addressLineTwo":"","country":"US","city":"BEVERLY HILLS","state":"FL","zip":"34465","phone":"9999941013","addressVid":"20244041177","href":"https://services.prod.dp-prod.jcpcloud2.net/v1/accounts/rS-EIbOPPJH7Xux17gu5/addresses/5f1e9350-6140-11e7-bd0c-371acde13d75","lineOne":"4316 N BACALL LOOP","lineTwo":""},"cardId":"8db0b9a0-6140-11e7-b1b8-a5e7c1c1b5f1","id":"8db0b9a0-6140-11e7-b1b8-a5e7c1c1b5f1","number":false}",
        BODY_BEGIN,
            "{"type":"JCP","cvv":"123","address":{"id":"{AddressIdSP1}","firstName":"{FirstNameSP}","lastName":"{LastNameSP}","addressLineOne":"{AddressSP}","country":"US","city":"{CitySP}","state":"{StateSP}","zip":"{ZipcodeSP}","phone":"{PhoneNoSP}","addressVid":"{AddressVidSP}","href":{ServicesProdSP}","lineOne":"{AddressSP}"},"cardId":"{PaymentMethodIdSP}","id":"{PaymentMethodIdSP}"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order/billing/credit-cards", "METHOD=OPTIONS", "HEADER=Origin:https://m.jcpenney.com", "HEADER=yoda-checkout:true", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:authorization, content-type", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_Bopus_RC_Paymentmethods_PUT", NS_AUTO_STATUS);
    }

	ns_start_transaction("MB_API_Bopus_RC_creditcards_OPTIONS");    	
    	 ns_web_url("API_Bopus_RC_creditcards1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/credit-cards",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        //"HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_RC_creditcards_OPTIONS", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_Bopus_RC_creditcards_POST");
    ns_web_url ("API_Bopus_RC_creditcards",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/credit-cards",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order/billing/credit-cards",
        "METHOD=POST",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=x-reference-valid:false",
        "COOKIE=ssl;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;clientTestPool1;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;mp_jcpenney_mixpanel;DP_USER_FAVCOUNT;DP_SFL_PPIDS;_uetsid;_ga;_gid;LPVID;LPSID-58507821;LPCKEY-58507821;_4c_;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;yoda-checkout",
        "REDIRECT=YES",
        "LOCATION=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order/billing/credit-cards/pg6441684378",
        "PreSnapshot=webpage_1499506857247.png",
        "Snapshot=webpage_1499506859481.png",
        //"{"address":{"relationships":{"accountAddress":{"id":"5f1e9350-6140-11e7-bd0c-371acde13d75"}}},"relationships":{"accountPaymentMethod":{"id":"8db0b9a0-6140-11e7-b1b8-a5e7c1c1b5f1"}}}",
        BODY_BEGIN,
            "{"relationships":{"accountPaymentMethod":{"id":"{PaymentMethodIdSP}"}}}",
        BODY_END,
        INLINE_URLS,
            "URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order?expand=status", "METHOD=OPTIONS", "HEADER=Origin:https://m.jcpenney.com", "HEADER=yoda-checkout:true", "HEADER=Access-Control-Request-Method:GET", "HEADER=Access-Control-Request-Headers:authorization, content-type", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_Bopus_RC_creditcards_POST", NS_AUTO_STATUS);

//    ns_start_transaction("MB_API_Bopus_RC_creditcards1_OPTIONS");    	
//    	 ns_web_url("API_Bopus_RC_creditcardsFetchCall",
//        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/credit-cards",
//        "METHOD=OPTIONS",
//        "HEADER=Access-Control-Request-Method:GET",
////        "HEADER=DPCluster:{DPClusterId}",
////		"HEADER=X-DPOrder:{DPOrderId}",
////		"HEADER=DPInstance:{DPInstanceId}",
//        "HEADER=Access-Control-Request-Headers:authorization, content-type",
//        //"HEADER=X-Auto-Login:true",
//        "HEADER=Accept-Language:en-us",
//        INLINE_URLS,
//            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
//    );
//    ns_end_transaction("MB_API_Bopus_RC_creditcards1_OPTIONS", NS_AUTO_STATUS);
//
//    ns_start_transaction("MB_API_Bopus_RC_creditcards_GET");
//    ns_web_url ("API_Bopus_RC_creditcards2",
//        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/credit-cards",
//        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order/billing/credit-cards",
//        "HEADER=authorization:Bearer {AccessTokenSP}",
//        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=Accept-Language:en-us",
////        "HEADER=DPCluster:{DPClusterId}",
////		"HEADER=X-DPOrder:{DPOrderId}",
////		"HEADER=DPInstance:{DPInstanceId}",
//        "HEADER=x-reference-valid:false",
//        INLINE_URLS,
//            "URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order?expand=status", "METHOD=OPTIONS", "HEADER=Origin:https://m.jcpenney.com", "HEADER=yoda-checkout:true", "HEADER=Access-Control-Request-Method:GET", "HEADER=Access-Control-Request-Headers:authorization, content-type", "HEADER=Accept-Language:en-us", END_INLINE
//    );
//
//    ns_end_transaction("MB_API_Bopus_RC_creditcards_GET", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_Bopus_RC_billing_OPTIONS");    	
    	 ns_web_url("API_Bopus_RC_billing_opt",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=billing",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        //"HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_RC_billing_OPTIONS", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_Bopus_RC_billing_GET");
    ns_web_url ("API_Bopus_RC_billing",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=billing",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=x-reference-valid:false",
        INLINE_URLS,
            "URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order?expand=status", "METHOD=OPTIONS", "HEADER=Origin:https://m.jcpenney.com", "HEADER=yoda-checkout:true", "HEADER=Access-Control-Request-Method:GET", "HEADER=Access-Control-Request-Headers:authorization, content-type", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_Bopus_RC_billing_GET", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_Bopus_PM_draftorder_OPTIONS");    	
    	 ns_web_url("API_Bopus_RC_PM_draftorder1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&includeServiceLevels=true",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_PM_draftorder_OPTIONS", NS_AUTO_STATUS);


    ns_start_transaction("MB_API_Bopus_RC_PM_draftorder_GET");
    ns_web_url ("API_Bopus_RC_PM_draftorder",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&includeServiceLevels=true",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order?expand=status",
        "HEADER=authorization:Bearer {AccessTokenSP}",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=ssl;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;clientTestPool1;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;mp_jcpenney_mixpanel;DP_USER_FAVCOUNT;DP_SFL_PPIDS;_uetsid;_ga;_gid;LPVID;LPSID-58507821;LPCKEY-58507821;_4c_;DPInstance;DPUserTracking;DP_USER_AUTH_STATUS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;jcpvid;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;yoda-checkout",
        "PreSnapshot=webpage_1499506859481.png",
        "Snapshot=webpage_1499506860466.png"
    );

    ns_end_transaction("MB_API_Bopus_RC_PM_draftorder_GET", NS_AUTO_STATUS);

/*
	ns_start_transaction("MB_API_Bopus_PM_Rewardsprofile_OPTIONS");    	
    	 ns_web_url("API_Bopus_RC_Rewardsprofile3",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/rewards-profile?expand=points%2Ccertificates%2Crecentactivity",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_PM_Rewardsprofile_OPTIONS", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_Bopus_RC_PM_Rewardsprofile_GET");
    ns_web_url ("API_Bopus_RC_Rewardsprofile2",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/rewards-profile?expand=points%2Ccertificates%2Crecentactivity",
        //"URL=https://account-api.jcpenney.com/v5/accounts/rS-EIbOPPJH7Xux17gu5/rewards-profile?expand=points%2Ccertificates%2Crecentactivity",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=accept-version:5",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=ssl;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;clientTestPool1;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;mp_jcpenney_mixpanel;DP_USER_FAVCOUNT;DP_SFL_PPIDS;_uetsid;_ga;_gid;LPVID;LPSID-58507821;LPCKEY-58507821;_4c_;jcpvid;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;yoda-checkout",
        "PreSnapshot=webpage_1499506861695.png",
        "Snapshot=webpage_1499506861715.png"
    );

    ns_end_transaction("MB_API_Bopus_RC_PM_Rewardsprofile_GET", NS_AUTO_STATUS);
*/
    //Page Auto splitted for Method = PUT
//    ns_start_transaction("MB_API_Bopus_RC_device_GET");
//    ns_web_url ("API_Bopus_RC_device",
//        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/device",
//        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order/device",
//        "METHOD=PUT",
//        "HEADER=authorization:Bearer {AccessTokenSP}",
//        // "HEADER=authorization:Bearer eyJhbGciOiJSUzI1NiJ9.eyJpc3MiOiJhcGkuamNwZW5uZXkuY29tIiwiaWF0IjoxNDk5NTA2Nzc4OTYwLCJhdWQiOiJqY3Blbm5leS5jb20iLCJzdWIiOiJyUy1FSWJPUFBKSDdYdXgxN2d1NSIsInV1aWQiOiJlMzhmMzE4OC1lOTNmLTQ4ZGMtYTU0My00YWM2YmJiZTFlZGUiLCJhdXRob3JpdGllcyI6W10sInN0YXRlIjoxLCJjbGllbnQtaXAiOiIxODIuNzEuMTE5LjIxMiIsImV4cCI6MTQ5OTUxMzk3OH0.P19d_fBqxwVdpb0vW-9bcJt3JjTeKWIh_LMLLvCH0k4ijOSuwgdcfc35OnQ2vI4w0HJ-tQVXeT6Mj6cFfRyvIw_d3EtcQCVeiBfYn5pqbvFMayIqNLYftZK5CQc2aopHI8QCsAWT0UBRvAASDakXjsQsrq1l8tWFj7kl6I8O_HffbVEGmCl2gwKjr7dcQ-VEtIeExEEawPiAam7CAvmLJpY74ojMFDWN6CYbQYLqsQjHNtZVUHswk5s_zmKqlCb9ojXnTSrdqPRRwEr1bPhrj8VRz4clFuo76nUpd0KrHgK7LXfMnFh37BE-fFXR4ih4kzCupmAI2hOC37ULBrQcmw",
//        "HEADER=Origin:https://m.jcpenney.com",
//        "HEADER=yoda-checkout:true",
//        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=Accept-Language:en-us",
//        "COOKIE=ssl;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;clientTestPool1;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;mp_jcpenney_mixpanel;DP_USER_FAVCOUNT;DP_SFL_PPIDS;_uetsid;_ga;_gid;LPVID;LPSID-58507821;LPCKEY-58507821;_4c_;jcpvid;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;yoda-checkout",
//        "PreSnapshot=webpage_1499506861715.png",
//        "Snapshot=webpage_1499506862776.png",
//        BODY_BEGIN,
//            "{"fingerPrint":"0400NkFMpQRHXAPjK9GFecOQi/g8OpfN9tXCo0J9ydo3IX9SrlG9HCKNXZuAo3RlLJ9nQ0g7CJVcZ3U3/KgYwolshubHa83CDZB6gDEq4MlHYcsEEngjK9W4m7HRPMQSYSWJ4iwWC6vaVV+QpcR/J4u5qYkBMbn2Fx02x9fY6yAgVWVwPpPV0ZSMv3I7Q+Ldow0Q1pmqUarukA14z5fb35j007BBMp+IITTa7TQqzcOpcA3HiNfMyR9RpgdwKLI4UXFQhNetLHgstoBMv0fDUwfYSEhytzXcp5Ucy8xAbhg2gQ0lJtIPuw+9vrk4mbwDqdvdh3t67UAWlUCqDEHBx0Magq/0eVBwKCbFPljubQOyZ+ldxGNGyhUUURbBfNyqZtytjJQ2sdKApeG5HggN4dPqOdC1UJgA1BQZQ4JudHOlf1KSnrbJSNyIsRs+aQh3tf1QuMSNUUyGAvKLg+9aginJmamvnOVDH3SzV6i8/tb5alAK/XRNo3H5dMIK6EAX6criUrvNJ9pjM20k6Z+HK7E1kHhVKFtj4RUEzX0hM3tAJxuq8T+RNj4BWWV+BeUnQFfZSdu3DZ2D0kFLMrPrMVvJlvLE8xAy/thn2bG0spfZB+eoBxehwU2FjwS/Jld6jiKhixVxefr+CIt03KYhOcRC5SUvcM7ACXSGXOp4yYEIf+Jh5Nwu1x6PIF20emsV+yv8Z/lrwsKFYh1C4MHuHozkPSBfcDhwAT1javSu9sFFV3ncE4nZ3meVnnb6dxDiokseTnOtpbEdaovEpkWTlnMi5pdVmFooa0z2v0w6dFMy2Esizp28x+6HoOCSU0oZPWNEfF9hXdZ4DRQ88rUTX4YZ32kssZVBQohhHbBPDncKJYr9dBeIcrk/mdwY9OX4tOossj69LfM7VRYrI1FeHSbDsgTiHjFO0qa4SNfOTvsgtn95SxDtE2suujWRMoizXj3piSkiHcDvTuWbZ7blJBujU1lt5etBvc0x6zH+GHyFnk67rzbxH0ZCbqQct2fIUhDBy/ZGi/OZc1PWD1Ek94E2JxvvIApWVhTfxKZFk5ZzIuaXVZhaKGtM9gkH+zgzCnlu0X36ReTqNZGXvqKaAsbcjitDdq0hPlERVSVIiz9Bgyq50VCdErYU2MvMQG4YNoENJSbSD7sPvb4Yvp3POc5kGiK7ex3QMh97RV8flS7U9roxXNv9ELmcek1XuRd94Pmfm2m7iwQyd/yAAWyEuwIdQ4VrbOm7G19Gl1WYWihrTPZJSkYJNTlGEJs8JjaKbQmaOib26lXtShgxx05RFiZyh5Axot8wQMrXac8Sbet/izwMQSRLnl4ww8a7SkEl5FbPeEZS2qp1yZ3GIA87X25JmC50+4+fdopBzQ+6m6soprR39D+WsNBHQ2xHHSkY/Xgk6L+nEbKvTnWcsZkBjUtGbFkIyk644mEAMZwl3SJRgfIxb9oTyQYOwvnvaMsBmHx5FFnL437eWZzEbF3JT6PLuuiCG8NXTguegSHmJglBQgumIif/iDuMCfuslEKlpFm7RzGHQKRh2VdnarEKOaLROO9geVfa3Q4gKULPxBs5mS++9XdHxK0YQtkY1PXX/+2dl168Cb4Ao1bBOmoLto4X8UU5lNEQ4uP+;0400NkFMpQRHXAPjK9GFecOQi6PeX428iTgt6HDSdORo/DXSiMgvkbi/jkUzxGeieFABqYrEzjFak3oTMjjaAzeAIwrtlZ3ZPYc6dFnpK7q+1hSvobiPHV8H5G88kXk0YQXGMJ5Efn0z9N4kv9e9zgAam1zaufKsjXPCwQgOEvjT5hNwPpPV0ZSMvyeyw2DLmX4tcb1kv6ExqJxqzqWLUs+qd0zKw558Peze1a9j/WC5vtYarratwdKEPwAS/jZymQ/QZNfbcjbO4PM9imFTBzwIUea//Q51gbseDX/eJYrNc7YqE/QNQ0oYACozBACRW94LKPN7uMDpYXcfdF254+ODaNgC5Ve9MAOHKNOv8wR7fSS8EQoCF/TPqIu6cQg+ZAff5S+EiuKzwaG+xcMhBad5MOmH9P6UyVFM7/v4Vf2K3eAMnSoJziAyl6uB5xKjTqLNXOp4yYEIf+K5HweK2VMICUxFXRiZcQcAnPGnG3CqgLln+4KLswTyWhDAstLN4US5V97h50/5jKsQfvyYjGbXjp0CIqbtRAIzj5BNLCV97V6WMCVbBcdxP0oUWfEwf5ZZQt8QDFeWBJiodXyUKxUgVtZ++LaXDquIDX8icOWPZcy4Xo6JR+o8uNh2BeaMmRyXxpba5oq0ndoca1eBlfDXNw7SGb/0pTwTzJmHSgKWcInIB9QxnksoWgDgFtbjU/i/DKThVP1hAyBtW3xvJLqWSzTmXK3W95ikc26/uyCFY4R6KghlGeYLRb6hyFDOLPt+yPCOzkJrb/AF2GKb28r9SxfwKMcRIoeJIMyfBSWv/vs72mp6+25HIwqQz2ECMnu9PHs6jytXtWZXqLz+1vlqUAr9dE2jcfl004eOzsc7kIv/+WLydhuyoumL3ii+Ww3rrrwzQsajUbCsjcxpJiuDOyEioquMr6B3kRssV7u80BzgiEms7PTw/N/7HinDpb16xsYSmrsKhFi8VDdLGBfK9PH/LgnAtMTg3G/gqjChOr16xvaJCAj7M4hkUw0zsxQ+VTw2C4oQ2p6vWc20/w4QKST/riUqiozfAOitx40UDzZdeJ2A+SzxZiDMnwUlr/77XIwRFIklHJgwZ8YN8wmMvVgyKLbTJnceIx5x0vTdYlG5cD75kGtr3thejcFMJfaG9un2ggA8QSgqMwQAkVveCyjze7jA6WF3pPdlKcTkxVZjGD2An0bvP81mEx5T4nMe8QddY13Dt9eofM4l4kRGxAz1gslwtNv6898GnyP1mBwgzJ8FJa/++x9ec0zrP1WvQF+dnyFrlch/8deIxbH4pO5iRtVaXN9FEJob1QZ0pXe6Dziwq18stVwLIC33q+zbKH0rSxV68ApEI4+vaKcVFU9gqjC/8+zdVXvGSUaueuJPn0NsDI2TVS/Kt+fettyXOmm5dANI2ZY+JQBvNsyRjTcikrrFFKW1WPMEgpiBDOJCSOP8F/eyACNUwpjcKHwfXfd8P8IRcr2zr3nTwUNo+jblYFbGXoxUYTtUNo5lYHxObL5PzR66nHRS4TnRhwssPA2nGxFxpoHu2MJCSi12NDDnFZBnAu8EYlA0ges6hzI="}",
//        BODY_END
//    );
//
//    ns_end_transaction("MB_API_Bopus_RC_device_GET", NS_AUTO_STATUS);
	 ns_end_transaction("MOB_Bopus_Reg_PaymentInfo", NS_AUTO_STATUS);   
    ns_page_think_time(0);
  

    // Place Order
	
	if(Exituser <= 38){
    	 ns_start_transaction("MOB_AbandonmentAfterBopusOrderReview");
    ns_end_transaction("MOB_AbandonmentAfterBopusOrderReview", NS_AUTO_STATUS);
    	ns_exit_session();
    }

   
	ns_start_transaction("TotalSubmitOrder");
    ns_start_transaction("MOB_SubmitOrder");
    ns_start_transaction("MOB_Bopus_SubmitOrder");
    ns_start_transaction("MOB_Bopus_Reg_SubmitOrder");
    ns_start_transaction("MB_API_Bopus_PO_draftorder_OPTIONS");    	
    	 ns_web_url("API_Bopus_RC_PO_draftorder1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_PO_draftorder_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_Bopus_RC_PO_draftorder_POST");
    ns_web_url ("API_Bopus_RC_PO_draftorder",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order",
        "METHOD=POST",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=x-command:submit",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "HEADER=accept:application/json",
        "HEADER=X-Client-Id:Basic amNwLnJ3ZG06QVVndFRydFc5cg",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
       "HEADER=X-ETag: {EtagIdSP}.Disabled",
    );

    ns_end_transaction("MB_API_Bopus_RC_PO_draftorder_POST", NS_AUTO_STATUS);
    
    ns_start_transaction("MOB_Bopus_OrderConfirmation");	
    	ns_web_url("YODA_OrderConfirmation3",
        "URL=https://m.jcpenney.com/checkout/oc?OrderId={OrderIdSP}",
         "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
    );
 //   ns_end_transaction("MOB_Bopus_OrderConfirmation", NS_AUTO_STATUS);	
    
	  //***********************************SSR/CSR Handling**************************//
    if((!strcmp(ns_eval_string("{OrderNoSP1}"),""))){
    ns_end_transaction_as("MOB_Bopus_OrderConfirmation", NS_AUTO_STATUS, "MOB_Bopus_OrderConfirmation_CSR");}
    else {
    ns_end_transaction_as("MOB_Bopus_OrderConfirmation", NS_AUTO_STATUS, "MOB_Bopus_OrderConfirmation_SSR");
    goto SkipOrderConfirmation;
    }
//********************************************************************************// 
	

     ns_start_transaction("MB_API_Bopus_RC_orders_OPTIONS");    	
    	 ns_web_url("API_Bopus_RC_orders1",
        "URL=https://order-api.jcpenney.com/order-api/v1/orders/{OrderIdSP}",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_RC_orders_OPTIONS", NS_AUTO_STATUS);
	
    ns_start_transaction("MB_API_Bopus_RC_orders_GET");
    ns_web_url ("API_Bopus_RC_orders",
        "URL=https://order-api.jcpenney.com/order-api/v1/orders/{OrderIdSP}",
        //"URL=https://order-api.jcpenney.com/order-api/v1/orders/L16019753232",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://nexus.ensighten.com/jcpenney/prod/serverComponent.php?r=9.623359427097288&ClientID=730&PageID=https%3A%2F%2Fm.jcpenney.com%2Fcheckout%2Foc", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/13c43a2b654be81df7e48e7dd455cb76.js?conditionId0=324309", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/e8a1cfbc60fb3ede73d6ededaee3202c.js?conditionId0=335310", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/917c49a2004d2d8ef510e0d6f92ed48d.js?conditionId0=346183", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/4c03a229d81a608ef9671cd5de428725.js?conditionId0=422808", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/d4a24a5875e209005b8a62807cf02f62.js?conditionId0=375492&conditionId1=335514", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_Bopus_RC_orders_GET", NS_AUTO_STATUS);
    SkipOrderConfirmation:
	ns_end_transaction("MOB_Bopus_Reg_SubmitOrder", NS_AUTO_STATUS);    
    ns_end_transaction("MOB_Bopus_SubmitOrder", NS_AUTO_STATUS);
    ns_end_transaction("MOB_SubmitOrder", NS_AUTO_STATUS);
    ns_end_transaction("TotalSubmitOrder", NS_AUTO_STATUS);   

//    if(!strcmp(ns_eval_string("{XPlatformSP}"),"microservice")){      //Condition to Check header value
//       ns_start_transaction("AuroraScriptAuroraPlaceOrder");
//       ns_end_transaction("AuroraScriptAuroraPlaceOrder", NS_AUTO_STATUS);
//    }
//    else
//        {
//        ns_start_transaction("AuroraScriptLegacyPlaceOrder");
//        ns_end_transaction("AuroraScriptLegacyPlaceOrder", NS_AUTO_STATUS);
//        }



//     ns_start_transaction("MB_API_Bopus_RC_PO_accountstores_OPTIONS");    	
//    	 ns_web_url("API_Bopus_RC_accountstoresFetchCall",
//        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/stores",
//        "METHOD=OPTIONS",
//        "HEADER=Access-Control-Request-Method:GET",
//        "HEADER=Access-Control-Request-Headers:authorization, content-type",
////        "HEADER=DPCluster:{DPClusterId}",
////		"HEADER=X-DPOrder:{DPOrderId}",
////		"HEADER=DPInstance:{DPInstanceId}",
//        "HEADER=Accept-Language:en-us",
//        INLINE_URLS,
//            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
//    );
//    ns_end_transaction("MB_API_Bopus_RC_PO_accountstores_OPTIONS", NS_AUTO_STATUS);
//
//    ns_start_transaction("MB_API_Bopus_RC_PO_accountstores_GET");
//    ns_web_url ("API_Bopus_RC_accountstores",
//        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/stores",
//        "HEADER=authorization:Bearer {AccessTokenSP}",
//        "HEADER=content-type:application/json;charset=utf-8",
////        "HEADER=DPCluster:{DPClusterId}",
////		"HEADER=X-DPOrder:{DPOrderId}",
////		"HEADER=DPInstance:{DPInstanceId}",
//        "HEADER=Accept-Language:en-us",
//        "COOKIE=ssl;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;clientTestPool1;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;mp_jcpenney_mixpanel;_uetsid;_ga;_gid;LPVID;LPSID-58507821;LPCKEY-58507821;jcpvid;_gat;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;OrderId;ItemCount;_4c_;yoda-checkout",
//        "PreSnapshot=webpage_1499506881924.png",
//        "Snapshot=webpage_1499506883075.png",
//        INLINE_URLS,
//            "URL=https://nexus.ensighten.com/jcpenney/prod/serverComponent.php?r=9.623359427097288&ClientID=730&PageID=https%3A%2F%2Fm.jcpenney.com%2Fcheckout%2Foc", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=https://nexus.ensighten.com/jcpenney/prod/code/13c43a2b654be81df7e48e7dd455cb76.js?conditionId0=324309", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=https://nexus.ensighten.com/jcpenney/prod/code/e8a1cfbc60fb3ede73d6ededaee3202c.js?conditionId0=335310", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=https://nexus.ensighten.com/jcpenney/prod/code/917c49a2004d2d8ef510e0d6f92ed48d.js?conditionId0=346183", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=https://nexus.ensighten.com/jcpenney/prod/code/4c03a229d81a608ef9671cd5de428725.js?conditionId0=422808", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=https://nexus.ensighten.com/jcpenney/prod/code/d4a24a5875e209005b8a62807cf02f62.js?conditionId0=375492&conditionId1=335514", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE
//    );
//
//    ns_end_transaction("MB_API_Bopus_RC_PO_accountstores_GET", NS_AUTO_STATUS);
//    
    ns_start_transaction("MB_API_Bopus_RC_SiteWidePromo_OPTIONS");
    	ns_web_url ("MB_API_Bopus_RC_SiteWidePromo1",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/checkout/oc",
        "METHOD=OPTIONS",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
    );
    ns_end_transaction("MB_API_Bopus_RC_SiteWidePromo_OPTIONS",NS_AUTO_STATUS);

    ns_start_transaction("MB_API_Bopus_RC_SiteWidePromo_GET");
    	ns_web_url ("MB_API_Bopus_RC_SiteWidePromo",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/checkout/oc",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
    );
    ns_end_transaction("MB_API_Bopus_RC_SiteWidePromo_GET",NS_AUTO_STATUS); 

 	ns_start_transaction("MB_API_Bopus_RC_PO_stores_GET");
    ns_web_url ("API_Bopus_RC_stores",
        "URL=https://browse-api.jcpenney.com/v1//stores/{StoreIDSP}",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://edge1.certona.net/cd/c50f7c7c/jcpenney.com/scripts/resonance.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/jcp-plcc.svg", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;ssl;CavNV;marketing;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;mbox;jcp.ab.test;clientTestPool1;jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney;SDPU_ZIPCACHE;DPJSESSIONID;PICKUP_STORE_SEARCH;shoppingBagStore;userStoreInfo;NSPrevPercentage;NSOrigin;BNSPrevPercentage;BNSOrigin;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;Yoda-SID;mp_jcpenney_mixpanel;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;_uetsid;s_ptc;s_cc;_ga;_gid;LPVID;LPSID-58507821;LPCKEY-58507821;jcpvid;_gat;c17;v53;s_sq;CavSF;OrderId;_4c_;CavNVC;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;OrderSource;XSessionId", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/DP1106201520405599C", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://netvision.cavisson.com/nv/JCPenney/cav_nv.js", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://lptag.liveperson.net/tag/tag.js?site=58507821", "HEADER=yoda-checkout:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("MB_API_Bopus_RC_PO_stores_GET", NS_AUTO_STATUS);  
    
//    ns_start_transaction("MOB_Bopus_RC_ProductSummaries_GET");
//    ns_web_url ("API_Bopus_RC_filterContent",
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
//
//    ns_end_transaction("MOB_Bopus_RC_ProductSummaries_GET", NS_AUTO_STATUS);
    ns_page_think_time(0);

      
	
	
	 char orderno [128 + 1]="";
     snprintf(orderno,128,"%s",ns_eval_string("{OrderNoSP1}"));
     ns_save_data_eval("/home/netstorm/work/data/JCPenney/OrderDetail/Bopus/Mob_RegOrderId.txt", NS_APPEND_FILE, orderno);
	


}



