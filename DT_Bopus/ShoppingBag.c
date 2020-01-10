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
//	 char yodack[64 + 1]="";
//     snprintf(yodack,64,"%s",ns_eval_string("{YodaCookieFP}"));
//     ns_add_cookie_val_ex("yoda-checkout-desktop", NULL, NULL, yodack);

//**************************************************
//ns_add_cookie_val_ex("SVCVER", NULL, NULL, "latest");
//**********************************************

     ns_start_transaction("COM_BOPUS_ViewShoppingBag"); 
     ns_web_url ("DT_API_SB_cart",
        "URL=https://www.jcpenney.com/cart",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/static-cart/css/styles.css?v=20170612020338", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;testpool;LPVID;LPSID-58507821;_ga;_gid;_gat;LPCKEY-58507821;c17;v53;s_ptc;s_sq;s_cc;_uetsid;CavSF;CavNVC;_4c_;yoda-checkout", END_INLINE,
            "URL=https://www.jcpenney.com/static-checkout/images/google-play.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;testpool;LPVID;LPSID-58507821;_ga;_gid;_gat;LPCKEY-58507821;c17;v53;s_ptc;s_sq;s_cc;_uetsid;CavSF;CavNVC;_4c_;yoda-checkout", END_INLINE,
            "URL=https://www.jcpenney.com/static-checkout/images/pl-credit-card.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;testpool;LPVID;LPSID-58507821;_ga;_gid;_gat;LPCKEY-58507821;c17;v53;s_ptc;s_sq;s_cc;_uetsid;CavSF;CavNVC;_4c_;yoda-checkout", END_INLINE,
            "URL=https://www.jcpenney.com/static-cart/scripts/vendor.js?v=20170612020338", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;testpool;LPVID;LPSID-58507821;_ga;_gid;_gat;LPCKEY-58507821;c17;v53;s_ptc;s_sq;s_cc;_uetsid;CavSF;CavNVC;_4c_;yoda-checkout", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/Bootstrap.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/v4/categories/root?expand=true&fields=groups.categories.id,groups.categories.name,groups.categories.href,groups.categories.links,groups.categories.image,groups.categories.leaf", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;testpool;LPVID;LPSID-58507821;_ga;_gid;_gat;LPCKEY-58507821;c17;v53;s_ptc;s_sq;s_cc;_uetsid;CavSF;CavNVC;_4c_;yoda-checkout", END_INLINE
    );
    ns_end_transaction("COM_BOPUS_ViewShoppingBag",NS_AUTO_STATUS);

//    ns_start_transaction("DT_API_Bopus_SB_content_GET");
//     ns_web_url("API_SB_online",
//        "URL=https://www.jcpenney.com/v2/content/pg40071600007/online/S1",
//        //"URL=https://www.jcpenney.com/v2/content/pg40071600007/online/S1,
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//        INLINE_URLS,
//            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
//    ); 
//    ns_end_transaction("DT_API_Bopus_SB_content_GET",NS_AUTO_STATUS);
     
    ns_start_transaction("DT_API_Bopus_SB_bestcoupons_OPTIONS");
    ns_web_url("API_SB_bestcoupons1",
        "URL=https://order-api.jcpenney.com/order-api/v2/best-coupon?expand=pricing",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://code.jquery.com/jquery-3.1.1.slim.min.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/static-cart/images/pay-pal-logo.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;_gat;c17;v53;s_ptc;s_sq;s_cc;_4c_;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;CavNVC;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE
    );
    ns_end_transaction("DT_API_Bopus_SB_bestcoupons_OPTIONS",NS_AUTO_STATUS);
          
    ns_start_transaction("DT_API_Bopus_SB_bestcoupons_GET");
    ns_web_url("API_SB_bestcoupons",
        "URL=https://order-api.jcpenney.com/order-api/v2/best-coupon?expand=pricing",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://code.jquery.com/jquery-3.1.1.slim.min.js", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/static-cart/images/pay-pal-logo.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;_gat;c17;v53;s_ptc;s_sq;s_cc;_4c_;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;CavNVC;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE
    );
    ns_end_transaction("DT_API_Bopus_SB_bestcoupons_GET",NS_AUTO_STATUS);

    ns_start_transaction("DT_API_Bopus_SB_SharedComponent_OPTIONS");
    ns_web_url("DT_API_SB_SharedComponent1",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/s1",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-cart/images/pay-pal-logo.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;_gat;c17;v53;s_ptc;s_sq;s_cc;_4c_;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;CavNVC;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE
    );
    ns_end_transaction("DT_API_Bopus_SB_SharedComponent_OPTIONS",NS_AUTO_STATUS);

    ns_start_transaction("DT_API_Bopus_SB_SharedComponent_GET");
    ns_web_url("DT_API_SB_SharedComponent",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/s1",
      //  "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://m.jcpenney.com/static-cart/images/pay-pal-logo.svg", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=DPCluster;Yoda-checkout;Yoda-SID;BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;JSESSIONID;marketing;TLTSID;cmTPSet;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;jcp.ab.test;clientTestPool1;recentSearchData;c13;DPJSESSIONID;pn;NSPrevPercentage;NSOrigin;mbox;fp_token_7c6a6574-f011-4c9a-abdd-9894a102ccef;DPSecureCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavNV;_gat;c17;v53;s_ptc;s_sq;s_cc;_4c_;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;CavSF;CavNVC;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval", END_INLINE
    );
    ns_end_transaction("DT_API_Bopus_SB_SharedComponent_GET",NS_AUTO_STATUS);
  
//    ns_start_transaction("DT_BOPUS_SB_ProductSummaries_GET");
//    ns_web_url ("API_SB_filterContent",
//        "URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-summaries-aggregator?ppId={RRPricePPIDFP}",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//    );
//    ns_end_transaction("DT_BOPUS_SB_ProductSummaries_GET",NS_AUTO_STATUS);
    ns_page_think_time(0);

}
