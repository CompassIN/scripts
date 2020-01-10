/*-----------------------------------------------------------------------------
    Name: ExpressCheckout
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
#include "Util.c"

void ExpressCheckout()
{
    // **********************Initiate Checkout******************
	int Exituser = ns_get_random_number_int(1,100);
   char AccountIdbuff1[64 + 1]="";
   snprintf(AccountIdbuff1,64,"%s",ns_eval_string("{CustomerIdSP}"));
   ns_add_cookie_val_ex("ACCOUNT_ID", NULL, NULL, AccountIdbuff1);

   char AccessTbuff1[1024 + 1]="";
   snprintf(AccessTbuff1,1024,"%s",ns_eval_string("{AccessTokenSP}"));
   ns_add_cookie_val_ex("Access_Token", NULL, NULL, AccessTbuff1);
   
	ns_start_transaction("MOB_Exp_CheckOut");
    ns_start_transaction("MB_API_EC_draftorder_OPTIONS");
    ns_web_url("MB_API_EC_draftorder1",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L112986139863/draft-order",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-command",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_EC_draftorder_OPTIONS",NS_AUTO_STATUS);

    //ns_web_add_auto_header("customerVidForPerfTestOrder", "false", 0);
    ns_start_transaction("MB_API_EC_draftorder_POST");
    ns_web_url ("MB_API_EC_draftorder",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L112986139863/draft-order",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=POST",
        "HEADER=Authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Client-Id:Basic amNwLnJ3ZG06QVVndFRydFc5cg",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=X-COMMAND:initiate-checkout",
        "HEADER=Accept-Language:en-us",
        "COOKIE=ak_geo;DPCPT;DP-Cloud-Origin;bm_sz;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;_abck;ak_bmsc;ak_zip;QuantumMetricSessionID;_gcl_au;_4c_mc_;cto_lwid;_MetricalObject_did;_MetricalObject_sessionid;_fbp;AMP_TOKEN;_ga;_gid;__gads;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPIdentifier;DPCluster;DPLastAccessedTime;DPInstance;DYN_USER_ID;DP_USER_NAME;DP_USER_AUTH_STATUS;DP_USER_STATE;DPSecureCookie;DPJSESSIONID;DP_ORDER_INFO;DP_USER_DEFAULT_ADDRESS_ZIP;ACCOUNT_ID;DP_SFL_ID;DP_USER_INFO;tfc-s;tfc-l;mp_jcpenney_mixpanel;ot;UID;ItemCount;mbox;DP-Cloud-Cluster;bm_sv;_gat;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg",
        "PreSnapshot=webpage_1564046627673.png",
        "Snapshot=webpage_1564046627879.png"
    );
    ns_end_transaction("MB_API_EC_draftorder_POST", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_EC_OriginReview_OPTIONS");
    ns_web_url ("MB_API_EC_OriginReview1",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L112986139863/draft-order?expand=status%2Cdelivery%2Cbilling&origin=review",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&origin=review",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-geo-location",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1564046629115.png",
        "Snapshot=webpage_1564046629480.png"
    );
    ns_end_transaction("MB_API_EC_OriginReview_OPTIONS", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_EC_OriginReview_GET");
    ns_web_url ("MB_API_EC_OriginReview",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L112986139863/draft-order?expand=status%2Cdelivery%2Cbilling&origin=review",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery%2Cbilling&origin=review",
        "HEADER=X-Geo-Location:03602",
        "HEADER=Authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Client-Id:Basic amNwLnJ3ZG06QVVndFRydFc5cg",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=ak_geo;DPCPT;DP-Cloud-Origin;bm_sz;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;_abck;ak_bmsc;ak_zip;QuantumMetricSessionID;_gcl_au;_4c_mc_;cto_lwid;_MetricalObject_did;_MetricalObject_sessionid;_fbp;AMP_TOKEN;_ga;_gid;__gads;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPIdentifier;DPCluster;DPLastAccessedTime;DPInstance;DYN_USER_ID;DP_USER_NAME;DP_USER_AUTH_STATUS;DP_USER_STATE;DPSecureCookie;DPJSESSIONID;DP_ORDER_INFO;DP_USER_DEFAULT_ADDRESS_ZIP;ACCOUNT_ID;DP_SFL_ID;DP_USER_INFO;tfc-s;tfc-l;mp_jcpenney_mixpanel;ot;UID;ItemCount;mbox;bm_sv;_gat;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DP-Cloud-Cluster",
        "PreSnapshot=webpage_1564046629480.png",
        "Snapshot=webpage_1564046630693.png"
    );

    ns_end_transaction("MB_API_EC_OriginReview_GET", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_EC_BestCoupon_OPTIONS");
    ns_web_url ("MB_API_EC_BestCoupon1",
        "URL=https://order-api.jcpenney.com/order-api/v2/best-coupon?expand=pricing",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-client-id,x-geo-location",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1564046629115.png",
        "Snapshot=webpage_1564046629480.png"
    );
    ns_end_transaction("MB_API_EC_BestCoupon_OPTIONS", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_EC_BestCoupon_GET");
    ns_web_url ("MB_API_EC_BestCoupon",
        "URL=https://order-api.jcpenney.com/order-api/v2/best-coupon?expand=pricing",
        "HEADER=Authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Client-Id:Basic amNwLnJ3ZG06QVVndFRydFc5cg",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=ak_geo;DPCPT;DP-Cloud-Origin;bm_sz;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;_abck;ak_bmsc;ak_zip;QuantumMetricSessionID;_gcl_au;_4c_mc_;cto_lwid;_MetricalObject_did;_MetricalObject_sessionid;_fbp;AMP_TOKEN;_ga;_gid;__gads;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPIdentifier;DPCluster;DPLastAccessedTime;DPInstance;DYN_USER_ID;DP_USER_NAME;DP_USER_AUTH_STATUS;DP_USER_STATE;DPSecureCookie;DPJSESSIONID;DP_ORDER_INFO;DP_USER_DEFAULT_ADDRESS_ZIP;ACCOUNT_ID;DP_SFL_ID;DP_USER_INFO;tfc-s;tfc-l;mp_jcpenney_mixpanel;ot;UID;ItemCount;mbox;_gat;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DP-Cloud-Cluster;bm_sv",
        "PreSnapshot=webpage_1564046630693.png",
        "Snapshot=webpage_1564046631000.png",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/fp/check.js?org_id=k8vif92e&session_id=jcpenneyundefined", "HEADER=x-jcpcloud-origin:cloud2", "HEADER=Accept-Language:en-us", "COOKIE=ak_geo;gc_captcha;DPCPT;DP-Cloud-Origin;bm_sz;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;_abck;ak_bmsc;ak_zip;marketing;s_cc;QuantumMetricSessionID;_gcl_au;_4c_mc_;_mibhv;EG-U-ID;EG-S-ID;cto_lwid;CRTOABE;_MetricalObject_did;_MetricalObject_sessionid;_fbp;AMP_TOKEN;_ga;_gid;__gads;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPIdentifier;DPCluster;DPLastAccessedTime;DPInstance;DYN_USER_ID;DP_USER_NAME;DP_USER_AUTH_STATUS;DP_USER_STATE;DPSecureCookie;DPJSESSIONID;DP_ORDER_INFO;DP_USER_DEFAULT_ADDRESS_ZIP;ACCOUNT_ID;DP_SFL_ID;DP_USER_INFO;tfc-s;tfc-l;PersistentID;mp_jcpenney_mixpanel;c13;__evuid;ot;UID;ItemCount;mbox;Access_Token;DP-Cloud-Cluster;_gat;c17;v53;ione_MTA5NTQ2;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;s_sq;tp;s_ppv;bm_sv", END_INLINE
    );
    ns_end_transaction("MB_API_EC_BestCoupon_GET", NS_AUTO_STATUS);
    ns_end_transaction("MOB_Exp_CheckOut", NS_AUTO_STATUS);
    ns_page_think_time(0);
    
    // *******************PlaceOrder************************
	 if(Exituser <= 89){
    	 ns_start_transaction("MOB_AbandonmentAtExpSinglePageCheckout");
         ns_end_transaction("MOB_AbandonmentAtExpSinglePageCheckout", NS_AUTO_STATUS);
    	ns_exit_session();
    }
    
	ns_start_transaction("TotalSubmitOrder");
    ns_start_transaction("MOB_SubmitOrder");
    ns_start_transaction("MOB_Exp_SubmitOrder");
	ns_start_transaction("MB_API_EC_PO_DraftOrder_OPTIONS");
     ns_web_url("MB_API_EC_PO_DraftOrder1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
         "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_EC_PO_DraftOrder_OPTIONS",NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_EC_PO_DraftOrder_POST");
    ns_web_url ("MB_API_EC_PO_DraftOrder",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L112986139863/draft-order",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order",
        "METHOD=POST",
        "HEADER=Authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Client-Id:Basic amNwLnJ3ZG06QVVndFRydFc5cg",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=X-COMMAND:submit",
        "HEADER=Accept-Language:en-us",
        "COOKIE=ak_geo;DPCPT;DP-Cloud-Origin;bm_sz;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;_abck;ak_bmsc;ak_zip;QuantumMetricSessionID;_gcl_au;_4c_mc_;cto_lwid;_MetricalObject_did;_MetricalObject_sessionid;_fbp;AMP_TOKEN;_ga;_gid;__gads;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPIdentifier;DPCluster;DPLastAccessedTime;DPInstance;DYN_USER_ID;DP_USER_NAME;DP_USER_AUTH_STATUS;DP_USER_STATE;DPSecureCookie;DPJSESSIONID;DP_ORDER_INFO;DP_USER_DEFAULT_ADDRESS_ZIP;ACCOUNT_ID;DP_SFL_ID;DP_USER_INFO;tfc-s;tfc-l;mp_jcpenney_mixpanel;ot;UID;ItemCount;mbox;_gat;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;DP-Cloud-Cluster;bm_sv",
        "PreSnapshot=webpage_1564046647336.png",
        "Snapshot=webpage_1564046647765.png"
    );

    ns_end_transaction("MB_API_EC_PO_DraftOrder_POST", NS_AUTO_STATUS);

    ns_start_transaction("MOB_OrderConfirmation");
    ns_web_url ("EC_OrderConfirmation",
        //"URL=https://www.jcpenney.com/checkout/oc?OrderId=8d24c540-aebd-11e9-ba8e-4965e352dd4c&scc=true",
        "URL=https://www.jcpenney.com/checkout/oc?OrderId={OrderIdSP}&scc=true",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=ak_geo;gc_captcha;DPCPT;DP-Cloud-Origin;bm_sz;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;_abck;ak_bmsc;ak_zip;marketing;s_cc;QuantumMetricSessionID;_gcl_au;_4c_mc_;_mibhv;EG-U-ID;EG-S-ID;cto_lwid;CRTOABE;_MetricalObject_did;_MetricalObject_sessionid;_fbp;AMP_TOKEN;_ga;_gid;__gads;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPIdentifier;DPCluster;DPLastAccessedTime;DPInstance;DYN_USER_ID;DP_USER_NAME;DP_USER_AUTH_STATUS;DP_USER_STATE;DPSecureCookie;DPJSESSIONID;DP_ORDER_INFO;DP_USER_DEFAULT_ADDRESS_ZIP;ACCOUNT_ID;DP_SFL_ID;DP_USER_INFO;tfc-s;tfc-l;PersistentID;mp_jcpenney_mixpanel;c13;__evuid;ot;UID;mbox;Access_Token;DP-Cloud-Cluster;_gat;v53;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;tp;c17;s_ppv;ione_MTA5NTQ2;s_sq;bm_sv;ItemCount",
        "PreSnapshot=webpage_1564046653601.png",
        "Snapshot=webpage_1564046649229.png"
    );

   // ns_end_transaction("MOB_OrderConfirmation", NS_AUTO_STATUS);

    //***********************************SSR/CSR Handling**************************//
    if((!strcmp(ns_eval_string("{OrderNoSP1}"),""))){
    ns_end_transaction_as("MOB_OrderConfirmation", NS_AUTO_STATUS, "MOB_OrderConfirmation_CSR");}
    else {
    ns_end_transaction_as("MOB_OrderConfirmation", NS_AUTO_STATUS, "MOB_OrderConfirmation_SSR");
    goto SkipOrderConfirmation;
    }
//********************************************************************************//  
    
    ns_start_transaction("MB_API_EC_orders_OPTIONS");
    ns_web_url("MB_API_EC_orders_opt",
        "URL=https://order-api.jcpenney.com/order-api/v1/orders/{OrderIdSP}",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_EC_orders_OPTIONS",NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_EC_orders_GET");
    ns_web_url ("MB_API_EC_orders",
    //"URL=https://order-api.jcpenney.com/order-api/v1/orders/L15995640135",
        "URL=https://order-api.jcpenney.com/order-api/v1/orders/{OrderIdSP}",
        "METHOD=GET",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=x-command:submit",
        "HEADER=Accept-Language:en-us",
    );

    ns_end_transaction("MB_API_EC_orders_GET",NS_AUTO_STATUS);
    SkipOrderConfirmation:
    ns_end_transaction("MOB_Exp_SubmitOrder",NS_AUTO_STATUS);
    ns_end_transaction("MOB_SubmitOrder",NS_AUTO_STATUS);
    ns_end_transaction("TotalSubmitOrder",NS_AUTO_STATUS);

	ns_start_transaction("MB_API_EC_PO_ContentAggregator_OPTIONS");
    ns_web_url("MB_API_EC_PO_ContentAggregator1",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/checkout/oc",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
         "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("MB_API_EC_PO_ContentAggregator_OPTIONS",NS_AUTO_STATUS);

    ns_start_transaction("MB_API_EC_PO_ContentAggregator_GET");
    ns_web_url ("MB_API_EC_PO_ContentAggregator",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/checkout/oc",
        "HEADER=X-JCPCLOUD-ENV:null",
        "HEADER=Accept-Language:en-us",
        "HEADER=X-CHANNEL:desktop",
        "COOKIE=ak_geo;DPCPT;DP-Cloud-Origin;bm_sz;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;_abck;ak_bmsc;ak_zip;QuantumMetricSessionID;_gcl_au;_4c_mc_;cto_lwid;_MetricalObject_did;_MetricalObject_sessionid;_fbp;AMP_TOKEN;_ga;_gid;__gads;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPIdentifier;DPCluster;DPLastAccessedTime;DPInstance;DYN_USER_ID;DP_USER_NAME;DP_USER_AUTH_STATUS;DP_USER_STATE;DPSecureCookie;DPJSESSIONID;DP_ORDER_INFO;DP_USER_DEFAULT_ADDRESS_ZIP;ACCOUNT_ID;DP_SFL_ID;DP_USER_INFO;DP-Cloud-Cluster;tfc-s;tfc-l;mp_jcpenney_mixpanel;ot;UID;_gat;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;ItemCount;bm_sv;check;mbox",
        "PreSnapshot=webpage_1564046654580.png",
        "Snapshot=webpage_1564046654521.png"
    );

    ns_end_transaction("MB_API_EC_PO_ContentAggregator_GET", NS_AUTO_STATUS);

    ns_page_think_time(0);
      get_YodaExpOrderdetail();
}
