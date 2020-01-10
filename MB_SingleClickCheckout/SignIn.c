/*-----------------------------------------------------------------------------
    Name: SignIn
    Recorded By: Kalyani
    Date of recording: 07/25/2019 04:26:32
    Flow details:
    Build details: 4.1.14 (build# 126)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void SignIn()
{
	ns_advance_param("CloudEnvFP");

    char cloudEnv[64 + 1]="";
    snprintf(cloudEnv,64,"%s",ns_eval_string("{CloudEnvFP}"));
    ns_web_add_auto_header("X-JCPCloud-Origin", cloudEnv, 0);
    ns_web_add_auto_header("Origin", "https://m.jcpenney.com", 0);
  
    // ***************Sign in *********************
     ns_start_transaction("MOB_ExpSignin");
	ns_start_transaction("MB_API_Exp_OauthToken_OPTIONS");
         ns_web_url("MB_API_Exp_OauthToken1",
        "URL=https://account-api.jcpenney.com/v5/oauth2/token",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_Exp_OauthToken_OPTIONS",NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_Exp_OauthToken_POST");
    ns_web_url ("MB_API_Exp_OauthToken",
        "URL=https://account-api.jcpenney.com/v5/oauth2/token",
        "METHOD=POST",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=ak_geo;Aurora;DPCPT;UID;DP-Cloud-Origin;bm_sz;mbox;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;_abck;ak_bmsc;ak_zip;bm_sv;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;QuantumMetricSessionID;_gcl_au;mp_jcpenney_mixpanel;_4c_mc_;cto_lwid;_MetricalObject_did;_MetricalObject_sessionid;_fbp;AMP_TOKEN;_ga;_gid;__gads",
        "PreSnapshot=webpage_1564046473680.png",
        "Snapshot=webpage_1564046475489.png",
        //"{"email":"ncdp90000010027@example.com","password":"Load10027","isSignInSliderReq":true,"grant_type":"password"}",
        BODY_BEGIN,
            "{"email":"{EmailFP}","password":"{PasswordFP}","isSignInSliderReq":true,"grant_type":"password"}",
        BODY_END
    );
    ns_end_transaction("MB_API_Exp_OauthToken_POST", NS_AUTO_STATUS);
    ns_end_transaction("MOB_ExpSignin",NS_AUTO_STATUS);
    ns_page_think_time(0);
    

}
