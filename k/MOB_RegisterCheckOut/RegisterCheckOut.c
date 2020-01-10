	/*-----------------------------------------------------------------------------
    Name:RegisterCheckOut
    Recorded By: netstorm
    Date of recording: 06/13/2017 01:28:38
    Flow details:
    Build details: 4.1.7 (build# 51)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
#include "Util.c"


void RegisterCheckOut()
{

	int Exituser = ns_get_random_number_int(1,100);
	int DoPlaceOrder = ns_get_random_number_int(1,100);
    // checkout

//    ns_start_transaction("MOB_InitiateCheckOut");
//	ns_web_url ("API_checkout_Cart",
//        "URL=https://m.jcpenney.com/cart",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0;clientTestPool1;akaau",
//        "PreSnapshot=webpage_1467031199481.png",
//        "Snapshot=webpage_1467031200277.png",
//        INLINE_URLS,
//            "URL=http://libs.coremetrics.com/configs/90024642.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP1003201417030645M.tif?$department_main$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://m.jcpenney.com/v2.1/products/ens6004030003?fields=prices,images,rating,id,manufacturerAdvertisedPrice,marketingLabel,isNew,name,isPreOrder", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0;clientTestPool1;cmTPSet;akaau;rr_rcs", "PreSnapshot=webpage_1467031203361.png", "Snapshot=webpage_1467031203411.png", END_INLINE
//    );
//	ns_end_transaction("MOB_InitiateCheckOut",NS_AUTO_STATUS);
//    ns_page_think_time(0);
   
 /*      char *OrderID = ns_get_cookie_val_ex("DPOrder", NULL, NULL); 
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
       //char *Instance = ns_get_cookie_val_ex("DPInstance", NULL, NULL);
       //ns_save_string(Instance, "InstanceDP");
    

    
	ns_start_transaction("MOB_Reg_CheckOut");
	ns_start_transaction("MB_API_RC_OauthToken_OPTIONS");
	   ns_web_url("MB_API_RC_OauthToken2",
        "URL=https://account-api.jcpenney.com/v5/oauth2/token",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=DPCluster:{DPClusterId}",
	//	"HEADER=X-DPOrder:{OrderIDDP}",
		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        //"HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_RC_OauthToken_OPTIONS",NS_AUTO_STATUS);
	
    ns_start_transaction("MB_API_RC_OauthToken_POST");
    ns_web_url ("MB_API_RC_OauthToken",
        "URL=https://account-api.jcpenney.com/v5/oauth2/token",
        "METHOD=POST",
        "HEADER=DPCluster:{DPClusterId}",
	//	"HEADER=X-DPOrder:{OrderIDDP}",
		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
	    "HEADER=X-Src-Acc-Id:{CustomerIdSP}",
        "HEADER=X-Replace-Bag:true",
        "HEADER=X-Origin:Legacy-Adapter",
        //{"email":"ncdp90000010003@example.com","password":"Load10003","isXOriginHeaderRequired":true,"xOriginValue":"Legacy-Adapter"}
        BODY_BEGIN,
           "{"email":"{EmailIdFP}","password":"{PasswordFP}","isXOriginHeaderRequired":true,"xOriginValue":"Legacy-Adapter"}",
        BODY_END
    );

    ns_end_transaction("MB_API_RC_OauthToken_POST",NS_AUTO_STATUS);
    
	
//      char RefreshTbuff1[1024 + 1]="";
//   snprintf(RefreshTbuff1,1024,"%s",ns_eval_string("{RefreshTokenSP}"));
//   ns_add_cookie_val_ex("Refresh_Token", NULL, NULL, RefreshTbuff1);
//   
   char AccountIdbuff1[64 + 1]="";
   snprintf(AccountIdbuff1,64,"%s",ns_eval_string("{CustomerIdSP}"));
   ns_add_cookie_val_ex("ACCOUNT_ID", NULL, NULL, AccountIdbuff1);
   
   char AccessTbuff1[1024 + 1]="";
   snprintf(AccessTbuff1,1024,"%s",ns_eval_string("{AccessTokenSP}"));
   ns_add_cookie_val_ex("Access_Token", NULL, NULL, AccessTbuff1); 
    
    ns_start_transaction("MB_API_RC_draftorder_OPTIONS");
	    ns_web_url("MB_API_RC_draftorder1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_RC_draftorder_OPTIONS",NS_AUTO_STATUS);

    //ns_web_add_auto_header("customerVidForPerfTestOrder", "false", 0);
    ns_start_transaction("MB_API_RC_draftorder_POST");
    ns_web_url ("MB_API_RC_draftorder2",
    //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L110088407554/draft-order",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=POST",
//        "HEADER=Accept:application/vnd+jcpenney.draft-order+json",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=x-command:initiate-checkout",
        "HEADER=X-Client-Id:Basic amNwLnJ3ZG06QVVndFRydFc5cg",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
//        BODY_BEGIN,
//            "{}",
//        BODY_END
    );

    ns_end_transaction("MB_API_RC_draftorder_POST",NS_AUTO_STATUS);

    ns_start_transaction("MOB_checkout");
    ns_web_url ("Checkout2",
        "URL=https://m.jcpenney.com/checkout",
		"HEADER=Upgrade-Insecure-Requests:1",
      	 "HEADER=Accept-Language:en-us",
        "COOKIE=yoda-checkout;DPCluster;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;cmTPSet;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;DPJSESSIONID;c13;recentSearchData;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;s_sq;LPCKEY-58507821;LPVID;LPSID-58507821;s_cc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;s_ptc;_uetsid;c17;v53;CavSF;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DP_USER_NAME;DYN_USER_ID;DPInstance;testpool;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNVC",
        "PreSnapshot=webpage_1497334991636.png",
        "Snapshot=webpage_1497335002405.png"
    );
  //  ns_end_transaction("MOB_checkout", NS_AUTO_STATUS);

//*************************************SSR/CSR Handling************************//
   if((!strcmp(ns_eval_string("{GroupIdSP}"),""))){
    ns_end_transaction_as("MOB_checkout", NS_AUTO_STATUS, "MOB_checkout_CSR");}
    else {
    ns_end_transaction_as("MOB_checkout", NS_AUTO_STATUS, "MOB_checkout_SSR");
    goto SkipDraftOrder;
    }
//*************************************************************************************//   

	ns_start_transaction("MB_API_RC_draftorder_OPTIONS");
	    ns_web_url("MB_API_RC_draftorder4",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&isGiftRegistry=false&initGetDraftOrder=false&expand=status%2Cdelivery%2Cbilling",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_RC_draftorder_OPTIONS",NS_AUTO_STATUS);
	
    ns_start_transaction("MB_API_RC_draftorder_GET");
    ns_web_url ("MB_API_RC_draftorder3",
         "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&isGiftRegistry=false&initGetDraftOrder=false&expand=status%2Cdelivery%2Cbilling",
        "HEADER=authorization:Bearer {AccessTokenSP}",
         "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;LPCKEY-58507821;LPVID;LPSID-58507821;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DP_USER_NAME;DYN_USER_ID;DPInstance;testpool;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;yoda-checkout",
        "PreSnapshot=webpage_1497335002549.png",
        "Snapshot=webpage_1497335005144.png"
    );

    ns_end_transaction("MB_API_RC_draftorder_GET", NS_AUTO_STATUS);
    
    SkipDraftOrder:
  
  	ns_start_transaction("MB_API_RC_Addresses_OPTIONS");
	    ns_web_url("MB_API_RC_Addresses1",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/addresses",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_RC_Addresses_OPTIONS",NS_AUTO_STATUS);
  
    ns_start_transaction("MB_API_RC_Addresses_GET");
    ns_web_url ("MB_API_RC_Addresses",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/addresses",
        //"URL=https://account-api.jcpenney.com/v5/accounts/L110088407554/addresses",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        //"HEADER=X-Auto-Login:true",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1497335002405.png",
        "Snapshot=webpage_1497335002549.png"
    );

    ns_end_transaction("MB_API_RC_Addresses_GET",NS_AUTO_STATUS);

/*
	ns_start_transaction("MB_API_RC_rewardsprofile_OPTIONS");
	    ns_web_url("MB_API_RC_rewardsprofile1",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/rewards-profile?expand=points%2Ccertificates%2Crecentactivity",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_RC_rewardsprofile_OPTIONS",NS_AUTO_STATUS);

    ns_start_transaction("MB_API_RC_rewardsprofile_GET");
    ns_web_url ("MB_API_RC_rewardsprofile",
       // "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/rewards-profile?expand=points%2Ccertificates%2Crecentactivity",
         "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://lptag.liveperson.net/lptag/api/account/58507821/configuration/applications/taglets/.jsonp?df=0&b=1", "HEADER=DPCluster:L1", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://netvision.cavisson.com/nv/JCPenney/Mobile/config.js", "HEADER=DPCluster:L1", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/8.11.0.3-release_2848/le_secure_storage/storage.secure.min.html?loc=https%3A%2F%2Fm.jcpenney.com&site=58507821&asmr=15&env=prod", "HEADER=DPCluster:L1", "HEADER=yoda-checkout:true", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_RC_rewardsprofile_GET",NS_AUTO_STATUS);
*/    
    ns_end_transaction("MOB_Reg_CheckOut",NS_AUTO_STATUS);
    
    //Page Auto splitted for Method = PUT
    
    ns_start_transaction("MOB_Reg_ShippingAddress");
    ns_start_transaction("MB_API_RC_deliverygroups_OPTIONS");
	    ns_web_url("MB_API_RC_deliverygroups1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/delivery/groups/{GroupIdSP}",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_RC_deliverygroups_OPTIONS",NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_RC_deliverygroups_PUT");
    ns_web_url ("MB_API_RC_deliverygroups",
       // "URL=https://order-api.jcpenney.com/order-api/v1/accounts/L110088407554/draft-order/delivery/groups/sg6548320423",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/delivery/groups/{GroupIdSP}",
        "METHOD=PUT",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
     //"{"address":{"relationships":{"accountAddress":{"id":"c1userci171590035"}}},"instructions":[{}]}",
        BODY_BEGIN,
            "{"address":{"relationships":{"accountAddress":{"id":"{AddressIdSP}"}}}}",
        BODY_END
    );
    ns_end_transaction("MB_API_RC_deliverygroups_PUT",NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_RC_ServiceLevel_OPTIONS");
	    ns_web_url("MB_API_RC_ServiceLevelFetchCall",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status%2Cdelivery",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status%2Cdelivery%2Cbilling",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_RC_ServiceLevel_OPTIONS",NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_RC_ServiceLevel_GET");
    ns_web_url ("MB_API_RC_ServiceLevel",
       // "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status%2Cdelivery",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?includeServiceLevels=true&expand=status%2Cdelivery%2Cbilling",
        "HEADER=Accept-Language:en-us",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=authorization:Bearer {AccessTokenSP}",
		INLINE_URLS,
            "URL=https://m.jcpenney.com/static-checkout/images/jcp-plcc.svg", "HEADER=DPCluster:L1", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-checkout;DPCluster;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;cmTPSet;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;DPJSESSIONID;c13;recentSearchData;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;s_sq;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;c17;v53;s_ptc;s_cc;CavSF;CavNVC;jcpvid;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE,
            "URL=https://www.google-analytics.com/analytics.js", "HEADER=DPCluster:L1", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://sp.analytics.yahoo.com/sp.pl?a=10000&jsonp=YAHOO.ywa.I13N.handleJSONResponse&.yp=25984&f=https%3A%2F%2Fm.jcpenney.com%2Fcheckout&e=https%3A%2F%2Fm.jcpenney.com%2Fcart%2Fsignin&enc=UTF-8", "HEADER=DPCluster:L1", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=B;yoda-checkout;DPCluster", END_INLINE,
            "URL=https://s.yimg.com/wi/ytc.js", "HEADER=DPCluster:L1", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s28224724792317?AQB=1&ndh=1&pf=1&t=13%2F5%2F2017%201%3A25%3A17%202%20300&mid=32542314888770953953666583805762578687&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Acheckout%3Acheckout%20review&g=https%3A%2F%2Fm.jcpenney.com%2Fcheckout%2Freview&c.&events=scCheckout%2Cevent27%2Cevent81%2Cevent3%2Cevent70%3D14.99&.c&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_11&events=scCheckout%2Cevent27%2Cevent81%2Cevent3%2Cevent70%3D14.99&products=%3Bpp5003521148%3B1%3B36.00%3Bevent27%3D36.00%3Bevar6%3D5316097%7Cevar4%3Dstafford%20travel%20easy-care%20broadcloth%20dress%20shirt%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D53160970026%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&aamb=cIBAx_aQzFEHcPoEv0GwcQ&c1=checkout&v1=D%3Dc1&c6=checkout%3Acheckout%20review&c7=http%3A%2F%2Fm.jcpenney.com%2Fcheckout%2Freview&v7=1%3A25%20AM%7CTuesday&c11=checkout&v11=D%3Dc11&c12=release-2.0.8-%3A1.7.0&c14=OX2GDZ6QFXVMJ0HBLW40XLUYQNS6P0I5&c15=D%3Dr&v16=D%3DpageName&c17=d%3Acheckout%3Acheckout%20shipping&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c33=20108506650&v33=D%3Dc33&c39=no%20type%3Alogged-in&v39=D%3Dc39&v42=standard&c44=desktop&v44=D%3Dc44&c45=no%20rewards%20account&v45=D%3Dc45&c46=L110088407554&v46=D%3Dc46&c47=active%7Ccredit&v47=D%3Dc47&v48=D%3Dmid&v49=no&v50=%2B1&v53=checkout&v55=2017-06-12&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=DPCluster:L1", "HEADER=yoda-checkout:true", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );

     ns_end_transaction("MB_API_RC_ServiceLevel_GET",NS_AUTO_STATUS);
     ns_end_transaction("MOB_Reg_ShippingAddress",NS_AUTO_STATUS);
	 ns_page_think_time(0);
	
	//Continue to Payment
	ns_start_transaction("MOB_Reg_Shippingmethod");
	ns_start_transaction("MB_API_RC_PaymentMethod_OPTIONS");
	    ns_web_url("MB_API_RC_PaymentMethod1",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/payment-methods",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        //"HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_RC_PaymentMethod_OPTIONS",NS_AUTO_STATUS);

    ns_start_transaction("MB_API_RC_PaymentMethod_GET");
    ns_web_url ("MB_API_RC_PaymentMethod",
        //"URL=https://account-api.jcpenney.com/v5/accounts/L110088407554/payment-methods",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/payment-methods",
        "HEADER=authorization:Bearer {AccessTokenSP}",
       // "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;LPCKEY-58507821;LPVID;LPSID-58507821;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;testpool;DPSessionTimeOutInterval;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;yoda-checkout",
        "PreSnapshot=webpage_1497335005788.png",
        "Snapshot=webpage_1497335006139.png"
    );

    ns_end_transaction("MB_API_RC_PaymentMethod_GET",NS_AUTO_STATUS);
    ns_end_transaction("MOB_Reg_Shippingmethod",NS_AUTO_STATUS);
    ns_page_think_time(0);
  
//  char *OrderID1 = ns_get_cookie_val_ex("DPOrder", NULL, NULL);
//        ns_save_string(OrderID1, "OrderIDDP1");
  	
    //Enterprise Coupon
    
 int Checkoutcoupon = ns_get_int_val("CheckOutPromoDP");
 //  int Checkoutcoupon = 1;
    if(Checkoutcoupon != 1){

    
    ns_start_transaction("MOB_Reg_ApplyEnterpriseCoupon");
	ns_start_transaction("MB_API_RC_Coupon_bestcoupons_GET");
    ns_web_url ("MB_API_RC_bestcoupons1",
        "URL=https://order-api.jcpenney.com/order-api/v2/best-coupon?expand=pricing",
        //"URL=https://m.jcpenney.com/v4/cart/best-coupons?expand=pricing",
       // "HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "COOKIE=DPCluster;yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;jcp.ab.test;clientTestPool1;recentSearchData;NotValidCookie;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;c13;pn;testVersion;DPJSESSIONID;DPSecureCookie;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;c17;v53;s_ptc;s_cc;CavSF;CavNVC;mp_jcpenney_mixpanel;jcpvid;CavNV;testpool;s_sq;DPUserTracking;DPSessionTimeOutInterval;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier",
        "PreSnapshot=webpage_1498123463985.png",
        "Snapshot=webpage_1498123463111.png"
    );

    ns_end_transaction("MB_API_RC_Coupon_bestcoupons_GET",NS_AUTO_STATUS);
//    
//    char buff2[64 + 1]="";
//          snprintf(buff2,64,"%s",ns_eval_string("{OrderIDDP1}"));
//          ns_add_cookie_val_ex("DPOrder", NULL, NULL, buff2);
    
    ns_start_transaction("MB_API_RC_Coupon_discounts_OPTIONS");
	    ns_web_url("MB_API_RC_discounts",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/adjustment/discounts",
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
    ns_end_transaction("MB_API_RC_Coupon_discounts_OPTIONS",NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_RC_Coupon_discounts_POST");
    ns_web_url ("MB_API_RC_discounts1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/adjustment/discounts",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L110088407554/draft-order/adjustment/discounts",
        "METHOD=POST",
        "HEADER=authorization:Bearer {AccessTokenSP}",
      //  "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;clientTestPool1;recentSearchData;NotValidCookie;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPJSESSIONID;DPSecureCookie;NSPrevPercentage;NSOrigin;mbox;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;mp_jcpenney_mixpanel;jcpvid;DPUserTracking;DPSessionTimeOutInterval;CavNV;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;testpool;yoda-checkout",
        "PreSnapshot=webpage_1498123454443.png",
        "Snapshot=webpage_1498123457913.png",
        //"{"code":"4SOASTA","serialNumber":"0013534302"}",
        BODY_BEGIN,
            "{"code":"{EnterpriseCouponFP}","serialNumber":"{EnterpriseSerialNumberFP}"}",
        BODY_END
    );
    ns_end_transaction("MB_API_RC_Coupon_discounts_POST",NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_RC_Coupon_ServiceLevel_OPTIONS");
	    ns_web_url("MB_API_RC_discounts4",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&includeServiceLevels",
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
    ns_end_transaction("MB_API_RC_Coupon_ServiceLevel_OPTIONS",NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_RC_Coupon_ServiceLevel_GET");
    ns_web_url ("API_EC_discounts2",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&includeServiceLevels",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L110088407554/draft-order/adjustment/discounts",
        "HEADER=authorization:Bearer {AccessTokenSP}",
      //  "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;clientTestPool1;recentSearchData;NotValidCookie;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPJSESSIONID;DPSecureCookie;NSPrevPercentage;NSOrigin;mbox;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;mp_jcpenney_mixpanel;jcpvid;testpool;DPUserTracking;DPSessionTimeOutInterval;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;yoda-checkout",
        "PreSnapshot=webpage_1498123461272.png",
        "Snapshot=webpage_1498123475423.png"
    );

    ns_end_transaction("MB_API_RC_Coupon_ServiceLevel_GET",NS_AUTO_STATUS);
    
	ns_start_transaction("MB_API_RC_Coupon_draftorder_OPTIONS");
	    ns_web_url("MB_API_EC_draftorder1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
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
    ns_end_transaction("MB_API_RC_Coupon_draftorder_OPTIONS",NS_AUTO_STATUS);


    ns_start_transaction("MB_API_RC_Coupon_draftorder_GET");
    ns_web_url ("MB_API_EC_draftorder",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L110088407554/draft-order",
        "HEADER=authorization:Bearer {AccessTokenSP}",
       // "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;clientTestPool1;recentSearchData;NotValidCookie;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPJSESSIONID;DPSecureCookie;NSPrevPercentage;NSOrigin;mbox;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;mp_jcpenney_mixpanel;jcpvid;testpool;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;yoda-checkout",
        "PreSnapshot=webpage_1498123457913.png",
        "Snapshot=webpage_1498123458965.png"
    );

    ns_end_transaction("MB_API_RC_Coupon_draftorder_GET",NS_AUTO_STATUS);
    ns_end_transaction("MOB_Reg_ApplyEnterpriseCoupon",NS_AUTO_STATUS);
	ns_page_think_time(0);
    }
//    char *OrderID2 = ns_get_cookie_val_ex("DPOrder", NULL, NULL);
//        ns_save_string(OrderID2, "OrderIDDP2");
    
/*    
     int SubTotalAmount = ns_get_int_val("SubTotalAmountSP");
    if(SubTotalAmount > 49){
    // freeshipping coupon
	ns_start_transaction("MOB_Reg_FreeShippingCoupon");
//	ns_start_transaction("MB_API_RC_FSH_bestcoupons_GET");
//    ns_web_url ("MB_API_FSH_bestcoupons",
//        "URL=https://m.jcpenney.com/v2/cart/best-coupons",
//        //"HEADER=X-Auto-Login:true",
////        "HEADER=DPCluster:{DPClusterId}",
////		"HEADER=X-DPOrder:{DPOrderId}",
////		"HEADER=DPInstance:{DPInstanceId}",
//        "HEADER=Accept-Language:en-us",
//        "COOKIE=DPCluster;yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;jcp.ab.test;clientTestPool1;recentSearchData;NotValidCookie;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;c13;pn;testVersion;DPJSESSIONID;DPSecureCookie;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;c17;v53;s_ptc;s_cc;CavSF;CavNVC;mp_jcpenney_mixpanel;jcpvid;s_sq;CavNV;testpool;DPUserTracking;DPSessionTimeOutInterval;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier",
//        "PreSnapshot=webpage_1498123509842.png",
//        "Snapshot=webpage_1498123506890.png"
//    );
//
//    ns_end_transaction("MB_API_RC_FSH_bestcoupons_GET",NS_AUTO_STATUS);
	
//	char buff3[64 + 1]="";
//          snprintf(buff3,64,"%s",ns_eval_string("{OrderIDDP2}"));
//          ns_add_cookie_val_ex("DPOrder", NULL, NULL, buff3);
	
	ns_start_transaction("MB_API_RC_FSH_discounts_OPTIONS");
	    ns_web_url("MB_API_FSH_discounts3",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/adjustment/discounts",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
//      "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        //"HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_RC_FSH_discounts_OPTIONS",NS_AUTO_STATUS);
	
	ns_start_transaction("MB_API_RC_FSH_discounts_POST");
    ns_web_url ("MB_API_FSH_discounts1",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L110088407554/draft-order/adjustment/discounts",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/adjustment/discounts",
        "METHOD=POST",
        "HEADER=authorization:Bearer {AccessTokenSP}",
       // "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;clientTestPool1;recentSearchData;NotValidCookie;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPJSESSIONID;DPSecureCookie;NSPrevPercentage;NSOrigin;mbox;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;mp_jcpenney_mixpanel;jcpvid;DPUserTracking;CavNV;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;testpool;yoda-checkout",
        "PreSnapshot=webpage_1498123502030.png",
        "Snapshot=webpage_1498123504631.png",
        //"{"code":"TESTFSH","serialNumber":null}",
        BODY_BEGIN,
            "{"code":"{FreeShippingCouponFP}","serialNumber":null}",
        BODY_END
    );

    ns_end_transaction("MB_API_RC_FSH_discounts_POST",NS_AUTO_STATUS);    
   
    
    ns_start_transaction("MB_API_RC_FSH_discounts_OPTIONS");
	    ns_web_url("MB_API_FSH_discounts4",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/adjustment/discounts",
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
    ns_end_transaction("MB_API_RC_FSH_discounts_OPTIONS",NS_AUTO_STATUS);
      
    ns_start_transaction("MB_API_RC_FSH_discounts_GET");
    ns_web_url ("MB_API_FSH_discounts2",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/adjustment/discounts",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L110088407554/draft-order/adjustment/discounts",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        //"HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;clientTestPool1;recentSearchData;NotValidCookie;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPJSESSIONID;DPSecureCookie;NSPrevPercentage;NSOrigin;mbox;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;mp_jcpenney_mixpanel;jcpvid;testpool;DPUserTracking;DPSessionTimeOutInterval;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;yoda-checkout",
        "PreSnapshot=webpage_1498123506890.png",
        "Snapshot=webpage_1498123514741.png"
    );

    ns_end_transaction("MB_API_RC_FSH_discounts_GET",NS_AUTO_STATUS);
    
	
	 ns_start_transaction("MB_API_RC_FSH_draftorder_OPTIONS");
	    ns_web_url("MB_API_FSH_discounts5",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
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
    ns_end_transaction("MB_API_RC_FSH_draftorder_OPTIONS",NS_AUTO_STATUS);
    


    ns_start_transaction("MB_API_RC_FSH_draftorder_GET");
    ns_web_url ("MB_API_FSH_draftorder",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L110088407554/draft-order",
        "HEADER=authorization:Bearer {AccessTokenSP}",
//        "HEADER=X-Auto-Login:true",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;clientTestPool1;recentSearchData;NotValidCookie;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPJSESSIONID;DPSecureCookie;NSPrevPercentage;NSOrigin;mbox;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;mp_jcpenney_mixpanel;jcpvid;testpool;DPUserTracking;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;yoda-checkout",
        "PreSnapshot=webpage_1498123504631.png",
        "Snapshot=webpage_1498123505623.png"
    );

    ns_end_transaction("MB_API_RC_FSH_draftorder_GET",NS_AUTO_STATUS);
    ns_end_transaction("MOB_Reg_FreeShippingCoupon",NS_AUTO_STATUS);
	ns_page_think_time(0);
	
    }
*/	
     
 	//Gift card
 	// 10% of users go for Gift Card ..
 	 DoPlaceOrder = 11;
    if( DoPlaceOrder <= 10){
 	ns_start_transaction("MOB_Reg_GiftCard");
 	ns_start_transaction("MB_API_GiftCard_OPTIONS");
	    ns_web_url("MB_API_GiftCard_giftcard1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/unnamed/gift-cards",
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
    ns_end_transaction("MB_API_GiftCard_OPTIONS",NS_AUTO_STATUS);

 	ns_start_transaction("MB_API_GiftCard_POST");
    ns_web_url ("MB_API_GiftCard_giftcard",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/unnamed/gift-cards",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L110088407554/draft-order/billing/unnamed/gift-cards",
        "METHOD=POST",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
//      "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;clientTestPool1;recentSearchData;NotValidCookie;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPJSESSIONID;DPSecureCookie;NSPrevPercentage;NSOrigin;mbox;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;DPInstance;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;mp_jcpenney_mixpanel;DPUserTracking;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;yoda-checkout",
        "REDIRECT=YES",
        "LOCATION=https://order-api.jcpenney.com/order-api/v1/accounts/L110088407554/draft-order/unnamed/gift-cards/pg6417050556",
        "PreSnapshot=webpage_1498123335780.png",
        "Snapshot=webpage_1498123337946.png",
        //"{"number":"6006492002957782008","pin":"1499"}",
        BODY_BEGIN,
            "{"number":"{GiftCardNoFP}","pin":"{GiftCardPinFP}"}",
        BODY_END
    );

    ns_end_transaction("MB_API_GiftCard_POST",NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_GiftCard_draftorder_OPTIONS");
	    ns_web_url("MB_API_GiftCard_draftorder1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&includeServiceLevels=true",
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
    ns_end_transaction("MB_API_GiftCard_draftorder_OPTIONS",NS_AUTO_STATUS);
 
 	ns_start_transaction("MB_API_GiftCard_draftorder_GET");
    ns_web_url ("MB_API_GiftCard_draftorder",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&includeServiceLevels=true",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L110088407554/draft-order",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;yoda-gallery;clientTestPool1;recentSearchData;NotValidCookie;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPJSESSIONID;DPSecureCookie;NSPrevPercentage;NSOrigin;mbox;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;testpool;DPInstance;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;mp_jcpenney_mixpanel;DPUserTracking;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;jcpvid;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;yoda-checkout",
        "PreSnapshot=webpage_1498123340688.png",
        "Snapshot=webpage_1498123344109.png"
    );

    ns_end_transaction("MB_API_GiftCard_draftorder_GET",NS_AUTO_STATUS);
    ns_end_transaction("MOB_Reg_GiftCard",NS_AUTO_STATUS);
    ns_page_think_time(0);
    }
    
    
//     if(Exituser <= 27){
//    	 ns_start_transaction("MOB_AbandonmentAtPayment");
//         ns_end_transaction("MOB_AbandonmentAtPayment", NS_AUTO_STATUS);
//    	ns_exit_session();
//    }
    
	// Review Order
	
	ns_start_transaction("MOB_Reg_PaymentInfo");
	ns_start_transaction("MB_API_RC_PM_Paymentmethod_OPTIONS");
	    ns_web_url("MB_API_RC_PM_Paymentmethod_opt",
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
    ns_end_transaction("MB_API_RC_PM_Paymentmethod_OPTIONS",NS_AUTO_STATUS);

    if(!((strcmp((ns_eval_string("{CardAuthRequiredSP}")),"CardNumberRentryRequired")))){
    	ns_start_transaction("MOB_Reg_CardAuthRequired");
    	ns_end_transaction("MOB_Reg_CardAuthRequired", NS_AUTO_STATUS);
	
    ns_start_transaction("MB_API_RC_PM_Paymentmethod_PUT");
    ns_web_url ("MB_API_RC_PM_Paymentmethod1",
        //"URL=https://account-api.jcpenney.com/v5/accounts/C111678169578/payment-methods/c1usercc158280127",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/payment-methods/{PaymentMethodIdSP}",
        "METHOD=PUT",
        "HEADER=authorization:Bearer {AccessTokenSP}",
      //  "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;LPCKEY-58507821;LPVID;LPSID-58507821;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;testpool;DPSessionTimeOutInterval;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;yoda-checkout",
        "PreSnapshot=webpage_1497335006139.png",
        "Snapshot=webpage_1497335010019.png",
        //"{"type":"JCP","cvv":"123","address":{"id":"c1userci168960197","firstName":"Delete2014","lastName":"SRCOM000000032095","addressLineOne":"1002 RIVER RD","country":"US","city":"ORRINGTON","state":"ME","zip":"04474","phone":"4562315096","addressVid":"20136646441","href":"https://services.prod.dp-prod.jcpcloud2.net/v1/accounts/C111678169578/addresses/c1userci168960197","lineOne":"1002 RIVER RD"},"cardId":"c1usercc158280127","id":"c1usercc158280127","number":false}",
        BODY_BEGIN,
            "{"type":"{CardTypeFP}","cvv":"123","address":{"id":"{AddressIdSP1}","firstName":"{FirstNameSP}","lastName":"{LastNameSP}","addressLineOne":"{AddressSP}","country":"US","city":"{CitySP}","state":"{StateSP}","zip":"{ZipcodeSP}","phone":"{PhoneNoSP}","addressVid":"{AddressVidSP}","href":"https://services.{CloudEnvNameFP}.dp-prod.jcpcloud2.net/v5/accounts/{CustomerIdSP}/addresses/{AddressIdSP1}","lineOne":"{AddressSP}"},"cardId":"{PaymentMethodIdSP}","id":"{PaymentMethodIdSP}","cardNumber":"{CardnoFP}"}",
        BODY_END
    );
    ns_end_transaction("MB_API_RC_PM_Paymentmethod_PUT",NS_AUTO_STATUS);
	}
	else{
		ns_start_transaction("MB_API_RC_PM_Paymentmethod_PUT");
    ns_web_url ("MB_API_RC_PM_Paymentmethod",
        //"URL=https://account-api.jcpenney.com/v5/accounts/C111678169578/payment-methods/c1usercc158280127",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/payment-methods/{PaymentMethodIdSP}",
        "METHOD=PUT",
        "HEADER=authorization:Bearer {AccessTokenSP}",
      //  "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;LPCKEY-58507821;LPVID;LPSID-58507821;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;testpool;DPSessionTimeOutInterval;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;yoda-checkout",
        "PreSnapshot=webpage_1497335006139.png",
        "Snapshot=webpage_1497335010019.png",
        //"{"type":"JCP","cvv":"123","address":{"id":"c1userci168960197","firstName":"Delete2014","lastName":"SRCOM000000032095","addressLineOne":"1002 RIVER RD","country":"US","city":"ORRINGTON","state":"ME","zip":"04474","phone":"4562315096","addressVid":"20136646441","href":"https://services.prod.dp-prod.jcpcloud2.net/v1/accounts/C111678169578/addresses/c1userci168960197","lineOne":"1002 RIVER RD"},"cardId":"c1usercc158280127","id":"c1usercc158280127","number":false}",
        BODY_BEGIN,
            "{"type":"{CardTypeFP}","cvv":"123","address":{"id":"{AddressIdSP1}","firstName":"{FirstNameSP}","lastName":"{LastNameSP}","addressLineOne":"{AddressSP}","country":"US","city":"{CitySP}","state":"{StateSP}","zip":"{ZipcodeSP}","phone":"{PhoneNoSP}","addressVid":"{AddressVidSP}","href":"https://services.{CloudEnvNameFP}.dp-prod.jcpcloud2.net/v5/accounts/{CustomerIdSP}/addresses/{AddressIdSP1}","lineOne":"{AddressSP}"},"cardId":"{PaymentMethodIdSP}","id":"{PaymentMethodIdSP}"}",
        BODY_END
    );
    ns_end_transaction("MB_API_RC_PM_Paymentmethod_PUT",NS_AUTO_STATUS);
	}
	
    ns_start_transaction("MB_API_RC_CreditCard_OPTIONS");
	    ns_web_url("MB_API_RC_CreditCard2",
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
    ns_end_transaction("MB_API_RC_CreditCard_OPTIONS",NS_AUTO_STATUS);

    ns_start_transaction("MB_API_RC_CreditCard_POST");
    ns_web_url ("MB_API_RC_CreditCard1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/credit-cards",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L110088407554/draft-order/billing/credit-cards",
        "METHOD=POST",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=x-reference-valid:false",
        "PreSnapshot=webpage_1497335112564.png",
        "Snapshot=webpage_1497335114035.png",
        // "{"address":{"relationships":{"accountAddress":{"id":"{AddressIdSP1}"}}},"relationships":{"accountPaymentMethod":{"id":"{PaymentMethodIdSP}"}}}",
        BODY_BEGIN,
           "{"relationships":{"accountPaymentMethod":{"id":"{PaymentMethodIdSP}"}}}",
        BODY_END
    );
    ns_end_transaction("MB_API_RC_CreditCard_POST",NS_AUTO_STATUS);
/*
    ns_start_transaction("MB_API_RC_PM_rewardsprofile_OPTIONS");
	    ns_web_url("MB_API_RC_PM_rewardsprofile2",
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
    ns_end_transaction("MB_API_RC_PM_rewardsprofile_OPTIONS",NS_AUTO_STATUS);

    ns_start_transaction("MB_API_RC_PM_rewardsprofile_GET");
    ns_web_url ("MB_API_RC_PM_rewardsprofile",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/billing/credit-cards",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/rewards-profile?expand=points%2Ccertificates%2Crecentactivity",
        "HEADER=authorization:Bearer {AccessTokenSP}",
       // "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;DPInstance;DPUserTracking;testpool;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;jcpvid;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;yoda-checkout",
        "PreSnapshot=webpage_1497335114035.png",
        "Snapshot=webpage_1497335115810.png"
    );

    ns_end_transaction("MB_API_RC_PM_rewardsprofile_GET",NS_AUTO_STATUS);
*/
    ns_start_transaction("MB_API_RC_PM_draftorderbilling_OPTIONS");
	ns_web_url("MB_API_RC_PM_financingCardIdFetchCall",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=billing",
        "METHOD=OPTIONS",
       "HEADER=Access-Control-Request-Method:GET",
		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        //"HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_RC_PM_draftorderbilling_OPTIONS",NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_RC_PM_draftorderbilling_GET");
    ns_web_url ("MB_API_RC_financingCardId",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=billing",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L117020463435/draft-order/billing/credit-cards/pg6610240461/financing?cardId=pg6610240461",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
           );

    ns_end_transaction("MB_API_RC_PM_draftorderbilling_GET", NS_AUTO_STATUS);

  	ns_start_transaction("MB_API_RC_PM_draftorder_OPTIONS");
	    ns_web_url("MB_API_RC_PM_draftorder1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&includeServiceLevels=true",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        //"HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_RC_PM_draftorder_OPTIONS",NS_AUTO_STATUS);
  
    ns_start_transaction("MB_API_RC_PM_draftorder_GET");
    ns_web_url ("MB_API_RC_PM_draftorder",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&includeServiceLevels=true",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L110088407554/draft-order",
        "HEADER=authorization:Bearer {AccessTokenSP}",
       // "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
		 "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;jcpvid;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;yoda-checkout",
        "PreSnapshot=webpage_1497335118424.png",
        "Snapshot=webpage_1497335120100.png"
    );

    ns_end_transaction("MB_API_RC_PM_draftorder_GET",NS_AUTO_STATUS);
    ns_end_transaction("MOB_Reg_PaymentInfo",NS_AUTO_STATUS);
	ns_page_think_time(0);
	
 	
 
 	// Check to see the Cart Cost .. If it is less than 5$ do not go for Place Order ..
    int OrderTotal = atoi(ns_eval_string("{SubTotalAmountSP}"));
    //printf("**********OrderTotal=******%d********",OrderTotal);
    if (OrderTotal <= 6)
    {
    ns_start_transaction("MOB_OrderTotalLessthan5");
    ns_end_transaction("MOB_OrderTotalLessthan5", NS_AUTO_STATUS);
    ns_exit_session();
    }
 
    if(Exituser <= 53){
    	 ns_start_transaction("MOB_AbandonmentAtOrderReview");
         ns_end_transaction("MOB_AbandonmentAtOrderReview", NS_AUTO_STATUS);
    	ns_exit_session();
    }

    // Place Order

    //Page Auto splitted for Method = POST


 	ns_start_transaction("TotalSubmitOrder");
    ns_start_transaction("MOB_SubmitOrder");
    ns_start_transaction("MOB_Reg_SubmitOrder");
    ns_start_transaction("MB_API_RC_PO_draftorder_OPTIONS");
	    ns_web_url("MB_API_RC_PO_draftorder1",
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
    ns_end_transaction("MB_API_RC_PO_draftorder_OPTIONS",NS_AUTO_STATUS);

    ns_start_transaction("MB_API_RC_PO_draftorder_POST");
    ns_web_url ("MB_API_RC_PO_draftorder",
    //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L111923108190/draft-order",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=POST",
        //"HEADER=accept:application/vnd+jcpenney.draft-order+json",
        "HEADER=Accept: application/json",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=x-command:submit",
        "HEADER=X-Client-Id:Basic amNwLnJ3ZG06QVVndFRydFc5cg",
	   "HEADER=X-ETag: {EtagIdSP}.Disabled",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
//        BODY_BEGIN,
//            "{}",
//        BODY_END
    );
 
    ns_end_transaction("MB_API_RC_PO_draftorder_POST",NS_AUTO_STATUS);
    
    ns_start_transaction("MOB_OrderConfirmation");
    	ns_web_url("MB_OrderConfirmation",
        "URL=https://m.jcpenney.com/checkout/oc?OrderId={OrderIdSP}",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
    );
//	ns_end_transaction("MOB_OrderConfirmation", NS_AUTO_STATUS);

		//***********************************SSR/CSR Handling**************************//
    if((!strcmp(ns_eval_string("{OrderNoSP1}"),""))){
    ns_end_transaction_as("MOB_OrderConfirmation", NS_AUTO_STATUS, "MOB_OrderConfirmation_CSR");}
    else {
    ns_end_transaction_as("MOB_OrderConfirmation", NS_AUTO_STATUS, "MOB_OrderConfirmation_SSR");
    goto SkipOrderConfirmation;
    }
//********************************************************************************// 
	
	ns_start_transaction("MB_API_RC_PO_orders_OPTIONS");
	    ns_web_url("MB_API_RC_orders1",
        "URL=https://order-api.jcpenney.com/order-api/v1/orders/{OrderIdSP}",
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
    ns_end_transaction("MB_API_RC_PO_orders_OPTIONS",NS_AUTO_STATUS);


    ns_start_transaction("MB_API_RC_PO_orders_GET");
    ns_web_url ("MB_API_RC_orders",
     //"URL=https://order-api.jcpenney.com/order-api/v1/orders/L15995640135",
        "URL=https://order-api.jcpenney.com/order-api/v1/orders/{OrderIdSP}",
        "METHOD=GET",
        "HEADER=X-Auto-Login:true",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=x-command:submit",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;LPCKEY-58507821;LPVID;LPSID-58507821;_uetsid;jcpvid;DPUserTracking;testpool;DPSessionTimeOutInterval;DPInstance;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;yoda-checkout",
        "PreSnapshot=webpage_1497335243177.png",
        "Snapshot=webpage_1497335190066.png"
    );
    ns_end_transaction("MB_API_RC_PO_orders_GET",NS_AUTO_STATUS);
    
    SkipOrderConfirmation:
   
    ns_end_transaction("MOB_Reg_SubmitOrder",NS_AUTO_STATUS);
    ns_end_transaction("MOB_SubmitOrder",NS_AUTO_STATUS);
    ns_end_transaction("TotalSubmitOrder",NS_AUTO_STATUS);

    ns_start_transaction("MB_API_RC_SiteWidePromo_OPTIONS");
    	ns_web_url ("MB_API_RC_SiteWidePromo1",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/checkout/oc",
        "METHOD=OPTIONS",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
    );
    ns_end_transaction("MB_API_RC_SiteWidePromo_OPTIONS",NS_AUTO_STATUS);

    ns_start_transaction("MB_API_RC_SiteWidePromo_GET");
    	ns_web_url ("MB_API_RC_SiteWidePromo",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/checkout/oc",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
    );
    ns_end_transaction("MB_API_RC_SiteWidePromo_GET",NS_AUTO_STATUS);  
	
//	ns_start_transaction("MB_API_RC_PO_Online_GET");
//    	ns_web_url("MB_API_RC_PO_Online",
//        "URL=https://m.jcpenney.com/v2/content/pg40071600006/online/S1",
//        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=Accept-Language:en-us",
//        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPSecureCookie;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;_4c_;Yoda-checkout",
//    );
//    ns_end_transaction("MB_API_RC_PO_Online_GET", NS_AUTO_STATUS);


//	ns_start_transaction("MOB_RC_PO_ProductSummaries_GET");
//    ns_web_url("API_RC_PO_FilterContent",
//        "URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-summaries-aggregator?ppId={RootPPIDFP}",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//        INLINE_URLS,
//            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
//    );
//	ns_end_transaction("MOB_RC_PO_ProductSummaries_GET", NS_AUTO_STATUS);
    ns_page_think_time(0);
    get_YodaRegOrderdetail();
}
