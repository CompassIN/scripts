/*-----------------------------------------------------------------------------
    Name:ShoppingBag
    Recorded By: netstorm
    Date of recording: 06/12/2017 02:55:02
    Flow details:
    Build details: 4.1.7 (build# 63)
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
void ShoppingBag()
{
	    
   // char yodack[64 + 1]="";
   // snprintf(yodack,64,"%s",ns_eval_string("{YodaCookieFP}"));
   //  ns_add_cookie_val_ex("yoda-checkout-desktop", NULL, NULL, yodack);

//***************************************************************************************//
//**************************************************
//ns_add_cookie_val_ex("SVCVER", NULL, NULL, "latest");
//**********************************************

    // Change Url
    
    ns_start_transaction("COM_ViewShoppingBag"); 
    ns_web_url ("DT_API_SB_cart",
        "URL=https://www.jcpenney.com/cart",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-cart/css/styles.css?v=20170612020338", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;testpool;LPVID;LPSID-58507821;_ga;_gid;_gat;LPCKEY-58507821;c17;v53;s_ptc;s_sq;s_cc;_uetsid;CavSF;CavNVC;_4c_;yoda-checkout", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/google-play.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;testpool;LPVID;LPSID-58507821;_ga;_gid;_gat;LPCKEY-58507821;c17;v53;s_ptc;s_sq;s_cc;_uetsid;CavSF;CavNVC;_4c_;yoda-checkout", END_INLINE,
            "URL=https://m.jcpenney.com/static-checkout/images/pl-credit-card.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;testpool;LPVID;LPSID-58507821;_ga;_gid;_gat;LPCKEY-58507821;c17;v53;s_ptc;s_sq;s_cc;_uetsid;CavSF;CavNVC;_4c_;yoda-checkout", END_INLINE,
            "URL=https://m.jcpenney.com/static-cart/scripts/vendor.js?v=20170612020338", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;testpool;LPVID;LPSID-58507821;_ga;_gid;_gat;LPCKEY-58507821;c17;v53;s_ptc;s_sq;s_cc;_uetsid;CavSF;CavNVC;_4c_;yoda-checkout", END_INLINE,
            "URL=https://m.jcpenney.com/static-cart/scripts/app.js?v=20170612020338", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;testpool;LPVID;LPSID-58507821;_ga;_gid;_gat;LPCKEY-58507821;c17;v53;s_ptc;s_sq;s_cc;_uetsid;CavSF;CavNVC;_4c_;yoda-checkout", END_INLINE,
            "URL=https://fonts.gstatic.com/s/montserrat/v10/zhcz-_WihjSQC0oHJ9TCYL3hpw3pgy2gAi-Ip7WPMi0.woff", "HEADER=Origin:https://m.jcpenney.com", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://fonts.gstatic.com/s/opensans/v13/k3k702ZOKiLJc3WVjuplzKRDOzjiPcYnFooOUGCOsRk.woff", "HEADER=Origin:https://m.jcpenney.com", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://fonts.gstatic.com/s/opensans/v13/cJZKeOuBrn4kERxqtaUH3bO3LdcAZYWl9Si6vvxL-qU.woff", "HEADER=Origin:https://m.jcpenney.com", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://fonts.gstatic.com/s/montserrat/v10/IQHow_FEYlDC4Gzy_m8fcnbFhgvWbfSbdVg11QabG8w.woff", "HEADER=Origin:https://m.jcpenney.com", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://code.jquery.com/jquery-3.1.1.slim.min.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/Bootstrap.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.jcpenney.com/v4/categories/root?expand=true&fields=groups.categories.id,groups.categories.name,groups.categories.href,groups.categories.links,groups.categories.image,groups.categories.leaf", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;testpool;LPVID;LPSID-58507821;_ga;_gid;_gat;LPCKEY-58507821;c17;v53;s_ptc;s_sq;s_cc;_uetsid;CavSF;CavNVC;_4c_;yoda-checkout", END_INLINE
    );
	//ns_end_transaction("COM__ViewShoppingBag",NS_AUTO_STATUS);
	
	if((!strcmp(ns_eval_string("{ItemCountSP1}"),"1")) || (!strcmp(ns_eval_string("{ItemCountSP2}"),"1"))){
    ns_end_transaction_as("COM_ViewShoppingBag", NS_AUTO_STATUS, "COM_ViewShoppingBag_With1Item");}
    else if((!strcmp(ns_eval_string("{ItemCountSP1}"),"2")) || (!strcmp(ns_eval_string("{ItemCountSP2}"),"2"))){
    ns_end_transaction_as("COM_ViewShoppingBag", NS_AUTO_STATUS, "COM_ViewShoppingBag_With2Item");}
    else if((!strcmp(ns_eval_string("{ItemCountSP1}"),"3")) || (!strcmp(ns_eval_string("{ItemCountSP2}"),"3"))){
    ns_end_transaction_as("COM_ViewShoppingBag", NS_AUTO_STATUS, "COM_ViewShoppingBag_With3Item");}
    else if((!strcmp(ns_eval_string("{ItemCountSP1}"),"4")) || (!strcmp(ns_eval_string("{ItemCountSP2}"),"4"))){
    ns_end_transaction_as("COM_ViewShoppingBag", NS_AUTO_STATUS, "COM_ViewShoppingBag_With4Item");}
    else if((!strcmp(ns_eval_string("{ItemCountSP1}"),"5")) || (!strcmp(ns_eval_string("{ItemCountSP2}"),"5"))){
    ns_end_transaction_as("COM_ViewShoppingBag", NS_AUTO_STATUS, "COM_ViewShoppingBag_With5Item");}
    else if((!strcmp(ns_eval_string("{ItemCountSP1}"),"6")) || (!strcmp(ns_eval_string("{ItemCountSP2}"),"6"))){
    ns_end_transaction_as("COM_ViewShoppingBag", NS_AUTO_STATUS, "COM_ViewShoppingBag_With6Item");}
    else if((!strcmp(ns_eval_string("{ItemCountSP1}"),"7")) || (!strcmp(ns_eval_string("{ItemCountSP2}"),"7"))){
    ns_end_transaction_as("COM_ViewShoppingBag", NS_AUTO_STATUS, "COM_ViewShoppingBag_With7Item");}
    else if((!strcmp(ns_eval_string("{ItemCountSP1}"),"8")) || (!strcmp(ns_eval_string("{ItemCountSP2}"),"8"))){
    ns_end_transaction_as("COM_ViewShoppingBag", NS_AUTO_STATUS, "COM_ViewShoppingBag_With8Item");}
    else if((!strcmp(ns_eval_string("{ItemCountSP1}"),"9")) || (!strcmp(ns_eval_string("{ItemCountSP2}"),"9"))){
    ns_end_transaction_as("COM_ViewShoppingBag", NS_AUTO_STATUS, "COM_ViewShoppingBag_With9Item");}
    else {
    ns_end_transaction_as("COM_ViewShoppingBag", NS_AUTO_STATUS, "COM_ViewShoppingBag_WithNOItem");}

   if((strcmp(ns_eval_string("{CheckCartRenderingSP}"),"Subtotal"))){
    ns_start_transaction("COM_Cart_CSR");
    ns_end_transaction("COM_Cart_CSR",NS_AUTO_STATUS);
    }
    else {
    ns_start_transaction("COM_Cart_SSR");
    ns_end_transaction("COM_Cart_SSR",NS_AUTO_STATUS);
    goto SkipDraftOrderOnCart;
    }

    ns_start_transaction("DT_API_SB_draftorder_OPTIONS");
    ns_web_url("DT_API_SB_draftorder",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/xyKtxs12g9KR9GSDBYiv/draft-order?expand=status&storeId=null"
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://fonts.gstatic.com/s/opensans/v13/xjAJXh38I15wypJXxuGMBrrIa-7acMAeDBVuclsi6Gc.woff", "HEADER=Origin:https://m.jcpenney.com", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/serverComponent.php?r=9155280.399190342&ClientID=730&PageID=https%3A%2F%2Fm.jcpenney.com%2Fcart", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/perf.rnc?cid=730&ns=1497253987482&ce=0&cs=0&dc=0&dclee=3456&dcles=3456&di=1170&dl=684&dle=0&dls=0&fs=0&lee=0&les=0&rede=0&reds=0&reqs=5&resps=647&respe=660&scs=0&ues=661&uee=663", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/a75e134d692e763a59558a70b188ec7e.js?conditionId0=324309", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/022c5310fe895e0a983435ad46ac3549.js?conditionId0=335310", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/e19986a275419c95137dbe43c6a73580.js?conditionId0=454795", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/917c49a2004d2d8ef510e0d6f92ed48d.js?conditionId0=346183", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/c8a37603e371f7c6a678f43ac28e09f8.js?conditionId0=422808", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/e60abddfb7dc3d6a7615f76097f57521.js?conditionId0=375492&conditionId1=335514", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://netvision.cavisson.com/nv/JCPenney/cav_nv.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://lptag.liveperson.net/tag/tag.js?site=58507821", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://lptag.liveperson.net/lptag/api/account/58507821/configuration/applications/taglets/.jsonp?df=0&b=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/8.11.0.3-release_2848/le_secure_storage/storage.secure.min.html?loc=https%3A%2F%2Fm.jcpenney.com&site=58507821&asmr=15&env=prod", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb38037x32407&t=sp&ts=1497253991567&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1&rvt=1497253974531&u=https%3A%2F%2Fm.jcpenney.com%2Fcart&df=0&os=0", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE,
            "URL=https://accdn.lpsnmedia.net/api/account/58507821/configuration/le-campaigns/zones?fields=id&fields=zoneValue&cb=lpZonesStaticCB", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://netvision.cavisson.com/nv/JCPenney/Mobile/config.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75191x44809&t=pl&ts=1497253991572&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE,
            "URL=https://www.google-analytics.com/analytics.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://bat.bing.com/bat.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=MUID;MR;MUIDB;DPCluster;Yoda-checkout", END_INLINE,
            "URL=https://gateway.foresee.com/sites/jcpenney/production/gateway.min.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://d2e0sxz09bo7k2.cloudfront.net/attribution.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://uscollector.tealeaf.ibmcloud.com/collector/collectorPost", "METHOD=OPTIONS", "HEADER=Origin:https://m.jcpenney.com", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:x-requested-with, x-tealeaf-endpointcheck", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.google-analytics.com/collect?v=1&_v=j55&a=1548582281&t=pageview&_s=1&dl=https%3A%2F%2Fm.jcpenney.com%2Fcart&ul=en-us&de=UTF-8&sd=0-bit&sr=0x0&vp=1349x590&je=0&_u=QACAAAABI~&jid=&gjid=&cid=1170084694.1497253895&tid=UA-43509801-1&_gid=725511294.1497253895&cd13=Account%3A%20Not%20Logged%20In&z=840693891", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=4002289&Ver=2&mid=d55c49aa-c063-cc3b-4bd3-feb57fe9857b&evt=pageLoad&sid=65210d2e-0&lt=4873&pi=-1292315712&lg=en-us&p=https%3A%2F%2Fm.jcpenney.com%2Fcart&r=&rn=737970", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=MUID;MR;MUIDB;DPCluster;Yoda-checkout", END_INLINE
    );
    ns_end_transaction("DT_API_SB_draftorder_OPTIONS",NS_AUTO_STATUS);
    
    
    ns_start_transaction("DT_API_SB_draftorder_GET");
    ns_web_url("DT_API_SB_draftorder2",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/xyKtxs12g9KR9GSDBYiv/draft-order?expand=status&storeId=null",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Client-Id: Basic amNwOnlvZGF3Ojc1NTU4NTk2",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;recentSearchData;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;NSPrevPercentage;NSOrigin;mbox;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;testpool;_gat;_4c_;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;Yoda-checkout",
        INLINE_URLS,
            "URL=https://a.wishabi.com/track.gif?aid=attrib&goal_id=2&goal_value=1&merchant_id=2207", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=gid;DPCluster;Yoda-checkout", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.2-v.2/fs.feedback.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.2-v.2/fs.survey.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.2-v.2/fs.utils.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.2-v.2/fs.trigger.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://netvision.cavisson.com/test_rum?s=000466946680227369025&p=0&op=timing&pi=3&pid=21&d=1|0|-1|5|660|-1|-1|-1|647|13|2|4113|0|76|4797|3456|21|3456|0|642||https%3A%2F%2Fm.jcpenney.com%2Fcart|m.jcpenney.com|DPCluster%3DL1%3B%20Yoda-checkout%3Dtrue%3B%20Yoda-SID%3D85ab5528-fe97-433c-97ac-b4af6cc46aed%3B%20BNSOrigin%3DA%3B%20BNSPrevPercentage%3D100%3B%20ssl%3D0%3B%20NotValidCookie%3D1%3B%20marketing%3Ddirect%3B%20TLTSID%3DA3PBABWMWNELVSKE7DFUZE3XP03SMZ5C%3B%20cmTPSet%3DY%3B%20AMCVS_CEEB350F5746CDE97F000101%2540AdobeOrg%3D1%3B%20AMCV_CEEB350F5746CDE97F000101%2540AdobeOrg%3D-1176276602%25PIPE%25MCMID%25PIPE%2545529909927814030712367151988437404809%25PIPE%25MCAAMLH-1497858694%25PIPE%259%25PIPE%25MCAAMB-1497858694%25PIPE%25cIBAx_aQzFEHcPoEv0GwcQ%25PIPE%25MCOPTOUT-1497261094s%25PIPE%25NONE%25PIPE%25MCAID%25PIPE%25NONE%3B%20jcp.ab.test%3D%3B%20clientTestPool1%3Drwd%3B%20recentSearchData%3D%255B%2522socks%2522%255D%3B%20c13%3Dsocks%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20pn%3D6%3B%20NSPrevPercentage%3D100%3B%20NSOrigin%3DA%3B%20mbox%3Dcheck%23true%231497254028%25PIPE%25session%231497253885239-341789%231497255828%25PIPE%25PC%231497253885239-341789.28_57%231498463568%3B%20fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef%3D%22Hf%2BQ0jMcH%2B6bDFtjGnkCLkwZeuy9B7SAtVNXIUhcd1g%3D%22%3B%20DPSecureCookie%3D0cadf399818c193c268b8375326a56c4%3B%20RES_TRACKINGID%3D741967094132780%3B%20ResonanceSegment%3D1%3B|0|0|-1|-1|-1|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%2010.0%3B%20WOW64)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F56.0.2924.87%20SAFARI%2F537.36|en-us|%5Bobject%20PluginArray%5D|Mozilla|0|PC|56.0|10|50000|1|0|0|%7B-1%7D&lts=108719577&d2=-1|-1|-1|2|100", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.2-v.2/fs.frame.html?d=m.jcpenney.com&_cv_=19.3.2-v.2&_vt_=btws83m&uid=1170084694.1497253895", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.2-v.2/fs.gateway.js", "HEADER=Origin:https://gateway.foresee.com", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.2-v.2/fs.frame.js?v=btws83m", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://gateway.foresee.com/code/19.3.2-v.2/fs.utils.js?v=btws83m", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("DT_API_SB_draftorder_GET",NS_AUTO_STATUS);
    SkipDraftOrderOnCart:
        
//    ns_start_transaction("DT_API_SB_content_GET");
//     ns_web_url("DT_API_SB_online",
//        "URL=https://www.jcpenney.com/v2/content/pg40071600007/online/S1",
//        //"URL=https://www.jcpenney.com/v2/content/pg40071600007/online/S1,
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//        INLINE_URLS,
//            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
//    ); 
//    ns_end_transaction("DT_API_SB_content_GET",NS_AUTO_STATUS);
 
    ns_start_transaction("DT_API_SB_bestcoupons_OPTIONS");
    ns_web_url("DT_API_SB_bestcoupons1",
        "URL=https://order-api.jcpenney.com/order-api/v2/best-coupon?expand=pricing",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://code.jquery.com/jquery-3.1.1.slim.min.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://edge1.certona.net/cd/c50f7c7c/jcpenney.com/scripts/resonance.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.jcpenney.com/static-cart/images/icon-red-copy.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;_gat;c17;v53;s_ptc;s_sq;s_cc;_4c_;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;CavNVC;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE,
            "URL=https://m.jcpenney.com/static-cart/images/lock-white.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;_gat;c17;v53;s_ptc;s_sq;s_cc;_4c_;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;CavNVC;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE,
            "URL=https://m.jcpenney.com/static-cart/images/pay-pal-logo.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;_gat;c17;v53;s_ptc;s_sq;s_cc;_4c_;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;CavNVC;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE
    );
    ns_end_transaction("DT_API_SB_bestcoupons_OPTIONS",NS_AUTO_STATUS);
          
    ns_start_transaction("DT_API_SB_bestcoupons_GET");
    ns_web_url("DT_API_SB_bestcoupons",
        "URL=https://order-api.jcpenney.com/order-api/v2/best-coupon?expand=pricing",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://code.jquery.com/jquery-3.1.1.slim.min.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://edge1.certona.net/cd/c50f7c7c/jcpenney.com/scripts/resonance.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.jcpenney.com/static-cart/images/icon-red-copy.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;_gat;c17;v53;s_ptc;s_sq;s_cc;_4c_;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;CavNVC;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE,
            "URL=https://m.jcpenney.com/static-cart/images/lock-white.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;_gat;c17;v53;s_ptc;s_sq;s_cc;_4c_;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;CavNVC;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE,
            "URL=https://m.jcpenney.com/static-cart/images/pay-pal-logo.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;_gat;c17;v53;s_ptc;s_sq;s_cc;_4c_;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;CavNVC;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE
    );
    ns_end_transaction("DT_API_SB_bestcoupons_GET",NS_AUTO_STATUS);

    ns_start_transaction("DT_API_SB_SharedComponent_OPTIONS");
    ns_web_url("DT_API_SB_SharedComponent1",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/s1",
        "METHOD=OPTIONS",
      //  "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-cart/images/pay-pal-logo.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;_gat;c17;v53;s_ptc;s_sq;s_cc;_4c_;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;CavNVC;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE
    );
    ns_end_transaction("DT_API_SB_SharedComponent_OPTIONS",NS_AUTO_STATUS);

    ns_start_transaction("DT_API_SB_SharedComponent_GET");
    ns_web_url("DT_API_SB_SharedComponent",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/s1",
       // "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-cart/images/pay-pal-logo.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;_gat;c17;v53;s_ptc;s_sq;s_cc;_4c_;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;CavNVC;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE
    );
    ns_end_transaction("DT_API_SB_SharedComponent_GET",NS_AUTO_STATUS);
    
//    ns_start_transaction("DT_SB_ProductSummaries_GET");
//    ns_web_url("API_SB_root",
//        "URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-summaries-aggregator?ppId={RootPPIDFP}",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//        INLINE_URLS,
//            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
//    );
//    ns_end_transaction("DT_SB_ProductSummaries_GET",NS_AUTO_STATUS);    
    ns_page_think_time(0);
  
}
