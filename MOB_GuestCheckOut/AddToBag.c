/*-----------------------------------------------------------------------------
    Name:AddToBag
    Recorded By: anjali
    Date of recording: 06/28/2016 12:30:29
    Flow details:
    Build details: 4.1.4 (build# 43)
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
void AddToBag()
{		
    int IfAddCookie = 0;
    IfAddCookie = ns_get_int_val("AddCookie");
    ns_advance_param("PPIdType1");
    ns_add_cookie_val_ex("DPCPT", NULL, NULL, "CP1Y|CP2Y");
    if(IfAddCookie >= 1){
    }
    else
    {
    	//ns_add_cookie_val_ex("Aurora", NULL, NULL, "microservice");
    	
    ns_start_transaction("MB_API_AB_OAuthGuest_OPTIONS");
    ns_web_url ("MB_API_AB_OAuthGuest1",
        //"URL=https://account-api.jcpenney.com/v5/accounts",
        "URL=https://account-api.jcpenney.com/v5/oauth2/guest",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Headers:content-type,x-guest-user",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPSecureCookie;_ga;_gid;_uetsid;LPVID;LPSID-58507821;LPCKEY-58507821;DPUserTracking;testpool;DPSessionTimeOutInterval;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;_4c_;Yoda-checkout",
       "PreSnapshot=webpage_1497249841977.png",
        "Snapshot=webpage_1497249844460.png"
    );
    ns_end_transaction("MB_API_AB_OAuthGuest_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_AB_OAuthGuest_POST");
    ns_web_url ("MB_API_AB_OAuthGuest",
        //"URL=https://account-api.jcpenney.com/v5/accounts",
        "URL=https://account-api.jcpenney.com/v5/oauth2/guest",
        "METHOD=POST",
        "HEADER=x-guest-user:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPSecureCookie;_ga;_gid;_uetsid;LPVID;LPSID-58507821;LPCKEY-58507821;DPUserTracking;testpool;DPSessionTimeOutInterval;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;_4c_;Yoda-checkout",
        "REDIRECT=YES",
        "LOCATION=https://services.prod.dp-prod.jcpcloud2.net/v1/accounts/4XEQFOmO7J2lbHojkYmp",
        "PreSnapshot=webpage_1497249841977.png",
        "Snapshot=webpage_1497249844460.png"
    );
    ns_end_transaction("MB_API_AB_OAuthGuest_POST", NS_AUTO_STATUS);
    }    
    char RefreshTokenbuff1[512 + 1]="";
          snprintf(RefreshTokenbuff1,512,"%s",ns_eval_string("{RefreshTokenSP}"));
          ns_add_cookie_val_ex("Refresh_Token", NULL, NULL, RefreshTokenbuff1);
          
          
	 char AccountIdbuff[64 + 1]="";
          snprintf(AccountIdbuff,64,"%s",ns_eval_string("{CustomerIdSP}"));
          ns_add_cookie_val_ex("ACCOUNT_ID", NULL, NULL, AccountIdbuff);
          
      char AccessTokenbuff[1024 + 1]="";
          snprintf(AccessTokenbuff,1024,"%s",ns_eval_string("{AccessTokenSP}"));
          ns_add_cookie_val_ex("Access_Token", NULL, NULL, AccessTokenbuff);
      
    ns_start_transaction("MOB_AddToBag"); 
     ns_start_transaction("MB_API_AB_bagitems_OPTIONS");
    ns_web_url ("MB_API_AB_bagitems1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/bag/items",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Headers:authorization,content-type",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=BNSOrigin;BNSPrevPercentage;ssl;NotValidCookie;marketing;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;clientTestPool1;DPJSESSIONID;recentSearchData;NSPrevPercentage;NSOrigin;mbox;yoda-checkout;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPSecureCookie;_ga;_gid;_uetsid;LPVID;LPSID-58507821;LPCKEY-58507821;DPUserTracking;testpool;DPSessionTimeOutInterval;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;CavNV;_4c_;Yoda-checkout",
        "PreSnapshot=webpage_1497249841977.png",
        "Snapshot=webpage_1497249844460.png"
    );
    ns_end_transaction("MB_API_AB_bagitems_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_AB_bagitems_POST");
    ns_web_url ("MB_API_AB_bagitems",
        // "URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order/bag/items/",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/bag/items",
        "METHOD=POST",
        "HEADER=Authorization:Bearer {AccessTokenSP}",
        // "HEADER=authorization:Bearer eyJhbGciOiJSUzI1NiJ9.eyJpc3MiOiJhcGkuamNwZW5uZXkuY29tIiwiaWF0IjoxNDk5ODUwNjU3NTI2LCJhdWQiOiJqY3Blbm5leS5jb20iLCJzdWIiOiJyUy1FSWJPUFBKSDdYdXgxN2d1NSIsInV1aWQiOiIyMzFlMjMzOC1lYTg2LTRmNGMtOWMyMC1hNGIxYjc5MzBhNDYiLCJhdXRob3JpdGllcyI6WyJST0xFX0FDQ09VTlRfVVNFUl9SRUFEIl0sInN0YXRlIjoxLCJjbGllbnQtaXAiOiIxODIuNzEuMTE5LjIxMiIsImV4cCI6MTQ5OTg1Nzg1N30.e69RlrRNTI5BilTw4Btrhzxf11en56lLaeGzCBCEmUrTqmzCB_HNfpjctTjFIYobq_xJUSo0t-GAoKtN0aQPbOZcTwsVFW_605qSDgi7BHO1ZMOcYcr-yl0N4J29IA4OUwJw3PhsNfUTTri33zchsaQi0Q9PMEiIzzLuCxM5sjAoE6GQ4dac3olC9Qn7ZJbUl1FqmzrCFnAk8bdWKwZzmvKN3AIqK8XtWGMZ1AJNSV8cpd122Hw-meGmLbxXPe_0YwotpPWZAs2n9J5pgNO3TeLniPRV9ObmY543riyiZmXLm-6MK5UMxTXJoleuUI_WHELnDF-814gLzgX2rGPr6g",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "HEADER=x-cart-interstitial:true",
        "COOKIE=clientTestPool1;BNSPrevPercentage;BNSOrigin;mbox;DPJSESSIONID;DPUserTracking;DPInstance;DPLastAccessedTime;DPIdentifier;DPSessionTimeOutInterval;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;ssl;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;NotValidCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;LPVID;LPSID-58507821;mp_jcpenney_mixpanel;_ga;_gid;_uetsid;_4c_;DPCluster;testpool",
        "REDIRECT=YES",
        "LOCATION=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order/bag/items/ci76702000164",
        "PreSnapshot=webpage_1499850658363.png",
        "Snapshot=webpage_1499850660628.png",
        // "{"data":[{"skuId":"52530000265","quantity":1,"ppId":"pp5007500353","deliveryOption":{"type":"HOME","selected":true}}]}",
         //"{"data":[{"skuId":"{SkuIdType1}","quantity":{BogoQuantityFP},"ppId":"{PPIdType1}","deliveryOption":{"type":"HOME","selected":true}}]}",
         // "{"sdpuStoreInfo":{},"deliveryOption":{"shipToHomeOrStore":{"label":"Ship to Home or Store","deliveryMessage":"est. delivery: jul 30th - aug 1st","availabilityMessage":"","isshipToStoreDisabled":false,"isRadioButtonDisabled":false,"disabled":"","isChecked":true,"surcharges":"","isShipToHomeOrStoreAvailable":true,"maxQuantity":"","isQuantityAvailable":true,"maxQuantityMsgDisplay":false,"quantityReachMaxPosition":false,"updatedAsOf":"","rawDeliveryDateStart":"Tue Jul 30 00:00:00 CDT 2019"},"sameDayPickUp":{"availabilityMessage":"","storeAvailabilityMessage":"Out Of Stock","isSameDayPickupDisabled":true,"isRadioButtonDisabled":false,"storeMessage":"Check store availability","disabled":"disabled","isChecked":false,"channelOfferingLabel":"","isVisitStoreToPurchase":false,"storeInfoVisitToPurchase":"","updatedAsOf":""}},"isChangeStoreAtc":false,"data":[{"skuId":"50011542824","ppId":"ppr5007627782","quantity":1,"deliveryOption":{"type":"HOME","selected":true,"label":"Ship to Home or Store"},"childItems":[]}]}",
        BODY_BEGIN,
            "{"sdpuStoreInfo":{},"deliveryOption":{"shipToHomeOrStore":{"label":"Ship to Home or Store","deliveryMessage":"est. delivery: jul 30th - aug 1st","availabilityMessage":"","isshipToStoreDisabled":false,"isRadioButtonDisabled":false,"disabled":"","isChecked":true,"surcharges":"","isShipToHomeOrStoreAvailable":true,"maxQuantity":"","isQuantityAvailable":true,"maxQuantityMsgDisplay":false,"quantityReachMaxPosition":false,"updatedAsOf":"","rawDeliveryDateStart":"Tue Jul 30 00:00:00 CDT 2019"},"sameDayPickUp":{"availabilityMessage":"","storeAvailabilityMessage":"Out Of Stock","isSameDayPickupDisabled":true,"isRadioButtonDisabled":false,"storeMessage":"Check store availability","disabled":"disabled","isChecked":false,"channelOfferingLabel":"","isVisitStoreToPurchase":false,"storeInfoVisitToPurchase":"","updatedAsOf":""}},"isChangeStoreAtc":false,"data":[{"skuId":"{SkuIdType1}","ppId":"{PPIdType1}","quantity":{BogoQuantityFP},"deliveryOption":{"type":"HOME","selected":true,"label":"Ship to Home or Store"},"childItems":[]}]}",    
        BODY_END,
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=4&ci=90024642&vn2=e4.0&st=1467096873569&vn1=4.16.9&ec=utf-8&pr=5203400&pm=Product%3ALevis%C2%AE%20501%C2%AE%20Original%20Fit%20Jeans&cg=Mobile%7CSearch%20Results&ha1=e7f9ad67ccb9d9fbfe2614bee10d8632f703217a&at=5&pc=N&rnd=1467099453636&s_a12=002&s_a13=22&s_a14=520&s_a16=ORIGINAL&s_a21=jeans&s_a24=Levi&s_a25=pp5003860119&s_a26=0133&s_a27=0133%7CIS&ul=http%3A%2F%2Fm.jcpenney.com%2Flevis-501-original-fit-jeans-%2Fprod.jump%3FppId%3Dpp5003860119%26Ntt%3Djeans", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPJSESSIONID;DPUserTracking;recentSearchData;clientTestPool1;90024642_reset;DPSessionTimeOutInterval;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://media.richrelevance.com/rrserver/js/1.0/p13n.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("MB_API_AB_bagitems_POST",NS_AUTO_STATUS);
    
        ns_start_transaction("MB_API_AB_draftorder_OPTIONS");
    	ns_web_url("MB_API_AB_draftorder1",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?origin=pdp",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Headers:authorization,content-type",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=clientTestPool1;BNSPrevPercentage;BNSOrigin;mbox;DPJSESSIONID;DP_USER_FAVCOUNT;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;ssl;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;NotValidCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;LPVID;LPSID-58507821;mp_jcpenney_mixpanel;_ga;_gid;_uetsid;_4c_;testpool;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DP_USER_NAME;DYN_USER_ID;DP_SFL_PPIDS;DPInstance;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV",
        "PreSnapshot=webpage_1499850660628.png",
        "Snapshot=webpage_1499850665088.png",
        INLINE_URLS,
            "URL=http://netvision.cavisson.com/test_rum?s=000337423317038277436&op=timing&pi=3&d=1|0|-1|-1|-1|500|-1|-1|-1|-1|-1|-1|-1|-1|958|958|186|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fv2%2Fcart%2Fitems|m.jcpenney.com|BNSOrigin%3DA%3B%20BNSPrevPercentage%3D100%3B%20mmcore.tst%3D0.006%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DktCrW3Y4zCGi7PMbqIVw9ViRPdnFlq0b%3B%20_ga%3DGA1.2.1044498744.1467096881%3B%20_gat%3D1%3B%20CavSID%3D000337423317038277436%3B%20DPUserTracking%3Dnull%3B%20recentSearchData%3D%255B%2522jeans%2522%255D%3B%20clientTestPool1%3Drwd%3B%20mmapi.store.p.0%3D%257B%2522mmparams.d%2522%253A%257B%257D%252C%2522mmparams.p%2522%253A%257B%2522mmid%2522%253A%25221498632869164%25PIPE%25%255C%2522-826645866%25PIPE%25AQAAAApgGkstig0AAA%253D%253D%255C%2522%2522%252C%2522pd%2522%253A%25221498632869177%25PIPE%25%255C%25222145647719%25PIPE%25AQAAAAoBQmAaSy2KDa%252FWrOMBAAh0igohn9NIDwAAAAh0igohn9NIAAAAAP%252F%252F%252F%252F%252F%252F%252F%252F%252F%252FAAZEaXJlY3QBig0BAAAAAAAAAAEAABU2AAD%252F%252F%252F%252F%252F%252F%252F%252F%252F%252FwEA62EAAADWFI24ig0AC2EAAAWKDYoN%252F%252F8BAAABAAAAAAE%252F6wAA%252BHMBAAAAAAABRQ%253D%253D%255C%2522%2522%252C%2522srv%2522%253A%25221498632869187%25PIPE%25%255C%2522lvsvwcgus01%255C%2522%2522%252C%2522uat%2522%253A%25221498632933406%25PIPE%25%257B%255C%2522TimeLastPurch%255C%2522%253A%255C%2522None%255C%2522%252C%255C%2522TimeLastVisit%255C%2522%253A%255C%25220-1%2520day%255C%2522%252C%255C%2522LoginStatus%255C%2522%253A%255C%2522NonAccount%255C%2522%257D%2522%257D%252C%2522mmengine%2522%253A%257B%257D%257D%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78562587&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://service.maxymiser.net/cg/v5us/?fv=dmn%3Djcpenney.com%3Bref%3D%3Burl%3Dhttp%253A%252F%252Fm.jcpenney.com%252Flevis-501-original-fit-jeans-%252Fprod.jump%253FppId%253Dpp5003860119%2526Ntt%253Djeans%3Bscrw%3D1366%3Bscrh%3D768%3Bclrd%3D24%3Bcok%3D1&lver=1.4&jsncl=mmRequestCallbacks%5B2%5D&ri=2&mmid=-826645866%7CAQAAAApgGkstig0AAA%3D%3D&pd=2145647719%7CAQAAAAoBQmAaSy2KDa%2FWrOMBAAh0igohn9NIDwAAAAh0igohn9NIAAAAAP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FAAZEaXJlY3QBig0BAAAAAAAAAAEAABU2AAD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEA62EAAADWFI24ig0AC2EAAAWKDYoN%2F%2F8BAAABAAAAAAE%2F6wAA%2BHMBAAAAAAABRQ%3D%3D&srv=lvsvwcgus01&uat=TimeLastPurch%3DNone%3BTimeLastVisit%3D0-1%2520day%3BLoginStatus%3DNonAccount&uv=AppliancePageViews%3D1%3BT142TimeToEngage%3D1%2C2-3%2520min&pageid=mmevents&jsver=5.13.1", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://service.maxymiser.net/cg/v5us/?fv=dmn%3Djcpenney.com%3Bref%3D%3Burl%3Dhttp%253A%252F%252Fm.jcpenney.com%252Flevis-501-original-fit-jeans-%252Fprod.jump%253FppId%253Dpp5003860119%2526Ntt%253Djeans%3Bscrw%3D1366%3Bscrh%3D768%3Bclrd%3D24%3Bcok%3D1&lver=1.4&jsncl=mmRequestCallbacks%5B3%5D&ri=3&mmid=-826645866%7CAQAAAApgGkstig0AAA%3D%3D&pd=2145647719%7CAQAAAAoBQmAaSy2KDa%2FWrOMBAAh0igohn9NIDwAAAAh0igohn9NIAAAAAP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FAAZEaXJlY3QBig0BAAAAAAAAAAEAABU2AAD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEA62EAAADWFI24ig0AC2EAAAWKDYoN%2F%2F8BAAABAAAAAAE%2F6wAA%2BHMBAAAAAAABRQ%3D%3D&srv=lvsvwcgus01&uat=TimeLastPurch%3DNone%3BTimeLastVisit%3D0-1%2520day%3BLoginStatus%3DNonAccount&pageid=mmevents&jsver=5.13.1", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("MB_API_AB_draftorder_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_AB_draftorder_GET");
    ns_web_url("MB_API_AB_draftorder",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?origin=pdp",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        //"HEADER=authorization:Bearer eyJhbGciOiJSUzI1NiJ9.eyJpc3MiOiJhcGkuamNwZW5uZXkuY29tIiwiaWF0IjoxNDk5ODUwNjU3NTI2LCJhdWQiOiJqY3Blbm5leS5jb20iLCJzdWIiOiJyUy1FSWJPUFBKSDdYdXgxN2d1NSIsInV1aWQiOiIyMzFlMjMzOC1lYTg2LTRmNGMtOWMyMC1hNGIxYjc5MzBhNDYiLCJhdXRob3JpdGllcyI6WyJST0xFX0FDQ09VTlRfVVNFUl9SRUFEIl0sInN0YXRlIjoxLCJjbGllbnQtaXAiOiIxODIuNzEuMTE5LjIxMiIsImV4cCI6MTQ5OTg1Nzg1N30.e69RlrRNTI5BilTw4Btrhzxf11en56lLaeGzCBCEmUrTqmzCB_HNfpjctTjFIYobq_xJUSo0t-GAoKtN0aQPbOZcTwsVFW_605qSDgi7BHO1ZMOcYcr-yl0N4J29IA4OUwJw3PhsNfUTTri33zchsaQi0Q9PMEiIzzLuCxM5sjAoE6GQ4dac3olC9Qn7ZJbUl1FqmzrCFnAk8bdWKwZzmvKN3AIqK8XtWGMZ1AJNSV8cpd122Hw-meGmLbxXPe_0YwotpPWZAs2n9J5pgNO3TeLniPRV9ObmY543riyiZmXLm-6MK5UMxTXJoleuUI_WHELnDF-814gLzgX2rGPr6g",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=clientTestPool1;BNSPrevPercentage;BNSOrigin;mbox;DPJSESSIONID;DP_USER_FAVCOUNT;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;ssl;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;NotValidCookie;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;LPVID;LPSID-58507821;mp_jcpenney_mixpanel;_ga;_gid;_uetsid;_4c_;testpool;DPUserTracking;DPSecureCookie;cmvid;DP_USER_STATE;DP_USER_AUTH_STATUS;DP_USER_NAME;DYN_USER_ID;DP_SFL_PPIDS;DPInstance;omni_profileType;omni_profileAttr;omni_profileOptin;APITOKEN;DPOrder;ItemCount;ItemTotal;InternationalItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;CavNV",
        "PreSnapshot=webpage_1499850660628.png",
        "Snapshot=webpage_1499850665088.png",
        INLINE_URLS,
            "URL=http://netvision.cavisson.com/test_rum?s=000337423317038277436&op=timing&pi=3&d=1|0|-1|-1|-1|500|-1|-1|-1|-1|-1|-1|-1|-1|958|958|186|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fv2%2Fcart%2Fitems|m.jcpenney.com|BNSOrigin%3DA%3B%20BNSPrevPercentage%3D100%3B%20mmcore.tst%3D0.006%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DktCrW3Y4zCGi7PMbqIVw9ViRPdnFlq0b%3B%20_ga%3DGA1.2.1044498744.1467096881%3B%20_gat%3D1%3B%20CavSID%3D000337423317038277436%3B%20DPUserTracking%3Dnull%3B%20recentSearchData%3D%255B%2522jeans%2522%255D%3B%20clientTestPool1%3Drwd%3B%20mmapi.store.p.0%3D%257B%2522mmparams.d%2522%253A%257B%257D%252C%2522mmparams.p%2522%253A%257B%2522mmid%2522%253A%25221498632869164%25PIPE%25%255C%2522-826645866%25PIPE%25AQAAAApgGkstig0AAA%253D%253D%255C%2522%2522%252C%2522pd%2522%253A%25221498632869177%25PIPE%25%255C%25222145647719%25PIPE%25AQAAAAoBQmAaSy2KDa%252FWrOMBAAh0igohn9NIDwAAAAh0igohn9NIAAAAAP%252F%252F%252F%252F%252F%252F%252F%252F%252F%252FAAZEaXJlY3QBig0BAAAAAAAAAAEAABU2AAD%252F%252F%252F%252F%252F%252F%252F%252F%252F%252FwEA62EAAADWFI24ig0AC2EAAAWKDYoN%252F%252F8BAAABAAAAAAE%252F6wAA%252BHMBAAAAAAABRQ%253D%253D%255C%2522%2522%252C%2522srv%2522%253A%25221498632869187%25PIPE%25%255C%2522lvsvwcgus01%255C%2522%2522%252C%2522uat%2522%253A%25221498632933406%25PIPE%25%257B%255C%2522TimeLastPurch%255C%2522%253A%255C%2522None%255C%2522%252C%255C%2522TimeLastVisit%255C%2522%253A%255C%25220-1%2520day%255C%2522%252C%255C%2522LoginStatus%255C%2522%253A%255C%2522NonAccount%255C%2522%257D%2522%257D%252C%2522mmengine%2522%253A%257B%257D%257D%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78562587&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://service.maxymiser.net/cg/v5us/?fv=dmn%3Djcpenney.com%3Bref%3D%3Burl%3Dhttp%253A%252F%252Fm.jcpenney.com%252Flevis-501-original-fit-jeans-%252Fprod.jump%253FppId%253Dpp5003860119%2526Ntt%253Djeans%3Bscrw%3D1366%3Bscrh%3D768%3Bclrd%3D24%3Bcok%3D1&lver=1.4&jsncl=mmRequestCallbacks%5B2%5D&ri=2&mmid=-826645866%7CAQAAAApgGkstig0AAA%3D%3D&pd=2145647719%7CAQAAAAoBQmAaSy2KDa%2FWrOMBAAh0igohn9NIDwAAAAh0igohn9NIAAAAAP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FAAZEaXJlY3QBig0BAAAAAAAAAAEAABU2AAD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEA62EAAADWFI24ig0AC2EAAAWKDYoN%2F%2F8BAAABAAAAAAE%2F6wAA%2BHMBAAAAAAABRQ%3D%3D&srv=lvsvwcgus01&uat=TimeLastPurch%3DNone%3BTimeLastVisit%3D0-1%2520day%3BLoginStatus%3DNonAccount&uv=AppliancePageViews%3D1%3BT142TimeToEngage%3D1%2C2-3%2520min&pageid=mmevents&jsver=5.13.1", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://service.maxymiser.net/cg/v5us/?fv=dmn%3Djcpenney.com%3Bref%3D%3Burl%3Dhttp%253A%252F%252Fm.jcpenney.com%252Flevis-501-original-fit-jeans-%252Fprod.jump%253FppId%253Dpp5003860119%2526Ntt%253Djeans%3Bscrw%3D1366%3Bscrh%3D768%3Bclrd%3D24%3Bcok%3D1&lver=1.4&jsncl=mmRequestCallbacks%5B3%5D&ri=3&mmid=-826645866%7CAQAAAApgGkstig0AAA%3D%3D&pd=2145647719%7CAQAAAAoBQmAaSy2KDa%2FWrOMBAAh0igohn9NIDwAAAAh0igohn9NIAAAAAP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FAAZEaXJlY3QBig0BAAAAAAAAAAEAABU2AAD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEA62EAAADWFI24ig0AC2EAAAWKDYoN%2F%2F8BAAABAAAAAAE%2F6wAA%2BHMBAAAAAAABRQ%3D%3D&srv=lvsvwcgus01&uat=TimeLastPurch%3DNone%3BTimeLastVisit%3D0-1%2520day%3BLoginStatus%3DNonAccount&pageid=mmevents&jsver=5.13.1", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("MB_API_AB_draftorder_GET", NS_AUTO_STATUS);
    ns_end_transaction("MOB_AddToBag", NS_AUTO_STATUS);
 
   ns_page_think_time(0);
   ns_set_int_val("AddCookie", 1);

}
