/*-----------------------------------------------------------------------------
    Name: AddToBag
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

void AddToBag()
{
   // ****************Add To Cart**************

    ns_advance_param("RegularPPidFP");
    ns_add_cookie_val_ex("DPCPT", NULL, NULL, "CP1Y|CP2Y");
    
    char AccountIdbuff[64 + 1]="";
          snprintf(AccountIdbuff,64,"%s",ns_eval_string("{CustomerIdSP}"));
          ns_add_cookie_val_ex("ACCOUNT_ID", NULL, NULL, AccountIdbuff);
          
    char AccessTokenbuff[1024 + 1]="";
          snprintf(AccessTokenbuff,1024,"%s",ns_eval_string("{AccessTokenSP}"));
          ns_add_cookie_val_ex("Access_Token", NULL, NULL, AccessTokenbuff);

    ns_start_transaction("MOB_AddToBag_SPC");	
    ns_start_transaction("MB_API_AB_bagitems_OPTIONS");
    	ns_web_url ("MB_API_AB_bagitems1",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L112986139863/draft-order/bag/items",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/bag/items",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:authorization,content-type,x-cart-interstitial",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-US,en;q=0.8",
    );
    ns_end_transaction("MB_API_AB_bagitems_OPTIONS", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_AB_bagitems_POST");
    ns_web_url ("MB_API_AB_bagitems",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L112986139863/draft-order/bag/items",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/bag/items",
        "METHOD=POST",
        "HEADER=Authorization:Bearer {AccessTokenSP}",
        "HEADER=X-Cart-Interstitial:true",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=ak_geo;DPCPT;UID;DP-Cloud-Origin;bm_sz;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;_abck;ak_bmsc;ak_zip;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;QuantumMetricSessionID;_gcl_au;_4c_mc_;cto_lwid;_MetricalObject_did;_MetricalObject_sessionid;_fbp;AMP_TOKEN;_ga;_gid;__gads;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPIdentifier;DPCluster;DPLastAccessedTime;DPInstance;DYN_USER_ID;DP_USER_NAME;DP_USER_AUTH_STATUS;DP_USER_STATE;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;DP_USER_DEFAULT_ADDRESS_ZIP;ACCOUNT_ID;DP_SFL_ID;DP_USER_INFO;mbox;tfc-s;tfc-l;mp_jcpenney_mixpanel;_gat;bm_sv",
        "PreSnapshot=webpage_1564046560529.png",
        "Snapshot=webpage_1564046561524.png",
        // "{"sdpuStoreInfo":{},"deliveryOption":{"shipToHomeOrStore":{"label":"Ship to Home or Store","deliveryMessage":"est. delivery: jul 30th - aug 1st","availabilityMessage":"","isshipToStoreDisabled":false,"isRadioButtonDisabled":false,"disabled":"","isChecked":true,"surcharges":"","isShipToHomeOrStoreAvailable":true,"maxQuantity":"","isQuantityAvailable":true,"maxQuantityMsgDisplay":false,"quantityReachMaxPosition":false,"updatedAsOf":"","rawDeliveryDateStart":"Tue Jul 30 00:00:00 CDT 2019"},"sameDayPickUp":{"availabilityMessage":"","storeAvailabilityMessage":"Out Of Stock","isSameDayPickupDisabled":true,"isRadioButtonDisabled":false,"storeMessage":"Check store availability","disabled":"disabled","isChecked":false,"channelOfferingLabel":"","isVisitStoreToPurchase":false,"storeInfoVisitToPurchase":"","updatedAsOf":""}},"isChangeStoreAtc":false,"data":[{"skuId":"50011542824","ppId":"ppr5007627782","quantity":1,"deliveryOption":{"type":"HOME","selected":true,"label":"Ship to Home or Store"},"childItems":[]}]}",
        BODY_BEGIN,
            "{"sdpuStoreInfo":{},"deliveryOption":{"shipToHomeOrStore":{"label":"Ship to Home or Store","deliveryMessage":"est. delivery: jul 30th - aug 1st","availabilityMessage":"","isshipToStoreDisabled":false,"isRadioButtonDisabled":false,"disabled":"","isChecked":true,"surcharges":"","isShipToHomeOrStoreAvailable":true,"maxQuantity":"","isQuantityAvailable":true,"maxQuantityMsgDisplay":false,"quantityReachMaxPosition":false,"updatedAsOf":"","rawDeliveryDateStart":"Tue Jul 30 00:00:00 CDT 2019"},"sameDayPickUp":{"availabilityMessage":"","storeAvailabilityMessage":"Out Of Stock","isSameDayPickupDisabled":true,"isRadioButtonDisabled":false,"storeMessage":"Check store availability","disabled":"disabled","isChecked":false,"channelOfferingLabel":"","isVisitStoreToPurchase":false,"storeInfoVisitToPurchase":"","updatedAsOf":""}},"isChangeStoreAtc":false,"data":[{"skuId":"{SkuIdFP}","ppId":"{RegularPPidFP}","quantity":{BogoQuantityFP},"deliveryOption":{"type":"HOME","selected":true,"label":"Ship to Home or Store"},"childItems":[]}]}",
        BODY_END
    );
    ns_end_transaction("MB_API_AB_bagitems_POST", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_AB_draftorder_OPTIONS");
    ns_web_url ("MB_API_AB_draftorder1",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L112986139863/draft-order?origin=pdp",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?origin=pdp",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization,content-type",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-US,en;q=0.8",
    );
    ns_end_transaction("MB_API_AB_draftorder_OPTIONS", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_AB_draftorder_GET");
    ns_web_url ("MB_API_AB_draftorder",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/L112986139863/draft-order?origin=pdp",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?origin=pdp",
        "HEADER=Authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "COOKIE=ak_geo;DPCPT;UID;DP-Cloud-Origin;bm_sz;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;_abck;ak_bmsc;ak_zip;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;QuantumMetricSessionID;_gcl_au;_4c_mc_;cto_lwid;_MetricalObject_did;_MetricalObject_sessionid;_fbp;AMP_TOKEN;_ga;_gid;__gads;Aurora;APITOKEN;omni_profileOptin;omni_profileAttr;omni_profileType;DPIdentifier;DPCluster;DPLastAccessedTime;DPInstance;DYN_USER_ID;DP_USER_NAME;DP_USER_AUTH_STATUS;DP_USER_STATE;DPSecureCookie;DPJSESSIONID;ItemCount;DP_ORDER_INFO;DP_USER_DEFAULT_ADDRESS_ZIP;ACCOUNT_ID;DP_SFL_ID;DP_USER_INFO;mbox;tfc-s;tfc-l;mp_jcpenney_mixpanel;_gat;DP-Cloud-Cluster;bm_sv",
        "PreSnapshot=webpage_1564046563713.png",
        "Snapshot=webpage_1564046563832.png"
    );
    ns_end_transaction("MB_API_AB_draftorder_GET", NS_AUTO_STATUS);
    ns_end_transaction("MOB_AddToBag_SPC",NS_AUTO_STATUS);
    ns_page_think_time(0);

}
