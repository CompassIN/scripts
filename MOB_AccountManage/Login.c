/*-----------------------------------------------------------------------------
    Name: Login
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

void Login()
{	
	ns_advance_param("CloudEnvFP");
    char DPClusterbuff1[64 + 1]="";
    snprintf(DPClusterbuff1,64,"%s",ns_eval_string("{CookieFP}"));
    ns_add_cookie_val_ex("DPCluster", NULL, NULL, DPClusterbuff1);
       
       
 	//********************************Setting for AWS Env******************************//
    	char cloudEnv[64 + 1]="";
	    snprintf(cloudEnv,64,"%s",ns_eval_string("{CloudEnvFP}"));
        ns_web_add_auto_header("X-JCPCloud-Origin", cloudEnv, 0);
	


    // Click on Account
    // Click On SignIn
    int Exituser = ns_get_random_number_int(1,100);
    ns_start_transaction("MOB_CAM_ClickOnSignIn");	   
    ns_web_url ("API_SignIn_1",
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
   // ns_start_transaction("MOB_CAM_Login"); 
    ns_start_transaction("MB_API_CAM_token_OPTIONS");
        ns_web_url("API_CAM_OauthTokenfetchCall_1",
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
        ns_web_url ("API_CAM_token_1",
        "URL=https://account-api.jcpenney.com/v5/oauth2/token",
        "METHOD=POST",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        BODY_BEGIN,
            "{"email":"{EmailIdFP}","password":"{PasswordFP}","grant_type":"password"}",
        BODY_END
    );
    ns_end_transaction("MB_API_CAM_token_POST", NS_AUTO_STATUS);
    
	
	ns_page_think_time(0.102);

  
    // Click on SignOut
    signout:
    ns_start_transaction("MOB_CAM_Logout");    
    ns_web_url ("API_content_1",
        "URL=https://m.jcpenney.com/sessiontimeout",
        "HEADER=Accept-Language:en-us",
        "COOKIE=yoda-experience;cmTPSet;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DPUserTracking;cmvid;omni_profileType;omni_profileAttr;omni_profileOptin;DPSessionTimeOutInterval;JCPSignInCookie;marketing;LPCKEY-58507821;s_ptc;s_cc;ACCTSRC;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_ga;SVCVER;c17;v53;s_sq;CavSF;_uetsid;LPVID;LPSID-58507821;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPOrder;InternationalItemTotal;DP_USER_AUTH_STATUS;DPJSESSIONID;testpool;_4c_;CavNVC;BNSPrevPercentage;BNSOrigin;mbox;jcp.ab.test;clientTestPool1",
        "PreSnapshot=webpage_1493361587610.png",
        "Snapshot=webpage_1493361587680.png"
    );
    ns_end_transaction("MOB_CAM_Logout", NS_AUTO_STATUS);
    ns_page_think_time(0.102);	

     
}
