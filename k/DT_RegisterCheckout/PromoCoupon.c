/*-----------------------------------------------------------------------------
    Name:PromoCoupon
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
void PromoCoupon()
{
    ns_set_int_val("CheckOutPromoDP", 1);
	ns_start_transaction("COM_SB_ApplyPromoCode");
    ns_start_transaction("DT_API_PC_draftorderdiscounts_OPTIONS");
    ns_web_url("DT_API_PC_draftorderdiscounts1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/adjustment/discounts",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );

    ns_end_transaction("DT_API_PC_draftorderdiscounts_OPTIONS", NS_AUTO_STATUS);

    ns_start_transaction("DT_API_PC_draftorderdiscounts_POST");
    ns_web_url ("DT_API_PC_draftorderdiscounts",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/adjustment/discounts",
        "METHOD=POST",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        //"{"code":"{PromoCodeFP}","serialNumber":null}",
        BODY_BEGIN,
            "{"code":"{PromoCodeFP}","serialNumber":null,"pageInfo":"cart"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order", "HEADER=Origin:https://m.jcpenney.com", "HEADER=Yoda-checkout:true", "HEADER=authorization:Bearer eyJhbGciOiJSUzI1NiJ9.eyJpc3MiOiJhcGkuamNwZW5uZXkuY29tIiwiaWF0IjoxNDk3MjQ5MjQxMjYwLCJhdWQiOiJqY3Blbm5leS5jb20iLCJzdWIiOiJmOUtYZmNFenR0U0Z2TnV0d1RsVCIsInV1aWQiOiIzM2ZjNzllNC0wZmFjLTQ1MmYtYWI1NS1lYzMxNTI3ZTQ5MmYiLCJhdXRob3JpdGllcyI6WyJST0xFX0FDQ09VTlRfVVNFUl9SRUFEIiwiUk9MRV9BQ0NPVU5UX1VTRVJfV1JJVEUiXSwic3RhdGUiOjAsImV4cCI6MTQ5NzI1NjQ0MX0.V2xGwTAk1lzM6YZS6_ONkYowyAoUMSeD-XLFdjaDsFVJv-VLjDoQE0V-oAsj5_Uqe56qbwAvXFEUtnws3MFkoD-ECuekQWGh_m00goP0UzTTRZylXDgC_Q8LymRBsWKFv0OMWgAeY6Dv0fwwKW8jjUof3um6C_Xgj60TZh7ZHzgUd7USfSOaoram9LY7M7QSH7JcyRuBAC51O1_GAJA8SUzyz_DfklHTPITP06YX2a2otM5UhZ0NybTVfihrbt_zQLyUiZWB_Go9Xqj4t6io3S00459loKsKfn_vwepMj63vgQ6B9yMAuX_Y_GL2xgH6SZ041NS19l9Pr4tG_HGyPQ", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=content-type:application/json;charset=utf-8", "HEADER=Accept-Language:en-us", "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;recentSearchData;DPJSESSIONID;NSPrevPercentage;NSOrigin;mbox;DPSecureCookie;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;_4c_;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;Yoda-checkout", END_INLINE,
            "URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order/adjustment/discounts", "HEADER=Origin:https://m.jcpenney.com", "HEADER=Yoda-checkout:true", "HEADER=authorization:Bearer eyJhbGciOiJSUzI1NiJ9.eyJpc3MiOiJhcGkuamNwZW5uZXkuY29tIiwiaWF0IjoxNDk3MjQ5MjQxMjYwLCJhdWQiOiJqY3Blbm5leS5jb20iLCJzdWIiOiJmOUtYZmNFenR0U0Z2TnV0d1RsVCIsInV1aWQiOiIzM2ZjNzllNC0wZmFjLTQ1MmYtYWI1NS1lYzMxNTI3ZTQ5MmYiLCJhdXRob3JpdGllcyI6WyJST0xFX0FDQ09VTlRfVVNFUl9SRUFEIiwiUk9MRV9BQ0NPVU5UX1VTRVJfV1JJVEUiXSwic3RhdGUiOjAsImV4cCI6MTQ5NzI1NjQ0MX0.V2xGwTAk1lzM6YZS6_ONkYowyAoUMSeD-XLFdjaDsFVJv-VLjDoQE0V-oAsj5_Uqe56qbwAvXFEUtnws3MFkoD-ECuekQWGh_m00goP0UzTTRZylXDgC_Q8LymRBsWKFv0OMWgAeY6Dv0fwwKW8jjUof3um6C_Xgj60TZh7ZHzgUd7USfSOaoram9LY7M7QSH7JcyRuBAC51O1_GAJA8SUzyz_DfklHTPITP06YX2a2otM5UhZ0NybTVfihrbt_zQLyUiZWB_Go9Xqj4t6io3S00459loKsKfn_vwepMj63vgQ6B9yMAuX_Y_GL2xgH6SZ041NS19l9Pr4tG_HGyPQ", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=content-type:application/json;charset=utf-8", "HEADER=Accept-Language:en-us", "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;recentSearchData;DPJSESSIONID;NSPrevPercentage;NSOrigin;mbox;DPSecureCookie;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;_4c_;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;Yoda-checkout", END_INLINE,
            "URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order", "HEADER=Origin:https://m.jcpenney.com", "HEADER=Yoda-checkout:true", "HEADER=authorization:Bearer eyJhbGciOiJSUzI1NiJ9.eyJpc3MiOiJhcGkuamNwZW5uZXkuY29tIiwiaWF0IjoxNDk3MjQ5MjQxMjYwLCJhdWQiOiJqY3Blbm5leS5jb20iLCJzdWIiOiJmOUtYZmNFenR0U0Z2TnV0d1RsVCIsInV1aWQiOiIzM2ZjNzllNC0wZmFjLTQ1MmYtYWI1NS1lYzMxNTI3ZTQ5MmYiLCJhdXRob3JpdGllcyI6WyJST0xFX0FDQ09VTlRfVVNFUl9SRUFEIiwiUk9MRV9BQ0NPVU5UX1VTRVJfV1JJVEUiXSwic3RhdGUiOjAsImV4cCI6MTQ5NzI1NjQ0MX0.V2xGwTAk1lzM6YZS6_ONkYowyAoUMSeD-XLFdjaDsFVJv-VLjDoQE0V-oAsj5_Uqe56qbwAvXFEUtnws3MFkoD-ECuekQWGh_m00goP0UzTTRZylXDgC_Q8LymRBsWKFv0OMWgAeY6Dv0fwwKW8jjUof3um6C_Xgj60TZh7ZHzgUd7USfSOaoram9LY7M7QSH7JcyRuBAC51O1_GAJA8SUzyz_DfklHTPITP06YX2a2otM5UhZ0NybTVfihrbt_zQLyUiZWB_Go9Xqj4t6io3S00459loKsKfn_vwepMj63vgQ6B9yMAuX_Y_GL2xgH6SZ041NS19l9Pr4tG_HGyPQ", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=content-type:application/json;charset=utf-8", "HEADER=Accept-Language:en-us", "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;recentSearchData;DPJSESSIONID;NSPrevPercentage;NSOrigin;mbox;DPSecureCookie;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;_4c_;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;Yoda-checkout", END_INLINE,
            "URL=https://order-api.jcpenney.com/order-api/v1/accounts/f9KXfcEzttSFvNutwTlT/draft-order", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb32692x60855&t=ip&ts=1497254043605&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE,
            "URL=https://uscollector.tealeaf.ibmcloud.com/collector/collectorPost", "METHOD=OPTIONS", "HEADER=Origin:https://m.jcpenney.com", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:content-encoding, content-type, x-requested-with, x-tealeaf, x-tealeaf-messagetypes, x-tealeaf-page-url, x-tealeaf-saas-appkey, x-tealeaf-saas-tltsid, x-tealeaf-syncxhr, x-tealeaftype", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("DT_API_PC_draftorderdiscounts_POST", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_PC_draftorder_OPTIONS"),
    ns_web_url("DT_API_PC_draftorder1",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status&origin=cart",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us"
    );
    ns_end_transaction("DT_API_PC_draftorder_OPTIONS",NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_PC_draftorder_GET");
    ns_web_url("DT_API_PC_draftorder",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status&origin=cart",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75647x1770&t=ip&ts=1497254033360&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE,
            "URL=https://uscollector.tealeaf.ibmcloud.com/collector/collectorPost", "METHOD=OPTIONS", "HEADER=Origin:https://m.jcpenney.com", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:content-encoding, content-type, x-requested-with, x-tealeaf, x-tealeaf-messagetypes, x-tealeaf-page-url, x-tealeaf-saas-appkey, x-tealeaf-saas-tltsid, x-tealeaf-syncxhr, x-tealeaftype", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("DT_API_PC_draftorder_GET", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_PC_draftorderstoreid_OPTIONS");
    ns_web_url("API_PC_draftorderDelivery1",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery&storeId=null",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery&origin=cart",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us"
    );
    ns_end_transaction("DT_API_PC_draftorderstoreid_OPTIONS", NS_AUTO_STATUS);  
    
    ns_start_transaction("DT_API_PC_draftorderstoreid_GET");
    ns_web_url("DT_API_PC_draftorderDelivery",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery&storeId=null",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery&origin=cart",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
    );

    ns_end_transaction("DT_API_PC_draftorderstoreid_GET", NS_AUTO_STATUS);   



    ns_end_transaction("COM_SB_ApplyPromoCode", NS_AUTO_STATUS);
    ns_page_think_time(0);
   }

