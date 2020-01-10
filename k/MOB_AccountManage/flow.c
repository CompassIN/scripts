/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: netstorm
    Date of recording: 04/28/2017 01:40:28
    Flow details:
    Build details: 4.1.6 (build# 56)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{	
	ns_advance_param("CloudEnvFP");
	char PaymentIdbuff[64 + 1] = "";
    char DPClusterbuff1[64 + 1]="";
    snprintf(DPClusterbuff1,64,"%s",ns_eval_string("{CookieFP}"));
    ns_add_cookie_val_ex("DPCluster", NULL, NULL, DPClusterbuff1);
          
 	//********************************Setting for AWS Env******************************//
    	char cloudEnv[64 + 1]="";
	    snprintf(cloudEnv,64,"%s",ns_eval_string("{CloudEnvFP}"));
        ns_web_add_auto_header("X-JCPCloud-Origin", cloudEnv, 0);
	


    // Click on Account
    // Click On SignIn
    	char AccessTbuff1[1024 + 1]="";
    int Exituser = ns_get_random_number_int(1,100);
    ns_start_transaction("MOB_CAM_ClickOnSignIn");	   
    ns_web_url ("API_SignIn",
        "URL=https://m.jcpenney.com/signin",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=yoda-experience;BNSPrevPercentage;BNSOrigin;mbox;jcp.ab.test;clientTestPool1;testpool;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID",
        "PreSnapshot=webpage_1493360853295.png",
        "Snapshot=webpage_1493360853398.png",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/b/assets/img/logo.svg?v=20170411105036", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;BNSPrevPercentage;BNSOrigin;mbox;jcp.ab.test;clientTestPool1;testpool;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID", END_INLINE,
            "URL=https://m.jcpenney.com/b/assets/css/pure-base.css?v=20170411105036", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;BNSPrevPercentage;BNSOrigin;mbox;jcp.ab.test;clientTestPool1;testpool;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID", END_INLINE,
            "URL=https://m.jcpenney.com/b/assets/css/home.css?v=20170411105036", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;BNSPrevPercentage;BNSOrigin;mbox;jcp.ab.test;clientTestPool1;testpool;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID", END_INLINE,
            "URL=https://m.jcpenney.com/b/assets/vendor/jquery.js?v=2.1.1", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;BNSPrevPercentage;BNSOrigin;mbox;jcp.ab.test;clientTestPool1;testpool;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID", END_INLINE,
            "URL=https://m.jcpenney.com/b/core.0565c9daa670b7ab4f77.js", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;BNSPrevPercentage;BNSOrigin;mbox;jcp.ab.test;clientTestPool1;testpool;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID", END_INLINE,
            "URL=https://m.jcpenney.com/b/deps.dd2ae7afe78e50119c68.js", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;BNSPrevPercentage;BNSOrigin;mbox;jcp.ab.test;clientTestPool1;testpool;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID", END_INLINE,
            "URL=https://m.jcpenney.com/b/assets/js/jcpredirectrules.js?v=20170411105036", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;BNSPrevPercentage;BNSOrigin;mbox;jcp.ab.test;clientTestPool1;testpool;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID", END_INLINE,
            "URL=https://m.jcpenney.com/b/app.5f83dc802b0c15665be9.js", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;BNSPrevPercentage;BNSOrigin;mbox;jcp.ab.test;clientTestPool1;testpool;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID", END_INLINE,
            "URL=https://m.jcpenney.com/b/pages.3f844f801f9729f12e70.js", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;BNSPrevPercentage;BNSOrigin;mbox;jcp.ab.test;clientTestPool1;testpool;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID", END_INLINE,
            "URL=https://m.jcpenney.com/b/assets/vendor/mbox-responsive.js", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;BNSPrevPercentage;BNSOrigin;mbox;jcp.ab.test;clientTestPool1;testpool;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID", END_INLINE,
            "URL=https://m.jcpenney.com/b/assets/fonts/jcp-icons_1ec365fb9f26fa6928906e2955234fa6.woff", "HEADER=Accept-Language:en-in", "HEADER=Origin:https://m.jcpenney.com", "COOKIE=yoda-experience;BNSPrevPercentage;BNSOrigin;mbox;jcp.ab.test;clientTestPool1;testpool;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID", END_INLINE,
            "URL=https://cdn.tt.omtrdc.net/cdn/target.js", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://jcpenney.tt.omtrdc.net/m2/jcpenney/mbox/ajax?mboxHost=m.jcpenney.com&mboxPage=1493360843277-812513&screenHeight=768&screenWidth=1366&browserWidth=1366&browserHeight=607&browserTimeOffset=-300&colorDepth=24&mboxSession=1493360771880-653748&mboxPC=1493360771880-653748.20_43&login_status=null&mboxCount=1&mboxTime=1493342843282&mbox=target-global-mbox&mboxId=0&mboxURL=https%3A%2F%2Fm.jcpenney.com%2Fsignin&mboxReferrer=http%3A%2F%2Fm.jcpenney.com%2F&mboxVersion=60", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.jcpenney.com/signin", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;BNSPrevPercentage;BNSOrigin;jcp.ab.test;clientTestPool1;testpool;cmTPSet;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;mbox", END_INLINE
    );
    ns_end_transaction("MOB_CAM_ClickOnSignIn", NS_AUTO_STATUS);    
	ns_page_think_time(0.102);
		

	// Enter Username/Password and SignIn
//    ns_start_transaction("MOB_CAM_Login"); 
    ns_start_transaction("MB_API_CAM_token_OPTIONS");
        ns_web_url("API_CAM_OauthTokenfetchCall",
        "URL=https://account-api.jcpenney.com/v5/oauth2/token",
        "METHOD=OPTIONS",
        "HEADER=X-Origin:Legacy-Adapter",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_token_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_CAM_token_POST");
        ns_web_url ("API_CAM_token",
        "URL=https://account-api.jcpenney.com/v5/oauth2/token",
        "METHOD=POST",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        //"{"email":"srcom000000032033@example.com","password":"Load32033","rememberMe":false,"grant_type":"password"}",
        BODY_BEGIN,
            "{"email":"{EmailIdFP}","password":"{PasswordFP}","grant_type":"password"}",
        BODY_END
    );
    ns_end_transaction("MB_API_CAM_token_POST", NS_AUTO_STATUS);
   
   if(Exituser <= 26){
    	 ns_start_transaction("MOB_CAM_AbandonmentAfterLogin");
     	 ns_end_transaction("MOB_CAM_AbandonmentAfterLogin", NS_AUTO_STATUS);
 //    	 ns_end_transaction("MOB_CAM_Login", NS_AUTO_STATUS);
     	 goto signout;
    	//ns_exit_session();
    }
	ns_start_transaction("MOB_CAM_AccountDashboard");
    ns_web_url ("AcountDashoard",
        "URL=https://m.jcpenney.com/account/dashboard?showNavPanel=true",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/css/dotcom_global_cssBundle.css?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c23;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/loading.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c23;s_sq;CavNVC;DPInstance;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPCluster;DPLastAccessedTime;mbox;DPIdentifier;LegacyIdentifier", END_INLINE
    );
    ns_end_transaction("MOB_CAM_AccountDashboard", NS_AUTO_STATUS);
    
	if(!((strcmp((ns_eval_string("{PaymentIdSP1}")),"")))){ 
   ns_start_transaction("MB_API_CAM_AddressespaymentMethods_OPTIONS");
        ns_web_url("API_CAM_AddressespaymentMethodsfetchCall",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}?expand=addresses%2CpaymentMethods%2Cpreferences%2Cfavstore%2Ccoupons",
        "METHOD=OPTIONS",
        "HEADER=X-Origin:Legacy-Adapter",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_AddressespaymentMethods_OPTIONS", NS_AUTO_STATUS);
    
   ns_start_transaction("MB_API_CAM_AddressespaymentMethods_GET");
	   ns_web_url ("API_CAM_AddressespaymentMethods",
        //"URL=https://account-api.jcpenney.com/v5/accounts/C111678517307?expand=addresses%2CpaymentMethods%2Cpreferences%2Cfavstore",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}?expand=addresses%2CpaymentMethods%2Cpreferences%2Cfavstore%2Ccoupons",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=accept-version:5",
    );

   ns_end_transaction("MB_API_CAM_AddressespaymentMethods_GET", NS_AUTO_STATUS);    

	snprintf(PaymentIdbuff,64,"%s",ns_eval_string("{PaymentIdSP}"));
    ns_save_string(PaymentIdbuff, "PaymentIdDP");
	}
	else
	{
	snprintf(PaymentIdbuff,64,"%s",ns_eval_string("{PaymentIdSP1}"));
    ns_save_string(PaymentIdbuff, "PaymentIdDP");	
	}
    
//   ns_start_transaction("MB_API_CAM_scheduling_OPTIONS");
//        ns_web_url("API_CAM_schedulingfetchCall",
//        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/scheduling?service=decorating%2Csephora%2Csalon",
//        "METHOD=OPTIONS",
//        "HEADER=X-Origin:Legacy-Adapter",
//        "HEADER=Access-Control-Request-Method:GET",
//        "HEADER=Access-Control-Request-Headers:authorization, content-type",
//        "HEADER=Accept-Language:en-us",
//        INLINE_URLS,
//            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
//    );
//    ns_end_transaction("MB_API_CAM_scheduling_OPTIONS", NS_AUTO_STATUS);
//    
//    ns_start_transaction("MB_API_CAM_scheduling_GET");	
//    ns_web_url ("API_CAM_scheduling",
//        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/scheduling?service=decorating%2Csephora%2Csalon",
//        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=Accept-Language:en-us",
//        "HEADER=authorization:Bearer {AccessTokenSP}",
//        "HEADER=Origin:https://www.jcpenney.com",
//        "HEADER=accept-version:5",
//        "COOKIE=userStoreInfo;userLatLong;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;wlcme;optimizelyEndUserId;optimizelySegments;optimizelyBuckets;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;marketing;TLTSID;AKJCP;SelectedCountry;shipToCountry;shipToCurrencyCode;mp_jcpenney_mixpanel;_ga;_gid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;yoda-account-desktop;LPVID;LPSID-58507821;_uetsid;DPJSESSIONID;DPUserTracking;DPInstance;DP_USER_FAVCOUNT;ACCTSRC;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DYN_USER_ID;DP_SFL_PPIDS;DP_ORDER_INFO;DPOrder;DPLastAccessedTime;DPCluster;DPSessionTimeOutInterval;DP_USER_NAME;DP_USER_INFO;_4c_;mbox;DPIdentifier;LegacyIdentifier",
//        "PreSnapshot=webpage_1500275211234.png",
//        "Snapshot=webpage_1500275211249.png"
//    );
//    ns_end_transaction("MB_API_CAM_scheduling_GET", NS_AUTO_STATUS);   
    
//    ns_start_transaction("MB_API_CAM_rewards_OPTIONS");
//        ns_web_url("API_CAM_rewards1",
//        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/rewards-profile?expand=points%2Ccertificates%2Crecentactivity",
//        "METHOD=OPTIONS",
//        "HEADER=X-Origin:Legacy-Adapter",
//        "HEADER=Access-Control-Request-Method:GET",
//        "HEADER=Access-Control-Request-Headers:authorization, content-type",
//        "HEADER=Accept-Language:en-us",
//        INLINE_URLS,
//            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
//    );
//    ns_end_transaction("MB_API_CAM_rewards_OPTIONS", NS_AUTO_STATUS);
//    
//    ns_start_transaction("MB_API_CAM_rewards_GET");	
//    ns_web_url ("API_CAM_rewards",
//        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/rewards-profile?expand=points%2Ccertificates%2Crecentactivity",
//        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=Accept-Language:en-us",
//        "HEADER=authorization:Bearer {AccessTokenSP}",
//        "HEADER=accept-version:5",
//        "COOKIE=userStoreInfo;userLatLong;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;wlcme;optimizelyEndUserId;optimizelySegments;optimizelyBuckets;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;marketing;TLTSID;AKJCP;SelectedCountry;shipToCountry;shipToCurrencyCode;mp_jcpenney_mixpanel;_ga;_gid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;yoda-account-desktop;LPVID;LPSID-58507821;_uetsid;DPJSESSIONID;DPUserTracking;DPInstance;DP_USER_FAVCOUNT;ACCTSRC;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DYN_USER_ID;DP_SFL_PPIDS;DP_ORDER_INFO;DPOrder;DPLastAccessedTime;DPCluster;DPSessionTimeOutInterval;DP_USER_NAME;DP_USER_INFO;_4c_;mbox;DPIdentifier;LegacyIdentifier",
//        "PreSnapshot=webpage_1500275211234.png",
//        "Snapshot=webpage_1500275211249.png"
//    );
//    ns_end_transaction("MB_API_CAM_rewards_GET", NS_AUTO_STATUS);               
                      
//	ns_end_transaction("MOB_CAM_Login", NS_AUTO_STATUS);
	ns_page_think_time(0.102);
  

	ns_start_transaction("MOB_CAM_RewardDashoard");
    ns_web_url ("RewardDashoard",
        "URL=https://m.jcpenney.com/rewards/rewards/dashboard",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/css/dotcom_global_cssBundle.css?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c23;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/loading.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c23;s_sq;CavNVC;DPInstance;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPCluster;DPLastAccessedTime;mbox;DPIdentifier;LegacyIdentifier", END_INLINE
    );
    ns_end_transaction("MOB_CAM_RewardDashoard", NS_AUTO_STATUS);

/*   
    	ns_start_transaction("MB_API_CAM_rewards_OPTIONS"); 
		ns_web_url ("rewardsPage1",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/rewards-profile?expand=points%2Ccertificates%2Crecentactivity",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:accept-version,authorization,content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-account/images/jcpRedCard.png", "HEADER=Accept-Language:en-in", "HEADER=DPCluster:L1", "COOKIE=userStoreInfo;userLatLong;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;wlcme;optimizelyEndUserId;optimizelySegments;optimizelyBuckets;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;marketing;TLTSID;AKJCP;SelectedCountry;shipToCountry;shipToCurrencyCode;mp_jcpenney_mixpanel;_ga;_gid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;yoda-account-desktop;LPVID;LPSID-58507821;_uetsid;DPJSESSIONID;DPUserTracking;DPInstance;DP_USER_FAVCOUNT;ACCTSRC;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DYN_USER_ID;DP_SFL_PPIDS;DP_ORDER_INFO;DPOrder;DPLastAccessedTime;DPCluster;DPSessionTimeOutInterval;DP_USER_NAME;DP_USER_INFO;_4c_;mbox;DPIdentifier;LegacyIdentifier", END_INLINE
    );
	ns_end_transaction("MB_API_CAM_rewards_OPTIONS", NS_AUTO_STATUS);
	   
    ns_start_transaction("MB_API_CAM_rewards_GET"); 
		 ns_web_url ("rewardsPage",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/rewards-profile?expand=points%2Ccertificates%2Crecentactivity",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=accept-version:5",

        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-account/images/jcpRedCard.png", "HEADER=Accept-Language:en-in", "HEADER=DPCluster:L1", "COOKIE=userStoreInfo;userLatLong;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;wlcme;optimizelyEndUserId;optimizelySegments;optimizelyBuckets;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;marketing;TLTSID;AKJCP;SelectedCountry;shipToCountry;shipToCurrencyCode;mp_jcpenney_mixpanel;_ga;_gid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;yoda-account-desktop;LPVID;LPSID-58507821;_uetsid;DPJSESSIONID;DPUserTracking;DPInstance;DP_USER_FAVCOUNT;ACCTSRC;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DYN_USER_ID;DP_SFL_PPIDS;DP_ORDER_INFO;DPOrder;DPLastAccessedTime;DPCluster;DPSessionTimeOutInterval;DP_USER_NAME;DP_USER_INFO;_4c_;mbox;DPIdentifier;LegacyIdentifier", END_INLINE
    );
   ns_end_transaction("MB_API_CAM_rewards_GET", NS_AUTO_STATUS);
*/   
   ns_page_think_time(2.715);  	
  
//***********************1st product SFL****************//
  
    ns_start_transaction("MOB_CAM_PGP_savedItems");  
    ns_start_transaction("MB_API_CAM_PGPSFL_myFavorites_OPTIONS");
        ns_web_url("API_CAM_PGP_savedItemsfetchCall",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/myFavorites",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:accept-version,authorization,content-type,dpcluster,dpinstance,dpjsessionid",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_PGPSFL_myFavorites_OPTIONS", NS_AUTO_STATUS); 
     
    ns_start_transaction("MB_API_CAM_PGPSFL_myFavorites_POST");   
	ns_web_url ("API_CAM_PGP_savedItems",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/myFavorites",
        //"URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/myFavorites",
        "METHOD=POST",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=Accept-Version:5",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        BODY_BEGIN,
            "[{"product":{"id":"{SFLProductIdFP}"},"itemId":null,"quantity":1}]",
        BODY_END,
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=14&ci=90024642&vn2=e4.0&st=1469690809484&vn1=4.16.9&ec=utf-8&cid=Logged%20In%20Customer%20Gallery&cat=2&ccid=Add%20To%20Saved%20Items&rnd=1469693888671&c_a1=pp5007300005&c_a3=Logged%20In%20Customer%20Gallery&ul=http%3A%2F%2Fm.jcpenney.com%2Fjuniors%2Fdresses%2Fcat.jump%3Fid%3Dcat100240012", "HEADER=Accept-Language:en-in", "COOKIE=DPJSESSIONID;DPUserTracking;testpool;DPSessionTimeOutInterval;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_gat;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;USER_ACCT_ID;BNSPrevPercentage;BNSOrigin;mmcore.tst;clientTestPool1;_ga;mm-loginstatus;mmapi.store.p.0;mmapi.store.s.0;90024642_reset;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_ID;DP_SFL_PPIDS;fsr.s", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/css/product.css?v=20160720113215", "HEADER=Accept-Language:en-in", "COOKIE=DPJSESSIONID;DPUserTracking;testpool;DPSessionTimeOutInterval;cmTPSet;marketing;TLTSID;_gat;CavSID;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;USER_ACCT_ID;JCPSignInCookie;BNSPrevPercentage;BNSOrigin;mmcore.tst;clientTestPool1;_ga;CavSF;CavLTS;CavPI;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_SFL_ID;akaau;fsr.s;mm-loginstatus;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://m.jcpenney.com/b/ProductDetailsPage/productdetails.html?v=20160720113215", "HEADER=Accept-Language:en-in", "COOKIE=DPJSESSIONID;DPUserTracking;testpool;DPSessionTimeOutInterval;cmTPSet;marketing;TLTSID;_gat;CavSID;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;USER_ACCT_ID;JCPSignInCookie;BNSPrevPercentage;BNSOrigin;mmcore.tst;clientTestPool1;_ga;CavSF;CavLTS;CavPI;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_SFL_ID;akaau;fsr.s;mm-loginstatus;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=100186507033116&ev=PageView&dl=http%3A%2F%2Fm.jcpenney.com%2Fcity-triangles-sleeveless-lace-a-line-dress%2Fprod.jump%3FppId%3Dpp5007510252%26catId%3Dcat100240012%26Ntt%3D&rl=http%3A%2F%2Fm.jcpenney.com%2Fjuniors%2Fdresses%2Fcat.jump%3Fid%3Dcat100240012&if=false&ts=1469690992611&v=2.5.0&pv=visible", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/css/bv.css", "HEADER=Accept-Language:en-in", "COOKIE=DPJSESSIONID;DPUserTracking;testpool;DPSessionTimeOutInterval;cmTPSet;marketing;TLTSID;_gat;CavSID;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;USER_ACCT_ID;JCPSignInCookie;BNSPrevPercentage;BNSOrigin;mmcore.tst;clientTestPool1;_ga;CavSF;CavLTS;CavPI;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_SFL_ID;akaau;fsr.s;mm-loginstatus;mmapi.store.p.0;mmapi.store.s.0", END_INLINE
    );
      ns_end_transaction("MB_API_CAM_PGPSFL_myFavorites_POST", NS_AUTO_STATUS);  

          
    
    ns_start_transaction("MB_API_CAM_PGPSFL_myFavorites_OPTIONS");
        ns_web_url("API_CAM_PGP_savedItems2fetchCall",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/myFavorites",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:accept-version,authorization,content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_PGPSFL_myFavorites_OPTIONS", NS_AUTO_STATUS); 
    
    ns_start_transaction("MB_API_CAM_PGPSFL_myFavorites_GET");
        ns_web_url("API_CAM_PGP_savedItemsPage",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/myFavorites",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=Accept-Version:5",
        "HEADER=Accept:*/*",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_PGPSFL_myFavorites_GET", NS_AUTO_STATUS);
    ns_end_transaction("MOB_CAM_PGP_savedItems", NS_AUTO_STATUS);          
    ns_page_think_time(0); 
    
    //************************************2nd Product SFL****************//
//    if(!(strcmp(ns_eval_string("{SelectedPPIDSP1}"), ""))){
//    	goto ViewSavedItemLabel;}
    
    ns_start_transaction("MOB_CAM_PGP_savedItems");  
    ns_start_transaction("MB_API_CAM_PGPSFL_myFavorites_OPTIONS");
        ns_web_url("API_CAM_PGP_savedItemsfetchCall1",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/myFavorites",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:accept-version,authorization,content-type,dpcluster,dpinstance,dpjsessionid",
         "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_PGPSFL_myFavorites_OPTIONS", NS_AUTO_STATUS); 
     
    ns_start_transaction("MB_API_CAM_PGPSFL_myFavorites_POST");   
	ns_web_url ("API_CAM_PGP_savedItems1",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/myFavorites",
        "METHOD=POST",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=Accept-Version:5",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        BODY_BEGIN,
            "[{"product":{"id":"{SFLProductIdFP}"},"itemId":null,"quantity":1}]",
        BODY_END,
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=14&ci=90024642&vn2=e4.0&st=1469690809484&vn1=4.16.9&ec=utf-8&cid=Logged%20In%20Customer%20Gallery&cat=2&ccid=Add%20To%20Saved%20Items&rnd=1469693888671&c_a1=pp5007300005&c_a3=Logged%20In%20Customer%20Gallery&ul=http%3A%2F%2Fm.jcpenney.com%2Fjuniors%2Fdresses%2Fcat.jump%3Fid%3Dcat100240012", "HEADER=Accept-Language:en-in", "COOKIE=DPJSESSIONID;DPUserTracking;testpool;DPSessionTimeOutInterval;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_gat;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;USER_ACCT_ID;BNSPrevPercentage;BNSOrigin;mmcore.tst;clientTestPool1;_ga;mm-loginstatus;mmapi.store.p.0;mmapi.store.s.0;90024642_reset;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_ID;DP_SFL_PPIDS;fsr.s", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/css/product.css?v=20160720113215", "HEADER=Accept-Language:en-in", "COOKIE=DPJSESSIONID;DPUserTracking;testpool;DPSessionTimeOutInterval;cmTPSet;marketing;TLTSID;_gat;CavSID;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;USER_ACCT_ID;JCPSignInCookie;BNSPrevPercentage;BNSOrigin;mmcore.tst;clientTestPool1;_ga;CavSF;CavLTS;CavPI;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_SFL_ID;akaau;fsr.s;mm-loginstatus;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://m.jcpenney.com/b/ProductDetailsPage/productdetails.html?v=20160720113215", "HEADER=Accept-Language:en-in", "COOKIE=DPJSESSIONID;DPUserTracking;testpool;DPSessionTimeOutInterval;cmTPSet;marketing;TLTSID;_gat;CavSID;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;USER_ACCT_ID;JCPSignInCookie;BNSPrevPercentage;BNSOrigin;mmcore.tst;clientTestPool1;_ga;CavSF;CavLTS;CavPI;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_SFL_ID;akaau;fsr.s;mm-loginstatus;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=100186507033116&ev=PageView&dl=http%3A%2F%2Fm.jcpenney.com%2Fcity-triangles-sleeveless-lace-a-line-dress%2Fprod.jump%3FppId%3Dpp5007510252%26catId%3Dcat100240012%26Ntt%3D&rl=http%3A%2F%2Fm.jcpenney.com%2Fjuniors%2Fdresses%2Fcat.jump%3Fid%3Dcat100240012&if=false&ts=1469690992611&v=2.5.0&pv=visible", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/css/bv.css", "HEADER=Accept-Language:en-in", "COOKIE=DPJSESSIONID;DPUserTracking;testpool;DPSessionTimeOutInterval;cmTPSet;marketing;TLTSID;_gat;CavSID;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;USER_ACCT_ID;JCPSignInCookie;BNSPrevPercentage;BNSOrigin;mmcore.tst;clientTestPool1;_ga;CavSF;CavLTS;CavPI;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_SFL_ID;akaau;fsr.s;mm-loginstatus;mmapi.store.p.0;mmapi.store.s.0", END_INLINE
    );
    
     ns_end_transaction("MB_API_CAM_PGPSFL_myFavorites_POST", NS_AUTO_STATUS);  

            
    ns_start_transaction("MB_API_CAM_PGPSFL_myFavorites_OPTIONS");
        ns_web_url("API_CAM_PGP_savedItems2fetchCall1",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/myFavorites",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:accept-version,authorization,content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_PGPSFL_myFavorites_OPTIONS", NS_AUTO_STATUS); 
    
    ns_start_transaction("MB_API_CAM_PGPSFL_myFavorites_GET");
        ns_web_url("API_CAM_PGP_savedItemsPage1",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/myFavorites",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=Accept-Version:5",
        "HEADER=Accept:*/*",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_PGPSFL_myFavorites_GET", NS_AUTO_STATUS);
    ns_end_transaction("MOB_CAM_PGP_savedItems", NS_AUTO_STATUS);          
    ns_page_think_time(0); 

    ns_start_transaction("MOB_CAM_CreateList");
    ns_start_transaction("MB_API_CAM_CreateList_saveditems_OPTIONS");
    ns_web_url("CreateList1",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:accept-version, authorization, content-type",
        "HEADER=Accept-Language:en-us"
    );
    ns_end_transaction("MB_API_CAM_CreateList_saveditems_OPTIONS", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_CAM_CreateList_saveditems_POST");
    ns_web_url ("CreateList2",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items",
        "METHOD=POST",
        "HEADER=accept-version:5",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        BODY_BEGIN,
            "{"name":"CavSample{ListName}"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://api.jcpclick.com/p/collector", "METHOD=OPTIONS", "HEADER=Origin:https://www.jcpenney.com", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:content-type", "HEADER=Accept-Language:en-us", END_INLINE
    );
   ns_end_transaction("MB_API_CAM_CreateList_saveditems_POST", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_CAM_CreateList_saveditems_OPTIONS");
    ns_web_url("CreateList3",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:accept-version, authorization, content-type, x-jcp-forwarded-channel, x-jcp-forwarded-host, x-jcp-forwarded-proto",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s07222968235474?AQB=1&ndh=1&pf=1&t=20%2F3%2F2018%201%3A41%3A14%205%20300&mid=57236995534148015863659739543121382425&aamlh=3&ce=UTF-8&ns=jcpenney&pageName=d%3Amy%20lists%3Alisting%20hub%20page&g=https%3A%2F%2Fwww.jcpenney.com%2Fmylist&cc=USD&ch=account&server=DTCOMEXPR1C2J2_08&events=event116%2Cevent3&c1=account&v1=D%3Dc1&c6=my%20lists%3Alisting%20hub%20page&c7=https%3A%2F%2Fwww.jcpenney.com%2Fmylist&v7=1%3A40%20AM%7CFriday&c10=2017%20redesign%20yoda%20account&c11=my%20lists&v11=D%3Dc11&v16=D%3DpageName&c17=d%3Aaccount%3Acam%20dashboard&v17=D%3Dc17&c19=DU-2735778%2CMU-2735781%2CGT-2724387%2CABC-2736912%2CAET-2512013%2CAGV-2336264&c44=desktop&v44=D%3Dc44&v53=account&pe=lnk_o&pev2=createNewList&c.&a.&activitymap.&page=d%3Amy%20lists%3Alisting%20hub%20page&link=Save&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
   ns_end_transaction("MB_API_CAM_CreateList_saveditems_OPTIONS", NS_AUTO_STATUS);
  
    ns_start_transaction("MB_API_CAM_CreateList_saveditems_GET");
    ns_web_url("CreateList4",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items",
        "HEADER=accept-version:5",
        "HEADER=x-jcp-forwarded-proto:https",
        "HEADER=x-jcp-forwarded-channel:true",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=x-jcp-forwarded-host:account-api.jcpenney.com",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/static-listing/images/lock.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE,
            "URL=https://www.jcpenney.com/static-listing/images/pants.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE,
            "URL=https://www.jcpenney.com/static-listing/images/shirt.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE,
            "URL=https://www.jcpenney.com/static-listing/images/home.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE,
            "URL=https://www.jcpenney.com/static-listing/images/shoe.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE,
            "URL=https://www.jcpenney.com/static-listing/images/accessory.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_CreateList_saveditems_GET", NS_AUTO_STATUS);

	ns_start_transaction("MB_API_CAM_Mylist_GET");
    ns_web_url("CreateList5",
        "URL=https://m.jcpenney.com/mylist?id={ListIdSP}",
//        "HEADER=accept-version:5",
//        "HEADER=x-jcp-forwarded-proto:https",
//        "HEADER=x-jcp-forwarded-channel:true",
//        "HEADER=authorization:Bearer {AccessTokenSP}",
//        "HEADER=x-jcp-forwarded-host:account-api.jcpenney.com",
//        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/static-listing/images/lock.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE,
            "URL=https://www.jcpenney.com/static-listing/images/pants.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE,
            "URL=https://www.jcpenney.com/static-listing/images/shirt.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE,
            "URL=https://www.jcpenney.com/static-listing/images/home.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE,
            "URL=https://www.jcpenney.com/static-listing/images/shoe.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE,
            "URL=https://www.jcpenney.com/static-listing/images/accessory.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_Mylist_GET", NS_AUTO_STATUS);

	 ns_start_transaction("MB_API_CAM_saveitems_OPTIONS");	 	
	    ns_web_url ("CreateList6",
      //  "URL=https://account-api.jcpenney.com/v5/accounts/saved-items/trending-list",
	//	"URL=https://account-api.jcpenney.com/v5/accounts/Dy0epLoH230rjp6RmIHo/saved-items/d03ae440-6b10-11e9-beae-e98d0c17de34?page=1&limit=50&sort=",
	      "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/{ListIdSP}?page=1&limit=50&sort=",
	      "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.9",
        "HEADER=Accept-Encoding:gzip, deflate, br",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=Accept:text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/b/assets/img/arrow_down.svg", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;testpool;DPCluster;DPInstance;DPJSESSIONID;DPSTKN;JCPSignInCookie;USER_ACCT_ID;SVCVER;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;marketing;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;c17;v53;s_ptc;s_cc;CavSF;s_sq;CavNVC;mbox;jcp.ab.test;clientTestPool1", END_INLINE,
            "URL=https://m.jcpenney.com/b/assets/img/jcp-app-dl-logo-red.png", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;testpool;DPCluster;DPInstance;DPJSESSIONID;DPSTKN;JCPSignInCookie;USER_ACCT_ID;SVCVER;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;marketing;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;c17;v53;s_ptc;s_cc;CavSF;s_sq;CavNVC;mbox;jcp.ab.test;clientTestPool1", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_saveitems_OPTIONS", NS_AUTO_STATUS);


	
    ns_start_transaction("MB_API_CAM_saveitems_GET");	 	
	    ns_web_url ("CreateList7",
        //"URL=https://account-api.jcpenney.com/v5/accounts/saved-items/trending-list",
        //"URL=https://account-api.jcpenney.com/v5/accounts/Dy0epLoH230rjp6RmIHo/saved-items/d03ae440-6b10-11e9-beae-e98d0c17de34?page=1&limit=50&sort="
          "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/{ListIdSP}?page=1&limit=50&sort=",
        "HEADER=Accept-Language:en-us,en;q=0.9",
        "HEADER=Accept-Encoding:gzip, deflate, br",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=authorization:Bearer {AccessTokenSP}",	
        "HEADER=Accept-Version:5",
        "HEADER=Accept:text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/b/assets/img/arrow_down.svg", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;testpool;DPCluster;DPInstance;DPJSESSIONID;DPSTKN;JCPSignInCookie;USER_ACCT_ID;SVCVER;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;marketing;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;c17;v53;s_ptc;s_cc;CavSF;s_sq;CavNVC;mbox;jcp.ab.test;clientTestPool1", END_INLINE,
            "URL=https://m.jcpenney.com/b/assets/img/jcp-app-dl-logo-red.png", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;testpool;DPCluster;DPInstance;DPJSESSIONID;DPSTKN;JCPSignInCookie;USER_ACCT_ID;SVCVER;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;marketing;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;c17;v53;s_ptc;s_cc;CavSF;s_sq;CavNVC;mbox;jcp.ab.test;clientTestPool1", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_saveitems_GET", NS_AUTO_STATUS);
	ns_end_transaction("MOB_CAM_CreateList", NS_AUTO_STATUS);
    ns_page_think_time(0);

 
   ns_start_transaction("MOB_CAM_AddToList");
   ns_start_transaction("MB_API_CAM_AddToList_saveditems_OPTIONS");
    ns_web_url("AddToListFetchCall",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items?field=id%2Cname%2CtotalItems",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:accept-version, authorization, content-type, x-jcp-forwarded-channel, x-jcp-forwarded-host, x-jcp-forwarded-proto",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://network.bazaarvoice.com/st.gif?cl=PageView&loadId=ecacda38154b548b270b&type=Product&tz=300&magpieJsVersion=3.6.2&source=fm&environment=prod&client=jcpenney&dc=MainCarousel&host=www.jcpenney.com&brand=jcpenney&bvProduct=Curations&bvProductVersion=1.56.1&productId=ppr5007568376&detail1=MainCarousel&_=43irjh&ref=https://www.jcpenney.com/g/womens-dresses/N-bwo3xD1nnujc", "HEADER=yoda-desktop:true", "HEADER=yoda-pdp:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=BVID;BVSID", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_AddToList_saveditems_OPTIONS", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_CAM_AddToList_saveditems_GET");
    ns_web_url("AddToList_saveditemCall",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items?field=id%2Cname%2CtotalItems",
        "HEADER=accept-version:5",
        "HEADER=x-jcp-forwarded-proto:https",
        "HEADER=x-jcp-forwarded-channel:true",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=x-jcp-forwarded-host:account-api.jcpenney.com",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
         INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=TkydUV5ISnyLIeYsc4h93g&cb=lpCb19622x22646&t=ip&ts=1524220216004&pid=7195091751&tid=7749230658&vid=ZhZjk0NWExZGM0MjAwOGEw", "HEADER=yoda-desktop:true", "HEADER=yoda-pdp:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=515352408659658&ev=SubscribedButtonClick&dl=https%3A%2F%2Fwww.jcpenney.com%2Fp%2Fmelrose-3-4-sleeve-lace-fit-flare-dress%2Fppr5007568376%3FCOLOR%3DBlack%26badge%3Dnew%26catId%3Dcat100210008%26deptId%3Ddept20000013%26pTmplType%3Dregular%26urlState%3D%252Fg%252Fwomens-dresses%252FN-bwo3xD1nnujc&rl=https%3A%2F%2Fwww.jcpenney.com%2Fg%2Fwomens-dresses%2FN-bwo3xD1nnujc&if=false&ts=1524220224567&cd[buttonText]=&cd[buttonFeatures]=%7B%22id%22%3A%22%22%2C%22tag%22%3A%22label%22%2C%22classList%22%3A%22_3Op2Y%20radioBtnDefault%22%2C%22innerText%22%3A%22%22%2C%22numChildButtons%22%3A0%2C%22destination%22%3A%22%22%7D&cd[formFeatures]=%5B%5D&sw=0&sh=0&v=2.8.12&r=stable&ec=6&o=28&it=1524220193892", "HEADER=yoda-desktop:true", "HEADER=yoda-pdp:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=fr", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=515352408659658&ev=SubscribedButtonClick&dl=https%3A%2F%2Fwww.jcpenney.com%2Fp%2Fmelrose-3-4-sleeve-lace-fit-flare-dress%2Fppr5007568376%3FCOLOR%3DBlack%26badge%3Dnew%26catId%3Dcat100210008%26deptId%3Ddept20000013%26pTmplType%3Dregular%26urlState%3D%252Fg%252Fwomens-dresses%252FN-bwo3xD1nnujc&rl=https%3A%2F%2Fwww.jcpenney.com%2Fg%2Fwomens-dresses%2FN-bwo3xD1nnujc&if=false&ts=1524220224598&cd[buttonText]=&cd[buttonFeatures]=%7B%22name%22%3A%22list%22%2C%22id%22%3A%22353b0680-4485-11e8-aee3-9df98f47c8e5%22%2C%22tag%22%3A%22input%22%2C%22classList%22%3A%22YVh_x%20radioBtnDefault%22%2C%22value%22%3A%22%22%2C%22innerText%22%3A%22%22%2C%22numChildButtons%22%3A0%2C%22destination%22%3A%22%22%7D&cd[formFeatures]=%5B%5D&sw=0&sh=0&v=2.8.12&r=stable&ec=7&o=28&it=1524220193892", "HEADER=yoda-desktop:true", "HEADER=yoda-pdp:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=fr", END_INLINE
    );
   ns_end_transaction("MB_API_CAM_AddToList_saveditems_GET", NS_AUTO_STATUS);
   ns_end_transaction("MOB_CAM_AddToList", NS_AUTO_STATUS);

   
    ns_start_transaction("MOB_CAM_SelectList");
    ns_start_transaction("MB_API_CAM_SelectList_saveditems_OPTIONS");
    ns_web_url("SelectList_saveditemFetchCall",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/{ListIdSP}",
        //"URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/353b0680-4485-11e8-aee3-9df98f47c8e5",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:accept-version, authorization, content-type, dpcluster, dpinstance",
        "HEADER=Accept-Language:en-us"
    );
    ns_end_transaction("MB_API_CAM_SelectList_saveditems_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_CAM_SelectList_saveditems_POST");
    ns_web_url ("SelectList_saveditemCall",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/{ListIdSP}",
        //"URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/353b0680-4485-11e8-aee3-9df98f47c8e5",
        "METHOD=POST",
        "HEADER=accept-version:5",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        BODY_BEGIN,
            "[{"product":{"id":"{SFLProductIdFP}"},"itemId":null,"quantity":1}]",
        BODY_END,
        INLINE_URLS,
            "URL=https://api.jetlore.com/track/add_to_favorites/20206228246?access_token=7ae98e6380a6a1bfdcbff373623751cff10a591db4ace21fbcab136b21355a79&data=%5B%7B%22pid%22%3A%22ppr5007568376%22%7D%5D&feed=any_feed&set_cookies=true&r_source=www.jcpenney.com/p/melrose-3-4-sleeve-lace-fit-flare-dress/ppr5007568376", "HEADER=yoda-desktop:true", "HEADER=yoda-pdp:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=jl_usrid.588a4823e4b06a732dc0d7d3.jcpenney", END_INLINE,
            "URL=https://api.jcpclick.com/p/collector", "METHOD=OPTIONS", "HEADER=Origin:https://www.jcpenney.com", "HEADER=yoda-desktop:true", "HEADER=yoda-pdp:true", "HEADER=yoda-home:true", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:content-type", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://account-api.jcpenney.com/v5/accounts/L114321623150/saved-items/353b0680-4485-11e8-aee3-9df98f47c8e5?field=id%2Cname%2CtotalItems&limit=16", "METHOD=OPTIONS", "HEADER=Origin:https://www.jcpenney.com", "HEADER=yoda-desktop:true", "HEADER=yoda-pdp:true", "HEADER=yoda-home:true", "HEADER=Access-Control-Request-Method:GET", "HEADER=Access-Control-Request-Headers:accept-version, authorization, content-type, x-jcp-forwarded-channel, x-jcp-forwarded-host, x-jcp-forwarded-proto", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s19599235600865?AQB=1&ndh=1&pf=1&t=20%2F3%2F2018%205%3A30%3A25%205%20300&mid=12091586324179787891696888442988624005&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Apdp%3Appr5007568376%3Amelrose%203%2F4%20sleeve%20lace%20fit%20and%20flare%20dress&g=https%3A%2F%2Fwww.jcpenney.com%2Fp%2Fmelrose-3-4-sleeve-lace-fit-flare-dress%2Fppr5007568376%3FCOLOR%3DBlack%26badge%3Dnew%26catId%3Dcat100210008%26deptId%3Ddept20000013%26pTmplType%3Dregular%26urlState%3D%252Fg%252Fwomens-dresses%252FN-bwo3xD1nnujc&cc=USD&ch=women&server=DTCOMEXPR1C2J2_02&events=event65%2Cevent3&products=%3Bppr5007568376%3B1%3B0.00%3B%3B&c1=women&v1=D%3Dc1&c2=dresses&v2=D%3Dc2&l2=coupon%3Apercentageoff%3Asave60%3A18.50%3A25.00%3Ayes&c6=pdp%3Appr5007568376%3Amelrose%203%2F4%20sleeve%20lace%20fit%20and%20flare%20dress&c7=https%3A%2F%2Fwww.jcpenney.com%2Fp%2Fmelrose-3-4-sleeve-lace-fit-flare-dress%2Fppr5007568376%3FCOLOR%3DBlack%26badge%3Dnew%26catId%3Dcat100210008%26deptId%3Ddept20000013%26pTmplType%3Dregular%26urlState%3D%252Fg%252Fwomens-dresses%252FN-bwo3xD1nnujc&v7=5%3A29%20AM%7CFriday&c10=2017%20yoda%20pdp%201%20-%20regular&c11=pdp&v11=D%3Dc11&v16=D%3DpageName&c17=d%3Acat%3Awomen%3Adresses&v17=D%3Dc17&c19=DU-2735778%2CMU-2735781%2CGT-2724387%2CABC-2736912%2CAET-2512013%2CAGV-2336264&c21=custom&c44=desktop&v44=D%3Dc44&v53=category&pe=lnk_o&pev2=saveProduct&c.&a.&activitymap.&page=d%3Apdp%3Appr5007568376%3Amelrose%203%2F4%20sleeve%20lace%20fit%20and%20flare%20dress&link=Add%20to%20List&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=yoda-desktop:true", "HEADER=yoda-pdp:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://account-api.jcpenney.com/v5/accounts/L114321623150/saved-items/353b0680-4485-11e8-aee3-9df98f47c8e5?field=id%2Cname%2CtotalItems&limit=16", "HEADER=Origin:https://www.jcpenney.com", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=accept-version:5", "HEADER=x-jcp-forwarded-proto:https", "HEADER=x-jcp-forwarded-channel:true", "HEADER=authorization:Bearer eyJhbGciOiJSUzI1NiJ9.eyJpYXQiOjE1MjQyMTk3NDI2MzYsInN1YiI6IkwxMTQzMjE2MjMxNTAiLCJpc3MiOiJhcGkuamNwZW5uZXkuY29tIiwic2Vzc2lvbmlkIjoiMjY2ZWU3NTEtY2YzYi00ZmE1LWJmNjktNWNlMTA4MDNkZDM3IiwiYXVkIjoiamNwZW5uZXkuY29tIiwiYXV0aG9yaXRpZXMiOlsiUk9MRV9BQ0NPVU5UX1VTRVJfUkVBRCIsIlJPTEVfQUNDT1VOVF9VU0VSX1dSSVRFIl0sInN0YXRlIjoxLCJjbGllbnQtaXAiOiI2MS4xMi42Ny4yMiIsImV4cCI6MTUyNDIyMDk0Mn0.SdP08BEVKtbO9rWhF4nRHme9z8OAWxf5ikYpPcj7Sn3pGTw7hZpXPHOzAuC5sm1xmjInGPDi57z_Mu33FzkaA_kzs2tAb4FriznfPqMRXoItwgUf942sIZPJ3fSWUxJQGtO2B0CpxEfDuhaHN8VQKMwnEwZD0xamt76qrH3NhhfNQ3oTE7qo-Ljf74oZENSTFO-2uBrYe9NRAOEddpzm4rRO26kkNjm2VDgzh4354l0BsgqCTUvzqPxqwGampwU5wc3_t7Ku9cs30muU1X_U8ONKYVZYeTRc9B-k2YglnMBISU9W1FRV98GnVxL-nnV1UzWYUt5W9HkHE_hs-6NcYQ", "HEADER=yoda-pdp:true", "HEADER=x-jcp-forwarded-host:account-api.jcpenney.com", "HEADER=content-type:application/json;charset=utf-8", "HEADER=Accept-Language:en-us", "COOKIE=bm_sz;ak_bmsc;_abck;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;_4c_mc_;cto_lwid;dtCookie;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;akacd_account-api-cloud;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;FSFL;mbox;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;LPVID;LPSID-58507821;DP-Cloud-Cluster;DP-Cloud-Origin;bm_sv", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_SelectList_saveditems_POST", NS_AUTO_STATUS);
    
    
     ns_start_transaction("MB_API_CAM_SelectList_saveditems_GET");
     ns_web_url ("SelectList_saveditemCall1",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/{ListIdSP}?field=id%2Cname%2CtotalItems&limit=16",
        "HEADER=accept-version:5",
        "HEADER=x-jcp-forwarded-proto:https",
        "HEADER=x-jcp-forwarded-channel:true",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=x-jcp-forwarded-host:account-api.jcpenney.com",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=bm_sz;_abck;ak_bmsc;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;_4c_mc_;dtCookie;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;akacd_account-api-cloud;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;mbox;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;LPVID;LPSID-58507821;SSP_AB_fitpredictor;DP-Cloud-Cluster;DP-Cloud-Origin",
    );

    ns_end_transaction("MB_API_CAM_SelectList_saveditems_GET", NS_AUTO_STATUS);   
    ns_end_transaction("MOB_CAM_SelectList", NS_AUTO_STATUS);
    ns_page_think_time(0);
	
	
	ViewSavedItemLabel:
	snprintf(AccessTbuff1,1024,"%s",ns_eval_string("{AccessTokenSP}"));
    ns_add_cookie_val_ex("Access_Token", NULL, NULL, AccessTbuff1);

	ns_add_cookie_val_ex("ACCOUNT_ID", NULL, NULL, ns_eval_string("{DynUserIdSP}"));
	ns_add_cookie_val_ex("DP_SFL_ID", NULL, NULL, ns_eval_string("{DynUserIdSP}"));
		
	ns_start_transaction("MOB_CAM_ViewMyList");	 
    ns_start_transaction("MB_API_CAM_savedlist_GET");	 	
	    ns_web_url ("API_SavedItems1",
       // "URL=https://m.jcpenney.com/mylist",
     	//"URL=https://m.jcpenney.com/savedlist?id=60fbf750-6be1-11e9-9d02-f76e4fd1eabd",
     	"URL=https://m.jcpenney.com/savedlist?id={ListIdSP}",
		"HEADER=Accept-Language:en-us,en;q=0.9",
          "HEADER=Accept-Encoding:gzip, deflate, br",
          "HEADER=Accept:text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/b/assets/img/arrow_down.svg", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;testpool;DPCluster;DPInstance;DPJSESSIONID;DPSTKN;JCPSignInCookie;USER_ACCT_ID;SVCVER;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;marketing;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;c17;v53;s_ptc;s_cc;CavSF;s_sq;CavNVC;mbox;jcp.ab.test;clientTestPool1", END_INLINE,
            "URL=https://m.jcpenney.com/b/assets/img/jcp-app-dl-logo-red.png", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;testpool;DPCluster;DPInstance;DPJSESSIONID;DPSTKN;JCPSignInCookie;USER_ACCT_ID;SVCVER;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;marketing;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;c17;v53;s_ptc;s_cc;CavSF;s_sq;CavNVC;mbox;jcp.ab.test;clientTestPool1", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_savedlist_GET", NS_AUTO_STATUS);
    
       ns_start_transaction("MB_API_CAM_saveditems_OPTIONS");	 	
	    ns_web_url ("API_CAM_saveditems",
       // "URL=https://account-api.jcpenney.com/v5/accounts/saved-items/trending-list",
          "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/{ListIdSP}?page=1&limit=50&sort=",
          "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.9",
        "HEADER=Accept-Encoding:gzip, deflate, br",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=Accept:text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/b/assets/img/arrow_down.svg", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;testpool;DPCluster;DPInstance;DPJSESSIONID;DPSTKN;JCPSignInCookie;USER_ACCT_ID;SVCVER;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;marketing;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;c17;v53;s_ptc;s_cc;CavSF;s_sq;CavNVC;mbox;jcp.ab.test;clientTestPool1", END_INLINE,
            "URL=https://m.jcpenney.com/b/assets/img/jcp-app-dl-logo-red.png", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;testpool;DPCluster;DPInstance;DPJSESSIONID;DPSTKN;JCPSignInCookie;USER_ACCT_ID;SVCVER;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;marketing;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;c17;v53;s_ptc;s_cc;CavSF;s_sq;CavNVC;mbox;jcp.ab.test;clientTestPool1", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_saveditems_OPTIONS", NS_AUTO_STATUS);
    
       ns_start_transaction("MB_API_CAM_saveditems_GET");	 	
	    ns_web_url ("API_CAM_saveditems1",
      //  "URL=https://account-api.jcpenney.com/v5/accounts/saved-items/trending-list",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/{ListIdSP}?page=1&limit=50&sort=",
        "HEADER=Accept-Language:en-us,en;q=0.9",
        "HEADER=Accept-Encoding:gzip, deflate, br",
        "HEADER=authorization:Bearer {AccessTokenSP}",	
        "HEADER=Accept-Version:5",
        "HEADER=Accept:text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/b/assets/img/arrow_down.svg", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;testpool;DPCluster;DPInstance;DPJSESSIONID;DPSTKN;JCPSignInCookie;USER_ACCT_ID;SVCVER;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;marketing;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;c17;v53;s_ptc;s_cc;CavSF;s_sq;CavNVC;mbox;jcp.ab.test;clientTestPool1", END_INLINE,
            "URL=https://m.jcpenney.com/b/assets/img/jcp-app-dl-logo-red.png", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;testpool;DPCluster;DPInstance;DPJSESSIONID;DPSTKN;JCPSignInCookie;USER_ACCT_ID;SVCVER;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;marketing;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;c17;v53;s_ptc;s_cc;CavSF;s_sq;CavNVC;mbox;jcp.ab.test;clientTestPool1", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_saveditems_GET", NS_AUTO_STATUS);
            
    ns_end_transaction("MOB_CAM_ViewMyList", NS_AUTO_STATUS);
	ns_page_think_time(0.102);
	
//	printf("++++++++++++++ListId=%s++++++++++++", ns_eval_string("{ListSP}"));
	int TotalList = ns_get_int_val("ListSP_count");
	char listindex[64];
	char listval[128];
	int i;
	
	for(i=1; i<=TotalList; i++){
		
		snprintf(listindex,64,"{ListSP_%d}",i);    // To get index of address
		snprintf(listval,128,"%s",ns_eval_string(listindex));   // To get vaue at index
		ns_save_string(listval,"ListIdDP");

	 ns_start_transaction("MOB_CAM_DeleteList");
     ns_start_transaction("MB_API_CAM_DeleteList_saveditems_OPTIONS");
     ns_web_url("DeleteListFetchCall",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/{ListIdDP}",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:DELETE",
        "HEADER=Access-Control-Request-Headers:accept-version, authorization, content-type",
        "HEADER=Accept-Language:en-us"
    );
    ns_end_transaction("MB_API_CAM_DeleteList_saveditems_OPTIONS", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_CAM_DeleteList_saveditems_DELETE");
    ns_web_url ("DeleteListCall",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/{ListIdDP}",
        "METHOD=DELETE",
        "HEADER=accept-version:5",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://api.jcpclick.com/p/collector", "METHOD=OPTIONS", "HEADER=Origin:https://www.jcpenney.com", "HEADER=yoda-desktop:true", "HEADER=yoda-pdp:true", "HEADER=yoda-home:true", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:content-type", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_CAM_DeleteList_saveditems_DELETE", NS_AUTO_STATUS);
   
    ns_start_transaction("MB_API_CAM_DeleteList_saveditems_OPTIONS");
    ns_web_url("DeleteListsaveditemFetchCall",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:accept-version, authorization, content-type, x-jcp-forwarded-channel, x-jcp-forwarded-host, x-jcp-forwarded-proto",
        "HEADER=Accept-Language:en-us"
    );
    ns_end_transaction("MB_API_CAM_DeleteList_saveditems_OPTIONS", NS_AUTO_STATUS);
     
    ns_start_transaction("MB_API_CAM_DeleteList_saveditems_GET");
    ns_web_url("DeleteListsaveditemCall",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items",
        "HEADER=accept-version:5",
        "HEADER=x-jcp-forwarded-proto:https",
        "HEADER=x-jcp-forwarded-channel:true",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=x-jcp-forwarded-host:account-api.jcpenney.com",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        );
    ns_end_transaction("MB_API_CAM_DeleteList_saveditems_GET", NS_AUTO_STATUS);

     ns_start_transaction("MB_API_CAM_DeleteMylist_GET");
    ns_web_url("DeleteMyList",
// "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items",
	"URL=https://m.jcpenney.com/mylist",
//        "HEADER=accept-version:5",
//        "HEADER=x-jcp-forwarded-proto:https",
//        "HEADER=x-jcp-forwarded-channel:true",
//        "HEADER=authorization:Bearer {AccessTokenSP}",
//        "HEADER=x-jcp-forwarded-host:account-api.jcpenney.com",
//        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/static-listing/images/lock.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE,
            "URL=https://www.jcpenney.com/static-listing/images/pants.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE,
            "URL=https://www.jcpenney.com/static-listing/images/shirt.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE,
            "URL=https://www.jcpenney.com/static-listing/images/home.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE,
            "URL=https://www.jcpenney.com/static-listing/images/shoe.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE,
            "URL=https://www.jcpenney.com/static-listing/images/accessory.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_DeleteMylist_GET", NS_AUTO_STATUS);

	  ns_start_transaction("MB_API_CAM_DeleteList_saveitems_OPTIONS");	 	
	    ns_web_url ("DeleteList_saveitems",
      //  "URL=https://account-api.jcpenney.com/v5/accounts/saved-items/trending-list",
	//	"URL=https://account-api.jcpenney.com/v5/accounts/Dy0epLoH230rjp6RmIHo/saved-items/d03ae440-6b10-11e9-beae-e98d0c17de34?page=1&limit=50&sort=",
	      "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/myFavorites?page=1&limit=50&sort=",
	      "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.9",
        "HEADER=Accept-Encoding:gzip, deflate, br",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=Accept:text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/b/assets/img/arrow_down.svg", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;testpool;DPCluster;DPInstance;DPJSESSIONID;DPSTKN;JCPSignInCookie;USER_ACCT_ID;SVCVER;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;marketing;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;c17;v53;s_ptc;s_cc;CavSF;s_sq;CavNVC;mbox;jcp.ab.test;clientTestPool1", END_INLINE,
            "URL=https://m.jcpenney.com/b/assets/img/jcp-app-dl-logo-red.png", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;testpool;DPCluster;DPInstance;DPJSESSIONID;DPSTKN;JCPSignInCookie;USER_ACCT_ID;SVCVER;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;marketing;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;c17;v53;s_ptc;s_cc;CavSF;s_sq;CavNVC;mbox;jcp.ab.test;clientTestPool1", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_DeleteList_saveitems_OPTIONS", NS_AUTO_STATUS);
	
	 ns_start_transaction("MB_API_CAM_DeleteList_saveitems_GET");	 	
	    ns_web_url ("DeleteList_saveitems1",
        //"URL=https://account-api.jcpenney.com/v5/accounts/saved-items/trending-list",
        //"URL=https://account-api.jcpenney.com/v5/accounts/Dy0epLoH230rjp6RmIHo/saved-items/d03ae440-6b10-11e9-beae-e98d0c17de34?page=1&limit=50&sort="
         "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items/myFavorites?page=1&limit=50&sort=",
        "HEADER=Accept-Language:en-us,en;q=0.9",
        "HEADER=Accept-Encoding:gzip, deflate, br",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=authorization:Bearer {AccessTokenSP}",	
        "HEADER=Accept-Version:5",
        "HEADER=Accept:text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/b/assets/img/arrow_down.svg", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;testpool;DPCluster;DPInstance;DPJSESSIONID;DPSTKN;JCPSignInCookie;USER_ACCT_ID;SVCVER;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;marketing;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;c17;v53;s_ptc;s_cc;CavSF;s_sq;CavNVC;mbox;jcp.ab.test;clientTestPool1", END_INLINE,
            "URL=https://m.jcpenney.com/b/assets/img/jcp-app-dl-logo-red.png", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;testpool;DPCluster;DPInstance;DPJSESSIONID;DPSTKN;JCPSignInCookie;USER_ACCT_ID;SVCVER;BNSPrevPercentage;BNSOrigin;LPCKEY-58507821;LPVID;LPSID-58507821;marketing;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;c17;v53;s_ptc;s_cc;CavSF;s_sq;CavNVC;mbox;jcp.ab.test;clientTestPool1", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_DeleteList_saveitems_GET", NS_AUTO_STATUS);
    ns_end_transaction("MOB_CAM_DeleteList", NS_AUTO_STATUS);
	}
    ns_page_think_time(0);

    ns_start_transaction("MOB_CAM_trendinglist");
    ns_web_url("trendinglist",
    	"URL=https://m.jcpenney.com/trending-list",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/static-listing/images/lock.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE,
            "URL=https://www.jcpenney.com/static-listing/images/accessory.svg", "HEADER=yoda-desktop:true", "HEADER=yoda-home:true", "HEADER=Accept-Language:en-us", "COOKIE=yoda-desktop;yoda-home;akacd_desktop-prod-cloud;bm_sz;_abck;bm_sv;ak_bmsc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;marketing;TLTSID;mp_jcpenney_mixpanel;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;cto_lwid;__gads;_4c_mc_;dtCookie;Yoda-SID;DPOrder;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPCluster;DPLastAccessedTime;DPInstance;DP_USER_AUTH_STATUS;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;SLT;Access_Token;ACCOUNT_ID;DP_USER_STATE;DP_SFL_ID;DP_USER_NAME;DP_USER_INFO;DYN_USER_ID;DP-Cloud-Cluster;mbox;_uetsid;_ga;_gid;_gat;LPVID;LPSID-58507821;CavSF;CavNVC;c17;tp;v53;s_cc;s_ppv;s_sq;DP-Cloud-Origin", END_INLINE
    );
    ns_end_transaction("MOB_CAM_trendinglist", NS_AUTO_STATUS);

	 ns_start_transaction("MB_API_CAM_TrendingList_saveditems_OPTIONS");
    ns_web_url("trendinglist1",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:accept-version, authorization, content-type, x-jcp-forwarded-channel, x-jcp-forwarded-host, x-jcp-forwarded-proto",
        "HEADER=Accept-Language:en-us"
    );
     ns_end_transaction("MB_API_CAM_TrendingList_saveditems_OPTIONS", NS_AUTO_STATUS);
     
    ns_start_transaction("MB_API_CAM_TrendingList_saveditems_GET");
    ns_web_url("trendinglist2",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/saved-items",
        "HEADER=accept-version:5",
        "HEADER=x-jcp-forwarded-proto:https",
        "HEADER=x-jcp-forwarded-channel:true",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=x-jcp-forwarded-host:account-api.jcpenney.com",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        );
   ns_end_transaction("MB_API_CAM_TrendingList_saveditems_GET", NS_AUTO_STATUS);

     ns_start_transaction("MB_API_CAM_trendinglist_OPTIONS");
    ns_web_url("trendinglist3",
        "URL=https://account-api.jcpenney.com/v5/accounts/saved-items/trending-list",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:accept-version, authorization, content-type",
        "HEADER=Accept-Language:en-us"
    );
     ns_end_transaction("MB_API_CAM_trendinglist_OPTIONS", NS_AUTO_STATUS);
     
    ns_start_transaction("MB_API_CAM_trendinglist_GET");
    ns_web_url("trendinglist4",
        "URL=https://account-api.jcpenney.com/v5/accounts/saved-items/trending-list",
        "HEADER=accept-version:5",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        );
   ns_end_transaction("MB_API_CAM_trendinglist_GET", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_CAM_share_saveditems_OPTIONS");
    ns_web_url("trendinglist5",
        "URL=https://account-api.jcpenney.com/v5/accounts/{AccountIdSP}/share/saved-items/{TrendinglistIdSP}/{SharetokenSP}",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:accept-version, authorization, content-type, x-jcp-forwarded-channel, x-jcp-forwarded-host, x-jcp-forwarded-proto",
        "HEADER=Accept-Language:en-us"
    );
     ns_end_transaction("MB_API_CAM_share_saveditems_OPTIONS", NS_AUTO_STATUS);
     
    ns_start_transaction("MB_API_CAM_share_saveditems_GET");
    ns_web_url("trendinglist6",
      //  "URL=https://account-api.jcpenney.com/v5/accounts/vrE1amUZQ64RNTkEWQWz/share/saved-items/c8241560-c688-11e8-be02-3d08467dbe1f/293aae2ca0998033f86526df191ed1f7",
		 "URL=https://account-api.jcpenney.com/v5/accounts/{AccountIdSP}/share/saved-items/{TrendinglistIdSP}/{SharetokenSP}",      
        "HEADER=accept-version:5",
        "HEADER=x-jcp-forwarded-proto:https",
        "HEADER=x-jcp-forwarded-channel:true",
        "HEADER=X-GUEST-USER:true",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=x-jcp-forwarded-host:account-api.jcpenney.com",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        );
   ns_end_transaction("MB_API_CAM_share_saveditems_GET", NS_AUTO_STATUS);

    //  OrderHistory:
  
    ns_add_cookie_val_ex("Refresh_Token", NULL, NULL, ns_eval_string("{RefreshTokenSP}"));
    ns_start_transaction("MOB_CAM_OrderHistory"); 
    ns_web_url ("API_VewOrders1",
        //"URL=https://m.jcpenney.com/myorder",
        "URL=https://m.jcpenney.com/orders",
        "HEADER=Accept-Language:en-us",
        "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPSessionTimeOutInterval;DPJSESSIONID;DPSTKN;JCPSignInCookie;USER_ACCT_ID;SVCVER;BNSPrevPercentage;BNSOrigin;marketing;mbox;jcp.ab.test;clientTestPool1;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;testpool;LPCKEY-58507821;s_ptc;s_cc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_sq;CavSF;CavNVC;_uetsid;LPVID;LPSID-58507821",
        "PreSnapshot=webpage_1493361122759.png",
        "Snapshot=webpage_1493361124654.png",
        INLINE_URLS,
            "URL=https://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1493360993638&vn1=4.16.9&ec=utf-8&pi=My%20Orders&cg=Mobile%7CAccountmanagement%7CMyAccount%7CMyOrders&rnd=1493367116383&pv_a4=20101573135&pv_a23=Google%20Chrome&pv_a38=responsive&ul=https%3A%2F%2Fm.jcpenney.com%2Faccount&rf=http%3A%2F%2Fm.jcpenney.com%2F", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;CoreID6;TestSess3;90024642_login;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPSessionTimeOutInterval;DPJSESSIONID;DPSTKN;USER_ACCT_ID;SVCVER;BNSPrevPercentage;BNSOrigin;marketing;mbox;clientTestPool1;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;testpool;LPCKEY-58507821;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;90024642_reset;_uetsid;LPVID;LPSID-58507821", END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=4002289&Ver=2&mid=5bcde5a3-625c-b374-1484-39fa70139c4a&evt=pageLoad&sid=e016e8c0-0&lt=7874&pi=-1292315712&lg=en-gb&sw=1366&sh=768&sc=24&r=http%3A%2F%2Fm.jcpenney.com%2F&p=https%3A%2F%2Fm.jcpenney.com%2Faccount&rn=780472", "HEADER=Accept-Language:en-in", "COOKIE=MUID;MR;MUIDB", END_INLINE,
            "URL=https://www.res-x.com/ws/r2/Resonance.aspx?appid=jcpenney03&tk=643360201863876&ss=237711581726473&sg=1&pg=375401068053213&vr=5.5x&bx=false&sc=&ev=&ei=&cu=L110056920658&ur=https%3A%2F%2Fm.jcpenney.com%2Fmyorder&plk=&rf=http%3A%2F%2Fm.jcpenney.com%2F", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1493360993638&vn1=4.16.9&ec=utf-8&pi=Email%20%26%20Mobile%20Preferences&cg=Mobile%7CMy%20Account&rnd=1493367544205&pv_a4=20101573135&pv_a23=Google%20Chrome&pv_a38=responsive&ul=https%3A%2F%2Fm.jcpenney.com%2Fmyorder&rf=http%3A%2F%2Fm.jcpenney.com%2F", "HEADER=Accept-Language:en-in", "COOKIE=yoda-experience;CoreID6;TestSess3;90024642_login;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPSessionTimeOutInterval;DPJSESSIONID;DPSTKN;USER_ACCT_ID;SVCVER;BNSPrevPercentage;BNSOrigin;marketing;mbox;clientTestPool1;LPCKEY-58507821;_uetsid;LPVID;LPSID-58507821;90024642_reset;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;ACCTSRC;testpool;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID", END_INLINE,
            "URL=https://netvision.cavisson.com/test_rum?s=000450226282081289113&p=0&op=timing&pi=4&pid=-1&d=1|0|-1|-1|-1|-1|-1|-1|-1|-1|-1|-1|-1|-1|1571|570|-1|-1|0|-1|http%3A%2F%2Fm.jcpenney.com%2F|https%3A%2F%2Fm.jcpenney.com%2Fmyorder|m.jcpenney.com|yoda-experience%3Dh%3A0%3B%20cmTPSet%3DY%3B%20TLTSID%3DPXQSULTD0EW9U8BOIA951A6O6SQCHYSF%3B%20AMCVS_CEEB350F5746CDE97F000101%2540AdobeOrg%3D1%3B%20AMCV_CEEB350F5746CDE97F000101%2540AdobeOrg%3D-1176276602%25PIPE%25MCMID%25PIPE%2549528476585752576190483525314846989045%25PIPE%25MCAAMLH-1493965674%25PIPE%259%25PIPE%25MCAAMB-1493965674%25PIPE%25cIBAx_aQzFEHcPoEv0GwcQ%25PIPE%25MCOPTOUT-1493368074s%25PIPE%25NONE%25PIPE%25MCAID%25PIPE%25NONE%3B%20DPUserTracking%3Dnull%3B%20DPSecureCookie%3D284171fe47d0e77a89267764ea154272%3B%20cmvid%3D20101573135%3B%20DP_USER_STATE%3D1%3B%20DYN_USER_ID%3DL110056920658%3B%20omni_profileType%3DA%25PIPE%25C%25PIPE%25NA%25PIPE%25NA%3B%20omni_profileAttr%3DY%25PIPE%25N%3B%20omni_profileOptin%3DN%25PIPE%25NA%2CNA%3B%20DPOrder%3DC15918407278%3B%20ItemCount%3D21%3B%20ItemTotal%3D%24234.95%3B%20InternationalItemTotal%3D%3B%20DPSessionTimeOutInterval%3D1200000%3B%20DPJSESSIONID%3DCmCzPxjtJyDl96WMmnMxcm13_s_d_AbTh1DAApUQev_zcGDw5qKv!2081854305%3B%20DPSTKN%3DCYSZ3eyYew1370qKA93sQrLvfAvA%3B%20JCPSignInCookie%3D%3B%20USER_ACCT_ID%3DL110056920658%3B%20SVCVER%3Dlatest%3B%20BNSPrevPercentage%3D100%3B%20BNSOrigin%3DA%3B%20marketing%3Ddirect%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1%3B%20WOW64)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F49.0.2623.87%20SAFARI%2F537.36|en-gb|%5Bobject%20PluginArray%5D|Mozilla|0|PC|49.0|7|-1|1|0|254|%7B-1%7D|-1|-1&lts=104826633&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-in", END_INLINE
    );
    ns_end_transaction("MOB_CAM_OrderHistory", NS_AUTO_STATUS);    
    ns_page_think_time(0.102);
 
	
	// Click on Add Address
// goto skipAddress;		
    ns_start_transaction("MB_API_CAM_zipCodes_OPTIONS"); 
 	ns_web_url ("API_zipCodeFetchCall",
        //"URL=https://m.jcpenney.com/v2.1/zipCodes/{ZipCodeFP}",
        "URL=https://account-api.jcpenney.com/v1/zipCodes/{ZipCodeFP}",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
    );
    ns_end_transaction("MB_API_CAM_zipCodes_OPTIONS", NS_AUTO_STATUS);	
    
    ns_start_transaction("MB_API_CAM_zipCodes_GET"); 
 	ns_web_url ("API_zipCode",
        "URL=https://account-api.jcpenney.com/v1/zipCodes/{ZipCodeFP}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_NAME;DYN_USER_ID;omni_profileType;omni_profileAttr;omni_profileOptin;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPSessionTimeOutInterval;DPJSESSIONID;DPSTKN;JCPSignInCookie;USER_ACCT_ID;BNSPrevPercentage;BNSOrigin;marketing;mbox;jcp.ab.test;clientTestPool1;LPCKEY-58507821;s_ptc;s_cc;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;ACCTSRC;testpool;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_sq;_ga;SVCVER;CavSF;CavNVC;_4c_;_uetsid;LPVID;LPSID-58507821",
        "PreSnapshot=webpage_1493361401221.png",
        "Snapshot=webpage_1493361406570.png"
    );
    ns_end_transaction("MB_API_CAM_zipCodes_GET", NS_AUTO_STATUS);	
		 

	// Click on Save
	ns_start_transaction("MOB_CAM_ClickOnSaveAddress");
	ns_start_transaction("MB_API_CAM_addresses_OPTIONS");
        ns_web_url("API_CAM_SaveAddressesfetchCall",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/addresses",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_addresses_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_CAM_addresses_POST");	    
    ns_web_url ("API_SaveAddresses1",
       // "URL=https://m.jcpenney.com/v4/accounts/{DynUserIdSP}/addresses",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/addresses",
        "METHOD=POST",
        "HEADER=Accept-Language:en-us,en;q=0.8",
        "HEADER=X-STANDARDIZATION-REQUIRED:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=authorization:Bearer {AccessTokenSP}",
         //{"country":"US","state":"NY","firstName":"test","lastName":"load","addressLineOne":"202 S 2ND ST  APT 9","zip":"11211","city":"BROOKLYN","phone":"2196264507"}
        BODY_BEGIN,
            "{"country":"US","state":"{StateCodeSP}","firstName":"{FirstNameFP}","lastName":"{LastNameFP}","addressLineOne":"{AddressFP}","zip":"{ZipCodeFP}","city":"{CitySP}","phone":"{PhonenoFP}"}",
        BODY_END
    );
    ns_end_transaction("MB_API_CAM_addresses_POST", NS_AUTO_STATUS);	

    	ns_start_transaction("MB_API_CAM_Address_OPTIONS"); 
	ns_web_url ("AddressPage1",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/addresses",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:accept-version,authorization,content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-account/images/jcpRedCard.png", "HEADER=Accept-Language:en-in", "HEADER=DPCluster:L1", "COOKIE=userStoreInfo;userLatLong;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;wlcme;optimizelyEndUserId;optimizelySegments;optimizelyBuckets;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;marketing;TLTSID;AKJCP;SelectedCountry;shipToCountry;shipToCurrencyCode;mp_jcpenney_mixpanel;_ga;_gid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;yoda-account-desktop;LPVID;LPSID-58507821;_uetsid;DPJSESSIONID;DPUserTracking;DPInstance;DP_USER_FAVCOUNT;ACCTSRC;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DYN_USER_ID;DP_SFL_PPIDS;DP_ORDER_INFO;DPOrder;DPLastAccessedTime;DPCluster;DPSessionTimeOutInterval;DP_USER_NAME;DP_USER_INFO;_4c_;mbox;DPIdentifier;LegacyIdentifier", END_INLINE
    );
	ns_end_transaction("MB_API_CAM_Address_OPTIONS", NS_AUTO_STATUS);
	   
    ns_start_transaction("MB_API_CAM_Address_GET"); 
	ns_web_url ("AddressPage2",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/addresses",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=accept-version:5",

        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-account/images/jcpRedCard.png", "HEADER=Accept-Language:en-in", "HEADER=DPCluster:L1", "COOKIE=userStoreInfo;userLatLong;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;wlcme;optimizelyEndUserId;optimizelySegments;optimizelyBuckets;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;marketing;TLTSID;AKJCP;SelectedCountry;shipToCountry;shipToCurrencyCode;mp_jcpenney_mixpanel;_ga;_gid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;yoda-account-desktop;LPVID;LPSID-58507821;_uetsid;DPJSESSIONID;DPUserTracking;DPInstance;DP_USER_FAVCOUNT;ACCTSRC;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DYN_USER_ID;DP_SFL_PPIDS;DP_ORDER_INFO;DPOrder;DPLastAccessedTime;DPCluster;DPSessionTimeOutInterval;DP_USER_NAME;DP_USER_INFO;_4c_;mbox;DPIdentifier;LegacyIdentifier", END_INLINE
    );
   ns_end_transaction("MB_API_CAM_Address_GET", NS_AUTO_STATUS);
    ns_end_transaction("MOB_CAM_ClickOnSaveAddress", NS_AUTO_STATUS);	

    ns_page_think_time(0.102);
    
    
    ns_start_transaction("MOB_CAM_UpdateAddress");
	ns_start_transaction("MB_API_CAM_addresses_OPTIONS");
        ns_web_url("API_CAM_UpdateAddressfetchCall",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/addresses/{AddressIdSP}",
        "METHOD=OPTIONS",
        "HEADER=X-Origin:Legacy-Adapter",
        "HEADER=Access-Control-Request-Method:PUT",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_addresses_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_CAM_addresses_PUT");
    ns_web_url ("ClickOnUpdateAddressPage2",
        //"URL=https://account-api.jcpenney.com/v5/accounts/L114319406212/addresses{AddressIdSP}",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/addresses/{AddressIdSP}",
        "METHOD=PUT",
        "HEADER=Origin:https://www.jcpenney.com",
        "HEADER=X-STANDARDIZATION-REQUIRED:true",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=Accept-Language:en-us",
        "HEADER=Accept-Version:5",
        "HEADER=content-type:application/json;charset=utf-8",
        //{"id":"5bb3f8b0-9172-11e7-aa96-2fcc8b3ed28b","firstName":"Delete2017","lastName":"NC34557","addressLineOne":"105 GREGORY AVE","addressLineTwo":"","country":"US","city":"MERRICK","state":"NY","zip":"11566","phone":"2196209558","isDefault":false,"expressCheckout":false,"href":"https://services.prod4.dp-prod.jcpcloud2.net/v5/accounts/L114319406212/addresses/5bb3f8b0-9172-11e7-aa96-2fcc8b3ed28b"},
         BODY_BEGIN,
            "{"id":"{AddressIdSP}","firstName":"Update2017","lastName":"{LastnameSP}","addressLineOne":"{AddressSP}","addressLineTwo":"","country":"US","city":"{City2SP}","state":"{State2SP}","zip":"{ZipCode2SP}","phone":"{PhoneNoSP}","isDefault":false,"expressCheckout":false,"href":"https://services.{CloudEnvNameFP}.dp-prod.jcpcloud2.net/v5/accounts/{DynUserIdSP}/addresses/{AddressIdSP}"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.jcpenney.com/cam/jsp/profile/secure/myAddresses.jsp?_requestid=2524194", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;DPLastAccessedTime;DPCluster;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/dotcom_global_cssBundle.css?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/dotcom_dotcom_cssBundle.css?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/checkout-lowresolution.css?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bundleJS/dotcom_global_jsBundle.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bundleJS/dotcom_dotcom_jsBundle.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/Bootstrap.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/namespace.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/cam/js/cityStateLookUp.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/cam/js/lib/eluminate.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bundleJS/dotcom_signInHeader_common_jsBundle.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bumperSiteLists.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/cam/js/lib/jquery.ba-postmessage.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/localStoreSearch.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.dotdotdot.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/underscore-min-1.4.2.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/typeahead.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bundleJS/dotcom_footer_global_jsBundle.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/logo.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/ques_icn.png", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://cdn.tt.omtrdc.net/cdn/target.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/serverComponent.php?r=19.30988040524295&ClientID=730&PageID=https%3A%2F%2Fwww.jcpenney.com%2Fcam%2Fjsp%2Fprofile%2Fsecure%2FmyAddresses.jsp%3F_requestid%3D2524194", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/cam/images/flags/US.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/sprites.png", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/CAM_CS_Sprite.png", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/checkout_ques_icn.png", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/left_btn_small_blue.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/rgt_btn_small_blue.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://testlibs.coremetrics.com/configs/90024642.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www88.jcpenney.com/cookie-id.js?fn=eluminate7406", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;CoreID6;TestSess3;90024642_login;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;_ga;LPCKEY-58507821;90024642_reset;LPVID;LPSID-58507821;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www88.jcpenney.com/cm?ci=90024642&st=1493360413977&vn1=4.14.30&ec=utf-8&vn2=e4.0&pi=My%20Addresses&rf=https%3A%2F%2Fwww.jcpenney.com%2Fcam%2Fjsp%2Fprofile%2Fsecure%2FaddAddress.jsp&ul=https%3A%2F%2Fwww.jcpenney.com%2Fcam%2Fjsp%2Fprofile%2Fsecure%2FmyAddresses.jsp%3F_requestid%3D2524194&tid=1&cg=JCP%7CAccountmanagement%7CMyAccount%7CMyAddresses&rnd=1493370417711&pv_a4=20100685076", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;CoreID6;TestSess3;90024642_login;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;_ga;LPCKEY-58507821;90024642_reset;LPVID;LPSID-58507821;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/footer_bg.png", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/JcpenneyImages.png?v=1", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/loading.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_addresses_PUT", NS_AUTO_STATUS);

    	ns_start_transaction("MB_API_CAM_Address_OPTIONS"); 
	ns_web_url ("AddressPage3",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/addresses",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:accept-version,authorization,content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-account/images/jcpRedCard.png", "HEADER=Accept-Language:en-in", "HEADER=DPCluster:L1", "COOKIE=userStoreInfo;userLatLong;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;wlcme;optimizelyEndUserId;optimizelySegments;optimizelyBuckets;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;marketing;TLTSID;AKJCP;SelectedCountry;shipToCountry;shipToCurrencyCode;mp_jcpenney_mixpanel;_ga;_gid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;yoda-account-desktop;LPVID;LPSID-58507821;_uetsid;DPJSESSIONID;DPUserTracking;DPInstance;DP_USER_FAVCOUNT;ACCTSRC;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DYN_USER_ID;DP_SFL_PPIDS;DP_ORDER_INFO;DPOrder;DPLastAccessedTime;DPCluster;DPSessionTimeOutInterval;DP_USER_NAME;DP_USER_INFO;_4c_;mbox;DPIdentifier;LegacyIdentifier", END_INLINE
    );
	ns_end_transaction("MB_API_CAM_Address_OPTIONS", NS_AUTO_STATUS);
	   
    ns_start_transaction("MB_API_CAM_Address_GET"); 
	ns_web_url ("AddressPage4",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/addresses",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=accept-version:5",

        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-account/images/jcpRedCard.png", "HEADER=Accept-Language:en-in", "HEADER=DPCluster:L1", "COOKIE=userStoreInfo;userLatLong;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;wlcme;optimizelyEndUserId;optimizelySegments;optimizelyBuckets;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;marketing;TLTSID;AKJCP;SelectedCountry;shipToCountry;shipToCurrencyCode;mp_jcpenney_mixpanel;_ga;_gid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;yoda-account-desktop;LPVID;LPSID-58507821;_uetsid;DPJSESSIONID;DPUserTracking;DPInstance;DP_USER_FAVCOUNT;ACCTSRC;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DYN_USER_ID;DP_SFL_PPIDS;DP_ORDER_INFO;DPOrder;DPLastAccessedTime;DPCluster;DPSessionTimeOutInterval;DP_USER_NAME;DP_USER_INFO;_4c_;mbox;DPIdentifier;LegacyIdentifier", END_INLINE
    );
   ns_end_transaction("MB_API_CAM_Address_GET", NS_AUTO_STATUS);
    ns_end_transaction("MOB_CAM_UpdateAddress", NS_AUTO_STATUS);
    ns_page_think_time(0);
    
    

     //Page Auto splitted for Method = DELETE
    ns_start_transaction("MOB_CAM_DeleteAddress"); 
    ns_start_transaction("MB_API_CAM_AddressesId_OPTIONS");
        ns_web_url("API_CAM_DeleteAddressfetchCall",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/addresses/{AddressIdSP}",
        "METHOD=OPTIONS",
        "HEADER=X-Origin:Legacy-Adapter",
        "HEADER=Access-Control-Request-Method:DELETE",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_AddressesId_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_CAM_AddressesId_DELETE");        
    ns_web_url ("API_DeleteAddress",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/addresses/{AddressIdSP}",
        //"URL=https://m.jcpenney.com/v4/accounts/{DynUserIdSP}/addresses/{AddressIdSP}",
        "METHOD=DELETE",
        "HEADER=Accept-Language:en-us,en;q=0.8",
        "HEADER=X-STANDARDIZATION-REQUIRED:true",
        "HEADER=X-USER-ACTION:EXT",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=authorization:Bearer {AccessTokenSP}",
    );
    ns_end_transaction("MB_API_CAM_AddressesId_DELETE", NS_AUTO_STATUS); 

    	ns_start_transaction("MB_API_CAM_Address_OPTIONS"); 
	ns_web_url ("AddressPage5",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/addresses",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:accept-version,authorization,content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-account/images/jcpRedCard.png", "HEADER=Accept-Language:en-in", "HEADER=DPCluster:L1", "COOKIE=userStoreInfo;userLatLong;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;wlcme;optimizelyEndUserId;optimizelySegments;optimizelyBuckets;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;marketing;TLTSID;AKJCP;SelectedCountry;shipToCountry;shipToCurrencyCode;mp_jcpenney_mixpanel;_ga;_gid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;yoda-account-desktop;LPVID;LPSID-58507821;_uetsid;DPJSESSIONID;DPUserTracking;DPInstance;DP_USER_FAVCOUNT;ACCTSRC;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DYN_USER_ID;DP_SFL_PPIDS;DP_ORDER_INFO;DPOrder;DPLastAccessedTime;DPCluster;DPSessionTimeOutInterval;DP_USER_NAME;DP_USER_INFO;_4c_;mbox;DPIdentifier;LegacyIdentifier", END_INLINE
    );
	ns_end_transaction("MB_API_CAM_Address_OPTIONS", NS_AUTO_STATUS);
	   
    ns_start_transaction("MB_API_CAM_Address_GET"); 
	ns_web_url ("AddressPage6",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/addresses",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=accept-version:5",

        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-account/images/jcpRedCard.png", "HEADER=Accept-Language:en-in", "HEADER=DPCluster:L1", "COOKIE=userStoreInfo;userLatLong;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;wlcme;optimizelyEndUserId;optimizelySegments;optimizelyBuckets;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;marketing;TLTSID;AKJCP;SelectedCountry;shipToCountry;shipToCurrencyCode;mp_jcpenney_mixpanel;_ga;_gid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;yoda-account-desktop;LPVID;LPSID-58507821;_uetsid;DPJSESSIONID;DPUserTracking;DPInstance;DP_USER_FAVCOUNT;ACCTSRC;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DYN_USER_ID;DP_SFL_PPIDS;DP_ORDER_INFO;DPOrder;DPLastAccessedTime;DPCluster;DPSessionTimeOutInterval;DP_USER_NAME;DP_USER_INFO;_4c_;mbox;DPIdentifier;LegacyIdentifier", END_INLINE
    );
   ns_end_transaction("MB_API_CAM_Address_GET", NS_AUTO_STATUS);
    ns_end_transaction("MOB_CAM_DeleteAddress", NS_AUTO_STATUS);
	ns_page_think_time(0.102);

	
	 ns_start_transaction("MOB_CAM_UpdatePaymentMethods");
	 ns_start_transaction("MB_API_CAM_paymentmethods_OPTIONS");
        ns_web_url("API_CAM_UpdatePaymentfetchCall",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/payment-methods/{PaymentIdDP}",
        "METHOD=OPTIONS",
        "HEADER=X-Origin:Legacy-Adapter",
        "HEADER=Access-Control-Request-Method:PUT",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_paymentmethods_OPTIONS", NS_AUTO_STATUS);
    
	ns_start_transaction("MB_API_CAM_paymentmethods_PUT");
        ns_web_url ("ClickOnUpdatePaymentPage2",
        //"URL=https://account-api.jcpenney.com/v5/accounts/L114319406212/addresses{AddressIdSP}",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/payment-methods/{PaymentIdDP}",
        "METHOD=PUT",
        "HEADER=Origin:https://m.jcpenney.com",
        "HEADER=X-STANDARDIZATION-REQUIRED:true",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=Accept-Language:en-us",
        "HEADER=Accept-Version:5",
        "HEADER=DPCluster:{DPClusterSP}",
        "HEADER=DPInstance:{DPInstanceSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;DPInstance;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;s_sq;CavNVC",
        "PreSnapshot=webpage_1493360412013.png",
        "Snapshot=webpage_1493360414190.png",
        //"{"id":"{PaymentIdSP}","type":"jcp","expiryYear":"","expiryMonth":"","cvv":"123","expressCheckout":false,"isDefault":true,"cardNumber":"{CreditCardNumberFP}","address":{"id":"{PayAddressIdSP}"}}",
       BODY_BEGIN,
            "{"id":"{PaymentIdSP}","type":"jcp","expiryYear":"","expiryMonth":"","cvv":"123","expressCheckout":false,"isDefault":true,"address":{"id":"{PayAddressIdSP}"}}",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.jcpenney.com/cam/jsp/profile/secure/myAddresses.jsp?_requestid=2524194", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;DPLastAccessedTime;DPCluster;DP_USER_AUTH_STATUS;DP_USER_FAVCOUNT;DP_SFL_PPIDS;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/dotcom_global_cssBundle.css?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/dotcom_dotcom_cssBundle.css?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/checkout-lowresolution.css?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bundleJS/dotcom_global_jsBundle.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bundleJS/dotcom_dotcom_jsBundle.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/Bootstrap.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/namespace.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/cam/js/cityStateLookUp.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/cam/js/lib/eluminate.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bundleJS/dotcom_signInHeader_common_jsBundle.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bumperSiteLists.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/cam/js/lib/jquery.ba-postmessage.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/localStoreSearch.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.dotdotdot.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/underscore-min-1.4.2.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/typeahead.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bundleJS/dotcom_footer_global_jsBundle.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/logo.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/ques_icn.png", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;mbox;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime", END_INLINE,
            "URL=https://cdn.tt.omtrdc.net/cdn/target.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/serverComponent.php?r=19.30988040524295&ClientID=730&PageID=https%3A%2F%2Fwww.jcpenney.com%2Fcam%2Fjsp%2Fprofile%2Fsecure%2FmyAddresses.jsp%3F_requestid%3D2524194", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/cam/images/flags/US.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/sprites.png", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/CAM_CS_Sprite.png", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/checkout_ques_icn.png", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/left_btn_small_blue.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/rgt_btn_small_blue.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://testlibs.coremetrics.com/configs/90024642.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www88.jcpenney.com/cookie-id.js?fn=eluminate7406", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;CoreID6;TestSess3;90024642_login;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;_ga;LPCKEY-58507821;90024642_reset;LPVID;LPSID-58507821;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www88.jcpenney.com/cm?ci=90024642&st=1493360413977&vn1=4.14.30&ec=utf-8&vn2=e4.0&pi=My%20Addresses&rf=https%3A%2F%2Fwww.jcpenney.com%2Fcam%2Fjsp%2Fprofile%2Fsecure%2FaddAddress.jsp&ul=https%3A%2F%2Fwww.jcpenney.com%2Fcam%2Fjsp%2Fprofile%2Fsecure%2FmyAddresses.jsp%3F_requestid%3D2524194&tid=1&cg=JCP%7CAccountmanagement%7CMyAccount%7CMyAddresses&rnd=1493370417711&pv_a4=20100685076", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;CoreID6;TestSess3;90024642_login;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_uetsid;_ga;LPCKEY-58507821;90024642_reset;LPVID;LPSID-58507821;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/footer_bg.png", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/JcpenneyImages.png?v=1", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/loading.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;_4c_;DPSecureCookie;DYN_USER_ID;DYN_USER_CONFIRM;DP_USER_NAME;DP_USER_STATE;cmvid;userStoreInfo;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;pn;_uetsid;_ga;LPCKEY-58507821;c17;v53;s_ptc;s_cc;LPVID;LPSID-58507821;CavSF;s_sq;CavNVC;DPInstance;LegacyIdentifier;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DP_USER_AUTH_STATUS;DPIdentifier;DPCluster;DPLastAccessedTime;mbox", END_INLINE
    );
    ns_end_transaction("MB_API_CAM_paymentmethods_PUT", NS_AUTO_STATUS); 

    	ns_start_transaction("MB_API_CAM_paymentmethods_OPTIONS"); 
	ns_web_url ("paymentmethods",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/payment-methods",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:accept-version,authorization,content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-account/images/jcpRedCard.png", "HEADER=Accept-Language:en-in", "HEADER=DPCluster:L1", "COOKIE=userStoreInfo;userLatLong;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;wlcme;optimizelyEndUserId;optimizelySegments;optimizelyBuckets;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;marketing;TLTSID;AKJCP;SelectedCountry;shipToCountry;shipToCurrencyCode;mp_jcpenney_mixpanel;_ga;_gid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;yoda-account-desktop;LPVID;LPSID-58507821;_uetsid;DPJSESSIONID;DPUserTracking;DPInstance;DP_USER_FAVCOUNT;ACCTSRC;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DYN_USER_ID;DP_SFL_PPIDS;DP_ORDER_INFO;DPOrder;DPLastAccessedTime;DPCluster;DPSessionTimeOutInterval;DP_USER_NAME;DP_USER_INFO;_4c_;mbox;DPIdentifier;LegacyIdentifier", END_INLINE
    );
	ns_end_transaction("MB_API_CAM_paymentmethods_OPTIONS", NS_AUTO_STATUS);
	   
    ns_start_transaction("MB_API_CAM_paymentmethods_GET"); 
	ns_web_url ("paymentmethods1",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/payment-methods",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=accept-version:5",

        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-account/images/jcpRedCard.png", "HEADER=Accept-Language:en-in", "HEADER=DPCluster:L1", "COOKIE=userStoreInfo;userLatLong;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;wlcme;optimizelyEndUserId;optimizelySegments;optimizelyBuckets;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;marketing;TLTSID;AKJCP;SelectedCountry;shipToCountry;shipToCurrencyCode;mp_jcpenney_mixpanel;_ga;_gid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;yoda-account-desktop;LPVID;LPSID-58507821;_uetsid;DPJSESSIONID;DPUserTracking;DPInstance;DP_USER_FAVCOUNT;ACCTSRC;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DYN_USER_ID;DP_SFL_PPIDS;DP_ORDER_INFO;DPOrder;DPLastAccessedTime;DPCluster;DPSessionTimeOutInterval;DP_USER_NAME;DP_USER_INFO;_4c_;mbox;DPIdentifier;LegacyIdentifier", END_INLINE
    );
   ns_end_transaction("MB_API_CAM_paymentmethods_GET", NS_AUTO_STATUS);  

/*
       ns_start_transaction("MB_API_CAM_PM_rewards_OPTIONS"); 
		ns_web_url ("rewardsPage3",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/rewards-profile?expand=points%2Ccertificates%2Crecentactivity",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:accept-version,authorization,content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-account/images/jcpRedCard.png", "HEADER=Accept-Language:en-in", "HEADER=DPCluster:L1", "COOKIE=userStoreInfo;userLatLong;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;wlcme;optimizelyEndUserId;optimizelySegments;optimizelyBuckets;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;marketing;TLTSID;AKJCP;SelectedCountry;shipToCountry;shipToCurrencyCode;mp_jcpenney_mixpanel;_ga;_gid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;yoda-account-desktop;LPVID;LPSID-58507821;_uetsid;DPJSESSIONID;DPUserTracking;DPInstance;DP_USER_FAVCOUNT;ACCTSRC;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DYN_USER_ID;DP_SFL_PPIDS;DP_ORDER_INFO;DPOrder;DPLastAccessedTime;DPCluster;DPSessionTimeOutInterval;DP_USER_NAME;DP_USER_INFO;_4c_;mbox;DPIdentifier;LegacyIdentifier", END_INLINE
    );
	ns_end_transaction("MB_API_CAM_PM_rewards_OPTIONS", NS_AUTO_STATUS);
	   
    ns_start_transaction("MB_API_CAM_PM_rewards_GET"); 
		 ns_web_url ("rewardsPage4",
        "URL=https://account-api.jcpenney.com/v5/accounts/{DynUserIdSP}/rewards-profile?expand=points%2Ccertificates%2Crecentactivity",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=accept-version:5",

        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-account/images/jcpRedCard.png", "HEADER=Accept-Language:en-in", "HEADER=DPCluster:L1", "COOKIE=userStoreInfo;userLatLong;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;wlcme;optimizelyEndUserId;optimizelySegments;optimizelyBuckets;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;marketing;TLTSID;AKJCP;SelectedCountry;shipToCountry;shipToCurrencyCode;mp_jcpenney_mixpanel;_ga;_gid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;yoda-account-desktop;LPVID;LPSID-58507821;_uetsid;DPJSESSIONID;DPUserTracking;DPInstance;DP_USER_FAVCOUNT;ACCTSRC;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DYN_USER_ID;DP_SFL_PPIDS;DP_ORDER_INFO;DPOrder;DPLastAccessedTime;DPCluster;DPSessionTimeOutInterval;DP_USER_NAME;DP_USER_INFO;_4c_;mbox;DPIdentifier;LegacyIdentifier", END_INLINE
    );
   ns_end_transaction("MB_API_CAM_PM_rewards_GET", NS_AUTO_STATUS);
*/
   
    ns_end_transaction("MOB_CAM_UpdatePaymentMethods", NS_AUTO_STATUS);
    ns_page_think_time(0);

    // Click on SignOut
    signout:
    ns_start_transaction("MOB_CAM_Logout");  
    ns_web_url ("API_content",
        "URL=https://m.jcpenney.com/sessiontimeout",
        "HEADER=Accept-Language:en-us",
        "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;cmvid;omni_profileType;omni_profileAttr;omni_profileOptin;DPSessionTimeOutInterval;JCPSignInCookie;marketing;LPCKEY-58507821;s_ptc;s_cc;ACCTSRC;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_ga;SVCVER;c17;v53;s_sq;CavSF;_uetsid;LPVID;LPSID-58507821;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPOrder;InternationalItemTotal;DP_USER_AUTH_STATUS;DPJSESSIONID;testpool;_4c_;CavNVC;BNSPrevPercentage;BNSOrigin;mbox;jcp.ab.test;clientTestPool1",
        "PreSnapshot=webpage_1493361587610.png",
        "Snapshot=webpage_1493361587680.png"
    );
    ns_end_transaction("MOB_CAM_Logout", NS_AUTO_STATUS);
    ns_page_think_time(0.102);	
    
     
}