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
    int loop;
    loop = ns_get_int_val("ProductLoop");
    ns_set_int_val("ProductLoop", loop - 1);	

    ns_advance_param("RegularPPidFP");
    ns_add_cookie_val_ex("DPCPT", NULL, NULL, "CP1Y|CP2Y");
  //  ns_web_add_auto_header("Origin", "https://www.jcpenney.com", 0);
    
     int IfAddCookie = 0;
    IfAddCookie = ns_get_int_val("AddCookie");
   
 	if(IfAddCookie >= 1){
      
    }
    else
    {
        ns_add_cookie_val_ex("Aurora", NULL, NULL, "microservice");
      
    	ns_start_transaction("DT_API_AB_OauthGuest_OPTIONS");
    	ns_web_url ("DT_API_AB_OauthGuest1",
        "URL=https://account-api.jcpenney.com/v5/oauth2/guest",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:content-type,x-guest-id,x-guest-user",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-US,en;q=0.8",
    );
    ns_end_transaction("DT_API_AB_OauthGuest_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_AB_OauthGuest_POST");
    ns_web_url ("DT_API_AB_OauthGuest",
        "URL=https://account-api.jcpenney.com/v5/oauth2/guest",
        "METHOD=POST",
        "HEADER=x-guest-user:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
    );
    ns_end_transaction("DT_API_AB_OauthGuest_POST", NS_AUTO_STATUS);
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
  
    ns_start_transaction("COM_AddToBag");  
  	ns_start_transaction("DT_API_AB_bagitems_OPTIONS");
    	ns_web_url ("DT_API_AB_bagitems1",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/TMc9CngY9XjI5AeLKyJf/draft-order/bag/items",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/bag/items",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-cart-interstitial",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-US,en;q=0.8",
    );
    ns_end_transaction("DT_API_AB_bagitems_OPTIONS", NS_AUTO_STATUS);
    
   
    ns_start_transaction("DT_API_AB_bagitems_POST");
    ns_web_url ("DT_API_AB_bagitems",
        // "URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order/bag/items/",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/bag/items",
        "METHOD=POST",
        "HEADER=authorization:Bearer {AccessTokenSP}",
       "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "HEADER=x-cart-interstitial:true",
        // "{"data":[{"skuId":"52530000265","quantity":1,"ppId":"pp5007500353","deliveryOption":{"type":"HOME","selected":true}}]}",
        // "{"data":[{"skuId":"{SkuIdFP}","quantity":{BogoQuantityFP},"ppId":"{RegularPPidFP}","deliveryOption":{"type":"HOME","selected":true}}]}",
        //{"data":[{"skuId":"49898290018","ppId":"ppr5007433488","quantity":1,"deliveryOption":{"type":"HOME","selected":true,"label":"Ship to Home"},"childItems":[]}]}
        //"{"data":[{"skuId":"{SkuIdFP}","ppId":"{RegularPPidFP}","quantity":{BogoQuantityFP},"deliveryOption":{"type":"HOME","selected":true,"label":"Ship to Home"},"childItems":[]}]}",
        //{"sdpuStoreInfo":{},"deliveryOption":{"shipToHomeOrStore":{"label":"Ship to Home or Store","deliveryMessage":"est. delivery: aug 7th - aug 9th","availabilityMessage":"","isshipToStoreDisabled":false,"isRadioButtonDisabled":false,"disabled":"","isChecked":true,"surcharges":"","isShipToHomeOrStoreAvailable":true,"maxQuantity":"","isQuantityAvailable":true,"maxQuantityMsgDisplay":false,"quantityReachMaxPosition":false,"updatedAsOf":"","rawDeliveryDateStart":"Wed Aug 07 00:00:00 CDT 2019"},"sameDayPickUp":{"availabilityMessage":"","storeAvailabilityMessage":"Out Of Stock","isSameDayPickupDisabled":true,"isRadioButtonDisabled":false,"storeMessage":"Check store availability","disabled":"disabled","isChecked":false,"channelOfferingLabel":"","isVisitStoreToPurchase":false,"storeInfoVisitToPurchase":"","updatedAsOf":""}},"isChangeStoreAtc":false,"data":[{"skuId":"52340090034","ppId":"pp5006560674","quantity":1,"deliveryOption":{"type":"HOME","selected":true,"label":"Ship to Home or Store"},"childItems":[]}]}
        BODY_BEGIN,
            "{"sdpuStoreInfo":{},"deliveryOption":{"shipToHomeOrStore":{"label":"Ship to Home or Store","deliveryMessage":"est. delivery: aug 7th - aug 9th","availabilityMessage":"","isshipToStoreDisabled":false,"isRadioButtonDisabled":false,"disabled":"","isChecked":true,"surcharges":"","isShipToHomeOrStoreAvailable":true,"maxQuantity":"","isQuantityAvailable":true,"maxQuantityMsgDisplay":false,"quantityReachMaxPosition":false,"updatedAsOf":"","rawDeliveryDateStart":"Wed Aug 07 00:00:00 CDT 2019"},"sameDayPickUp":{"availabilityMessage":"","storeAvailabilityMessage":"Out Of Stock","isSameDayPickupDisabled":true,"isRadioButtonDisabled":false,"storeMessage":"Check store availability","disabled":"disabled","isChecked":false,"channelOfferingLabel":"","isVisitStoreToPurchase":false,"storeInfoVisitToPurchase":"","updatedAsOf":""}},"isChangeStoreAtc":false,"data":[{"skuId":"{SkuIdFP}","ppId":"{RegularPPidFP}","quantity":{BogoQuantityFP},"deliveryOption":{"type":"HOME","selected":true,"label":"Ship to Home or Store"},"childItems":[]}]}"
        BODY_END,
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=4&ci=90024642&vn2=e4.0&st=1467096873569&vn1=4.16.9&ec=utf-8&pr=5203400&pm=Product%3ALevis%C2%AE%20501%C2%AE%20Original%20Fit%20Jeans&cg=Mobile%7CSearch%20Results&ha1=e7f9ad67ccb9d9fbfe2614bee10d8632f703217a&at=5&pc=N&rnd=1467099453636&s_a12=002&s_a13=22&s_a14=520&s_a16=ORIGINAL&s_a21=jeans&s_a24=Levi&s_a25=pp5003860119&s_a26=0133&s_a27=0133%7CIS&ul=http%3A%2F%2Fm.jcpenney.com%2Flevis-501-original-fit-jeans-%2Fprod.jump%3FppId%3Dpp5003860119%26Ntt%3Djeans", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPJSESSIONID;DPUserTracking;recentSearchData;clientTestPool1;90024642_reset;DPSessionTimeOutInterval;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://media.richrelevance.com/rrserver/js/1.0/p13n.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("DT_API_AB_bagitems_POST",NS_AUTO_STATUS);
    
    
    ns_start_transaction("DT_API_AB_draftorder_OPTIONS");
   	ns_web_url ("DT_API_AB_draftorder1",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/TMc9CngY9XjI5AeLKyJf/draft-order/bag/items",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?origin=pdp",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization,content-type",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-US,en;q=0.8",
    );
    ns_end_transaction("DT_API_AB_draftorder_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_AB_draftorder_GET");
    ns_web_url("DT_API_AB_draftorder",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/vXXrl7AojTUUS2H2kWio/draft-order?origin=pdp", ----Latest Req
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/rS-EIbOPPJH7Xux17gu5/draft-order",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?origin=pdp",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",

        INLINE_URLS,
            "URL=http://netvision.cavisson.com/test_rum?s=000337423317038277436&op=timing&pi=3&d=1|0|-1|-1|-1|500|-1|-1|-1|-1|-1|-1|-1|-1|958|958|186|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fv2%2Fcart%2Fitems|m.jcpenney.com|BNSOrigin%3DA%3B%20BNSPrevPercentage%3D100%3B%20mmcore.tst%3D0.006%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DktCrW3Y4zCGi7PMbqIVw9ViRPdnFlq0b%3B%20_ga%3DGA1.2.1044498744.1467096881%3B%20_gat%3D1%3B%20CavSID%3D000337423317038277436%3B%20DPUserTracking%3Dnull%3B%20recentSearchData%3D%255B%2522jeans%2522%255D%3B%20clientTestPool1%3Drwd%3B%20mmapi.store.p.0%3D%257B%2522mmparams.d%2522%253A%257B%257D%252C%2522mmparams.p%2522%253A%257B%2522mmid%2522%253A%25221498632869164%25PIPE%25%255C%2522-826645866%25PIPE%25AQAAAApgGkstig0AAA%253D%253D%255C%2522%2522%252C%2522pd%2522%253A%25221498632869177%25PIPE%25%255C%25222145647719%25PIPE%25AQAAAAoBQmAaSy2KDa%252FWrOMBAAh0igohn9NIDwAAAAh0igohn9NIAAAAAP%252F%252F%252F%252F%252F%252F%252F%252F%252F%252FAAZEaXJlY3QBig0BAAAAAAAAAAEAABU2AAD%252F%252F%252F%252F%252F%252F%252F%252F%252F%252FwEA62EAAADWFI24ig0AC2EAAAWKDYoN%252F%252F8BAAABAAAAAAE%252F6wAA%252BHMBAAAAAAABRQ%253D%253D%255C%2522%2522%252C%2522srv%2522%253A%25221498632869187%25PIPE%25%255C%2522lvsvwcgus01%255C%2522%2522%252C%2522uat%2522%253A%25221498632933406%25PIPE%25%257B%255C%2522TimeLastPurch%255C%2522%253A%255C%2522None%255C%2522%252C%255C%2522TimeLastVisit%255C%2522%253A%255C%25220-1%2520day%255C%2522%252C%255C%2522LoginStatus%255C%2522%253A%255C%2522NonAccount%255C%2522%257D%2522%257D%252C%2522mmengine%2522%253A%257B%257D%257D%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78562587&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://service.maxymiser.net/cg/v5us/?fv=dmn%3Djcpenney.com%3Bref%3D%3Burl%3Dhttp%253A%252F%252Fm.jcpenney.com%252Flevis-501-original-fit-jeans-%252Fprod.jump%253FppId%253Dpp5003860119%2526Ntt%253Djeans%3Bscrw%3D1366%3Bscrh%3D768%3Bclrd%3D24%3Bcok%3D1&lver=1.4&jsncl=mmRequestCallbacks%5B2%5D&ri=2&mmid=-826645866%7CAQAAAApgGkstig0AAA%3D%3D&pd=2145647719%7CAQAAAAoBQmAaSy2KDa%2FWrOMBAAh0igohn9NIDwAAAAh0igohn9NIAAAAAP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FAAZEaXJlY3QBig0BAAAAAAAAAAEAABU2AAD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEA62EAAADWFI24ig0AC2EAAAWKDYoN%2F%2F8BAAABAAAAAAE%2F6wAA%2BHMBAAAAAAABRQ%3D%3D&srv=lvsvwcgus01&uat=TimeLastPurch%3DNone%3BTimeLastVisit%3D0-1%2520day%3BLoginStatus%3DNonAccount&uv=AppliancePageViews%3D1%3BT142TimeToEngage%3D1%2C2-3%2520min&pageid=mmevents&jsver=5.13.1", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://service.maxymiser.net/cg/v5us/?fv=dmn%3Djcpenney.com%3Bref%3D%3Burl%3Dhttp%253A%252F%252Fm.jcpenney.com%252Flevis-501-original-fit-jeans-%252Fprod.jump%253FppId%253Dpp5003860119%2526Ntt%253Djeans%3Bscrw%3D1366%3Bscrh%3D768%3Bclrd%3D24%3Bcok%3D1&lver=1.4&jsncl=mmRequestCallbacks%5B3%5D&ri=3&mmid=-826645866%7CAQAAAApgGkstig0AAA%3D%3D&pd=2145647719%7CAQAAAAoBQmAaSy2KDa%2FWrOMBAAh0igohn9NIDwAAAAh0igohn9NIAAAAAP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FAAZEaXJlY3QBig0BAAAAAAAAAAEAABU2AAD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEA62EAAADWFI24ig0AC2EAAAWKDYoN%2F%2F8BAAABAAAAAAE%2F6wAA%2BHMBAAAAAAABRQ%3D%3D&srv=lvsvwcgus01&uat=TimeLastPurch%3DNone%3BTimeLastVisit%3D0-1%2520day%3BLoginStatus%3DNonAccount&pageid=mmevents&jsver=5.13.1", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("DT_API_AB_draftorder_GET", NS_AUTO_STATUS);
    ns_end_transaction("COM_AddToBag", NS_AUTO_STATUS);
    
    ns_page_think_time(0);
    ns_set_int_val("AddCookie", 1);
    
}
