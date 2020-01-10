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


//*********************************************  Promo Coupon *****************************************************************//
	
	 int ApplyPromoCode = ns_get_random_number_int(1,100);
    int DoApplyCheckOutPromo = ns_get_random_number_int(1,100);
    if (ApplyPromoCode <= 90){
        if(DoApplyCheckOutPromo <= 83){
             ns_set_int_val("CheckOutPromoDP", 1);


//    int applyCoupon = 0;
//    if (applyCoupon == 1){
	ns_start_transaction("MOB_SB_ApplyPromoCode");
    ns_start_transaction("MB_API_PC_draftorderdiscounts_OPTIONS");
    ns_web_url("API_PC_draftorderdiscounts1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/adjustment/discounts",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=DPCluster:{DPClusterId}",
		"HEADER=X-DPOrder:{DPOrderId}",
		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
    );

    ns_end_transaction("MB_API_PC_draftorderdiscounts_OPTIONS", NS_AUTO_STATUS);

    // Apply Coupons
    
     ns_start_transaction("MB_API_PC_draftorderdiscounts_POST");
    ns_web_url ("MB_API_PC_draftorderdiscounts",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/adjustment/discounts",
        "METHOD=POST",
         "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;recentSearchData;DPJSESSIONID;NSPrevPercentage;NSOrigin;mbox;DPSecureCookie;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;_4c_;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;Yoda-checkout",
        "PreSnapshot=webpage_1497254041300.png",
        "Snapshot=webpage_1497254052737.png",
        //"{"code":"{CouponCodeSP}","serialNumber":null}",
        BODY_BEGIN,
            "{"code":"{PromocodeFP}","serialNumber":null,"pageInfo":"cart"}",
        BODY_END
    );
    ns_end_transaction("MB_API_PC_draftorderdiscounts_POST", NS_AUTO_STATUS);
    
      
    ns_start_transaction("MB_API_PC_draftorder_OPTIONS");
    ns_web_url("MB_API_PC_draftorder1",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status&origin=cart",
        "METHOD=OPTIONS",
        "HEADER=Yoda-checkout:true",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
	    "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us"
    );
	 ns_end_transaction("MB_API_PC_draftorder_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_PC_draftorder_GET");
    ns_web_url("MB_API_PC_draftorder",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status&origin=cart",
       // "HEADER=Yoda-checkout:true",
         "HEADER=authorization:Bearer {AccessTokenSP}",
       // "HEADER=DPCluster:L1",
        "HEADER=X-Auto-Login:true",
//        "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;recentSearchData;DPJSESSIONID;NSPrevPercentage;NSOrigin;mbox;DPSecureCookie;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;_4c_;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPUserTracking;DPInstance;testpool;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV;Yoda-checkout",
        "PreSnapshot=webpage_1497254041300.png",
        "Snapshot=webpage_1497254052737.png",
    );
    ns_end_transaction("MB_API_PC_draftorder_GET", NS_AUTO_STATUS);
    
   	ns_start_transaction("MB_API_PC_draftorderdelivery_OPTIONS");
    ns_web_url("MB_API_PC_draftorderDelivery1",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery&origin=cart",
        "METHOD=OPTIONS",
		"HEADER=Access-Control-Request-Method:GET",
//		"HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=X-Auto-Login:true",
        "HEADER=Accept-Language:en-us"
    );
	ns_end_transaction("MB_API_PC_draftorderdelivery_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_PC_draftorderdelivery_GET");
    ns_web_url("MB_API_PC_draftorderDelivery",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery&origin=cart",
         "HEADER=authorization:Bearer {AccessTokenSP}",
//         "HEADER=DPCluster:{DPClusterId}",
//		"HEADER=X-DPOrder:{DPOrderId}",
//		"HEADER=DPInstance:{DPInstanceId}",
        "HEADER=X-Auto-Login:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;recentSearchData;DPJSESSIONID;NSPrevPercentage;NSOrigin;mbox;DPSecureCookie;_gat;yoda-checkout;LPCKEY-58507821;LPVID;LPSID-58507821;_ga;_gid;_uetsid;DPUserTracking;testpool;DPSessionTimeOutInterval;CavNV;_4c_;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;Yoda-checkout"
    );
    ns_end_transaction("MB_API_PC_draftorderdelivery_GET", NS_AUTO_STATUS);

    ns_end_transaction("MOB_SB_ApplyPromoCode", NS_AUTO_STATUS);
    ns_page_think_time(0);
   }
}
}
