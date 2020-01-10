/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 07/08/2019 06:55:54
    Flow details:
    Build details: 4.1.15 (build# 37)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("index");
    ns_web_url ("index",
        "URL=https://www.amazon.in/",
        "HEADER=Accept-Language:en-in",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1562591800129.png",
        "Snapshot=webpage_1562591804030.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41gCbfiTdaL._RC%7C516fcOUE-HL.css,01evdoiemkL.css,01K+Ps1DeEL.css,31pdJv9iSzL.css,01tgK36lpGL.css,11UGC+GXOPL.css,21LK7jaicML.css,11L58Qpo0GL.css,21kyTi1FabL.css,01Xl9KigtzL.css,01YhS3Cs-hL.css,21GwE3cR-yL.css,019SHZnt8RL.css,01wAWQRgXzL.css,21bWcRJYNIL.css,11WgRxUdJRL.css,01dU8+SPlFL.css,11ocrgKoE-L.css,01SHjPML6tL.css,111-D2qRjiL.css,01QrWuRrZ-L.css,310Imb6LqFL.css,11Z1a0FxSIL.css,01cbS3UK11L.css,21mOLw+nYYL.css,01L8Y-JFEhL.css_.css?AUIClients/AmazonUI#not-trident", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210UtsRqV6L._RC%7C71+WX4uo+uL.css,11zh5zoa5AL.css,31cuIVKhckL.css,210-42NMyML.css,31wWWC6YAvL.css,11G4HxMtMSL.css,31OvHRW+XiL.css,01XHMOHpK1L.css_.css?AUIClients/AmazonNavigationDesktopMetaAsset#desktop.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41rsDDFiZxL.css?AUIClients/AmazonGatewayAuiAssets", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/prime/Events/Bruno/Day-of/PC-Prime-day-coupons-1150X323._CB443535881_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/91D-zq7R8NL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61YtqJpDkVL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61uhJL32LGL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/6168K8-W0dL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81tevFy3q3L._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61VoCNLMeUL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71MKTG4GDLL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/CEPC/networking/D10471260_data_atf_card_260x260._CB463210104_SY260_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img17/Home/LA/DekstopCARD/11O._CB453990151_SY260_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Cameras/BAU/PCcards/PC_Cards_canon_260x260._CB463263878_SY260_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img17/Auto/2018/GW/PCCC/13._CB443894429_SY260_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/918VVN1YlUL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61Q4JoFovsL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71XzSPb+t1L._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51kjI4mV1AL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61il1MRldLL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/610q1hWO4ZL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81WMctksAOL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81gWBASyb7L._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/816EkGDqCLL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/91wCdLSPJyL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81DYQIYP+LL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/91ptiQwgCnL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51yIybqYFTL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61nIdAjFqxL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/LawnGarden/GW/GW_CC_LG_260x260._CB463283249_SY260_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Wearables/MI_Band3/24-05-19/GW/MiBand3_PCBB_calls_260._CB462212228_SY260_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/CEPC/PCAccesories/GW/D10471260_keyboard_mouse_atf_card_260x260._CB463210425_SY260_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/HomeImprovement/GW/CC/GW_CC_Tools_260x260._CB463288964_SY260_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/612gmey-FKL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71SFc-bF-dL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51MqLkrw5fL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61dPSbJONkL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61-d2v7cefL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61wuh5QLldL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51rxIqTQlXL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/personalization/ybh/loading-4x-gray._CB317974815_.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:FQHMBRA36T6KVA44S1T8$uedata=s:%2Fgp%2Fuedata%3Fstaticb%26id%3DFQHMBRA36T6KVA44S1T8:0", "HEADER=Accept-Language:en-in", "COOKIE=session-id;session-id-time;i18n-prefs", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/gno/sprites/nav-sprite-global_bluebeacon-V3-1x_optimized._CB468962293_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/transparent-pixel._CB386942716_.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/prime/Events/Bruno/GW/LU_Announce_1500x300_Desktop_Hero_dv1._CB444413363_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/Gateway/BrightBuy/MensFashion_4._CB464576364_SY119_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/Gateway/BrightBuy/WomensFashion_4._CB464576364_SY119_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/Gateway/BrightBuy/Electronics_4._CB464576365_SY119_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/Gateway/BrightBuy/HomeDecor_4._CB464576365_SY119_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonPay/HFC/May/GW/PCQC/HFC_Quad-card_152x119_Recharge._CB463422856_SY119_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonPay/GW/PC/PC_Quad-card_152x119_Bills._CB463288209_SY119_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonPay/GW/PC/PC_Quad-card_152x119_Food._CB463288209_SY119_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonPay/GW/PC/PC_Quad-card_152x119_Offers._CB463288209_SY119_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Beauty/GW/Skincare_260._CB442948247_SY260_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Baby/GW/Desktop/NBStoreCC_260x260._CB466084335_SY260_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Beauty/GW/desktop/Deo_desktop_1x._CB442948156_SY260_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Beauty/GW/haircare_260._CB443016067_SY260_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/AmazonVideo/2019/SingleTitle/Kalank/306x306-Landing-page._CB444463337_SY260_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonDevices/neel/March/1X._CB469330167_SY260_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61kzhTBl2qL.js?AUIClients/AmazonUIjQuery", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/01gMokLtdHL.js?AUIClients/GenericObservableJS", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41B2UxcRhYL.js?AUIClients/AmazonGatewayAuiAssets", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/51UHoxzInpL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41qeZ8s%2BacL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41JCXXgqi3L.__AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41wdwK-zHML.__AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/31BoRbs%2BFIL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41uWy869jVL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/amazonui/loading/loading-4x._CB398267825_.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71wyXTn7IWL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81jzLbgQ8uL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/91sCN4rZSBL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81WbVAfEw9L._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/710Yn8H-iTL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61M6tq+U1yL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/91P+c14Fb1L._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Wearables/GW/PCBB/D10485051_wearables_atf_260x260._CB463261881_SY260_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/in-certifiedrefurbished/gateway/1173850_AllCat_260._CB463219347_SY260_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/in-certifiedrefurbished/gateway/Speakers_1174172_260._CB443372723_SY260_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/PCA/PhilipsOneBlade/dashboard_1x._CB443882224_SY260_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81DliuzBwyL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81huuE14QsL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81KKMt1HqKL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71JhEnGtlfL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81JwfMYbwPL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81sORLhPKKL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/8163y9qPqdL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31S6jpIf+nL.js?AUIClients/AmazonGatewayHerotatorJS", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/prime/Events/Bruno/GW/LU_Announce_400x39_SWM_dv1._CB444413363_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUICarousel-arrows-c495a9b59afd9b35a08c12513d40b8c7e7771499._V2_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUISpinner-spinner_gray_2x-305997434ebd5a72cd3aa598a019fcc6e1efe23a._V2_.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/ape/sf/desktop/DAsf-1.50.d23453f._V461670253_.js?csm_attribution=APE-SafeFrame", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41YUeDE3zHL._RC%7C71aLqNGbWsL.js,61u3dpzHy+L.js,417SPNjYS3L.js,11vrNkbdcvL.js,21SHd9g2LAL.js,31xNSJua7KL.js,51YeRc8UK1L.js,31R1liuRRmL.js_.js?AUIClients/AmazonNavigationDesktopMetaAsset#desktop", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11VbV%2B%2BKhQL.js?AUIClients/RetailWebsiteOverlayAUIAssets", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("index", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("counter");
    ns_web_url ("counter",
        "URL=https://www.amazon.in/ah/ajax/counter?ctr=desktop_ajax_atf&exp=1562591920810&rId=FQHMBRA36T6KVA44S1T8&mkId=A21TJRUUN4KGV&h=143c59b99b960638ebe44d1e771d94752fd5bfc55c39cccb4112c83de7b9306f",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;session-id-time;i18n-prefs;csm-hit",
        "PreSnapshot=webpage_1562591804030.png",
        "Snapshot=webpage_1562591804930.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/ape/sf/whitelisted/desktop/sf-1.50.d23453f._V461669522_.html", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11-BZEJ8lnL._RC%7C61GQ9IdK7HL.js,21Of0-9HPCL.js,012FVc3131L.js,119KAWlHU6L.js,51xL2QLv4YL.js,11AHlQhPRjL.js,016iHgpF74L.js,11aNYFFS5hL.js,116tgw9TSaL.js,211-p4GRUCL.js,01PoLXBDXWL.js,61BanVD+50L.js,01mi-J86cyL.js,11BOgvnnntL.js,31UWuPgtTtL.js,01rpauTep4L.js,01iyxuSGj4L.js,018kT7oogLL.js_.js?AUIClients/AmazonUI#189458-T1.192338-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71DHt5pUZXL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61BcmSMNsRL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71Ma0R3Rg0L._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71wtlY2aiLL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71-loLV0n5L._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71o9ZMnqSDL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71k-axCvpTL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/818ZbfaXqUL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/91ULJsL8PXL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81HV9pwLfIL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81ZAvdalcHL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81qnvOcsg5L._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/811ZMszzT4L._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81N+PdisoyL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81rpC23-5OL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/717QVNvbVTL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71b+X+Y1jFL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61sqFLvDGNL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61JI4lEfY-L._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51xyAM3jgxL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71p+xZvGDtL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71TfaThZpmL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71AaH5W7c1L._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/91AUI-p024L._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/517BNVJ5gtL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/91RGgiMe2NL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61Avfe-CYgL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81DxpxY-BaL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61yR09eE0zL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/7148mNmFJiL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71lo1Apr1tL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81RmZgxA8cL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71nTxKhiqrL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81ZZQH3GFjL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61-RPHF5NZL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81wa8LAE1vL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81dGc3dokVL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ICQhKpwiL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71HAZdmK-3L._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71Oqe0YYMmL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61H6j5IxyrL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61bRiZqT0eL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81LiTPXphPL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51l65zOSceL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81hXvh+R-IL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81Nlx9WE93L._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81Ub4Z-b4gL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("counter", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("suggestions");
    ns_web_url ("suggestions",
        "URL=https://completion.amazon.co.uk/api/2017/suggestions?session-id=259-1202557-5929705&customer-id=&request-id=FQHMBRA36T6KVA44S1T8&page-type=Gateway&lop=en_IN&site-variant=desktop&client-info=amazon-search-ui&mid=A21TJRUUN4KGV&alias=aps&searchTerm=a&suggestion-type=KEYWORD&suggestion-type=WIDGET&_=1562591804912",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562591804930.png",
        "Snapshot=webpage_1562591805559.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonDevices/neel/checkers/500x450_Flyout._CB443265716_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/AmazonDevices/Tank/Flyout_just._CB458220204_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonDevices/Kindle/Flyout_Kindle._CB444077460_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/AmazonVideo/2019/SingleTitle/Ishq/499x492-GNO_without-disclaimer._CB443188605_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/digital/music/merch/India/2019/June/PD/PD_Flyout_CCP._CB442663186_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Laptops/Flyout/fashion_flyout_500x500_2._CB442684549_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img17/TV/Flyout/1050726_InternetTV_flyout-2._CB505081595_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Fashion/Flyout/men._CB468888570_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/IMG-2017/GW_Flyout_500x450_Flyout._CB487102089_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img17/Sports/Exercise_Fitness/Get_fit_at_home/gym_essentials/flyout._CB505942756_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Family/flyout_new_last_1534496402_1534508273._CB470411914_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/books/062019/MemorableSummer/xcm_manual-1175404_memorablebooks-summer-2019_flyout_500x450_01_1561224420._CB442522193_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img16/GiftCards/MarchSweep/Nov/RGC24_JupiterW1GC_500x500_Nov._CB479161047_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41FgYpc48CL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71fOUGtuRwL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51GFMXKWyPL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51GIWdEAwjL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51plkreMyKL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61GpTTMi6rL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/614O6NpT9rL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41cDi-qJQiL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61RlmyXABBL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71cBJh+YDEL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81Xp3WUL+aL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61-vhLf4eEL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51WDlUSg2hL._AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonGatewayAuiAssets-gw_sprite_desktop-25075f36f083535bad9a2e0edabbb339435e8e65._V2_.png", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("suggestions", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("display_html");
    ns_web_url ("display_html",
        "URL=https://www.amazon.in/gp/overlay/display.html",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "COOKIE=session-id;session-id-time;i18n-prefs;csm-hit;ubid-acbin",
        "PreSnapshot=webpage_1562591805559.png",
        "Snapshot=webpage_1562591806056.png",
        BODY_BEGIN,
            "origSessionId=259-1202557-5929705&subPageType=null&pageType=Gateway&ASIN=null&path=%2F&isAUI=1&referrer=&queryString=",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Wireless/OnePlus/OnePlus7/ICICI_Citi/7/V124670824_IN_WLM_OnePlus7Series_DesktopTallHero_1500x600._CB443044458_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Wireless/Samsung/M_series/D10897149IN_WLME_Samsung_M-Series_DesktopTallHero_1500x600._CB443266287_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/prime/Gateway/2019/May/1171883_1500x600_Tallhero._CB462550275_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/PC_Accessories/Heros/pc_acc_GW_1500X600_revised._CB443044001_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonPay/HFC/June/GW/HFC_TallHero_1500x600_MainBunk_180._CB461663029_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Wireless/MobileAccessories/Headsets/BTH_Fest/D11017641_IN_WLA_BHT_heroes_QCs_DesktopTallHero_1500x600._CB443321733_.jpg", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("display_html", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_csm_nexusclient_p");
    ns_web_url ("com_amazon_csm_nexusclient_p",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.csm.nexusclient.prod",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "PreSnapshot=webpage_1562591806056.png",
        "Snapshot=webpage_1562591807536.png",
        BODY_BEGIN,
            "{"cs":{"dct":{"#0":"requestId","#1":"FQHMBRA36T6KVA44S1T8","#2":"server","#3":"www.amazon.in","#4":"obfuscatedMarketplaceId","#5":"A21TJRUUN4KGV","#6":"producerId","#7":"csm","#8":"schemaId","#9":"csm.CSMBaselineEvent.4","#10":"timestamp","#11":"messageId","#12":"sessionId","#13":"259-1202557-5929705"}},"events":[{"data":{"#0":"#1","#2":"#3","#4":"#5","#6":"#7","#8":"#9","#10":"2019-07-08T13:16:45.034Z","#11":"FQHMBRA36T6KVA44S1T8-1562591805034-3419810849","#12":"#13"}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://aax-eu.amazon-adsystem.com/x/px/QggLWre1drdbGflwsn-p3XkAAAFr0bqt_QMAAAH_AYpHywc/nii/%7B%22ni%22:true%7D", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/AMS/banners1/Laptops._CB454409461_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/getAdj?src=511&slot=desktop-ad-center-1&rid=010176e007edcd811d13d63f1e10be572362ad9f501c65e32043e3db7f652d9a71e2&callback=aax_xsp_render_ad", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/getAdj?src=511&slot=right-7&rid=010176e007edcd811d13d63f1e10be572362ad9f501c65e32043e3db7f652d9a71e2&callback=aax_xsp_render_ad", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("com_amazon_csm_nexusclient_p", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("af_link_handler_html");
    ns_web_url ("af_link_handler_html",
        "URL=https://www.amazon.in/gp/aq-feedback/lazyLoad/handler/af-link-handler.html?pl=%7B%22adPlacementMetaData%22%3A%7B%22pageUrl%22%3A%22aHR0cHM6Ly93d3cuYW1hem9uLmluL3Nob3BwaW5nUG9ydGFsL2Rlc2t0b3A%3D%22%2C%22adElementId%22%3A%22ape_Gateway_right-2_desktop_placement%22%2C%22pageType%22%3A%22Gateway%22%2C%22slotName%22%3A%22right-2%22%7D%2C%22adCreativeMetaData%22%3A%7B%22adNetwork%22%3A%22cs%22%7D%7D",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;csm-hit;ubid-acbin;x-wl-uid;session-token;session-id-time",
        "PreSnapshot=webpage_1562591807536.png",
        "Snapshot=webpage_1562591809194.png",
        INLINE_URLS,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41uYLpI%2BdSL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41%2BAUVTLtrL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41PowBcatCL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41tKTjT3EXL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41t88ncVQXL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/51pAETvoGPL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/productAds/ad_feedback_icon_1Xsprite._CB319582757_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/51mzeLvyUAL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41Z59jz2U5L.__AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41YgGUQVwEL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/AUIClients/INRetargetingAsset-fe13df5df0c9265752c892a20feddfc5baaec718.secure.min._V2_.js?AUIClients/INRetargetingAsset", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("af_link_handler_html", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("record_impressions");
    ns_web_url ("record_impressions",
        "URL=https://www.amazon.in/ah/ajax/record-impressions?c4i=ePm_fHprndBNCwFRGMXxT3Tqvs6dZ4m8lFlJrB_3uRfRjBgJXx6l1LCyO53d_3fvCEs67drm8AN6zG268LXr3dOLfq-ieeWXg_6oqz9t2gkG8xmOz451vb0lAdeCc_05_qksvHA0QYGJNFzU_FyW4V0IRtgJc-xKeC4oirKwlAxcKAJKlwW2JDLJF0ay-mi9IdDyfo9NOjYYfgGa4FTOK4bWRHDJRrAVi5iNj94TKUsv5AcJy24r&rId=FQHMBRA36T6KVA44S1T8&mkId=A21TJRUUN4KGV&exp=1562591920841&h=2d04ad026a847032acf454d14f5fdaa8d6c0744d606abebd90a5d081ea88730f",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;csm-hit;ubid-acbin;x-wl-uid;session-token;session-id-time",
        "PreSnapshot=webpage_1562591809194.png",
        "Snapshot=webpage_1562591810037.png"
    );

    ns_end_transaction("record_impressions", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_2");
    ns_web_url ("index_2",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;session-id-time",
        "PreSnapshot=webpage_1562591810037.png",
        "Snapshot=webpage_1562591815836.png",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/index_2_url_0_1_1562592354820.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/984527532/?value=0&label=r_58CJXm0gIQw9iz3gM&guid=ON&script=0&data=ecomm_pagetype%3DGateway%3BCURRENT_TIME%3D2019-07-08T13%3A16%3A51.603Z%3BSignedIn%3DN", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/984527532/?value=0&label=r_58CJXm0gIQw9iz3gM&guid=ON&script=0&data=ecomm_pagetype%3DGateway%3BCURRENT_TIME%3D2019-07-08T13%3A16%3A51.603Z%3BSignedIn%3DN&cdct=2&is_vtc=1&random=4256831513", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/984527532/?value=0&label=r_58CJXm0gIQw9iz3gM&guid=ON&script=0&data=ecomm_pagetype%3DGateway%3BCURRENT_TIME%3D2019-07-08T13%3A16%3A51.603Z%3BSignedIn%3DN&cdct=2&is_vtc=1&random=4256831513&ipr=y", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/x/px/Qj9T7tphE2UFqY3YH58VY_MAAAFr0bqt_QMAAAH_ATsHpUU/nii/%7B%22ni%22:true%7D", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/AMS/banners1/Home-Products._CB454409463_.jpg", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("index_2", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("af_link_handler_html_2");
    ns_web_url ("af_link_handler_html_2",
        "URL=https://www.amazon.in/gp/aq-feedback/lazyLoad/handler/af-link-handler.html?pl=%7B%22adPlacementMetaData%22%3A%7B%22pageUrl%22%3A%22aHR0cHM6Ly93d3cuYW1hem9uLmluL3Nob3BwaW5nUG9ydGFsL2Rlc2t0b3A%3D%22%2C%22adElementId%22%3A%22ape_Gateway_desktop-ad-center-1_desktop_placement%22%2C%22pageType%22%3A%22Gateway%22%2C%22slotName%22%3A%22desktop-ad-center-1%22%7D%2C%22adCreativeMetaData%22%3A%7B%22adNetwork%22%3A%22cs%22%7D%7D",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;csm-hit;ubid-acbin;x-wl-uid;session-token;session-id-time;visitCount",
        "PreSnapshot=webpage_1562591815836.png",
        "Snapshot=webpage_1562591815852.png",
        INLINE_URLS,
            "URL=https://aax-eu.amazon-adsystem.com/x/px/QrbxVivqGeSrkHjmfpP6LNUAAAFr0bqt_QMAAAH_AdTpgdw/nii/%7B%22ni%22:true%7D", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/AMS/banners1/Fashion._CB454409460_.jpg", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("af_link_handler_html_2", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("af_link_handler_html_3");
    ns_web_url ("af_link_handler_html_3",
        "URL=https://www.amazon.in/gp/aq-feedback/lazyLoad/handler/af-link-handler.html?pl=%7B%22adPlacementMetaData%22%3A%7B%22pageUrl%22%3A%22aHR0cHM6Ly93d3cuYW1hem9uLmluL3Nob3BwaW5nUG9ydGFsL2Rlc2t0b3A%3D%22%2C%22adElementId%22%3A%22ape_Gateway_right-7_desktop_placement%22%2C%22pageType%22%3A%22Gateway%22%2C%22slotName%22%3A%22right-7%22%7D%2C%22adCreativeMetaData%22%3A%7B%22adNetwork%22%3A%22cs%22%7D%7D",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;csm-hit;ubid-acbin;x-wl-uid;session-token;session-id-time;visitCount",
        "PreSnapshot=webpage_1562591815852.png",
        "Snapshot=webpage_1562591814461.png"
    );

    ns_end_transaction("af_link_handler_html_3", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("record_impressions_2");
    ns_web_url ("record_impressions_2",
        "URL=https://www.amazon.in/ah/ajax/record-impressions?c4i=ePm_fHprndC7CsJAFATQLxrY7HtLI6iglYjWd7N7VQyJaETUnzeCIEQru2FgijmPgXDK50PXHn9AT6nLV7oNvUfFuhwtwmphNuNyMtSft90M49USp_7HttnfcwI1CZfmU_zzMjoOUTKDrFLQiSO8tBLOiEpK0kkIN5TQbINiY2FV4H7jBSKZAqag-BoJ1vaj9YZAR3WNXT61mHwBeuedkyaDhYjQvk9EqoK2JlryMqvsX8hP9WFuIQ&rId=FQHMBRA36T6KVA44S1T8&mkId=A21TJRUUN4KGV&exp=1562591920841&h=70d4f85b51b72dbb9ee1178d785071ae1438cabbb3cd9d514c8af88c47a838c7",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;csm-hit;ubid-acbin;x-wl-uid;session-token;session-id-time;visitCount",
        "PreSnapshot=webpage_1562591814461.png",
        "Snapshot=webpage_1562591814891.png",
        INLINE_URLS,
            "URL=https://www.amazon.in/gp/uedata?ld&v=0.204437.0&id=FQHMBRA36T6KVA44S1T8&sw=1536&sh=864&vw=609&vh=343&m=1&sc=FQHMBRA36T6KVA44S1T8&ue=7&bb=2333&ns=2335&ne=2888&cf=3193&af=3512&be=4393&fp=3047&fcp=3047&pc=14179&tc=-520&na_=-520&ul_=-1562591800631&_ul=-1562591800631&rd_=-1562591800631&_rd=-1562591800631&fe_=-520&lk_=-437&_lk=-388&co_=-388&_co=-272&sc_=-381&rq_=-270&rs_=-67&_rs=1062&dl_=-33&di_=4407&de_=4407&_de=4409&_dc=14179&ld_=14179&_ld=-1562591800631&ntd=-1&ty=0&rc=0&hob=3&hoe=7&ld=14180&t=1562591814811&ctb=1&rt=cf:53-5-3-45-1-0-1_af:63-7-3-53-2-0-1_ld:196-9-3-170-8-0-0&csmtags=aui|aui:aui_build_date:3.19.4-2019-06-27|navbar|gwCFImgNoCache|ABPStatusUnknown:Gateway:right-2:desktop|ABPStatusUnknown:Gateway:desktop-ad-center-1:desktop|ABPStatusUnknown:Gateway:right-7:desktop|iss-on-time|fls-eu|aui:ajax|noadrender:Gateway:right-2:desktop|noadrender:Gateway:desktop-ad-center-1:desktop|noadrender:e44985f6-46f4-4231-90aa-f5c16f7c50aa|noadrender:Gateway:right-7:desktop|noadrender:d28cb697-85f2-43bd-9473-37dfd1e3666a&viz=visible:6&pty=Gateway&spty=desktop&pti=desktop&tid=FQHMBRA36T6KVA44S1T8&aftb=1", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;csm-hit;ubid-acbin;x-wl-uid;session-token;session-id-time;visitCount", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:FQHMBRA36T6KVA44S1T8$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DFQHMBRA36T6KVA44S1T8%26sw%3D1536%26sh%3D864%26vw%3D609%26vh%3D343%26m%3D1%26sc%3DFQHMBRA36T6KVA44S1T8%26ue%3D7%26bb%3D2333%26ns%3D2335%26ne%3D2888%26cf%3D3193%26af%3D3512%26be%3D4393%26fp%3D3047%26fcp%3D3047%26pc%3D14179%26tc%3D-520%26na_%3D-520%26ul_%3D-1562591800631%26_ul%3D-1562591800631%26rd_%3D-1562591800631%26_rd%3D-1562591800631%26fe_%3D-520%26lk_%3D-437%26_lk%3D-388%26co_%3D-388%26_co%3D-272%26sc_%3D-381%26rq_%3D-270%26rs_%3D-67%26_rs%3D1062%26dl_%3D-33%26di_%3D4407%26de_%3D4407%26_de%3D4409%26_dc%3D14179%26ld_%3D14179%26_ld%3D-1562591800631%26ntd%3D-1%26ty%3D0%26rc%3D0%26hob%3D3%26hoe%3D7%26ld%3D14180%26t%3D1562591814811%26ctb%3D1%26rt%3Dcf%3A53-5-3-45-1-0-1_af%3A63-7-3-53-2-0-1_ld%3A196-9-3-170-8-0-0%26csmtags%3Daui%7Caui%3Aaui_build_date%3A3.19.4-2019-06-27%7Cnavbar%7CgwCFImgNoCache%7CABPStatusUnknown%3AGateway%3Aright-2%3Adesktop%7CABPStatusUnknown%3AGateway%3Adesktop-ad-center-1%3Adesktop%7CABPStatusUnknown%3AGateway%3Aright-7%3Adesktop%7Ciss-on-time%7Cfls-eu%7Caui%3Aajax%7Cnoadrender%3AGateway%3Aright-2%3Adesktop%7Cnoadrender%3AGateway%3Adesktop-ad-center-1%3Adesktop%7Cnoadrender%3Ae44985f6-46f4-4231-90aa-f5c16f7c50aa%7Cnoadrender%3AGateway%3Aright-7%3Adesktop%7Cnoadrender%3Ad28cb697-85f2-43bd-9473-37dfd1e3666a%26viz%3Dvisible%3A6%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DFQHMBRA36T6KVA44S1T8%26aftb%3D1:14183", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;session-id-time;visitCount", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:FQHMBRA36T6KVA44S1T8$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DFQHMBRA36T6KVA44S1T8%26sc0%3Dportal-bb%26pc0%3D1%26ld0%3D1%26t0%3D1562591802965%26sc1%3Diss-init-pc%26bb1%3D2345%26cf1%3D4265%26be1%3D4265%26pc1%3D4265%26ld1%3D4265%26t1%3D1562591804896%26sc2%3Dh1Af%26cf2%3D2349%26pc2%3D2349%26ld2%3D2349%26t2%3D1562591802980%26sc3%3Ddesktop-grid-1-D1-visible%26cf3%3D2354%26pc3%3D2354%26ld3%3D2354%26t3%3D1562591802985%26sc4%3Ddesktop-grid-1-D1-active%26cf4%3D2359%26pc4%3D2359%26ld4%3D2359%26t4%3D1562591802990%26sc5%3DnavCF%26cf5%3D2982%26pc5%3D2982%26ld5%3D2982%26t5%3D1562591803613%26sc6%3Ddesktop-editorial-visible%26cf6%3D3066%26pc6%3D3066%26ld6%3D3066%26t6%3D1562591803697%26sc7%3Ddesktop-editorial-active%26cf7%3D3066%26pc7%3D3066%26ld7%3D3066%26t7%3D1562591803697%26sc8%3DjQueryReady%26cf8%3D3067%26pc8%3D3067%26ld8%3D3067%26t8%3D1562591803698%26sc9%3DgwGridInit%26cf9%3D3069%26pc9%3D3069%26ld9%3D3069%26t9%3D1562591803700%26sc10%3Ddesktop-btf-grid-5-visible%26cf10%3D3085%26pc10%3D3085%26ld10%3D3085%26t10%3D1562591803716%26sc11%3Ddesktop-btf-grid-6-visible%26cf11%3D3337%26pc11%3D3337%26ld11%3D3337%26t11%3D1562591803968%26sc12%3Ddesktop-btf-grid-7-visible%26cf12%3D3339%26pc12%3D3339%26ld12%3D3339%26t12%3D1562591803970%26sc13%3Ddesktop-btf-grid-8-visible%26cf13%3D3340%26pc13%3D3340%26ld13%3D3340%26t13%3D1562591803971%26sc14%3Dgateway-asset-load%26cf14%3D3342%26pc14%3D3342%26ld14%3D3342%26t14%3D1562591803973%26sc15%3Ddesktop-4-visible%26cf15%3D3459%26pc15%3D3459%26ld15%3D3459%26t15%3D1562591804090%26sc16%3Ddesktop-grid-1-visible%26cf16%3D3504%26pc16%3D3504%26ld16%3D3504%26t16%3D1562591804135%26sc17%3Ddesktop-grid-2-visible%26cf17%3D3505%26pc17%3D3505%26ld17%3D3505%26t17%3D1562591804136%26sc18%3Ddesktop-grid-3-visible%26cf18%3D3511%26pc18%3D3511%26ld18%3D3511%26t18%3D1562591804142%26sc19%3Ddesktop-grid-4-visible%26cf19%3D3511%26pc19%3D3511%26ld19%3D3511%26t19%3D1562591804142%26sc20%3Ddesktop-grid-5-visible%26cf20%3D3512%26pc20%3D3512%26ld20%3D3512%26t20%3D1562591804143%26sc21%3DspLoadJs%26cf21%3D3512%26pc21%3D3512%26ld21%3D3512%26t21%3D1562591804143%26sc22%3Ddesktop-btf-grid-9-visible%26cf22%3D3516%26pc22%3D3516%26ld22%3D3516%26t22%3D1562591804147%26sc23%3Ddesktop-btf-grid-10-visible%26cf23%3D3517%26pc23%3D3517%26ld23%3D3517%26t23%3D1562591804148%26sc24%3Ddesktop-5-visible%26cf24%3D3533%26pc24%3D3533%26ld24%3D3533%26t24%3D1562591804164%26sc25%3Ddesktop-6-visible%26cf25%3D3548%26pc25%3D3548%26ld25%3D3548%26t25%3D1562591804179%26sc26%3Ddesktop-btf-grid-11-visible%26cf26%3D3600%26pc26%3D3600%26ld26%3D3600%26t26%3D1562591804231%26sc27%3Ddesktop-btf-grid-12-visible%26cf27%3D3600%26pc27%3D3600%26ld27%3D3600%26t27%3D1562591804231%26sc28%3Diss-warmup%3Asuccess%26bb28%3D4281%26cf28%3D5465%26be28%3D5465%26pc28%3D5465%26ld28%3D5465%26t28%3D1562591806096%26sc29%3Ddesktop-7-visible%26cf29%3D4372%26pc29%3D4372%26ld29%3D4372%26t29%3D1562591805003%26sc30%3DcsmCELLSframework%26bb30%3D4396%26pc30%3D4396%26ld30%3D4396%26t30%3D1562591805027%26sc31%3DcsmCELLSpdm%26bb31%3D4396%26pc31%3D4398%26ld31%3D4398%26t31%3D1562591805029%26sc32%3DcsmCELLSvpm%26bb32%3D4398%26pc32%3D4398%26ld32%3D4398%26t32%3D1562591805029%26sc33%3DcsmCELLSfem%26bb33%3D4398%26pc33%3D4399%26ld33%3D4399%26t33%3D1562591805030%26sc34%3Due_sushi_v1%26bb34%3D4402%26pc34%3D4404%26ld34%3D4404%26t34%3D1562591805035%26sc35%3DjQueryDomReady%26cf35%3D4408%26pc35%3D4408%26ld35%3D4408%26t35%3D1562591805039%26sc36%3Ddesktop-1-active%26cf36%3D4408%26pc36%3D4408%26ld36%3D4408%26t36%3D1562591805039%26sc37%3Ddesktop-2-active%26cf37%3D4408%26pc37%3D4408%26ld37%3D4408%26t37%3D1562591805039%26sc38%3Ddesktop-3-active%26cf38%3D4408%26pc38%3D4408%26ld38%3D4408%26t38%3D1562591805039%26sc39%3Ddesktop-4-active%26cf39%3D4408%26pc39%3D4408%26ld39%3D4408%26t39%3D1562591805039%26sc40%3Ddesktop-5-active%26cf40%3D4408%26pc40%3D4408%26ld40%3D4408%26t40%3D1562591805039%26sc41%3Ddesktop-6-active%26cf41%3D4408%26pc41%3D4408%26ld41%3D4408%26t41%3D1562591805039%26sc42%3Ddesktop-7-active%26cf42%3D4408%26pc42%3D4408%26ld42%3D4408%26t42%3D1562591805039%26sc43%3DgwBTFGridInit%26cf43%3D4414%26pc43%3D4414%26ld43%3D4414%26t43%3D1562591805045%26sc44%3DgwLayoutReady%26cf44%3D4671%26pc44%3D4671%26ld44%3D4671%26t44%3D1562591805302%26sc45%3DgwAUIReady%26cf45%3D4682%26pc45%3D4682%26ld45%3D4682%26t45%3D1562591805313%26sc46%3Dgw-hero-btf-populate%26cf46%3D4801%26pc46%3D4801%26ld46%3D4801%26t46%3D1562591805432%26sc47%3DgwHerotatorActive%26cf47%3D4812%26pc47%3D4812%26ld47%3D4812%26t47%3D1562591805443%26sc48%3Ddesktop-grid-6-visible%26cf48%3D5069%26pc48%3D5069%26ld48%3D5069%26t48%3D1562591805700%26sc49%3Ddesktop-grid-7-visible%26cf49%3D5136%26pc49%3D5136%26ld49%3D5136%26t49%3D1562591805767%26sc50%3Ddesktop-2-visible%26cf50%3D5316%26pc50%3D5317%26ld50%3D5317%26t50%3D1562591805948%26sc51%3Ddesktop-btf-grid-1-visible%26cf51%3D5327%26pc51%3D5327%26ld51%3D5327%26t51%3D1562591805958%26sc52%3Ddesktop-btf-grid-2-visible%26cf52%3D5429%26pc52%3D5429%26ld52%3D5429%26t52%3D1562591806060%26sc53%3Ddesktop-btf-grid-3-visible%26cf53%3D5449%26pc53%3D5449%26ld53%3D5449%26t53%3D1562591806080%26sc54%3Ddesktop-btf-grid-4-visible%26cf54%3D5611%26pc54%3D5611%26ld54%3D5611%26t54%3D1562591806242%26sc55%3Ddesktop-3-visible%26cf55%3D5873%26pc55%3D5873%26ld55%3D5873%26t55%3D1562591806504%26sc56%3Ddesktop-1-visible%26cf56%3D6293%26pc56%3D6293%26ld56%3D6293%26t56%3D1562591806924%26ctb%3D1:14183", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;session-id-time;visitCount", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/01/AUIClients/ClientSideMetricsAUIJavascript@jserrorsForester.10f2559e93ec589d92509318a7e2acbac74c343a._V2_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/csm/showads.v2.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:FQHMBRA36T6KVA44S1T8$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DFQHMBRA36T6KVA44S1T8%26ctb%3D1%26sc0%3DjQueryWindowLoad%26cf0%3D14187%26pc0%3D14187%26ld0%3D14187%26t0%3D1562591814818%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DFQHMBRA36T6KVA44S1T8%26aftb%3D1:14187", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;session-id-time;visitCount", END_INLINE
    );

    ns_end_transaction("record_impressions_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("sessionCacheUpdateHandler_ht");
    ns_web_url ("sessionCacheUpdateHandler_ht",
        "URL=https://www.amazon.in/gp/product/sessionCacheUpdateHandler.html",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "COOKIE=session-id;i18n-prefs;csm-hit;ubid-acbin;x-wl-uid;session-token;session-id-time;visitCount",
        "PreSnapshot=webpage_1562591814891.png",
        "Snapshot=webpage_1562591815073.png",
        BODY_BEGIN,
            "sessionCacheUpdateFlag=1&pageType=Gateway&browserWidth=609&browserHeight=343&token=fVoboEDsYMjWCjzTN8sCObLZif2%2FoaBmQ3S2N5KuRr8%3D",
        BODY_END
    );

    ns_end_transaction("sessionCacheUpdateHandler_ht", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("LU_Announce_1500x300_Desktop");
    ns_web_url ("LU_Announce_1500x300_Desktop",
        "URL=https://images-eu.ssl-images-amazon.com/images/G/31/prime/Events/Bruno/GW/LU_Announce_1500x300_Desktop_Hero_dv1._CB444413363_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562591815073.png",
        "Snapshot=webpage_1562591815131.png",
        INLINE_URLS,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUIFont-amazonember_rg-cc7ebaa05a2cd3b02c0929ac0475a44ab30b7efa._V2_.woff2", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUIFont-amazonember_bd-46b91bda68161c14e554a779643ef4957431987b._V2_.woff2", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUIFont-amazonember_rgit-9cc1bb64eb270135f1adf3a4881c2ee5e7c37be5._V2_.woff2", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUIFont-amazonember_bdit-80ff7aba37dd1ff5a6b90233a19e3a780a96dc2f._V2_.woff2", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("LU_Announce_1500x300_Desktop", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1uWy869jVL___AC_SY200__jpg");
    ns_web_url ("X1uWy869jVL___AC_SY200__jpg",
        "URL=https://images-na.ssl-images-amazon.com/images/I/41uWy869jVL.__AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562591815131.png",
        "Snapshot=webpage_1562591815140.png"
    );

    ns_end_transaction("X1uWy869jVL___AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1BoRbs_2BFIL___AC_SY200__jp");
    ns_web_url ("X1BoRbs_2BFIL___AC_SY200__jp",
        "URL=https://images-na.ssl-images-amazon.com/images/I/31BoRbs%2BFIL.__AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562591815140.png",
        "Snapshot=webpage_1562591815151.png"
    );

    ns_end_transaction("X1BoRbs_2BFIL___AC_SY200__jp", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1wdwK_zHML___AC_SY200__jpg");
    ns_web_url ("X1wdwK_zHML___AC_SY200__jpg",
        "URL=https://images-na.ssl-images-amazon.com/images/I/41wdwK-zHML.__AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562591815151.png",
        "Snapshot=webpage_1562591815162.png"
    );

    ns_end_transaction("X1wdwK_zHML___AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1JCXXgqi3L___AC_SY200__jpg");
    ns_web_url ("X1JCXXgqi3L___AC_SY200__jpg",
        "URL=https://images-na.ssl-images-amazon.com/images/I/41JCXXgqi3L.__AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562591815162.png",
        "Snapshot=webpage_1562591815175.png"
    );

    ns_end_transaction("X1JCXXgqi3L___AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1qeZ8s_2BacL___AC_SY200__jp");
    ns_web_url ("X1qeZ8s_2BacL___AC_SY200__jp",
        "URL=https://images-na.ssl-images-amazon.com/images/I/41qeZ8s%2BacL.__AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562591815175.png",
        "Snapshot=webpage_1562591815191.png"
    );

    ns_end_transaction("X1qeZ8s_2BacL___AC_SY200__jp", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1UHoxzInpL___AC_SY200__jpg");
    ns_web_url ("X1UHoxzInpL___AC_SY200__jpg",
        "URL=https://images-na.ssl-images-amazon.com/images/I/51UHoxzInpL.__AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562591815191.png",
        "Snapshot=webpage_1562591815206.png"
    );

    ns_end_transaction("X1UHoxzInpL___AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1M6tq_U1yL__AC_SY200__jpg");
    ns_web_url ("X1M6tq_U1yL__AC_SY200__jpg",
        "URL=https://images-eu.ssl-images-amazon.com/images/I/61M6tq+U1yL._AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562591815206.png",
        "Snapshot=webpage_1562591815219.png"
    );

    ns_end_transaction("X1M6tq_U1yL__AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X10Yn8H_iTL__AC_SY200__jpg");
    ns_web_url ("X10Yn8H_iTL__AC_SY200__jpg",
        "URL=https://images-eu.ssl-images-amazon.com/images/I/710Yn8H-iTL._AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562591815219.png",
        "Snapshot=webpage_1562591815232.png"
    );

    ns_end_transaction("X10Yn8H_iTL__AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1WbVAfEw9L__AC_SY200__jpg");
    ns_web_url ("X1WbVAfEw9L__AC_SY200__jpg",
        "URL=https://images-eu.ssl-images-amazon.com/images/I/81WbVAfEw9L._AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562591815232.png",
        "Snapshot=webpage_1562591815247.png"
    );

    ns_end_transaction("X1WbVAfEw9L__AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1sCN4rZSBL__AC_SY200__jpg");
    ns_web_url ("X1sCN4rZSBL__AC_SY200__jpg",
        "URL=https://images-eu.ssl-images-amazon.com/images/I/91sCN4rZSBL._AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562591815247.png",
        "Snapshot=webpage_1562591815265.png"
    );

    ns_end_transaction("X1sCN4rZSBL__AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1jzLbgQ8uL__AC_SY200__jpg");
    ns_web_url ("X1jzLbgQ8uL__AC_SY200__jpg",
        "URL=https://images-eu.ssl-images-amazon.com/images/I/81jzLbgQ8uL._AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562591815265.png",
        "Snapshot=webpage_1562591815279.png"
    );

    ns_end_transaction("X1jzLbgQ8uL__AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1wyXTn7IWL__AC_SY200__jpg");
    ns_web_url ("X1wyXTn7IWL__AC_SY200__jpg",
        "URL=https://images-eu.ssl-images-amazon.com/images/I/71wyXTn7IWL._AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562591815279.png",
        "Snapshot=webpage_1562591816090.png",
        INLINE_URLS,
            "URL=https://www.amazon.in/gp/uedata?at&v=0.204437.0&id=FQHMBRA36T6KVA44S1T8&m=1&sc=adblk_no&pc=14446&at=14446&t=1562591815077&csmtags=aui:sw:browser:register:supported|adblk_no&pty=Gateway&spty=desktop&pti=desktop&tid=FQHMBRA36T6KVA44S1T8&aftb=1", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;session-id-time;visitCount;csm-hit", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:FQHMBRA36T6KVA44S1T8$uedata=s:%2Fgp%2Fuedata%3Fat%26v%3D0.204437.0%26id%3DFQHMBRA36T6KVA44S1T8%26m%3D1%26sc%3Dadblk_no%26pc%3D14446%26at%3D14446%26t%3D1562591815077%26csmtags%3Daui%3Asw%3Abrowser%3Aregister%3Asupported%7Cadblk_no%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DFQHMBRA36T6KVA44S1T8%26aftb%3D1:14445", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;session-id-time;visitCount", END_INLINE,
            "URL=https://www.amazon.in/service-worker.js", "HEADER=Service-Worker:script", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;session-id-time;visitCount;csm-hit", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/javascripts/lib/popover/images/snake._CB138350263_.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/gno/sprites/nav-sprite-global_bluebeacon-V3-2x_optimized._CB468962293_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/iu3?d=amazon.in&slot=navFooter&a2=010167e39654ed462ded327d5bc14af764ce778e0ead47b9221cdb8bb4f01946cace&old_oo=0&ts=1562591800856&s=ARGkJ-texgWfQ7O9WLUsM_pPjgTLGp8iQqIB5sd_vocx&cb=1562591800856", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-in", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/iu3?d=amazon.in&slot=navFooter&a2=010167e39654ed462ded327d5bc14af764ce778e0ead47b9221cdb8bb4f01946cace&old_oo=0&ts=1562591800856&s=ARGkJ-texgWfQ7O9WLUsM_pPjgTLGp8iQqIB5sd_vocx&cb=1562591800856&dcc=t", END_INLINE
    );

    ns_end_transaction("X1wyXTn7IWL__AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_3");
    ns_web_url ("index_3",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time",
        "PreSnapshot=webpage_1562591816090.png",
        "Snapshot=webpage_1562591819710.png",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/index_3_url_0_1_1562592358719.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/authportal/flex/reduced-nav/ap-flex-reduced-nav-2.0._CB309255176_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/authportal/common/css/ap_global._CB350157780_.css", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/cs/ya/images/shipment_large_lt._CB380683640_.gif", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/cs/ya/images/new-link._CB380689125_.gif", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41fMrDoAFbL._RC%7C71GkUD1temL.js,61u3dpzHy+L.js,41W9ohA0e+L.js,11vrNkbdcvL.js,21SHd9g2LAL.js,311T8Q1zWKL.js,51+klsvwgqL.js,31IEOtBPX+L.js_.js?AUIClients/AmazonNavigationDesktopMetaAsset#desktop", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/cs/orders/images/amazon-gcs-100._CB349914299_.gif", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/iu3?d=amazon.in&slot=navFooter&a2=010167e39654ed462ded327d5bc14af764ce778e0ead47b9221cdb8bb4f01946cace&old_oo=0&ts=1562591800856&s=ARGkJ-texgWfQ7O9WLUsM_pPjgTLGp8iQqIB5sd_vocx&cb=1562591800856&dcc=t", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-in", "COOKIE=ad-id", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/v3/pr?exlist=pp_mp_sx_af_kr_g_bsw_ox_index_aold_an_rb_fw_imdb_fbca_twca_y_pm_rlsa_adb&fv=1.0&ex-pl-fbca=pvSD9JPSSV-kw9p2-_rVKw&ex-pl-twca=TxUMpLjCQra7Z9ymu-dsNQ&a=cm&ep=56S1zdFH6tTUgJLFX4EgHSq66H5LmgZB5P2akl2q-7NgVTgbXmUvUalnyFJLbo_L-1EfqTvMF0J2JWHA25fqYeID8eeki-w-sY5hbipzCxP9TLRvhIqYuXWtaD4adE1Zt-f7C9CAvaTPENuM7-BqPpTqPrTxPhPihH2vvlOcD6KgCyvuBwX3FwbuxLOra1OqT_xGBiAA8sjuYxtaa97ksQ", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/21E2aIDj6DL._RC%7C31eEXkvrJzL.js,01g2etah0NL.js,01Re6AqkVUL.js,31selSsN+1L.js,413u98XONQL.js,01Ng0K110HL.js,21JtT0mJXEL.js,31vMFUg376L.js,11dhZ6zkMNL.js,71LEtO5Vv5L.js,0185ITV0M6L.js,41Dds42UuNL.js,31UjTApGOPL.js,01wYyhYnnFL.js,01LHJt5PiyL.js,31Ac-cQ+ZWL.js,01VgEfU-GFL.js,01JzE3-DfLL.js,11MQqFPEK+L.js,01jqyAujTwL.js,31+0pACITzL.js,01OtvpwikQL.js,21J9Onr4hrL.js,11nOzlnr6+L.js,31BBQa2c9BL.js,31Gy8EGyyiL.js,11p0nLfNCcL.js,11iHZuQapKL.js,01t2esUHF0L.js,218rehcHYxL.js,11qRTlQry4L.js,51foFGmxtyL.js,01qPwv8D5hL.js,01rg6Ce9FhL.js,016QFWAAdML.js,31NuG3-7xRL.js,019W6kk1gjL.js,01hkseOXj6L.js_.js?AUIClients/MediaDetailPageMetaAsset#language-en.in.167162-T1.151985-T1.183511-T1.103061-T1.186073-T2.200616-T1.173971-T1.131900-C.156391-T1.109378-T1.154031-T3.198898-C", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31SN3jkqdEL.css?AUIClients/DetailPageSnSAssets#215632-C.109378-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/cs/help/images/spotlight/kindle-family-02b._CB160654563_.jpg", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/gno/images/general/navAmazonLogoFooter._CB391206769_.gif", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/errors-alerts/error-styles-ssl._CB138362389_.css", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://bh.contextweb.com/bh/rtset?pid=557477&ev=&rurl=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fid%3D%25%25VGUID%25%25%26ex%3Dpulsepoint.com%26", "HEADER=Accept-Language:en-in", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?id=qiL2sYlIvmOJ&ex=pulsepoint.com&&ev=&pid=557477", END_INLINE,
            "URL=https://odr.mookie1.com/t/v2?tagid=V2_393725&AMAZON_REGION_SPECIFIC_ENDPOINT=aax-eu.amazon-adsystem.com/s&src.visitorID=8cEmYv2_SXGrMW1zp8qztA", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://sync.search.spotxchange.com/partner?adv_id=7922&redir=https://aax-eu.amazon-adsystem.com%2Fs/ecm3?ex%3Dspotx.com%26id%3D%24SPOTX_USER_ID", "HEADER=Accept-Language:en-in", "REDIRECT=YES", "LOCATION=/partner?adv_id=7922&redir=https://aax-eu.amazon-adsystem.com%2Fs/ecm3?ex%3Dspotx.com%26id%3D%24SPOTX_USER_ID&__user_check__=1&sync_id=ac23bb48-a182-11e9-a5c0-11edc3221a07", END_INLINE,
            "URL=https://c1.adform.net/serving/cookie/match?party=1153&redirect_url=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dadform.net%26id%3D%24%7BUUID%7D", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://usermatch.krxd.net/um/v2?partner=amzn", "HEADER=Accept-Language:en-in", "REDIRECT=YES", "LOCATION=https://beacon.krxd.net/usermatch.gif?kuid_status=new&partner=amzn", END_INLINE,
            "URL=https://cm.g.doubleclick.net/pixel?google_nid=a9eu&google_cm&ex=doubleclick.net&", "HEADER=Accept-Language:en-in", "COOKIE=test_cookie", END_INLINE,
            "URL=https://x.bidswitch.net/sync_a9/https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dbidswitch.com%26id%3D%24%7BUUID%7D", "HEADER=Accept-Language:en-in", "REDIRECT=YES", "LOCATION=https://x.bidswitch.net/ul_cb/sync_a9/https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dbidswitch.com%26id%3D%24%7BUUID%7D", END_INLINE,
            "URL=https://us-u.openx.net/w/1.0/cm?id=e818ca1e-0c23-caa8-0dd3-096b0ada08b7&r=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dopenx.com%26id%3D", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://ssum-sec.casalemedia.com/usermatchredir?s=184155&cb=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dindex%26id%3D__UID__", "HEADER=Accept-Language:en-in", "REDIRECT=YES", "LOCATION=https://ssum-sec.casalemedia.com/usermatchredir?s=184155&cb=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dindex%26id%3D__UID__&C=1", END_INLINE,
            "URL=https://pixel.advertising.com/ups/56613/sync?redir=true&_origin=1", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/956747825/?userId=6NsKPqBZTUKyvEDQsOJMSA&guid=ON&script=0", "HEADER=Accept-Language:en-in", "COOKIE=test_cookie", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/common/sprites/sprite-communities._V138349855_.png", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/authportal/flex/reduced-nav/ap-flex-reduced-nav-2.1._CB343893441_.css", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/01/browser-scripts/dpSpritesCSS/en_IN-secure-combined-1941710172._CB357966679_.css", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/common/sprites/sprite-site-wide-2._V361508071_.png", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/956747825/?userId=6NsKPqBZTUKyvEDQsOJMSA&guid=ON&script=0&cdct=2&is_vtc=1&random=1660364073", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/cs/projects/text-trace/texttrace_typ._CB353753460_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=mplatform.com&id=10527375235316175181", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51foFGmxtyL.js?AUIClients/DetailPageSnSAssets#109378-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/01/browser-scripts/fruitCSS/en_IN-secure-combined-2105474903._CB346536702_.css", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/956747825/?userId=6NsKPqBZTUKyvEDQsOJMSA&guid=ON&script=0&cdct=2&is_vtc=1&random=1660364073&ipr=y", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/checkout/signin-banner._CB138348958_.gif", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210LbiKyCML._RC%7C31j6BOPjmzL.css,01ekIXTj5kL.css,01KvCqKMBgL.css,21ckusqmu6L.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,310NMB80xGL.css,41hIrT0+wbL.css,01FlII1u-ZL.css,219oCRGl-sL.css,212hS9k0-iL.css,31MkQHV3gaL.css,314gb2LkLML.css,31dTK1hHb6L.css,014Z+MbaRaL.css,01RRH0yFa4L.css,01bkkYjxP7L.css,31Wg0ai095L.css,01f31VNCowL.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,31Fo-RK+JML.css,01CslPlvtoL.css,11Z7S+lK47L.css,21Wf53xZ5jL.css,01OhA16ND1L.css,01tBHVauY+L.css,41Uz4bMH9yL.css,01TZ9fpDSSL.css,01IY99sMV0L.css,01qwEWNuxuL.css,21qxDmhZV3L.css,11XXguyjjZL.css,31WlxajeYrL.css,01clde05tlL.css,01nX97hgmYL.css,61hZ-YG-XRL.css,01Jrt6rHBlL.css_.css?AUIClients/HardlinesDetailPageMetaAssetVariable_ACCESSORIES_AND_FAMILY_STRIPE#in.not-trident.122952-T1.203659-T1.103061-T1.184424-T1.150150-T1.144201-T1.126331-C", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=doubleclick.net&google_gid=CAESEGIA0-HnR5ORhoqKLyfB5uY&google_cver=1", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://ib.adnxs.com/getuid?https://aax-eu.amazon-adsystem.com/s/ecm3?id=$UID&ex=appnexus.com&", "HEADER=Accept-Language:en-in", "REDIRECT=YES", "LOCATION=https://ib.adnxs.com/bounce?%2Fgetuid%3Fhttps%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fid%3D%24UID%26ex%3Dappnexus.com%26", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ET%2BPmLUUL._RC%7C119njhJT7LL.css,51QoAH-sF5L.css,01g2EoxOu-L.css,01N8OOpUZPL.css,11xRy3bSkOL.css,01QUs5FVXoL.css,31JMnREMjZL.css,012ofCl9AfL.css,41vOQb1k0LL.css,01FtAuFRr3L.css,01rgQ3jqo7L.css,21Qg7xEbEIL.css,312UeeukJML.css,11X8K4AolpL.css,21cgGInnQ9L.css,21QKJp6qQ9L.css,31cE7qTuwaL.css_.css?AUIClients/HardlinesDetailPageMetaAssetFixed#in.131900-C.129737-C.94145-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/authportal/common/images/amazon_logo_no-org_mid._CB377570192_.png", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210LbiKyCML._RC%7C31j6BOPjmzL.css,01ekIXTj5kL.css,01KvCqKMBgL.css,21ckusqmu6L.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,310NMB80xGL.css,41hIrT0+wbL.css,01FlII1u-ZL.css,219oCRGl-sL.css,212hS9k0-iL.css,31MkQHV3gaL.css,314gb2LkLML.css,31dTK1hHb6L.css,014Z+MbaRaL.css,01RRH0yFa4L.css,01bkkYjxP7L.css,31Wg0ai095L.css,01f31VNCowL.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,31Fo-RK+JML.css,01CslPlvtoL.css,11Z7S+lK47L.css,21Wf53xZ5jL.css,01OhA16ND1L.css,01tBHVauY+L.css,41Uz4bMH9yL.css,01TZ9fpDSSL.css,01IY99sMV0L.css,01qwEWNuxuL.css,21qxDmhZV3L.css,11XXguyjjZL.css,31WlxajeYrL.css,01clde05tlL.css_.css?AUIClients/HardlinesDetailPageMetaAssetVariable#in.not-trident.122952-T1.203659-T1.103061-T1.184424-T1.150150-T1.144201-T1.126331-C", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://us-u.openx.net/w/1.0/cm?cc=1&id=e818ca1e-0c23-caa8-0dd3-096b0ada08b7&r=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dopenx.com%26id%3D", "HEADER=Accept-Language:en-in", "COOKIE=i", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?id=qiL2sYlIvmOJ&ex=pulsepoint.com&&ev=&pid=557477", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://x.bidswitch.net/ul_cb/sync_a9/https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dbidswitch.com%26id%3D%24%7BUUID%7D", "HEADER=Accept-Language:en-in", "COOKIE=tuuid;c;tuuid_lu", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=bidswitch.com&id=8bd679a7a24b554bebad17529bd46b56", END_INLINE,
            "URL=https://token.rubiconproject.com/token?pid=2179&pt=n", "HEADER=Accept-Language:en-in", "REDIRECT=YES", "LOCATION=https://s.amazon-adsystem.com/ecm3?id=I75Kf5ZphTJ5k3wBXs4amMWWwYjZzChgQG1x_JmYjWc&ex=rubiconproject.com&status=ok", END_INLINE,
            "URL=https://pixel.advertising.com/ups/56613/sync?redir=true&_origin=1&verify=true", "HEADER=Accept-Language:en-in", "COOKIE=APID", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=openx.com&id=6e740b3c-5044-c543-10e4-ecc6ec224fc2", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://ads.stickyadstv.com/user-matching?id=2545", "HEADER=Accept-Language:en-in", "REDIRECT=YES", "LOCATION=https://s.amazon-adsystem.com/ecm3?id=a73a8460713e33823f5ca334d931bd&ex=freewheel.tv", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?kuid_status=new&partner=amzn", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://ups.analytics.yahoo.com/ups/56613/sync?redir=true&_origin=1&apid=UPaa6755fb-a182-11e9-b171-024ed88a5a80", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://ssum-sec.casalemedia.com/usermatchredir?s=184155&cb=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dindex%26id%3D__UID__&C=1", "HEADER=Accept-Language:en-in", "COOKIE=CMID;CMPS", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=index&id=FHF1ezdcefJwUgLYR7huNTdXcwQ4ZgAC", END_INLINE
    );

    ns_end_transaction("index_3", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("record_impressions_3");
    ns_web_url ("record_impressions_3",
        "URL=https://www.amazon.in/ah/ajax/record-impressions?c4i=ePm_fHprndDBasMwEATQLxpYWZIlH51AU4hPxbTntXaVhho7OA4l6c_XhULA7SnXOQwz72slLHr-mMfTP9A7nvWTr2vv2rxu6qZqG_-23Tyt9ffj_Ixt-4Jp-XEYjjcV8CC4DPfgkZfJaGnMUqaSFS5pQOWIEExkKnIiV8laIsXc-cDLAGIL561F9M7DSkdiKRtiuWv9QmDmvse7TiN2fwCdL8ssFFEFyXC5KBGdCfA-coraccj6g_wNVEJvDw&rId=FQHMBRA36T6KVA44S1T8&mkId=A21TJRUUN4KGV&exp=1562591920842&h=ceb137daf139780d17a0c9831c8c81b5adc99785b7e4075983cf79419bcf9024",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;csm-hit;session-token;session-id-time;lc-acbin",
        "PreSnapshot=webpage_1562591819710.png",
        "Snapshot=webpage_1562591824958.png",
        INLINE_URLS,
            "URL=https://s.amazon-adsystem.com/ecm3?id=a73a8460713e33823f5ca334d931bd&ex=freewheel.tv", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://ups.analytics.yahoo.com/ups/56613/sync?redir=true&_origin=1&apid=UPaa6755fb-a182-11e9-b171-024ed88a5a80&verify=true", "HEADER=Accept-Language:en-in", "COOKIE=B", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=bidswitch.com&id=8bd679a7a24b554bebad17529bd46b56", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://ib.adnxs.com/bounce?%2Fgetuid%3Fhttps%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fid%3D%24UID%26ex%3Dappnexus.com%26", "HEADER=Accept-Language:en-in", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?id=0&ex=appnexus.com&", END_INLINE,
            "URL=https://www.imdb.com/ads/idsync?cid=79bc437ba&ex=imdb.com", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://www.facebook.com/fr/r.php?p=558293300959460&e=pvSD9JPSSV-kw9p2-_rVKw&r=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dfbca%26id%3DpvSD9JPSSV-kw9p2-_rVKw&s=1562591817&h=Ump3dFk2TE13RnEvR0xja5CMfMKeiyVCgE6xIamgcEDYuwUT", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?id=45bf7039d43cd285721935555e6cba2661b06738&ex=aoldisplay.com", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=index&id=FHF1ezdcefJwUgLYR7huNTdXcwQ4ZgAC", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?id=0&ex=appnexus.com&", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://analytics.twitter.com/i/adsct?p_id=985&p_user_id=TxUMpLjCQra7Z9ymu-dsNQ&twitter_redir=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dtwca%26id%3DTxUMpLjCQra7Z9ymu-dsNQ%26", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://ads.yahoo.com/cms/v1?esig=1~6772d6d12bf5fd5c41ee5ef107d84db09124942a&nwid=10000936839&sigv=1", "HEADER=Accept-Language:en-in", "COOKIE=B;APID;APIDTS", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=rightmedia.com&xid=JLc5VrPNF_chmb9aQBuWBvvZ", END_INLINE,
            "URL=https://image5.pubmatic.com/AdServer/usersync/usersync.html?predirect=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fid%3DPM_UID%26ex%3Dpubmatic.com&userIdMacro=PM_UID", "HEADER=Accept-Language:en-in", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?id=428D962E-D54C-4E43-BE63-9A05228F8769&ex=pubmatic.com", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11rSsS-PDPL._RC%7C218rehcHYxL.js,11qRTlQry4L.js,21E2aIDj6DL.js,31eEXkvrJzL.js,01g2etah0NL.js,01Re6AqkVUL.js,31selSsN+1L.js,413u98XONQL.js,21u1PnPEsML.js,51+io-0L8GL.js,01I-WWW2CuL.js,01AdYLY9rHL.js,01IOMCsVFCL.js,11BrVfD3DeL.js,01nnV9HCzgL.js,11dhZ6zkMNL.js,71LEtO5Vv5L.js,0185ITV0M6L.js,41Dds42UuNL.js,31UjTApGOPL.js,01wYyhYnnFL.js,01LHJt5PiyL.js,31Ac-cQ+ZWL.js,01VgEfU-GFL.js,01HmcbFsnFL.js,01JzE3-DfLL.js,31sG+M5QN5L.js,11AVRVWTouL.js,11MQqFPEK+L.js,01I+ls4AqQL.js,01jqyAujTwL.js,31+0pACITzL.js,01OrQ5AXqsL.js,11gAPPElxuL.js,01OtvpwikQL.js,21J9Onr4hrL.js,01t2esUHF0L.js,01S8y9NkxoL.js,01ZF+ovNflL.js,21PR-xiFCvL.js,51foFGmxtyL.js,01Z-Ip0c4YL.js,01qPwv8D5hL.js,01YivelYW5L.js,016QFWAAdML.js,01rg6Ce9FhL.js,010kX03xiRL.js,31NuG3-7xRL.js,011bX2ciJbL.js,21222B+rAzL.js,01gp3oqpb5L.js,31ItJPFyotL.js,11CIaAZhucL.js,01NGbPzAzBL.js,01NKGaW0w5L.js,01rEmdLLpxL.js,019W6kk1gjL.js,01hkseOXj6L.js,01lcH4zcTaL.js,01UkZ13lKKL.js_.js?AUIClients/SoftlinesDetailPageMetaAsset#language-en.in.167162-T1.162525-T1.166419-T1.203659-T1.151985-T1.183511-T1.103061-T1.184424-T1.186073-T2.200616-T1.173971-T1.131900-C.144201-T1.186725-T1.186696-T1.173115-T1.184758-T1.184759-T1.185101-T1.184757-T1.126331-C.156391-T1.202285-C.109378-T1.154031-T3.198898-C", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/218rehcHYxL._RC%7C11qRTlQry4L.js,21E2aIDj6DL.js,31eEXkvrJzL.js,01g2etah0NL.js,31selSsN+1L.js,413u98XONQL.js,0185ITV0M6L.js,41Dds42UuNL.js,11BrVfD3DeL.js,01nnV9HCzgL.js,71LEtO5Vv5L.js,41COmOfIQhL.js,11nOzlnr6+L.js,31BBQa2c9BL.js,31Gy8EGyyiL.js,31UjTApGOPL.js,31Ac-cQ+ZWL.js,21NDIsf0a1L.js,11AVRVWTouL.js,11MQqFPEK+L.js,01jqyAujTwL.js,31+0pACITzL.js,61rODlgNeWL.js,11jf5oS-4FL.js,01RQtSMdG+L.js,01OtvpwikQL.js,21J9Onr4hrL.js,21m9o6VHhOL.js,21bSviTzsOL.js,11XkXxlfwyL.js,01t2esUHF0L.js,31W9fAH+1aL.js,01lcH4zcTaL.js,01qPwv8D5hL.js,01YivelYW5L.js,01rg6Ce9FhL.js,016QFWAAdML.js,41Eko5EJ6TL.js,31apIfAEBaL.js,31NuG3-7xRL.js,11div+n5b+L.js,01IQoRXvpnL.js,011bX2ciJbL.js,21222B+rAzL.js,01gp3oqpb5L.js,31ItJPFyotL.js,11CIaAZhucL.js,01NGbPzAzBL.js,011kwg0OTQL.js,01jLpHmb92L.js,014kCoIHgIL.js,019W6kk1gjL.js,01hkseOXj6L.js,0189flJt-AL.js,01lPKWAwBBL.js,41ZKpsOG2XL.js,41WTMwhRXFL.js,61m-slBs3VL.js,013yVF4PBmL.js_.js?AUIClients/HardlinesDetailPageMetaAssetVariable_ACCESSORIES_AND_FAMILY_STRIPE#language-en.in.167162-T1.203659-T1.183511-T1.103061-T1.184424-T1.186073-T2.150150-T1.200616-T1.173971-T1.215516-T1.144201-T1.186725-T1.186696-T1.173115-T1.184758-T1.184759-T1.185101-T1.184757-T1.126331-C.172346-T1.109378-T1.154031-T3.198898-C", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11aN96%2Bj6xL._RC%7C01Re6AqkVUL.js,01I-WWW2CuL.js,21u1PnPEsML.js,318rs4piGPL.js,11ISJZDdTuL.js,11dhZ6zkMNL.js,01jEqq6I0UL.js,51WBkFtfDnL.js,61QSjY0aK1L.js,01wYyhYnnFL.js,01LHJt5PiyL.js,01VgEfU-GFL.js,0193uyIciNL.js,41D4kRuiy9L.js,31KnQzlss-L.js,11p0nLfNCcL.js,01s9HEfbt3L.js,11iHZuQapKL.js,015TRQC5i+L.js,01JzE3-DfLL.js,61ZSPeOQowL.js,01I+ls4AqQL.js_.js?AUIClients/HardlinesDetailPageMetaAssetFixed#in.196359-T1.151985-T1.131900-C.156391-T1.195589-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41gCbfiTdaL._RC%7C516fcOUE-HL.css,01evdoiemkL.css,01K+Ps1DeEL.css,31pdJv9iSzL.css,01tgK36lpGL.css,11UGC+GXOPL.css,21LK7jaicML.css,11L58Qpo0GL.css,21kyTi1FabL.css,01Xl9KigtzL.css,01YhS3Cs-hL.css,21GwE3cR-yL.css,019SHZnt8RL.css,01wAWQRgXzL.css,21bWcRJYNIL.css,11WgRxUdJRL.css,01dU8+SPlFL.css,11ocrgKoE-L.css,01SHjPML6tL.css,111-D2qRjiL.css,01QrWuRrZ-L.css,310Imb6LqFL.css,11Z1a0FxSIL.css,01cbS3UK11L.css,21mOLw+nYYL.css,01L8Y-JFEhL.css_.css?AUIClients/AmazonUI#not-trident", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/01/authportal/common/images/amznbtn-sprite03._CB395592492_.png", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/buttons/sign-in-secure._CB138348554_.gif", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61kzhTBl2qL._RC%7C11-BZEJ8lnL.js,61GQ9IdK7HL.js,21Of0-9HPCL.js,012FVc3131L.js,119KAWlHU6L.js,51xL2QLv4YL.js,11AHlQhPRjL.js,016iHgpF74L.js,11aNYFFS5hL.js,116tgw9TSaL.js,211-p4GRUCL.js,01PoLXBDXWL.js,61BanVD+50L.js,01mi-J86cyL.js,11BOgvnnntL.js,31UWuPgtTtL.js,01rpauTep4L.js,01iyxuSGj4L.js,018kT7oogLL.js_.js?AUIClients/AmazonUI#189458-T1.192338-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://dpm.demdex.net/ibs:dpid=139200&dpuuid=y3G1uIFGT9WAoAxOuzRS6g&redir=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dadobe.com%26id%3D%24%7BDD_UUID%7D", "HEADER=Accept-Language:en-in", "REDIRECT=YES", "LOCATION=https://dpm.demdex.net/demconf.jpg?et:ibs%7cdata:dpid=139200&dpuuid=y3G1uIFGT9WAoAxOuzRS6g&redir=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dadobe.com%26id%3D%24%7BDD_UUID%7D", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/orderApplication/js/authPortal/sign-in._CB387973437_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/authportal/common/css/ap-checkout-frn._CB319254382_.css", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/218rehcHYxL._RC%7C11qRTlQry4L.js,21E2aIDj6DL.js,31eEXkvrJzL.js,01g2etah0NL.js,31selSsN+1L.js,413u98XONQL.js,0185ITV0M6L.js,41Dds42UuNL.js,11BrVfD3DeL.js,01nnV9HCzgL.js,71LEtO5Vv5L.js,41COmOfIQhL.js,11nOzlnr6+L.js,31BBQa2c9BL.js,31Gy8EGyyiL.js,31UjTApGOPL.js,31Ac-cQ+ZWL.js,21NDIsf0a1L.js,11AVRVWTouL.js,11MQqFPEK+L.js,01jqyAujTwL.js,31+0pACITzL.js,61rODlgNeWL.js,11jf5oS-4FL.js,01RQtSMdG+L.js,01OtvpwikQL.js,21J9Onr4hrL.js,21m9o6VHhOL.js,21bSviTzsOL.js,11XkXxlfwyL.js,01t2esUHF0L.js,31W9fAH+1aL.js,01lcH4zcTaL.js,01qPwv8D5hL.js,01YivelYW5L.js,01rg6Ce9FhL.js,016QFWAAdML.js,41Eko5EJ6TL.js,31apIfAEBaL.js,31NuG3-7xRL.js,11div+n5b+L.js,01IQoRXvpnL.js,011bX2ciJbL.js,21222B+rAzL.js,01gp3oqpb5L.js,31ItJPFyotL.js,11CIaAZhucL.js,01NGbPzAzBL.js,011kwg0OTQL.js,01jLpHmb92L.js,014kCoIHgIL.js,019W6kk1gjL.js,01hkseOXj6L.js,0189flJt-AL.js,01lPKWAwBBL.js_.js?AUIClients/HardlinesDetailPageMetaAssetVariable#language-en.in.167162-T1.203659-T1.183511-T1.103061-T1.184424-T1.186073-T2.150150-T1.200616-T1.173971-T1.144201-T1.186725-T1.186696-T1.173115-T1.184758-T1.184759-T1.185101-T1.184757-T1.126331-C.172346-T1.109378-T1.154031-T3.198898-C", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=rightmedia.com&xid=JLc5VrPNF_chmb9aQBuWBvvZ", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/orderApplication/css/authPortal/sign-in._CB377794256_.css", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/01/x-locale/cs/css/images/amznbtn-sprite03._CB387356454_.png", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/javascripts/lib/jquery/jquery-1.2.6.min._CB166146506_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/gno/sprites/nav-sprite-global_bluebeacon-V3-1x_optimized._CB468962293_.png", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://dpm.demdex.net/demconf.jpg?et:ibs%7cdata:dpid=139200&dpuuid=y3G1uIFGT9WAoAxOuzRS6g&redir=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dadobe.com%26id%3D%24%7BDD_UUID%7D", "HEADER=Accept-Language:en-in", "COOKIE=demdex", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=adobe.com&id=88524661542610702973565979804516046413", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=fbca&id=pvSD9JPSSV-kw9p2-_rVKw", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ET%2BPmLUUL._RC%7C417qBNXt1HL.css,31j6BOPjmzL.css,01ekIXTj5kL.css,01KvCqKMBgL.css,21ckusqmu6L.css,21LLdt69ldL.css,21jNhNxHFBL.css,31JMnREMjZL.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,31MkQHV3gaL.css,314gb2LkLML.css,01FtAuFRr3L.css,01RRH0yFa4L.css,01bkkYjxP7L.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,01FlII1u-ZL.css,219oCRGl-sL.css,212hS9k0-iL.css,312UeeukJML.css,21cgGInnQ9L.css,210LbiKyCML.css,31SN3jkqdEL.css,21Wf53xZ5jL.css_.css?AUIClients/MediaDetailPageMetaAsset#in.122952-T1.103061-T1.131900-C.94145-T1.215632-C.109378-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/login/fwcim._CB481730939_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/cs/orders/images/btn-close._CB138349123_.gif", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/communities/social/snwicons_v2._CB402380004_.png", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=adobe.com&id=88524661542610702973565979804516046413", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/authportal/common/js/ap_global-1.1._CB309255203_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?id=428D962E-D54C-4E43-BE63-9A05228F8769&ex=pubmatic.com", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/authportal/common/js/ap-checkout-frn._CB309255200_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/210UtsRqV6L._RC%7C71+WX4uo+uL.css,11zh5zoa5AL.css,31cuIVKhckL.css,213skwsyD4L.css,31wWWC6YAvL.css,11G4HxMtMSL.css,31OvHRW+XiL.css,01XHMOHpK1L.css_.css?AUIClients/AmazonNavigationDesktopMetaAsset#desktop.in", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ET%2BPmLUUL._RC%7C119njhJT7LL.css,41j52RQ1GmL.css,210LbiKyCML.css,31j6BOPjmzL.css,01ekIXTj5kL.css,01KvCqKMBgL.css,21ckusqmu6L.css,01N8OOpUZPL.css,41NTvbcsBfL.css,01f0Gtj6a9L.css,310NMB80xGL.css,31JMnREMjZL.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,31MkQHV3gaL.css,314gb2LkLML.css,01FtAuFRr3L.css,01QLwk8mu6L.css,014Z+MbaRaL.css,01RRH0yFa4L.css,01bkkYjxP7L.css,018mGORJ7tL.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,01wL78bNyyL.css,31SN3jkqdEL.css,21Wf53xZ5jL.css,01OhA16ND1L.css,01gtuC0zSuL.css,01qwEWNuxuL.css,21qxDmhZV3L.css,11XXguyjjZL.css,31WlxajeYrL.css,01clde05tlL.css,11Z7S+lK47L.css,01AT3O0C6cL.css_.css?AUIClients/SoftlinesDetailPageMetaAsset#in.162525-T1.166419-T1.203659-T1.103061-T1.184424-T1.131900-C.94145-T1.144201-T1.126331-C.202285-C.215632-C.109378-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/transparent-pixel._CB386942716_.gif", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/cs/orders/images/acorn._CB138349126_.gif", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61kzhTBl2qL._RC%7C11-BZEJ8lnL.js,61GQ9IdK7HL.js,21Of0-9HPCL.js,012FVc3131L.js,119KAWlHU6L.js,51xL2QLv4YL.js,11AHlQhPRjL.js,016iHgpF74L.js,11aNYFFS5hL.js,116tgw9TSaL.js,211-p4GRUCL.js,01PoLXBDXWL.js,61BanVD+50L.js,01mi-J86cyL.js,11BOgvnnntL.js,31UWuPgtTtL.js,01rpauTep4L.js,01iyxuSGj4L.js,01OWoGffjKL.js_.js?AUIClients/AmazonUI#189458-T1.192338-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/cs/orders/images/amazon-gc-100._CB349914954_.gif", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://sync.search.spotxchange.com/partner?adv_id=7922&redir=https://aax-eu.amazon-adsystem.com%2Fs/ecm3?ex%3Dspotx.com%26id%3D%24SPOTX_USER_ID&__user_check__=1&sync_id=ac23bb48-a182-11e9-a5c0-11edc3221a07", "HEADER=Accept-Language:en-in", "COOKIE=audience", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=spotx.com&id=ac23bb1f-a182-11e9-a5c0-11edc3221a07", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=spotx.com&id=ac23bb1f-a182-11e9-a5c0-11edc3221a07", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://c1.adform.net/serving/cookie/match?CC=1&party=1153&redirect_url=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dadform.net%26id%3D%24%7BUUID%7D", "HEADER=Accept-Language:en-in", "COOKIE=uid", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=adform.net&id=539327821112189213", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE
    );

    ns_end_transaction("record_impressions_3", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("record_impressions_4");
    ns_web_url ("record_impressions_4",
        "URL=https://www.amazon.in/ah/ajax/record-impressions?c4i=ePm_fHprndBNa8JQEIXhX3Tg5n4kd5YqVKGuitT1zJ1JK4ak2JSi_fMqCEJ01e1ZHHifv4mw2vd-HL6eQC95tF8-Tr1n1ft8tqbNOm0X85ep_uswrrDYvOFw6fjodydTcK_46e_DfyprdYGcFVgtikiWkUkJRDG7pE2dXJlKBIqpCiLgVhvEYAIKReF9aEvD0jbi71o3CIzcdfi0w4DVAyCLWfGpIBbyiKIMEnPgcDnLUpdc0RX5DD1Ib7k&rId=FQHMBRA36T6KVA44S1T8&mkId=A21TJRUUN4KGV&exp=1562591920842&h=c6fa44b35e59cc90e749325805e084241dba961852b6de62f6f1dede7df980fe",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;csm-hit;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562591824958.png",
        "Snapshot=webpage_1562591825089.png"
    );

    ns_end_transaction("record_impressions_4", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_4");
    ns_web_url ("index_4",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562591825089.png",
        "Snapshot=webpage_1562591826603.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"csmcount":{"counter":"aui:preload_fulfilled","value":1,"t":15793}},{"csmcount":{"counter":"aui:preload_fulfilled","value":2,"t":16644}},{"csmcount":{"counter":"aui:preload_fulfilled","value":3,"t":16683}},{"csmcount":{"counter":"aui:preload_fulfilled","value":4,"t":16720}},{"csmcount":{"counter":"aui:preload_fulfilled","value":5,"t":16721}},{"csmcount":{"counter":"aui:preload_fulfilled","value":6,"t":16790}},{"csmcount":{"counter":"aui:preload_fulfilled","value":7,"t":17128}},{"csmcount":{"counter":"aui:preload_fulfilled","value":8,"t":17128}},{"csmcount":{"counter":"aui:preload_fulfilled","value":9,"t":17278}},{"csmcount":{"counter":"aui:preload_fulfilled","value":10,"t":17279}},{"csmcount":{"counter":"aui:preload_fulfilled","value":11,"t":17282}},{"csmcount":{"counter":"aui:sw:browser:register:success","value":1,"t":17395}},{"csmcount":{"counter":"aui:preload_fulfilled","value":12,"t":17397}},{"csmcount":{"counter":"aui:preload_fulfilled","value":13,"t":17398}},{"csmcount":{"counter":"aui:preload_fulfilled","value":14,"t":17536}},{"csmcount":{"counter":"aui:preload_fulfilled","value":15,"t":17575}},{"csmcount":{"counter":"aui:preload_fulfilled","value":16,"t":17628}},{"csmcount":{"counter":"aui:preload_fulfilled","value":17,"t":17816}},{"csmcount":{"counter":"aui:preload_fulfilled","value":18,"t":17827}},{"csmcount":{"counter":"gwAjaxCall","value":4,"t":19065}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-F","w":1000,"h":600,"d":0,"x":-447.12969970703125,"y":99,"t":19139,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-G","w":1000,"h":600,"d":0,"x":552.8703002929688,"y":99,"t":19139,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-F","w":1000,"h":600,"d":0,"x":-872.130859375,"y":99,"t":19202,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-G","w":1000,"h":600,"d":0,"x":127.869140625,"y":99,"t":19202,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-F","w":1000,"h":600,"d":1,"x":-1000,"y":99,"t":19294,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-G","w":1000,"h":600,"d":0,"x":0,"y":99,"t":19294,"k":"ewi"}},{"csmcount":{"counter":"aui:preload_fulfilled","value":19,"t":19657}},{"csmcount":{"counter":"aui:preload_fulfilled","value":20,"t":19712}},{"csmcount":{"counter":"aui:preload_fulfilled","value":21,"t":19756}},{"csmcount":{"counter":"aui:preload_fulfilled","value":22,"t":19785}},{"csmcount":{"counter":"aui:preload_fulfilled","value":23,"t":19786}},{"csmcount":{"counter":"aui:preload_fulfilled","value":24,"t":19891}},{"csmcount":{"counter":"aui:preload_fulfilled","value":25,"t":19895}},{"csmcount":{"counter":"aui:preload_fulfilled","value":26,"t":19985}},{"csmcount":{"counter":"aui:preload_fulfilled","value":27,"t":20015}},{"csmcount":{"counter":"aui:preload_fulfilled","value":28,"t":20034}},{"csmcount":{"counter":"aui:preload_fulfilled","value":29,"t":20115}},{"csmcount":{"counter":"aui:preload_fulfilled","value":30,"t":20180}},{"csmcount":{"counter":"aui:preload_fulfilled","value":31,"t":20196}},{"csmcount":{"counter":"aui:preload_fulfilled","value":32,"t":20243}},{"csmcount":{"counter":"aui:preload_fulfilled","value":33,"t":20286}},{"csmcount":{"counter":"aui:preload_fulfilled","value":34,"t":20350}},{"csmcount":{"counter":"aui:preload_fulfilled","value":35,"t":20389}},{"csmcount":{"counter":"aui:preload_fulfilled","value":36,"t":20393}},{"csmcount":{"counter":"aui:preload_fulfilled","value":37,"t":20403}},{"csmcount":{"counter":"aui:preload_fulfilled","value":38,"t":20519}},{"csmcount":{"counter":"aui:preload_fulfilled","value":39,"t":20561}},{"csmcount":{"counter":"aui:preload_fulfilled","value":40,"t":20584}},{"csmcount":{"counter":"aui:preload_fulfilled","value":41,"t":20626}},{"csmcount":{"counter":"aui:preload_fulfilled","value":42,"t":20628}},{"csmcount":{"counter":"aui:preload_fulfilled","value":43,"t":20748}},{"csmcount":{"counter":"aui:preload_fulfilled","value":44,"t":20748}},{"csmcount":{"counter":"aui:preload_fulfilled","value":45,"t":20748}},{"csmcount":{"counter":"aui:preload_fulfilled","value":46,"t":20819}},{"csmcount":{"counter":"aui:preload_fulfilled","value":47,"t":20833}},{"csmcount":{"counter":"aui:preload_fulfilled","value":48,"t":20833}},{"csmcount":{"counter":"aui:preload_fulfilled","value":49,"t":20874}},{"csmcount":{"counter":"aui:preload_fulfilled","value":50,"t":20888}},{"csmcount":{"counter":"gwAjaxCall","value":5,"t":24318}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-G","w":1000,"h":600,"d":0,"x":-541.4410400390625,"y":99,"t":24382,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-H","w":1000,"h":600,"d":0,"x":458.5589904785156,"y":99,"t":24382,"k":"ewi"}},{"cel":{"k":"hrt","t":24447}},{"csm":{"k":"chk","f":3,"l":{"csmcount":336,"navigation":1,"cel":77,"csm":4},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":4877}}]}",
        BODY_END
    );

    ns_end_transaction("index_4", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_5");
    ns_web_url ("index_5",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562591826603.png",
        "Snapshot=webpage_1562591830211.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"n":"gw-ftGr-desktop-tall-hero-G","w":1000,"h":600,"d":0,"x":-906.8078002929688,"y":99,"t":24445,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-H","w":1000,"h":600,"d":0,"x":93.19219207763672,"y":99,"t":24445,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-G","w":1000,"h":600,"d":1,"x":-1000,"y":99,"t":24543,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-H","w":1000,"h":600,"d":0,"x":0,"y":99,"t":24543,"k":"ewi"}},{"cel":{"k":"hrt","t":25795}},{"csm":{"k":"chk","f":4,"l":{"csmcount":336,"navigation":1,"cel":82,"csm":5},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":731}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://s.amazon-adsystem.com/ecm3?id=I75Kf5ZphTJ5k3wBXs4amMWWwYjZzChgQG1x_JmYjWc&ex=rubiconproject.com&status=ok", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE
    );

    ns_end_transaction("index_5", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("record_impressions_5");
    ns_web_url ("record_impressions_5",
        "URL=https://www.amazon.in/ah/ajax/record-impressions?c4i=ePm_fHprndBNS8NAFIXhX3Qgk_m49y6TgrXYlZS6vpOZscWQlBgR9c-3QqGQunJ7Fgfe52chnPL72zye_oBe65w_9Wvp3Zh922xlt_Uvq_Zhqf80zo9Y7Z4xXTpeh-N3TtAh4WO4Df-pDJUXFueQSghwTAWRmNA5HylqMh2npUQqJlCQDJtiBRfZQYwoJETLIkrc-ZvWFQKz9j0OeRqxuQOkzFKVwNCaDFzIlzOyFupNMeK72hb-RT4D149tsg&rId=FQHMBRA36T6KVA44S1T8&mkId=A21TJRUUN4KGV&exp=1562591920842&h=6813079e5e20c64200e830d945476b6c433775dfdecc318bad01a5dd3a6a1c6a",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;csm-hit;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562591830211.png",
        "Snapshot=webpage_1562591835463.png"
    );

    ns_end_transaction("record_impressions_5", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("record_impressions_6");
    ns_web_url ("record_impressions_6",
        "URL=https://www.amazon.in/ah/ajax/record-impressions?c4i=ePm_fHprndDLCsIwFATQLxq4TdM0WbaCiroS0fXNS8XSikZE_XkrCEJ15XIGZjHnMRD24XxI3fEH9IRTuPJt6F1l67pamNWi2Izq8VB_3qUpRqslTv2Pbbu_Bw9uPS7tp_jnpXQUPRsPHa2DZCIwZTlEmbMIXivj3FBCWxVFlASlVAmp8whNRYDNhbOalciM-mi9IZC4abALpw6zL0BlyDEbg35PkBQc-mRRCB0zZllaF17ITzY2bw8&rId=FQHMBRA36T6KVA44S1T8&mkId=A21TJRUUN4KGV&exp=1562591920842&h=5fa8a91cac21346be80ad76342f917e4f02773f848330dbc4daa101a7992b7b1",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;csm-hit;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562591835463.png",
        "Snapshot=webpage_1562591835693.png"
    );

    ns_end_transaction("record_impressions_6", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_6");
    ns_web_url ("index_6",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562591835693.png",
        "Snapshot=webpage_1562591840389.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"csmcount":{"counter":"gwAjaxCall","value":6,"t":29571}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-H","w":1000,"h":600,"d":0,"x":-444.6675720214844,"y":99,"t":29624,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-I","w":1000,"h":600,"d":0,"x":555.3324584960938,"y":99,"t":29624,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-H","w":1000,"h":600,"d":0,"x":-871.228515625,"y":99,"t":29690,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-I","w":1000,"h":600,"d":0,"x":128.771484375,"y":99,"t":29690,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-H","w":1000,"h":600,"d":1,"x":-1000,"y":99,"t":29781,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-I","w":1000,"h":600,"d":0,"x":0,"y":99,"t":29781,"k":"ewi"}},{"cel":{"k":"hrt","t":34461}},{"csm":{"k":"chk","f":5,"l":{"csmcount":337,"navigation":1,"cel":89,"csm":6},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":1014}}]}",
        BODY_END
    );

    ns_end_transaction("index_6", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_7");
    ns_web_url ("index_7",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562591840389.png",
        "Snapshot=webpage_1562591846065.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"csmcount":{"counter":"gwAjaxCall","value":7,"t":34824}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-I","w":1000,"h":600,"d":0,"x":-174.37559509277344,"y":99,"t":34838,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-J","w":1000,"h":600,"d":0,"x":825.6244506835938,"y":99,"t":34838,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-I","w":1000,"h":600,"d":0,"x":-541.6661987304688,"y":99,"t":34884,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-J","w":1000,"h":600,"d":0,"x":458.33380126953125,"y":99,"t":34884,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-I","w":1000,"h":600,"d":0,"x":-906.7191772460938,"y":99,"t":34953,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-J","w":1000,"h":600,"d":0,"x":93.2808609008789,"y":99,"t":34953,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-I","w":1000,"h":600,"d":1,"x":-1000,"y":99,"t":35050,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-J","w":1000,"h":600,"d":0,"x":0,"y":99,"t":35050,"k":"ewi"}},{"cel":{"k":"hrt","t":39572}},{"csm":{"k":"chk","f":6,"l":{"csmcount":338,"navigation":1,"cel":98,"csm":7},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":1257}}]}",
        BODY_END
    );

    ns_end_transaction("index_7", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_8");
    ns_web_url ("index_8",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562591846065.png",
        "Snapshot=webpage_1562591876638.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"n":"gw-ftGr-desktop-tall-hero-J","w":1000,"h":600,"d":0,"x":-444.3459167480469,"y":99,"t":40130,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-D","w":1000,"h":600,"d":0,"x":555.6541137695312,"y":99,"t":40130,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-J","w":1000,"h":600,"d":0,"x":-906.7474975585938,"y":99,"t":40198,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-D","w":1000,"h":600,"d":0,"x":93.2525405883789,"y":99,"t":40198,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-J","w":1000,"h":600,"d":1,"x":-1000,"y":99,"t":40304,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-D","w":1000,"h":600,"d":0,"x":0,"y":99,"t":40304,"k":"ewi"}},{"cel":{"k":"hrt","t":44825}},{"csm":{"k":"chk","f":7,"l":{"csmcount":338,"navigation":1,"cel":105,"csm":8},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":964}}]}",
        BODY_END
    );

    ns_end_transaction("index_8", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_9");
    ns_web_url ("index_9",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562591876638.png",
        "Snapshot=webpage_1562591907643.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"hrt","t":74825}},{"cel":{"k":"hrt","t":75827}},{"csm":{"k":"chk","f":8,"l":{"csmcount":338,"navigation":1,"cel":107,"csm":9},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":325}}]}",
        BODY_END
    );

    ns_end_transaction("index_9", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_10");
    ns_web_url ("index_10",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562591907643.png",
        "Snapshot=webpage_1562591938645.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"hrt","t":105829}},{"cel":{"k":"hrt","t":106829}},{"csm":{"k":"chk","f":9,"l":{"csmcount":338,"navigation":1,"cel":109,"csm":10},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":328}}]}",
        BODY_END
    );

    ns_end_transaction("index_10", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_11");
    ns_web_url ("index_11",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562591938645.png",
        "Snapshot=webpage_1562591969654.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"hrt","t":136830}},{"cel":{"k":"hrt","t":137831}},{"csm":{"k":"chk","f":10,"l":{"csmcount":338,"navigation":1,"cel":111,"csm":11},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":329}}]}",
        BODY_END
    );

    ns_end_transaction("index_11", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_12");
    ns_web_url ("index_12",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562591969654.png",
        "Snapshot=webpage_1562592000646.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"hrt","t":167831}},{"cel":{"k":"hrt","t":168831}},{"csm":{"k":"chk","f":11,"l":{"csmcount":338,"navigation":1,"cel":113,"csm":12},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":329}}]}",
        BODY_END
    );

    ns_end_transaction("index_12", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_13");
    ns_web_url ("index_13",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562592000646.png",
        "Snapshot=webpage_1562592031651.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"hrt","t":198832}},{"cel":{"k":"hrt","t":199833}},{"csm":{"k":"chk","f":12,"l":{"csmcount":338,"navigation":1,"cel":115,"csm":13},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":329}}]}",
        BODY_END
    );

    ns_end_transaction("index_13", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_14");
    ns_web_url ("index_14",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562592031651.png",
        "Snapshot=webpage_1562592062656.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"hrt","t":229835}},{"cel":{"k":"hrt","t":230836}},{"csm":{"k":"chk","f":13,"l":{"csmcount":338,"navigation":1,"cel":117,"csm":14},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":329}}]}",
        BODY_END
    );

    ns_end_transaction("index_14", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_15");
    ns_web_url ("index_15",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562592062656.png",
        "Snapshot=webpage_1562592093656.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"hrt","t":260837}},{"cel":{"k":"hrt","t":261838}},{"csm":{"k":"chk","f":14,"l":{"csmcount":338,"navigation":1,"cel":119,"csm":15},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":329}}]}",
        BODY_END
    );

    ns_end_transaction("index_15", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_16");
    ns_web_url ("index_16",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562592093656.png",
        "Snapshot=webpage_1562592133847.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"hrt","t":291838}},{"cel":{"k":"hrt","t":292838}},{"csm":{"k":"chk","f":15,"l":{"csmcount":338,"navigation":1,"cel":121,"csm":16},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":329}}]}",
        BODY_END
    );

    ns_end_transaction("index_16", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_17");
    ns_web_url ("index_17",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562592133847.png",
        "Snapshot=webpage_1562592156688.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"hrt","t":322839}},{"cel":{"k":"hrt","t":323842}},{"csm":{"k":"chk","f":16,"l":{"csmcount":338,"navigation":1,"cel":123,"csm":17},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":329}}]}",
        BODY_END
    );

    ns_end_transaction("index_17", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_18");
    ns_web_url ("index_18",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562592156688.png",
        "Snapshot=webpage_1562592186708.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"hrt","t":353842}},{"cel":{"k":"hrt","t":354842}},{"csm":{"k":"chk","f":17,"l":{"csmcount":338,"navigation":1,"cel":125,"csm":18},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":329}}]}",
        BODY_END
    );

    ns_end_transaction("index_18", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_19");
    ns_web_url ("index_19",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562592186708.png",
        "Snapshot=webpage_1562592217718.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"hrt","t":384844}},{"cel":{"k":"hrt","t":385845}},{"csm":{"k":"chk","f":18,"l":{"csmcount":338,"navigation":1,"cel":127,"csm":19},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":329}}]}",
        BODY_END
    );

    ns_end_transaction("index_19", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_20");
    ns_web_url ("index_20",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562592217718.png",
        "Snapshot=webpage_1562592248697.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"hrt","t":415846}},{"cel":{"k":"hrt","t":416847}},{"csm":{"k":"chk","f":19,"l":{"csmcount":338,"navigation":1,"cel":129,"csm":20},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":329}}]}",
        BODY_END
    );

    ns_end_transaction("index_20", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_21");
    ns_web_url ("index_21",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562592248697.png",
        "Snapshot=webpage_1562592266304.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"hrt","t":446847}},{"cel":{"k":"hrt","t":447848}},{"csm":{"k":"chk","f":20,"l":{"csmcount":338,"navigation":1,"cel":131,"csm":21},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":329}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.amazon.in/gp/uedata?at&v=0.204437.0&id=FQHMBRA36T6KVA44S1T8&ctb=1&m=1&sc=FQHMBRA36T6KVA44S1T8&pc=463053&at=463053&t=1562592263684&csmtags=csm-feature-touch-enabled:false&pty=Gateway&spty=desktop&pti=desktop&tid=FQHMBRA36T6KVA44S1T8&aftb=1", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;csm-hit;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:FQHMBRA36T6KVA44S1T8$uedata=s:%2Fgp%2Fuedata%3Fat%26v%3D0.204437.0%26id%3DFQHMBRA36T6KVA44S1T8%26ctb%3D1%26m%3D1%26sc%3DFQHMBRA36T6KVA44S1T8%26pc%3D463053%26at%3D463053%26t%3D1562592263684%26csmtags%3Dcsm-feature-touch-enabled%3Afalse%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DFQHMBRA36T6KVA44S1T8%26aftb%3D1:463052", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://www.amazon.in/gp/uedata?at&v=0.204437.0&id=FQHMBRA36T6KVA44S1T8&ctb=1&m=1&sc=FQHMBRA36T6KVA44S1T8&pc=463095&at=463095&t=1562592263726&pty=Gateway&spty=desktop&pti=desktop&tid=FQHMBRA36T6KVA44S1T8&aftb=1&ui=2", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;csm-hit;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:FQHMBRA36T6KVA44S1T8$uedata=s:%2Fgp%2Fuedata%3Fat%26v%3D0.204437.0%26id%3DFQHMBRA36T6KVA44S1T8%26ctb%3D1%26m%3D1%26sc%3DFQHMBRA36T6KVA44S1T8%26pc%3D463095%26at%3D463095%26t%3D1562592263726%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DFQHMBRA36T6KVA44S1T8%26aftb%3D1%26ui%3D2:463094", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE
    );

    ns_end_transaction("index_21", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("X59_1202557_5929705");
    ns_web_url ("X59_1202557_5929705",
        "URL=https://www.amazon.in/gp/navigation/ajax/dynamic-menu.html/259-1202557-5929705?primeContent=prime&metricKey=primeMetric&rid=FQHMBRA36T6KVA44S1T8&isFullWidthPrime=0&isPrime=0&dynamicRequest=1&weblabs=&isFreshRegionAndCustomer=&primeMenuWidth=310&_=1562592266295",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;csm-hit;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562592266304.png",
        "Snapshot=webpage_1562592273697.png",
        INLINE_URLS,
            "URL=https://images-na.ssl-images-amazon.com/images/G/31/prime/NavFlyout/TryPrime/2018/Apr/IN-Prime-PIN-TryPrime-MultiBen-Apr18-400x400._CB498268868_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/x/px/QggLWre1drdbGflwsn-p3XkAAAFr0bqt_QMAAAH_AYpHywc/niv/%7B%22wh%22:726,%22ww%22:1536,%22sx%22:0,%22sy%22:122.4000015258789,%22ah%22:250,%22aw%22:300,%22top%22:666.5999984741211,%22left%22:676.6500244140625,%22v%22:%7B%22p%22:0,%22t%22:0,%22def%22:%22amzn%22%7D,%22ptv%22:467.67,%22ttv%22:465.31,%22niv%22:true%7D", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/x/px/QggLWre1drdbGflwsn-p3XkAAAFr0bqt_QMAAAH_AYpHywc/niv/%7B%22wh%22:726,%22ww%22:1536,%22sx%22:0,%22sy%22:192.8000030517578,%22ah%22:250,%22aw%22:300,%22top%22:596.1999969482422,%22left%22:676.6500244140625,%22v%22:%7B%22p%22:50,%22t%22:1,%22def%22:%22iab%22%7D,%22ptv%22:468.699,%22ttv%22:466.339,%22niv%22:true%7D", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE
    );

    ns_end_transaction("X59_1202557_5929705", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_22");
    ns_web_url ("index_22",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Content-type:text/plain",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562592273697.png",
        "Snapshot=webpage_1562592274086.png",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/index_22_url_0_1_1562592360360.body",
        BODY_END
    );

    ns_end_transaction("index_22", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_csm_nexusclient_p_2");
    ns_web_url ("com_amazon_csm_nexusclient_p_2",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.csm.nexusclient.prod",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "PreSnapshot=webpage_1562592274086.png",
        "Snapshot=webpage_1562592274102.png",
        BODY_BEGIN,
            "{"cs":{"dct":{"#0":"violationType","#1":"unresponsive-clicks","#2":"violationCount","#3":"totalScanned","#4":"producerId","#5":"csm","#6":"schemaId","#7":"csm.ArmoredCXGuardrailsViolation.3","#8":"timestamp","#9":"messageId","#10":"sessionId","#11":"259-1202557-5929705","#12":"requestId","#13":"FQHMBRA36T6KVA44S1T8","#14":"obfuscatedMarketplaceId","#15":"A21TJRUUN4KGV"}},"events":[{"data":{"#0":"#1","#2":0,"#3":1,"#4":"#5","#6":"#7","#8":"2019-07-08T13:24:34.076Z","#9":"FQHMBRA36T6KVA44S1T8-1562592274076-8727271215","#10":"#11","#12":"#13","#14":"#15"}}]}",
        BODY_END
    );

    ns_end_transaction("com_amazon_csm_nexusclient_p_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_23");
    ns_web_url ("index_23",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562592274102.png",
        "Snapshot=webpage_1562592274339.png",
        BODY_BEGIN,
            "{"rid":"FQHMBRA36T6KVA44S1T8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"mcm","w":1519,"h":5472,"t":473295,"x":980,"y":1795,"p":"//*[@id='BCG0iXa69LAYWYGZVREBjw']/DIV[2]/A/DIV/IMG","n":"IMG","dt":10.29}},{"cel":{"k":"efo","t":473298,"s":"default"}},{"cel":{"k":"res_mcm","t":473295,"m":127}},{"csmcount":{"counter":"QF-N:SN:QN:TN","value":1,"t":473443}},{"csmcount":{"counter":"cel.PDM.TotalExecutions","value":933,"t":473445}},{"csmcount":{"counter":"cel.VPI.TotalExecutions","value":16,"t":473445}},{"csmcount":{"counter":"cel.VPI.TotalExecutionTime","value":0,"t":473445}},{"csmcount":{"counter":"cel.VPI.AverageExecutionTime","value":0,"t":473445}},{"csmcount":{"counter":"cel.widgets.batchesProcessed","value":954,"t":473445}},{"cel":{"k":"mmm1","e":[{"x":556,"y":1738,"t":472413},{"x":641,"y":1816,"t":472512},{"x":668,"y":1823,"t":472536},{"x":977,"y":1796,"t":472656},{"x":977,"y":1796,"t":473445}],"min":15,"max":145,"avg":63}},{"cel":{"k":"hrt","t":473445}},{"cel":{"k":"eod","t0":1562591800631,"t":473445}},{"csmcount":{"counter":"armored-cxguardrails.unresponsive-clicks.violations","value":0,"t":473445}},{"csmcount":{"counter":"armored-cxguardrails.unresponsive-clicks.violationRate","value":0,"t":473445}},{"csm":{"k":"chk","f":22,"l":{"csmcount":355,"navigation":1,"cel":237,"csm":23},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":1429}}]}",
        BODY_END
    );

    ns_end_transaction("index_23", NS_AUTO_STATUS);
    ns_page_think_time(0.215);

    //Page Auto splitted for Image Link 'Refurbished & open box speakers | Up to 50% off' Clicked by User
    ns_start_transaction("b");
    ns_web_url ("b",
        "URL=https://www.amazon.in/b?ie=UTF8&node=16182118031&s=review-rank&pf_rd_p=5257cbb4-a92e-49af-bb2e-3535232a9738&pf_rd_r=FQHMBRA36T6KVA44S1T8",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time;csm-hit",
        "PreSnapshot=webpage_1562592274153.png",
        "Snapshot=webpage_1562592274580.png"
    );

    ns_end_transaction("b", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_24");
    ns_web_url ("index_24",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "PreSnapshot=webpage_1562592274580.png",
        "Snapshot=webpage_1562592274580.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41YNcL3lZpL._RC%7C51giv2WPknL.css,01evdoiemkL.css,01K+Ps1DeEL.css,31bAdTWQ3tL.css,01tgK36lpGL.css,11UGC+GXOPL.css,21LK7jaicML.css,11L58Qpo0GL.css,21EuGTxgpoL.css,01Xl9KigtzL.css,01YhS3Cs-hL.css,21GwE3cR-yL.css,019SHZnt8RL.css,01wAWQRgXzL.css,21bWcRJYNIL.css,11WgRxUdJRL.css,01dU8+SPlFL.css,11ocrgKoE-L.css,01SHjPML6tL.css,111-D2qRjiL.css,01QrWuRrZ-L.css,310Imb6LqFL.css,11Z1a0FxSIL.css,01cbS3UK11L.css,21mOLw+nYYL.css,01L8Y-JFEhL.css_.css?AUIClients/AmazonUI#not-trident", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51MFn+HAbnL._RC%7C212hS9k0-iL.css,01lO3awdqlL.css,01TQCVEAmxL.css,614Zmop1kiL.css_.css?AUIClients/RetailSearchAssets#in.renderskin-pc.search-results-aui.154839-T1.89167-T1", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/21DKiuKAnTL.css?AUIClients/AmazonPopoversAUIShim", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210UtsRqV6L._RC%7C71+WX4uo+uL.css,11zh5zoa5AL.css,31cuIVKhckL.css,213skwsyD4L.css,31wWWC6YAvL.css,11G4HxMtMSL.css,31OvHRW+XiL.css,01XHMOHpK1L.css_.css?AUIClients/AmazonNavigationDesktopMetaAsset#desktop.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/31/gno/sprites/nav-sprite-global_bluebeacon-V3-1x_optimized._CB468962293_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/transparent-pixel._CB386942716_.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/Megamenu_Electronics_top._CB502737186_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/x-locale/common/transparent-pixel._CB386942464_.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41XVFuR4+FL.js?AUIClients/AmazonPopoversAUIShim#in", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/21CLcdv0yIL.js?AUIClients/RetailSearchImageLoader", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/prime/Events/Bruno/GW/LU_Announce_400x39_SWM_dv1._CB444413363_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUIFont-amazonember_rg-cc7ebaa05a2cd3b02c0929ac0475a44ab30b7efa._V2_.woff2", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61kzhTBl2qL._RC%7C11-BZEJ8lnL.js,61ukzj4bv-L.js,21Of0-9HPCL.js,012FVc3131L.js,119KAWlHU6L.js,51psF-j89fL.js,11AHlQhPRjL.js,016iHgpF74L.js,11aNYFFS5hL.js,116tgw9TSaL.js,211-p4GRUCL.js,01PoLXBDXWL.js,61J2AypSEKL.js,01mi-J86cyL.js,11BOgvnnntL.js,31UWuPgtTtL.js,01rpauTep4L.js,01iyxuSGj4L.js,01BCGLVRoPL.js_.js?AUIClients/AmazonUI#189458-T1.192338-T1.169160-T1.144375-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31Gy8EGyyiL._RC%7C01jJ55rhdUL.js,21wK5i3BT4L.js,01zSat8PreL.js,7181JJPbPRL.js_.js?AUIClients/RetailSearchAssets", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUIFont-amazonember_bd-46b91bda68161c14e554a779643ef4957431987b._V2_.woff2", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51Ei0U0O-PL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51hgDJF2XsL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51iI4faWkuL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51mIPPypISL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51aGFg51JlL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51GZqGJyiDL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41oc5Ue6fNL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41s8EJzx20L._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51z5XPa91tL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41YVMGQP3ML._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51mTynYwAgL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41PeXjyKlYL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41X9Ocm4FlL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51GafAF4WpL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51YCndpCL-L._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51brJRuE8RL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/510wrkYvc9L._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41qvZOs6p1L._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51im2ZAcpIL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/518kRbC1IjL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41a3OeWseSL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51aGqLLL1rL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/nav2/images/gui/searchSprite._CB272921266_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUIIcon@legacyImages-sprite_1x-6c462f5dc3bc3e40d0788502814fa7043355712a._V2_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41wC2BfYbLL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41Kfw+86RoL._AC_US240_FMwebp_QL65_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/nav2/images/gui/prime-check-badge-14._CB138348888_.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUIFont-amazonember_rgit-9cc1bb64eb270135f1adf3a4881c2ee5e7c37be5._V2_.woff2", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/personalization/ybh/loading-4x-gray._CB317974815_.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41fMrDoAFbL._RC%7C71GkUD1temL.js,61u3dpzHy+L.js,41W9ohA0e+L.js,11vrNkbdcvL.js,21SHd9g2LAL.js,311T8Q1zWKL.js,51+klsvwgqL.js,31IEOtBPX+L.js_.js?AUIClients/AmazonNavigationDesktopMetaAsset#desktop", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://www.amazon.in/mn/search/uedata/259-1202557-5929705?ld&v=0.202699.0&id=EH62JJ2C4MP7MD1QJXHQ&sw=1536&sh=864&vw=1519&vh=726&m=1&sc=EH62JJ2C4MP7MD1QJXHQ&ue=3&bb=473&ns=475&ne=498&af=498&cf=1219&be=1157&pc=1792&tc=-671&na_=-671&ul_=-48&_ul=-48&rd_=-1562592274749&_rd=-1562592274749&fe_=-671&lk_=-671&_lk=-671&co_=-671&_co=-671&sc_=-1562592274749&rq_=-588&rs_=-64&_rs=1159&dl_=-32&di_=1217&de_=1217&_de=1453&_dc=1792&ld_=1792&_ld=-1562592274749&ntd=0&ty=0&rc=0&hob=2&hoe=3&ld=1793&t=1562592276542&ctb=1&rt=cf:16-4-4-5-3-0-1_af:8-0-4-4-2-0-1_ld:45-5-4-30-3-0-1&csmtags=aui|aui:aui_build_date:3.19.3-2019-03-27|navbar|fls-eu|adblk_no|ZeroInViewport&viz=visible:3&pty=Landing&spty=undefined&pti=undefined&tid=FQHMBRA36T6KVA44S1T8&aftb=1", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time;csm-hit", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:EH62JJ2C4MP7MD1QJXHQ$uedata=s:%2Fmn%2Fsearch%2Fuedata%2F259-1202557-5929705%3Fld%26v%3D0.202699.0%26id%3DEH62JJ2C4MP7MD1QJXHQ%26sw%3D1536%26sh%3D864%26vw%3D1519%26vh%3D726%26m%3D1%26sc%3DEH62JJ2C4MP7MD1QJXHQ%26ue%3D3%26bb%3D473%26ns%3D475%26ne%3D498%26af%3D498%26cf%3D1219%26be%3D1157%26pc%3D1792%26tc%3D-671%26na_%3D-671%26ul_%3D-48%26_ul%3D-48%26rd_%3D-1562592274749%26_rd%3D-1562592274749%26fe_%3D-671%26lk_%3D-671%26_lk%3D-671%26co_%3D-671%26_co%3D-671%26sc_%3D-1562592274749%26rq_%3D-588%26rs_%3D-64%26_rs%3D1159%26dl_%3D-32%26di_%3D1217%26de_%3D1217%26_de%3D1453%26_dc%3D1792%26ld_%3D1792%26_ld%3D-1562592274749%26ntd%3D0%26ty%3D0%26rc%3D0%26hob%3D2%26hoe%3D3%26ld%3D1793%26t%3D1562592276542%26ctb%3D1%26rt%3Dcf%3A16-4-4-5-3-0-1_af%3A8-0-4-4-2-0-1_ld%3A45-5-4-30-3-0-1%26csmtags%3Daui%7Caui%3Aaui_build_date%3A3.19.3-2019-03-27%7Cnavbar%7Cfls-eu%7Cadblk_no%7CZeroInViewport%26viz%3Dvisible%3A3%26pty%3DLanding%26spty%3Dundefined%26pti%3Dundefined%26tid%3DFQHMBRA36T6KVA44S1T8%26aftb%3D1:1796", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:EH62JJ2C4MP7MD1QJXHQ$uedata=s:%2Fmn%2Fsearch%2Fuedata%2F259-1202557-5929705%3Fld%26v%3D0.202699.0%26id%3DEH62JJ2C4MP7MD1QJXHQ%26sc0%3Ds_dimge%26bb0%3D756%26pc0%3D757%26ld0%3D757%26t0%3D1562592275506%26sc1%3DcsmCELLSframework%26bb1%3D1158%26pc1%3D1159%26ld1%3D1159%26t1%3D1562592275908%26sc2%3DcsmCELLSpdm%26bb2%3D1159%26pc2%3D1204%26ld2%3D1204%26t2%3D1562592275953%26sc3%3DcsmCELLSvpm%26bb3%3D1204%26pc3%3D1204%26ld3%3D1204%26t3%3D1562592275953%26sc4%3DcsmCELLSfem%26bb4%3D1205%26pc4%3D1205%26ld4%3D1205%26t4%3D1562592275954%26ctb%3D1:1797", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE
    );

    ns_end_transaction("index_24", NS_AUTO_STATUS);
    ns_page_think_time(0.389);

    ns_start_transaction("ref_lp_16182118031_1_1");
    ns_web_url ("ref_lp_16182118031_1_1",
        "URL=https://images-eu.ssl-images-amazon.com/images/G/01/AUIClients/ClientSideMetricsAUIJavascript-2652a9b368cb49fa24d71333217575d57b3a06da._V2_.js",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=NA",
        "Snapshot=webpage_1562592276751.png",
        INLINE_URLS,
            "URL=https://images-na.ssl-images-amazon.com/images/G/31/gno/sprites/nav-sprite-global_bluebeacon-V3-2x_optimized._CB468962293_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:EH62JJ2C4MP7MD1QJXHQ$uedata=s:%2Fmn%2Fsearch%2Fuedata%2F259-1202557-5929705%3Fld%26v%3D0.202699.0%26id%3DEH62JJ2C4MP7MD1QJXHQ%26ctb%3D1%26sc0%3Diss-init-pc%26bb0%3D496%26cf0%3D1950%26be0%3D1950%26pc0%3D1950%26ld0%3D1950%26t0%3D1562592276699%26pty%3DLanding%26spty%3Dundefined%26pti%3Dundefined%26tid%3DFQHMBRA36T6KVA44S1T8%26aftb%3D1:1951", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE
    );

    ns_end_transaction("ref_lp_16182118031_1_1", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("suggestions_2");
    ns_web_url ("suggestions_2",
        "URL=https://completion.amazon.co.uk/api/2017/suggestions?session-id=259-1202557-5929705&customer-id=&request-id=EH62JJ2C4MP7MD1QJXHQ&page-type=Landing&lop=en_IN&site-variant=desktop&client-info=amazon-search-ui&mid=A21TJRUUN4KGV&alias=undefined&searchTerm=a&suggestion-type=KEYWORD&suggestion-type=WIDGET&_=1562592276713",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562592276751.png",
        "Snapshot=webpage_1562592277793.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonDevices/neel/checkers/500x450_Flyout._CB443265716_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/AmazonDevices/Tank/Flyout_just._CB458220204_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonDevices/Kindle/Flyout_Kindle._CB444077460_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/AmazonVideo/2019/SingleTitle/NGK/499x492-GNO_without-disclaimer._CB443188265_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/digital/music/merch/India/2019/June/PD/PD_Flyout_CCP._CB442663186_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Laptops/Flyout/fashion_flyout_500x500_2._CB442684549_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/MI/Flyout/MIbeginners._CB487070566_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Fashion/Flyout/men._CB468888570_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/IMG-2017/GW_Flyout_500x450_Flyout._CB487102089_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img17/Sports/Exercise_Fitness/Get_fit_at_home/gym_essentials/flyout._CB505942756_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Family/flyout_new_last_1534496402_1534508273._CB470411914_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/books/062019/ChildrensBookshelf/flyout._CB444266928_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img16/GiftCards/MarchSweep/Nov/RGC24_JupiterW1GC_500x500_Nov._CB479161047_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://cloudfront-labs.amazonaws.com/x.png", "HEADER=Accept-Language:en-in", "REDIRECT=YES", "LOCATION=https://aa221fa818879751295cf654d381e3345.profile.iad16.cloudfront.net/test.png", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/iu3?d=amazon.in&slot=navFooter&a2=010167e39654ed462ded327d5bc14af764ce778e0ead47b9221cdb8bb4f01946cace&old_oo=0&ts=1562592275077&s=AQ4_NAMNpGFwYAuv9r3_O2v0Zq5qCg20iksU_q-01ZaQ&cb=1562592275077", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/v3/pr?exlist=kr_twca_imdb&fv=1.0&ex-pl-twca=TxUMpLjCQra7Z9ymu-dsNQ&a=cm", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE
    );

    ns_end_transaction("suggestions_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_25");
    ns_web_url ("index_25",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562592277793.png",
        "Snapshot=webpage_1562592278303.png",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/index_25_url_0_1_1562592360943.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://usermatch.krxd.net/um/v2?partner=amzn", "HEADER=Accept-Language:en-in", "COOKIE=_kuid_", "REDIRECT=YES", "LOCATION=//s.amazon-adsystem.com/ecm3?ex=krux.com&id=MyrckDma", END_INLINE,
            "URL=https://analytics.twitter.com/i/adsct?p_id=985&p_user_id=TxUMpLjCQra7Z9ymu-dsNQ&twitter_redir=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dtwca%26id%3DTxUMpLjCQra7Z9ymu-dsNQ%26", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://www.imdb.com/ads/idsync?cid=79bc437ba&ex=imdb.com", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/210UtsRqV6L._RC%7C71+WX4uo+uL.css,11zh5zoa5AL.css,31cuIVKhckL.css,213skwsyD4L.css,31wWWC6YAvL.css,11G4HxMtMSL.css,31OvHRW+XiL.css,01XHMOHpK1L.css_.css?AUIClients/AmazonNavigationDesktopMetaAsset#desktop.in", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41fMrDoAFbL._RC%7C71GkUD1temL.js,61u3dpzHy+L.js,41W9ohA0e+L.js,11vrNkbdcvL.js,21SHd9g2LAL.js,311T8Q1zWKL.js,51+klsvwgqL.js,31IEOtBPX+L.js_.js?AUIClients/AmazonNavigationDesktopMetaAsset#desktop", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:EH62JJ2C4MP7MD1QJXHQ$uedata=s:%2Fmn%2Fsearch%2Fuedata%2F259-1202557-5929705%3Fld%26v%3D0.202699.0%26id%3DEH62JJ2C4MP7MD1QJXHQ%26ctb%3D1%26sc0%3Diss-warmup%3Afailure%26bb0%3D1963%26cf0%3D3336%26be0%3D3341%26pc0%3D3341%26ld0%3D3341%26t0%3D1562592278090%26csmtags%3Diss-on-time%26pty%3DLanding%26spty%3Dundefined%26pti%3Dundefined%26tid%3DFQHMBRA36T6KVA44S1T8%26aftb%3D1:3341", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE
    );

    ns_end_transaction("index_25", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_26");
    ns_web_url ("index_26",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562592278303.png",
        "Snapshot=webpage_1562592278325.png",
        BODY_BEGIN,
            "{"rid":"EH62JJ2C4MP7MD1QJXHQ","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"jserr-rw":{"m":"ISS AJAX call failed for iss-warmup with responseText: Invalid Request: mid [null] alias [undefined], pageType: Landing, status: error, error: Bad Request","csm":"v5 ueLogError callee","logLevel":"WARN","attribution":"iss-warmup","pageURL":"https://www.amazon.in/b?ie=UTF8&node=16182118031&s=review-rank&pf_rd_p=5257cbb4-a92e-49af-bb2e-3535232a9738&pf_rd_r=FQHMBRA36T6KVA44S1T8","s":["function (d,e,h){g&&g(\"cf\",c+\":failure\",{wb:1});l(\"ajax:error\",1);e&&l(\"ajax:error\"+e,1);f.ueLogError&&f.ueLogError({logLevel:\"WARN\",attribution:c,message:\"ISS AJAX call failed for \"+c+\" with responseText: \"+(d&&d.responseText)+\", pageType: \"+(a&&a.pageType)+\", status: \"+e+\", error: \"+h});\"function\"===typeof n&&n();g&&g(\"be\",c+\":failure\",{wb:1});r&&r(\"ld\",c+\":failure\",{wb:1})}","function (c,f){if(!e&&!b&&!d){f=f||[];d=1;try{for(;a[0];)a.shift().apply(c,f)}finally{b=[c,f],d=0}}return this}","function d(a,b,d,m){if(2!==z){z=2;w&&clearTimeout(w);y=p;D=m||\"\";t.readyState=0<a?4:0;var q,r,v;m=b;if(d){var x=e,C=t,u=x.contents,\nJ=x.dataTypes,M=x.responseFields,E,B,P,I;for(B in M)B in d&&(C[M[B]]=d[B]);for(;\"*\"===J[0];)J.shift(),E===p&&(E=x.mimeType||","function (d,h){var n,m,r,w,v;try{if(b&&(h||4===f.readyState))if(b=p,g&&(f.onreadystatechange=c.noop,wa&&delete N[g]),h)4!==f.readyState&&f.abort();else{n=f.status;r=f.getAllResponseHeaders();w={};(v=f.responseXML)&&v.documentElement&&(w.xml=v);w.text=f.res"],"t":3336}}]}",
        BODY_END
    );

    ns_end_transaction("index_26", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_27");
    ns_web_url ("index_27",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562592278325.png",
        "Snapshot=webpage_1562592283290.png",
        BODY_BEGIN,
            "{"rid":"EH62JJ2C4MP7MD1QJXHQ","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"jserr-rw":{"m":"Hit Info","csm":"v5 onerror","logLevel":"INFO","adb":"adblk_no"}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://aa221fa818879751295cf654d381e3345.profile.iad16.cloudfront.net/test.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://s.amazon-adsystem.com/ecm3?ex=krux.com&id=MyrckDma", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://www.amazon.in/service-worker.js", "HEADER=Service-Worker:script", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time;csm-hit", END_INLINE
    );

    ns_end_transaction("index_27", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_28");
    ns_web_url ("index_28",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562592283290.png",
        "Snapshot=webpage_1562592293135.png",
        BODY_BEGIN,
            "{"rid":"EH62JJ2C4MP7MD1QJXHQ","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"w":1519,"h":4498,"t":3303,"k":"doi"}},{"csmcount":{"counter":"iss-warmup:ajax:error","value":1,"t":3336}},{"csmcount":{"counter":"iss-warmup:ajax:errorerror","value":1,"t":3336}},{"csmcount":{"counter":"aui:preload_fulfilled","value":1,"t":3412}},{"csmcount":{"counter":"aui:preload_fulfilled","value":2,"t":3422}},{"cel":{"k":"hrt","t":7533}},{"cel":{"k":"hrt","t":8534}},{"csm":{"k":"chk","f":2,"l":{"csmcount":68,"cel":68,"csm":3,"navigation":1,"jserr-rw":2},"s":"full"}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.amazon.in/mn/search/uedata/259-1202557-5929705?at&v=0.202699.0&id=EH62JJ2C4MP7MD1QJXHQ&ctb=1&m=1&sc=EH62JJ2C4MP7MD1QJXHQ&pc=11798&at=11798&t=1562592286547&ec=1&ecf=0&pty=Landing&spty=undefined&pti=undefined&tid=FQHMBRA36T6KVA44S1T8&aftb=1", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:EH62JJ2C4MP7MD1QJXHQ$uedata=s:%2Fmn%2Fsearch%2Fuedata%2F259-1202557-5929705%3Fat%26v%3D0.202699.0%26id%3DEH62JJ2C4MP7MD1QJXHQ%26ctb%3D1%26m%3D1%26sc%3DEH62JJ2C4MP7MD1QJXHQ%26pc%3D11798%26at%3D11798%26t%3D1562592286547%26ec%3D1%26ecf%3D0%26pty%3DLanding%26spty%3Dundefined%26pti%3Dundefined%26tid%3DFQHMBRA36T6KVA44S1T8%26aftb%3D1:11798", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://www.amazon.in/mn/search/uedata/259-1202557-5929705?at&v=0.202699.0&id=EH62JJ2C4MP7MD1QJXHQ&ctb=1&m=1&sc=EH62JJ2C4MP7MD1QJXHQ&pc=15972&at=15972&t=1562592290721&csmtags=csm-feature-touch-enabled:false&pty=Landing&spty=undefined&pti=undefined&tid=FQHMBRA36T6KVA44S1T8&aftb=1", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:EH62JJ2C4MP7MD1QJXHQ$uedata=s:%2Fmn%2Fsearch%2Fuedata%2F259-1202557-5929705%3Fat%26v%3D0.202699.0%26id%3DEH62JJ2C4MP7MD1QJXHQ%26ctb%3D1%26m%3D1%26sc%3DEH62JJ2C4MP7MD1QJXHQ%26pc%3D15972%26at%3D15972%26t%3D1562592290721%26csmtags%3Dcsm-feature-touch-enabled%3Afalse%26pty%3DLanding%26spty%3Dundefined%26pti%3Dundefined%26tid%3DFQHMBRA36T6KVA44S1T8%26aftb%3D1:15972", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://www.amazon.in/mn/search/uedata/259-1202557-5929705?at&v=0.202699.0&id=EH62JJ2C4MP7MD1QJXHQ&ctb=1&m=1&sc=EH62JJ2C4MP7MD1QJXHQ&pc=15997&at=15997&t=1562592290746&pty=Landing&spty=undefined&pti=undefined&tid=FQHMBRA36T6KVA44S1T8&aftb=1&ui=2", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:EH62JJ2C4MP7MD1QJXHQ$uedata=s:%2Fmn%2Fsearch%2Fuedata%2F259-1202557-5929705%3Fat%26v%3D0.202699.0%26id%3DEH62JJ2C4MP7MD1QJXHQ%26ctb%3D1%26m%3D1%26sc%3DEH62JJ2C4MP7MD1QJXHQ%26pc%3D15997%26at%3D15997%26t%3D1562592290746%26pty%3DLanding%26spty%3Dundefined%26pti%3Dundefined%26tid%3DFQHMBRA36T6KVA44S1T8%26aftb%3D1%26ui%3D2:15997", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://www.amazon.in/CERTIFIED-REFURBISHED-Philips-Portable-Bluetooth/dp/B07H6DJZ1P/ref=lp_16182118031_1_1?s=electronics&ie=UTF8&qid=1562592274&sr=1-1", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time;csm-hit", END_INLINE
    );

    ns_end_transaction("index_28", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_29");
    ns_web_url ("index_29",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562592293135.png",
        "Snapshot=webpage_1562592293319.png",
        BODY_BEGIN,
            "{"rid":"EH62JJ2C4MP7MD1QJXHQ","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"mmm1","e":[{"x":980,"y":370,"t":15973},{"x":976,"y":348,"t":16077},{"x":882,"y":259,"t":16202}],"min":49,"max":49,"avg":49}},{"cel":{"k":"mcm","w":1519,"h":4498,"t":18168,"x":309,"y":327,"p":"//*[@id='result_0']/DIV/DIV[2]/DIV/DIV/A/IMG","n":"IMG","c":["s-access-image","cfMarker"]}},{"cel":{"k":"ebl","t":18378,"s":"default"}},{"cel":{"k":"hrt","t":18378}},{"csm":{"k":"chk","f":3,"l":{"csmcount":68,"cel":72,"csm":4,"navigation":1,"jserr-rw":2},"s":"full"}}]}",
        BODY_END
    );

    ns_end_transaction("index_29", NS_AUTO_STATUS);
    ns_page_think_time(0.133);

    //Page Auto splitted for Image Link '(Renewed) Philips BT40BK/94 Portable Wireless Bluetooth Speaker (Black)' Clicked by User
    ns_start_transaction("AmazonUI");
    ns_web_url ("AmazonUI",
        "URL=https://images-eu.ssl-images-amazon.com/images/I/41gCbfiTdaL._RC%7C516fcOUE-HL.css,01evdoiemkL.css,01K+Ps1DeEL.css,31pdJv9iSzL.css,01tgK36lpGL.css,11UGC+GXOPL.css,21LK7jaicML.css,11L58Qpo0GL.css,21kyTi1FabL.css,01Xl9KigtzL.css,01YhS3Cs-hL.css,21GwE3cR-yL.css,019SHZnt8RL.css,01wAWQRgXzL.css,21bWcRJYNIL.css,11WgRxUdJRL.css,01dU8+SPlFL.css,11ocrgKoE-L.css,01SHjPML6tL.css,111-D2qRjiL.css,01QrWuRrZ-L.css,310Imb6LqFL.css,11Z1a0FxSIL.css,01cbS3UK11L.css,21mOLw+nYYL.css,01L8Y-JFEhL.css_.css?AUIClients/AmazonUI#not-trident",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562592293453.png",
        "Snapshot=webpage_1562592297062.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210UtsRqV6L._RC%7C71+WX4uo+uL.css,11zh5zoa5AL.css,31cuIVKhckL.css,210-42NMyML.css,31wWWC6YAvL.css,11G4HxMtMSL.css,31OvHRW+XiL.css,01XHMOHpK1L.css_.css?AUIClients/AmazonNavigationDesktopMetaAsset#desktop.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ET%2BPmLUUL._RC%7C119njhJT7LL.css,51QoAH-sF5L.css,01g2EoxOu-L.css,11UGK4+GCNL.css,21ByukFKG4L.css,01N8OOpUZPL.css,11xRy3bSkOL.css,01QUs5FVXoL.css,31JMnREMjZL.css,015QemNxHyL.css,41vOQb1k0LL.css,01uHoBLsGfL.css,01FtAuFRr3L.css,01rgQ3jqo7L.css,31B2u5k-3gL.css,312UeeukJML.css,11X8K4AolpL.css,21cgGInnQ9L.css,21QKJp6qQ9L.css,31cE7qTuwaL.css_.css?AUIClients/HardlinesDetailPageMetaAssetFixed#desktop.in.138488-T1.102054-T1.131900-C.129737-C.94145-T1", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210LbiKyCML._RC%7C31j6BOPjmzL.css,01ekIXTj5kL.css,01KvCqKMBgL.css,21ckusqmu6L.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,31q5EHoIcZL.css,41hIrT0+wbL.css,01FlII1u-ZL.css,219oCRGl-sL.css,212hS9k0-iL.css,31MkQHV3gaL.css,314gb2LkLML.css,31dTK1hHb6L.css,014Z+MbaRaL.css,01RRH0yFa4L.css,01bkkYjxP7L.css,31Wg0ai095L.css,01f31VNCowL.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,31Fo-RK+JML.css,01CslPlvtoL.css,01mju9O84EL.css,11Z7S+lK47L.css,21Wf53xZ5jL.css,01OhA16ND1L.css,11xmZPMxSJL.css,41Uz4bMH9yL.css,01TZ9fpDSSL.css,11ikU6MX1JL.css,01qwEWNuxuL.css,21qxDmhZV3L.css,11XXguyjjZL.css,31WlxajeYrL.css,01clde05tlL.css,01nX97hgmYL.css,61hZ-YG-XRL.css,01Jrt6rHBlL.css_.css?AUIClients/HardlinesDetailPageMetaAssetVariable_ACCESSORIES_AND_FAMILY_STRIPE#desktop.in.not-trident.122952-T1.113788-C.203659-T1.103061-T1.184424-T1.150150-T1.144201-T1.126331-C.181561-T1", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31SN3jkqdEL.css?AUIClients/DetailPageSnSAssets#215632-C.109378-T1", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/gno/sprites/nav-sprite-global_bluebeacon-V3-1x_optimized._CB468962293_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img13/rcx-events/trust/244x66_Desktop_DP_Trust.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/51Ei0U0O-PL._SS40_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/51G34EL-CmL._SS40_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41yHnsiQJZL._SS40_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41n71qwKfzL._SS40_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/31MjJvwCknL._SS40_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/3165%2B-mGsiL._SS40_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/31XKuUQXyeL._SS40_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/x-locale/common/transparent-pixel._V192234675_.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/DeliveryStaticPackard-pin_desktop_1x-c944b6819f9e5642fdfd4ff3d1109d60d66d8f87._V2_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/ape/sf/desktop/DAsf-1.50.d23453f._V461670253_.js?csm_attribution=APE-SafeFrame", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/marketing/fba/fba-badge_18px.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/51yNhR0sj7L._SL75_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/IN-hq/2019/img/Certified_Refurbished/XCM_Manual_1179783_text_Change___1160715_Adapt_367x173_Certified_Refurbished_XCM_Manual_1179783_in_certified_refurbished_367x173_1562158841_jpg._CB443481192_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/common/sprites/sprite-site-wide-2._CB361508071_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUISpinner-spinner_gray_2x-305997434ebd5a72cd3aa598a019fcc6e1efe23a._V2_.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/71b2pSPoY4L._AC_UL160_SR149,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/71z6g0zezZL._AC_UL160_SR110,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/81TCiyn1cOL._AC_UL160_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/61rvjS87RaL._AC_UL160_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/31QdG6W5bNL._AC_UL160_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/517I%2BIm73FL._AC_UL160_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/71b2pSPoY4L._AC_UL70_SR70,70_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/71z6g0zezZL._AC_UL70_SR70,70_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/81fz%2BymCXNL._AC_UL70_SR70,70_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/81TCiyn1cOL._AC_UL70_SR70,39_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41PmBnwnpDL._AC_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41u0ybQF08L._AC_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41DWuQPWfML._AC_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/413nN+-qoKL._AC_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/ape/sf/whitelisted/desktop/sf-1.50.d23453f._V461669522_.html", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31mFPNtbjvL._AC_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41amrgho0lL._AC_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51ZpSwjJU8L._AC_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/418VzxcNABL._AC_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41LOWqGS9GL._AC_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51MZtykfgKL._AC_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41dDGZMv-uL._SL500_AC_SS350_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51yNhR0sj7L._SL500_AC_SS350_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31QU2rvoofL._SL500_AC_SS350_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/4141%2BYj9oeL._SL500_AC_SS350_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41LPliJ3cvL._AC_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41pGpjrGumL._AC_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41gJyBIQRAL._AC_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11hlEWdpPvL._RC%7C31uFjzN0JPL.css_.css?AUIClients/AskAuiAssets", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/ui/loadIndicators/loadIndicator-large._CB138348995_.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/01LAv8I1AxL._RC%7C01MPykUsrCL.css,01LKsGfpclL.css,01PTkp9JOCL.css,01cdXa5nSoL.css_.css?AUIClients/DesktopMedleyFilteringMetaAsset", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/x-locale/common/grey-pixel.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/getAdj?src=511&slot=ams-detail-right-v2&rid=010139ec05335aff3ce87aeb294e5ee4b9772eb4221499d1a2e152827754f6423271&callback=aax_xsp_render_ad", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/productAds/ad_feedback_icon_2Xsprite.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/common/sprites/sprite-site-wide-2._V1_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/410T8njFemL.js?AUIClients/AmazonPopoversAUIShim#in", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11aN96%2Bj6xL._RC%7C31Nb5hZQizL.js,316nVZ1c+gL.js,21u1PnPEsML.js,318rs4piGPL.js,11ISJZDdTuL.js,11dhZ6zkMNL.js,01jEqq6I0UL.js,519XfwEmqnL.js,61QSjY0aK1L.js,01bJ1qvdy1L.js,11K4T3M0xSL.js,11uqR2Ko2WL.js,01wYyhYnnFL.js,01LHJt5PiyL.js,01VgEfU-GFL.js,0193uyIciNL.js,41D4kRuiy9L.js,31OZzUTY2yL.js,11p0nLfNCcL.js,01s9HEfbt3L.js,11iHZuQapKL.js,015TRQC5i+L.js,01JzE3-DfLL.js,61ZSPeOQowL.js,01I+ls4AqQL.js_.js?AUIClients/HardlinesDetailPageMetaAssetFixed#desktop.in.138488-T1.196359-T1.102054-T1.186063-T1.195041-T1.151985-T1.131900-C.156391-T1.195589-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/218rehcHYxL._RC%7C118Say7HIZL.js,21E2aIDj6DL.js,31eEXkvrJzL.js,01g2etah0NL.js,31selSsN+1L.js,413u98XONQL.js,0185ITV0M6L.js,41Dds42UuNL.js,11FOFYUJH9L.js,21CoP20PxBL.js,71LEtO5Vv5L.js,41COmOfIQhL.js,11nOzlnr6+L.js,31BBQa2c9BL.js,31Gy8EGyyiL.js,31UjTApGOPL.js,31Ac-cQ+ZWL.js,21NDIsf0a1L.js,11AVRVWTouL.js,11MQqFPEK+L.js,01jqyAujTwL.js,31+0pACITzL.js,613fAh2h0OL.js,11jf5oS-4FL.js,01RQtSMdG+L.js,01OtvpwikQL.js,21J9Onr4hrL.js,21m9o6VHhOL.js,21bSviTzsOL.js,11mvqFXObSL.js,217rNh01UsL.js,31W9fAH+1aL.js,01lcH4zcTaL.js,01qPwv8D5hL.js,01YivelYW5L.js,01rg6Ce9FhL.js,016QFWAAdML.js,41Eko5EJ6TL.js,31apIfAEBaL.js,31NuG3-7xRL.js,11div+n5b+L.js,01IQoRXvpnL.js,011bX2ciJbL.js,21222B+rAzL.js,01gp3oqpb5L.js,31ItJPFyotL.js,11CIaAZhucL.js,01NGbPzAzBL.js,011kwg0OTQL.js,01jLpHmb92L.js,014kCoIHgIL.js,019W6kk1gjL.js,01hkseOXj6L.js,0189flJt-AL.js,01lPKWAwBBL.js,41ZKpsOG2XL.js,41WTMwhRXFL.js,61m-slBs3VL.js,013yVF4PBmL.js_.js?AUIClients/HardlinesDetailPageMetaAssetVariable_ACCESSORIES_AND_FAMILY_STRIPE#desktop.language-en.in.167162-T1.203659-T1.183511-T1.103061-T1.184424-T1.186073-T2.150150-T1.200616-T1.173971-T1.215516-T1.144201-T1.186725-T1.186696-T1.173115-T1.184758-T1.184759-T1.185101-T1.184757-T1.126331-C.109378-T1.147957-T1.154031-T3.198898-C.213433-T1.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61kzhTBl2qL._RC%7C11-BZEJ8lnL.js,61GQ9IdK7HL.js,21Of0-9HPCL.js,012FVc3131L.js,119KAWlHU6L.js,51xL2QLv4YL.js,11AHlQhPRjL.js,016iHgpF74L.js,11aNYFFS5hL.js,116tgw9TSaL.js,211-p4GRUCL.js,01PoLXBDXWL.js,61BanVD+50L.js,01mi-J86cyL.js,11BOgvnnntL.js,31UWuPgtTtL.js,01rpauTep4L.js,01iyxuSGj4L.js,018kT7oogLL.js_.js?AUIClients/AmazonUI#189458-T1.192338-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/311%2BNUiljjL._RC%7C51jplORLurL.js_.js?AUIClients/AskAuiAssets#155248-T1.170181-T1.161282-T1.161288-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11omjJhwsqL.js?AUIClients/DetailPageLazyLoadLibAssets", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31lKiJrlhZL._RC%7C11tXe99yWBL.js,01-4MbsHMWL.js,11gFiYe7KbL.js,21s7OLLfWPL.js_.js?AUIClients/DesktopMedleyFilteringMetaAsset", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61BbXE-QENL.js?AUIClients/DetailPageImageBlockAssets", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/x/px/QqtT4Y-eDnYMqoQLiJFaxnkAAAFr0cI0EQMAAAH_AbRVUhc/nii/%7B%22ni%22:true%7D", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/AUIClients/INRetargetingAsset-fe13df5df0c9265752c892a20feddfc5baaec718.secure.min._V2_.js?AUIClients/INRetargetingAsset", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/21vczkg4cyL._RC%7C21XJFDMQuNL.js,11iAnDhbGmL.js,01GhKb2usNL.js_.js?AUIClients/HardlinesFeatureDetailPageMetaAsset", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41YUeDE3zHL._RC%7C71aLqNGbWsL.js,61u3dpzHy+L.js,417SPNjYS3L.js,11vrNkbdcvL.js,21SHd9g2LAL.js,31xNSJua7KL.js,51YeRc8UK1L.js,31R1liuRRmL.js_.js?AUIClients/AmazonNavigationDesktopMetaAsset#desktop", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/61kzhTBl2qL._RC%7C11-BZEJ8lnL.js,61D3iDRaZSL.js,21Of0-9HPCL.js,012FVc3131L.js,119KAWlHU6L.js,51xL2QLv4YL.js,11AHlQhPRjL.js,016iHgpF74L.js,11aNYFFS5hL.js,116tgw9TSaL.js,211-p4GRUCL.js,01PoLXBDXWL.js,61BanVD+50L.js,01mi-J86cyL.js,11BOgvnnntL.js,31UWuPgtTtL.js,01rpauTep4L.js,01iyxuSGj4L.js,01OWoGffjKL.js_.js?AUIClients/AmazonUI", "HEADER=Origin:https://images-eu.ssl-images-amazon.com", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41cRRCHAhBL._RC%7C51FYeABtyfL.css,01Q48KXvqCL.css,01K+Ps1DeEL.css,41tjoad5w2L.css,01tgK36lpGL.css,11InxsaTq4L.css,21eflE7vp9L.css,11IXeMfyywL.css,21ugv+CDRhL.css,01J8hfjebnL.css,01YhS3Cs-hL.css,21YU4aKBNKL.css,11rfwfQ8DkL.css,01T0I3IjgPL.css,21SS07CAVRL.css,11X17kCPZNL.css,01dU8+SPlFL.css,11ocrgKoE-L.css,11BzYu2x6pL.css,11Ttta26NOL.css,01YVY7jPXEL.css,31qfJ3LXk-L.css,113JXQXq+aL.css,01cbS3UK11L.css,21sF-vjkv-L.css,01XpF1+3ICL.css_.css?AUIClients/AmazonUI", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41u0ybQF08L._AC_SR140,110_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/getAdj?src=511&slot=dp-ads-center-promo&rid=010139ec05335aff3ce87aeb294e5ee4b9772eb4221499d1a2e152827754f6423271&callback=aax_xsp_render_ad", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/61SgvbqBGhL._SX522_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/A2I_CEPC/ICONS/general_connectivity._CB464756833_.svg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/A2I_CEPC/ICONS/general_color._CB464756832_.svg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/71b2pSPoY4L._AC_UL320_SR298,320_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/getAdj?src=511&slot=customer-reviews-top&rid=010139ec05335aff3ce87aeb294e5ee4b9772eb4221499d1a2e152827754f6423271&callback=aax_xsp_render_ad", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/x/px/Qme4HjXLl3SfVZV5PKH4SpoAAAFr0cIzQQMAAAH_ARUCVRw/nii/%7B%22ni%22:true%7D", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/vap/video/airy2/prod/2.0.1460.0/js/airy.skin._CB513066589_.js", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/vap/video/airy2/prod/2.0.1460.0/css/beacon._CB513066589_.css", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUIIcon@legacyImages-sprite_1x-6c462f5dc3bc3e40d0788502814fa7043355712a._V2_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://unagi-eu.amazon.com/1/events/com.amazon.eel.SponsoredProductsEventTracking.prod", "METHOD=OPTIONS", "HEADER=Origin:https://www.amazon.in", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:content-type,x-requested-with", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("AmazonUI", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("iconFarm_sv_loader_html");
    ns_web_url ("iconFarm_sv_loader_html",
        "URL=https://www.amazon.in/gp/product/features/icon-farm/iconFarm-sv-loader.html",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time;csm-hit",
        "PreSnapshot=webpage_1562592297062.png",
        "Snapshot=webpage_1562592297074.png",
        BODY_BEGIN,
            "responseType=html&data=%7B%22returnPolicyFallbackUrlText%22%3A%22Returns+Policies%22%2C%22glLevelReturn%22%3Atrue%2C%22glLevelReturnPolicies%22%3A%5B%7B%22summary%22%3A%22%3Cp%3EReturnable+if+you%E2%80%99ve+received+the+product+in+a+condition+that+is+damaged%2C+defective+or+different+from+its+description+on+the+product+detail+page+on+Amazon.in.%3C%2Fp%3E%5Cn%3Cp%3EReturn+the+camera+in+the+original+condition+with+brand+box+and+all+the+accessories+Product+like+camera+bag+etc.+to+avoid+pickup+cancellation.+We+will+not+process+a+replacement+if+the+pickup+is+cancelled+owing+to+missing%2Fdamaged+contents.%3C%2Fp%3E%5Cn%3Cp%3EReturn+the+speakers+in+the+original+condition+in+brand+box+to+avoid+pickup+cancellation.+We+will+not+process+a+replacement+if+the+pickup+is+cancelled+owing+to+missing%2F+damaged+box.%3C%2Fp%3E+%22%2C%22subTitle%22%3A%2210+Days+Replacement%5Cn%22%2C%22title%22%3A%22Digital+Cameras%2C+camera+lenses%2C+Headsets%2C+Speakers%2C+Projectors%2C+Home+Entertainment+(new+and+certified+refurbished)%22%7D%2C%7B%22summary%22%3A%22Returnable+if+you%E2%80%99ve+received+the+product+in+a+condition+that+is+damaged%2C+defective+or+different+from+its+description+on+the+product+detail+page+on+Amazon.in.%22%2C%22subTitle%22%3A%2210+Days%2C+Replacement%22%2C%22title%22%3A%22Headsets%5Cn%22%7D%2C%7B%22summary%22%3A%22%3Cp%3EReturnable+if+you%E2%80%99ve+received+the+product+in+a+condition+that+is+damaged%2C+defective+or+different+from+its+description+on+the+product+detail+page+on+Amazon.in.%3C%2Fp%3E%22%2C%22subTitle%22%3A%2210+Days+Returnable%22%2C%22title%22%3A%22Speakers+(new+and+certified+refurbished)%22%7D%2C%7B%22summary%22%3A%22%3Cp%3EReturnable+if+you%E2%80%99ve+received+the+product+in+a+condition+that+is+damaged%2C+defective+or+different+from+its+description+on+the+product+detail+page+on+Amazon.in.%3C%2Fp%3E%5Cn%3Cp%3EIf+you+report+an+issue+with+your+Television%2C+we+may+schedule+a+technician+visit+to+your+location.+On+the+basis+of+the+technician's+evaluation+report%2C+we'll+provide+a+resolution.%3C%2Fp%3E%5Cn%3Cp%3EReturn+the+TV+in+the+original+condition+in+brand+box+and+all+the+accessories+Product+like+TV+remote+etc.+to+avoid+pickup+cancellation.+We+will+not+process+a+replacement+if+the+pickup+is+cancelled+owing+to+missing%2Fdamaged+contents.%3C%2Fp%3E%22%2C%22subTitle%22%3A%2210+Days+Replacement%22%2C%22title%22%3A%22Televisions%22%7D%5D%2C%22showPTDBasedReturnPolicy%22%3Afalse%2C%22returnTitleViewHeader%22%3A%22Return+Policy%22%2C%22returnPolicyGroups%22%3A%5B%5D%2C%22basicReturnInfoIds%22%3A%5B%7B%22summary%22%3A%22returnDescSellerFulfilled%22%2C%22title%22%3A%22returnTitleSellerFulfilled%22%7D%2C%7B%22summary%22%3A%22returnDescGlobalStore%22%2C%22title%22%3A%22returnTitleGlobalStore%22%7D%2C%7B%22summary%22%3A%22returnDescInspectAndBuy%22%2C%22title%22%3A%22returnTitleInspectAndBuy%22%7D%5D%2C%22returnPolicySecondaryViewName%22%3A%22return-policy-secondary-view%22%7D",
        BODY_END
    );

    ns_end_transaction("iconFarm_sv_loader_html", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("ref_iconfarm_wid_gv");
    ns_web_url ("ref_iconfarm_wid_gv",
        "URL=https://www.amazon.in/gp/product/ajax/dpx-metrics-handler.html/ref=iconfarm_wid_gv?pageAsin=B07H6DJZ1P&pageType=Detail&subPageType=IconFarm&merchantId=A3VM9N4M94Q18E",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time;csm-hit",
        "PreSnapshot=webpage_1562592297074.png",
        "Snapshot=webpage_1562592297087.png"
    );

    ns_end_transaction("ref_iconfarm_wid_gv", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("ref_iconfarm_pod_gv");
    ns_web_url ("ref_iconfarm_pod_gv",
        "URL=https://www.amazon.in/gp/product/ajax/dpx-metrics-handler.html/ref=iconfarm_pod_gv?pageAsin=B07H6DJZ1P&pageType=Detail&subPageType=IconFarm&merchantId=A3VM9N4M94Q18E",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time;csm-hit",
        "PreSnapshot=webpage_1562592297087.png",
        "Snapshot=webpage_1562592297181.png",
        INLINE_URLS,
            "URL=https://images-na.ssl-images-amazon.com/images/G/31/A2I-Convert/mobile/IconFarm/icon-cod._CB474582901_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/31/A2I-Convert/mobile/IconFarm/icon-returns._CB474582901_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/31/A2I-Convert/mobile/IconFarm/icon-amazon-delivered._CB474582901_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/31/A2I-Convert/mobile/IconFarm/icon-warranty._CB474582901_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41PmBnwnpDL._AC_SR160,160_.jpg", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("ref_iconfarm_pod_gv", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_csm_nexusclient_p_3");
    ns_web_url ("com_amazon_csm_nexusclient_p_3",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.csm.nexusclient.prod",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "PreSnapshot=webpage_1562592297181.png",
        "Snapshot=webpage_1562592297199.png",
        BODY_BEGIN,
            "{"cs":{"dct":{"#0":"requestId","#1":"XS1R1NSST0MSNB81W2M8","#2":"server","#3":"www.amazon.in","#4":"obfuscatedMarketplaceId","#5":"A21TJRUUN4KGV","#6":"producerId","#7":"csm","#8":"schemaId","#9":"csm.CSMBaselineEvent.4","#10":"timestamp","#11":"messageId","#12":"sessionId","#13":"259-1202557-5929705"}},"events":[{"data":{"#0":"#1","#2":"#3","#4":"#5","#6":"#7","#8":"#9","#10":"2019-07-08T13:24:55.925Z","#11":"XS1R1NSST0MSNB81W2M8-1562592295925-2679065587","#12":"#13"}}]}",
        BODY_END
    );

    ns_end_transaction("com_amazon_csm_nexusclient_p_3", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("suggestions_3");
    ns_web_url ("suggestions_3",
        "URL=https://completion.amazon.co.uk/api/2017/suggestions?session-id=259-1202557-5929705&customer-id=&request-id=XS1R1NSST0MSNB81W2M8&page-type=Detail&lop=en_IN&site-variant=desktop&client-info=amazon-search-ui&mid=A21TJRUUN4KGV&alias=electronics&searchTerm=a&suggestion-type=KEYWORD&suggestion-type=WIDGET&_=1562592296992",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562592297199.png",
        "Snapshot=webpage_1562592298069.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/AmazonVideo/2019/SingleTitle/Venom/499x492-GNO_without-disclaimer._CB443211931_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Fashion/Flyout/Women-fashion_Flyout_500x450._CB468888565_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/71z6g0zezZL._AC_UL320_SR220,320_.jpg", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("suggestions_3", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("af_link_handler_html_4");
    ns_web_url ("af_link_handler_html_4",
        "URL=https://www.amazon.in/gp/aq-feedback/lazyLoad/handler/af-link-handler.html?pl=%7B%22adPlacementMetaData%22%3A%7B%22pageUrl%22%3A%22aHR0cHM6Ly93d3cuYW1hem9uLmluL2dwL3Byb2R1Y3QvQjA3SDZESloxUD9yZWYlNUY9bHAlNUYxNjE4MjExODAzMSU1RjElNUYxJnM9ZWxlY3Ryb25pY3MmcWlkPTE1NjI1OTIyNzQmc3I9MS0x%22%2C%22adElementId%22%3A%22ape_Detail_hero-quick-promo_Desktop_placement%22%2C%22pageType%22%3A%22Detail%22%2C%22slotName%22%3A%22hero-quick-promo%22%7D%2C%22adCreativeMetaData%22%3A%7B%22adProgramId%22%3A%221024%22%2C%22adImpressionId%22%3A%22https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fe%2Fxsp%2Fimp%3Fb%3DQor0XgUA-XnQ-JOAnbTsiscAAAFr0cIzQQMAAAH_Ac9w0VU%22%2C%22adCreativeId%22%3A%221892602066%22%2C%22adId%22%3A%2220025966543605%22%2C%22adNetwork%22%3A%22cs%22%2C%22adCreativeDetails%22%3A%5B%7B%22asin%22%3A%22B07TD25ZHD%22%2C%22title%22%3A%22HYPERSENSE%20Boom%2010W%20Super%20Bass%20Portable%20Splashproof%20Wireless%20Bluetooth%20Speaker%20with%20Mic%2FAUX%2FSD%20Card%2FFM%20Radio%20(Black)%22%2C%22price%22%3A%22INR%22%2C%22merchantName%22%3A%22MECH%20CORPORATION%22%2C%22merchantCustomerID%22%3A%22A2JHRIO6TG9MNV%22%2C%22sku%22%3A%22HYPERSENSE_113_BLACK%22%2C%22adId%22%3A%22A06436732EMHP5RRKWUD5%22%2C%22campaignId%22%3A%22A001881115D4HAALLFAV1%22%7D%5D%7D%7D",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1562592298069.png",
        "Snapshot=webpage_1562592297480.png"
    );

    ns_end_transaction("af_link_handler_html_4", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("megamenumar18f_json");
    ns_web_url ("megamenumar18f_json",
        "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/megamenumar18f.json?_=1562592297086",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562592297480.png",
        "Snapshot=webpage_1562592297496.png"
    );

    ns_end_transaction("megamenumar18f_json", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("dynamic_menu_html");
    ns_web_url ("dynamic_menu_html",
        "URL=https://www.amazon.in/gp/navigation/ajax/dynamic-menu.html?wishlistItems=wishlist&alexaItems=alexa&metricKey=alexaMetric&rid=XS1R1NSST0MSNB81W2M8&isFullWidthPrime=0&isPrime=0&dynamicRequest=1&weblabs=&isFreshRegionAndCustomer=&primeMenuWidth=310&_=1562592297311",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1562592297496.png",
        "Snapshot=webpage_1562592297816.png",
        INLINE_URLS,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUISpinner-spinner_simple_2x-feb7df32f9e911dfefeed80d0548b616c17b017f._V2_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/31/HomeCustomProduct/360_icon_73x73v2._CB498022779_SS40_FMpng_RI_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/javascripts/lib/popover/images/snake._CB138350263_.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("dynamic_menu_html", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("ref_iconfarm_wr_gv");
    ns_web_url ("ref_iconfarm_wr_gv",
        "URL=https://www.amazon.in/gp/product/ajax/dpx-metrics-handler.html/ref=iconfarm_wr_gv?pageAsin=B07H6DJZ1P&pageType=Detail&subPageType=IconFarm&merchantId=A3VM9N4M94Q18E",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1562592297816.png",
        "Snapshot=webpage_1562592297925.png"
    );

    ns_end_transaction("ref_iconfarm_wr_gv", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("ref_iconfarm_ad_gv");
    ns_web_url ("ref_iconfarm_ad_gv",
        "URL=https://www.amazon.in/gp/product/ajax/dpx-metrics-handler.html/ref=iconfarm_ad_gv?pageAsin=B07H6DJZ1P&pageType=Detail&subPageType=IconFarm&merchantId=A3VM9N4M94Q18E",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1562592297925.png",
        "Snapshot=webpage_1562592298312.png",
        INLINE_URLS,
            "URL=https://www.amazon.in/gp/uedata?ld&v=0.204437.0&id=XS1R1NSST0MSNB81W2M8&sw=1536&sh=864&vw=1198&vh=567&m=1&sc=XS1R1NSST0MSNB81W2M8&ue=2&bb=708&ns=710&ne=760&x1=760&af=1700&cf=2391&be=2508&fp=735&fcp=735&pc=4696&tc=-336&na_=-336&ul_=-1562592293306&_ul=-1562592293306&rd_=-1562592293306&_rd=-1562592293306&fe_=-336&lk_=-336&_lk=-336&co_=-336&_co=-336&sc_=-1562592293306&rq_=-321&rs_=-24&_rs=1713&dl_=-5&di_=2622&de_=2622&_de=2623&_dc=4696&ld_=4696&_ld=-1562592293306&ntd=-1&ty=0&rc=0&hob=1&hoe=2&ld=4700&t=1562592298006&ctb=1&rt=cf:64-1-7-45-3-8-1_af:29-1-5-15-3-7-0_ld:111-13-8-69-5-20-1&csmtags=aui|aui:aui_build_date:3.19.4-2019-06-27|navbar|ABPStatusNotEnabled:Detail:ams-detail-right-v2:desktop|ABPStatusNotEnabled:Detail:hero-quick-promo:Desktop|desktop-html-atf-marker|ABPStatusNotEnabled:Detail:dp-ads-center-promo:Desktop|ABPStatusNotEnabled:Detail:customer-reviews-top:Glance|HardlinesDetailPageMetaAssetFixedNotCached|HardlinesDetailPageMetaAssetVariable_ACCESSORIES_AND_FAMILY_STRIPENotCached|auiNotCached|fls-eu|adblk_no|csm-feature-touch-enabled:false|noadrender:Detail:ams-detail-right-v2:desktop|adrender:Detail:hero-quick-promo:Desktop|adrender:Detail:hero-quick-promo:Desktop:creativeid:1892602066|adrender:Detail:hero-quick-promo:Desktop:programid:1024|navigate|noadrender:Detail:dp-ads-center-promo:Desktop|noadrender:3fa6ae61-e017-444f-9a6f-e9b39addf953|iss-on-time|adrender:Detail:customer-reviews-top:Glance|adrender:c9a09184-bad8-4206-80a7-f9db64ba2bb1|adrender:Detail:customer-reviews-top:Glance:creativeid:-1924146692|adrender:c9a09184-bad8-4206-80a7-f9db64ba2bb1:creativeid:-1924146692|adrender:Detail:customer-reviews-top:Glance:programid:1024|adrender:c9a09184-bad8-4206-80a7-f9db64ba2bb1:programid:1024|DPCIFBuyable|DPCIFLongPoleimageblock|aui:ajax&viz=visible:2&pty=Detail&spty=Glance&pti=B07H6DJZ1P&tid=FQHMBRA36T6KVA44S1T8&aftb=1&ui=2", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:XS1R1NSST0MSNB81W2M8$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DXS1R1NSST0MSNB81W2M8%26sw%3D1536%26sh%3D864%26vw%3D1198%26vh%3D567%26m%3D1%26sc%3DXS1R1NSST0MSNB81W2M8%26ue%3D2%26bb%3D708%26ns%3D710%26ne%3D760%26x1%3D760%26af%3D1700%26cf%3D2391%26be%3D2508%26fp%3D735%26fcp%3D735%26pc%3D4696%26tc%3D-336%26na_%3D-336%26ul_%3D-1562592293306%26_ul%3D-1562592293306%26rd_%3D-1562592293306%26_rd%3D-1562592293306%26fe_%3D-336%26lk_%3D-336%26_lk%3D-336%26co_%3D-336%26_co%3D-336%26sc_%3D-1562592293306%26rq_%3D-321%26rs_%3D-24%26_rs%3D1713%26dl_%3D-5%26di_%3D2622%26de_%3D2622%26_de%3D2623%26_dc%3D4696%26ld_%3D4696%26_ld%3D-1562592293306%26ntd%3D-1%26ty%3D0%26rc%3D0%26hob%3D1%26hoe%3D2%26ld%3D4700%26t%3D1562592298006%26ctb%3D1%26rt%3Dcf%3A64-1-7-45-3-8-1_af%3A29-1-5-15-3-7-0_ld%3A111-13-8-69-5-20-1%26csmtags%3Daui%7Caui%3Aaui_build_date%3A3.19.4-2019-06-27%7Cnavbar%7CABPStatusNotEnabled%3ADetail%3Aams-detail-right-v2%3Adesktop%7CABPStatusNotEnabled%3ADetail%3Ahero-quick-promo%3ADesktop%7Cdesktop-html-atf-marker%7CABPStatusNotEnabled%3ADetail%3Adp-ads-center-promo%3ADesktop%7CABPStatusNotEnabled%3ADetail%3Acustomer-reviews-top%3AGlance%7CHardlinesDetailPageMetaAssetFixedNotCached%7CHardlinesDetailPageMetaAssetVariable_ACCESSORIES_AND_FAMILY_STRIPENotCached%7CauiNotCached%7Cfls-eu%7Cadblk_no%7Ccsm-feature-touch-enabled%3Afalse%7Cnoadrender%3ADetail%3Aams-detail-right-v2%3Adesktop%7Cadrender%3ADetail%3Ahero-quick-promo%3ADesktop%7Cadrender%3ADetail%3Ahero-quick-promo%3ADesktop%3Acreativeid%3A1892602066%7Cadrender%3ADetail%3Ahero-quick-promo%3ADesktop%3Aprogramid%3A1024%7Cnavigate%7Cnoadrender%3ADetail%3Adp-ads-center-promo%3ADesktop%7Cnoadrender%3A3fa6ae61-e017-444f-9a6f-e9b39addf953%7Ciss-on-time%7Cadrender%3ADetail%3Acustomer-reviews-top%3AGlance%7Cadrender%3Ac9a09184-bad8-4206-80a7-f9db64ba2bb1%7Cadrender%3ADetail%3Acustomer-reviews-top%3AGlance%3Acreativeid%3A-1924146692%7Cadrender%3Ac9a09184-bad8-4206-80a7-f9db64ba2bb1%3Acreativeid%3A-1924146692%7Cadrender%3ADetail%3Acustomer-reviews-top%3AGlance%3Aprogramid%3A1024%7Cadrender%3Ac9a09184-bad8-4206-80a7-f9db64ba2bb1%3Aprogramid%3A1024%7CDPCIFBuyable%7CDPCIFLongPoleimageblock%7Caui%3Aajax%26viz%3Dvisible%3A2%26pty%3DDetail%26spty%3DGlance%26pti%3DB07H6DJZ1P%26tid%3DFQHMBRA36T6KVA44S1T8%26aftb%3D1%26ui%3D2:4705", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:XS1R1NSST0MSNB81W2M8$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DXS1R1NSST0MSNB81W2M8%26sc0%3DclickToCI%26bb0%3D705%26cf0%3D4049%26pc0%3D4049%26ld0%3D4049%26t0%3D1562592297355%26sc1%3Dportal-bb%26pc1%3D1%26ld1%3D1%26t1%3D1562592294015%26sc2%3Diss-init-pc%26bb2%3D758%26cf2%3D3673%26be2%3D3673%26pc2%3D3673%26ld2%3D3673%26t2%3D1562592296979%26sc3%3DudpV3atfwait%26bb3%3D760%26be3%3D761%26pc3%3D761%26ld3%3D761%26t3%3D1562592294067%26sc4%3DmbcUI%26bb4%3D765%26be4%3D765%26pc4%3D765%26ld4%3D765%26t4%3D1562592294071%26sc5%3Dadplacements%3ADetail%3Ahero-quick-promo%3ADesktop%26bb5%3D864%26af5%3D1700%26cf5%3D2450%26be5%3D2856%26pc5%3D3982%26ld5%3D3845%26t5%3D1562592297151%26sc6%3Dadplacements%3ADetail%3Acustomer-reviews-top%3AGlance%26bb6%3D2284%26af6%3D2373%26cf6%3D2677%26be6%3D3343%26pc6%3D4426%26ld6%3D4385%26t6%3D1562592297691%26sc7%3Dadplacements%3Ac9a09184-bad8-4206-80a7-f9db64ba2bb1%26bb7%3D2284%26af7%3D2373%26cf7%3D2677%26be7%3D3343%26pc7%3D4426%26ld7%3D4385%26t7%3D1562592297691%26sc8%3DcsmCELLSframework%26bb8%3D2541%26pc8%3D2541%26ld8%3D2541%26t8%3D1562592295847%26sc9%3DcsmCELLSpdm%26bb9%3D2542%26pc9%3D2615%26ld9%3D2615%26t9%3D1562592295921%26sc10%3DcsmCELLSvpm%26bb10%3D2615%26pc10%3D2616%26ld10%3D2616%26t10%3D1562592295922%26sc11%3DcsmCELLSfem%26bb11%3D2616%26pc11%3D2616%26ld11%3D2616%26t11%3D1562592295922%26sc12%3Due_sushi_v1%26bb12%3D2618%26pc12%3D2620%26ld12%3D2620%26t12%3D1562592295926%26sc13%3DdpATCTTI%26bb13%3D3350%26cf13%3D763%26pc13%3D4049%26ld13%3D4049%26t13%3D1562592297355%26ctb%3D1:4705", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/61SgvbqBGhL._SL1000_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41u0ybQF08L._AC_SR420,330_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/imp?b=Qor0XgUA-XnQ-JOAnbTsiscAAAFr0cIzQQMAAAH_Ac9w0VU", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE
    );

    ns_end_transaction("ref_iconfarm_ad_gv", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("com_amazon_eel_SponsoredProd");
    ns_web_url ("com_amazon_eel_SponsoredProd",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.eel.SponsoredProductsEventTracking.prod",
        "METHOD=OPTIONS",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:application/json",
        "PreSnapshot=webpage_1562592298312.png",
        "Snapshot=webpage_1562592299401.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/01/AUIClients/ClientSideMetricsAUIJavascript@jserrorsForester.10f2559e93ec589d92509318a7e2acbac74c343a._V2_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/productAds/ad_feedback_icon_1Xsprite._CB319582757_.png", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("com_amazon_eel_SponsoredProd", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("af_link_handler_html_5");
    ns_web_url ("af_link_handler_html_5",
        "URL=https://www.amazon.in/gp/aq-feedback/lazyLoad/handler/af-link-handler.html?pl=%7B%22adPlacementMetaData%22%3A%7B%22pageUrl%22%3A%22aHR0cHM6Ly93d3cuYW1hem9uLmluL1dFQi1JTkYvdmlld3MvbWVkbGV5UkFXUGFnZVZpZXcuanNwP3JlZiU1Rj1scCU1RjE2MTgyMTE4MDMxJTVGMSU1RjEmcz1lbGVjdHJvbmljcyZxaWQ9MTU2MjU5MjI3NCZzcj0xLTE%3D%22%2C%22adElementId%22%3A%22ape_Detail_customer-reviews-top_Glance_placement%22%2C%22pageType%22%3A%22Detail%22%2C%22slotName%22%3A%22customer-reviews-top%22%7D%2C%22adCreativeMetaData%22%3A%7B%22adNetwork%22%3A%22cs%22%2C%22adProgramId%22%3A1024%2C%22adImpressionId%22%3A%22https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fe%2Fxsp%2Fimp%3Fb%3DQm9ZjQIeOzOFuOzbqkmP7E0AAAFr0cI07AMAAAH_AW6uXtg%22%2C%22adCreativeId%22%3A-1924146692%2C%22adId%22%3A20022327974602%2C%22adCreativeDetails%22%3A%5B%7B%22asin%22%3A%22B07RB1T7SJ%22%2C%22title%22%3A%22WeCool%20Cannon%20Bluetooth%20Speaker%20with%20Mic%20%7C%20High%20Bass%20Stereo%20Sound%20Portable%20Bluetooth%20Speakers%20Wireless%2C%20Mini%20Speaker%20for%20Mobile%20(Black)%22%2C%22price%22%3A%22INR%22%2C%22merchantName%22%3A%22WeCool%20Technology%22%2C%22merchantCustomerID%22%3A%22ABWP8ROYPGB1Q%22%2C%22sku%22%3A%22Hoox%2001%22%2C%22adId%22%3A%22A05783493BYIF0CV2K0X2%22%2C%22campaignId%22%3A%22A0785691275B10Z8FZCHY%22%7D%5D%7D%7D",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1562592299401.png",
        "Snapshot=webpage_1562592298663.png",
        INLINE_URLS,
            "URL=https://cloudfront-labs.amazonaws.com/x.png", "HEADER=Accept-Language:en-in", "REDIRECT=YES", "LOCATION=https://afd668173c15dceacd316d037106fb5b5.profile.lhr61-c1.cloudfront.net/test.png", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/iu3?d=amazon.in&slot=navFooter&a2=010167e39654ed462ded327d5bc14af764ce778e0ead47b9221cdb8bb4f01946cace&old_oo=0&ts=1562592293567&s=AbaH76zSnZ1ngHr1hqsClkrPkOAp7kFyvuR_kUAJJV2F&cb=1562592293567", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE
    );

    ns_end_transaction("af_link_handler_html_5", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_eel_SponsoredProd_2");
    ns_web_url ("com_amazon_eel_SponsoredProd_2",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.eel.SponsoredProductsEventTracking.prod",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:application/json",
        "PreSnapshot=webpage_1562592298663.png",
        "Snapshot=webpage_1562592298997.png",
        BODY_BEGIN,
            "{"events":[{"data":{"qualifier":"1562592293","id":"8757144102294898","widgetName":"sp_detail2","adId":"20015538799206","adIndex":"6","eventType":"2"}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Wireless/CEEX/OnePlus6/IN_WLME_OnePlus7Pro_Miscellaneous_472x674.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_Mobiles_access.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Laptops/Megamenu/D9130854_A-CEPC_PC_Laptop_Laptop_for_every_need_Slices_473x623.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_laptops_cards.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_laptops_harddrives.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_tv_smart.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_tv_buying_guide.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_tv_hometheatre.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Audio/Megamanu/megamenu_sony_473x623.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Audio/Megamanu/megamenu_473x623.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_audio_speaker.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_cameras_dslr.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_cameras_access.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_cameras_security.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_PCperipherals_gamezone.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_PCperipherals_routers.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Printers/V101208515_IN_PC_Printers_Mega_menu_graphics_473x623.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_smarthome_beginners.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Wearables/Revamp_Dec26th_18/smart_watches_472x674.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Wearables/Revamp_Dec26th_18/activity_trackers_472x674.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_MI_beginners.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_MI_soundrecording.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_MI_buyingguide.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_office_Artcraft.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_office_officesupplies.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_office_stationery.jpg", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("com_amazon_eel_SponsoredProd_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("get_image_gallery_assets");
    ns_web_url ("get_image_gallery_assets",
        "URL=https://www.amazon.in/gp/customer-reviews/aj/private/reviewsGallery/get-image-gallery-assets",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1562592298997.png",
        "Snapshot=webpage_1562592299045.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/gno/sprites/nav-sprite-global_bluebeacon-V3-2x_optimized._CB468962293_.png", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("get_image_gallery_assets", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_eel_SponsoredProd_3");
    ns_web_url ("com_amazon_eel_SponsoredProd_3",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.eel.SponsoredProductsEventTracking.prod",
        "METHOD=POST",
        "PreSnapshot=webpage_1562592299045.png",
        "Snapshot=webpage_1562592299085.png",
        INLINE_URLS,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:XS1R1NSST0MSNB81W2M8$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DXS1R1NSST0MSNB81W2M8%26ctb%3D1%26sc0%3Diss-warmup%3Afailure%26bb0%3D3685%26cf0%3D5687%26be0%3D5688%26pc0%3D5688%26ld0%3D5688%26t0%3D1562592298994%26csmtags%3Daui%3Asw%3Abrowser%3Aregister%3Asupported%7Caui%7Caui%3Aajax%26pty%3DDetail%26spty%3DGlance%26pti%3DB07H6DJZ1P%26tid%3DFQHMBRA36T6KVA44S1T8%26aftb%3D1:5688", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE
    );

    ns_end_transaction("com_amazon_eel_SponsoredProd_3", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_30");
    ns_web_url ("index_30",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1562592299085.png",
        "Snapshot=webpage_1562592299156.png",
        BODY_BEGIN,
            "{"rid":"XS1R1NSST0MSNB81W2M8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"jserr-rw":{"m":"ISS AJAX call failed for iss-warmup with responseText: undefined, pageType: Detail, status: timeout, error: timeout","csm":"v5 ueLogError callee","logLevel":"WARN","attribution":"iss-warmup","pageURL":"https://www.amazon.in/CERTIFIED-REFURBISHED-Philips-Portable-Bluetooth/dp/B07H6DJZ1P/ref=lp_16182118031_1_1?s=electronics&ie=UTF8&qid=1562592274&sr=1-1","s":["function (){if(g.ue_err.erl){var b=g.ue_err.erl.length,l,a;for(l=0;l<b;l++)a=g.ue_err.erl[l],B(a.ex,a.info);ue_err.erl=[]}}","function (g,f){function y(b){if(b)return b.replace(/^\\s+|\\s+$/g,\"\")}function w(b,l){if(!b)return{};var a=\"INFO\"===l.logLevel;b.m&&b.m.message&&(b=b.m);var e=l.m||l.message||\"\",e=b.m&&b.m.message?e+b.m.message:b.m&&b.m.target&&b.m.target.tagName?e+(\"Error handler invoked by \"+b.m.target.tagName+\" tag\"):b.m?e+b.m:b.message?e+b.message:e+\"Unknown error\",e={m:e,name:b.name,type:b.type,csm:N+\" \"+(b.fromOnError?\"onerror\":\"ueLogError\")},k,f,h=0,q;e.logLevel=l.logLevel||A;l.adb&&(e.adb=l.adb);if(k=l.attribution)e.a"],"t":5710}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":1226}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/imp?b=Qm9ZjQIeOzOFuOzbqkmP7E0AAAFr0cI07AMAAAH_AW6uXtg", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE
    );

    ns_end_transaction("index_30", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("ref_iconfarm_rp_gv");
    ns_web_url ("ref_iconfarm_rp_gv",
        "URL=https://www.amazon.in/gp/product/ajax/dpx-metrics-handler.html/ref=iconfarm_rp_gv?pageAsin=B07H6DJZ1P&pageType=Detail&subPageType=IconFarm&merchantId=A3VM9N4M94Q18E",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1562592299156.png",
        "Snapshot=webpage_1562592299728.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/reviews-legacy/review-lightbox-combined._CB279607588_.css", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/984527532/?value=0&label=r_58CJXm0gIQw9iz3gM&guid=ON&script=0&data=ecomm_pagetype%3DProductDetail%3Becomm_prodid%3DB07H6DJZ1P%3Becomm_price%3D%3Becomm_pcat%3DElectronics%3Becomm_pname%3D(Renewed)%20Philips%20BT40BK%2F94%20Portable%20Wireless%20Bluetooth%20Speaker%20(Black)%3Bsearchterm%3D%3BCURRENT_TIME%3D2019-07-08T13%3A24%3A59.512Z%3BSignedIn%3DN", "HEADER=Accept-Language:en-in", "COOKIE=IDE", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/v3/pr?exlist=twca_imdb&fv=1.0&ex-pl-twca=TxUMpLjCQra7Z9ymu-dsNQ&a=cm", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE
    );

    ns_end_transaction("ref_iconfarm_rp_gv", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("gv");
    ns_web_url ("gv",
        "URL=https://www.amazon.in/gp/cerberus/gv",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:no-cache",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;csm-hit;session-id-time;visitCount",
        "PreSnapshot=webpage_1562592299728.png",
        "Snapshot=webpage_1562592299891.png",
        BODY_BEGIN,
            "payload=%7B%22producerId%22%3A%22detail-page%22%2C%22asin%22%3A%22B07H6DJZ1P%22%2C%22asin_price%22%3A%22899.00%22%2C%22asin_shipping_price%22%3A%220%22%2C%22asin_currency_code%22%3A%22INR%22%2C%22device_type%22%3A%22WEB%22%2C%22display_code%22%3A%22Asin+is+not+eligible+because+it+is+price+competitive%22%2C%22substitute_count%22%3A%22-1%22%7D",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/reviews-legacy/review-lightbox-combined._CB279607633_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41gCbfiTdaL._RC%7C516fcOUE-HL.css,01evdoiemkL.css,01K+Ps1DeEL.css,31pdJv9iSzL.css,01tgK36lpGL.css,11UGC+GXOPL.css,21LK7jaicML.css,11L58Qpo0GL.css,21kyTi1FabL.css,01Xl9KigtzL.css,01YhS3Cs-hL.css,21GwE3cR-yL.css,019SHZnt8RL.css,01wAWQRgXzL.css,21bWcRJYNIL.css,11WgRxUdJRL.css,01dU8+SPlFL.css,11ocrgKoE-L.css,01SHjPML6tL.css,111-D2qRjiL.css,01QrWuRrZ-L.css,310Imb6LqFL.css,11Z1a0FxSIL.css,01cbS3UK11L.css,21mOLw+nYYL.css,01L8Y-JFEhL.css_.css?AUIClients/AmazonUI#not-trident", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11rSsS-PDPL._RC%7C218rehcHYxL.js,118Say7HIZL.js,21E2aIDj6DL.js,31eEXkvrJzL.js,01g2etah0NL.js,31Nb5hZQizL.js,31selSsN+1L.js,413u98XONQL.js,21u1PnPEsML.js,51+io-0L8GL.js,316nVZ1c+gL.js,01AdYLY9rHL.js,01IOMCsVFCL.js,11FOFYUJH9L.js,21CoP20PxBL.js,11dhZ6zkMNL.js,71LEtO5Vv5L.js,0185ITV0M6L.js,41Dds42UuNL.js,31UjTApGOPL.js,01bJ1qvdy1L.js,11K4T3M0xSL.js,11uqR2Ko2WL.js,01wYyhYnnFL.js,01LHJt5PiyL.js,31Ac-cQ+ZWL.js,01VgEfU-GFL.js,01HmcbFsnFL.js,01JzE3-DfLL.js,31sG+M5QN5L.js,11AVRVWTouL.js,11MQqFPEK+L.js,01I+ls4AqQL.js,01jqyAujTwL.js,31+0pACITzL.js,01OrQ5AXqsL.js,11gAPPElxuL.js,01OtvpwikQL.js,21J9Onr4hrL.js,217rNh01UsL.js,01S8y9NkxoL.js,01ZF+ovNflL.js,31Zl-BWE10L.js,51foFGmxtyL.js,01Z-Ip0c4YL.js,01qPwv8D5hL.js,01YivelYW5L.js,016QFWAAdML.js,01rg6Ce9FhL.js,010kX03xiRL.js,31NuG3-7xRL.js,011bX2ciJbL.js,21222B+rAzL.js,01gp3oqpb5L.js,31ItJPFyotL.js,11CIaAZhucL.js,01NGbPzAzBL.js,01NKGaW0w5L.js,01rEmdLLpxL.js,019W6kk1gjL.js,01hkseOXj6L.js,01lcH4zcTaL.js,01UkZ13lKKL.js_.js?AUIClients/SoftlinesDetailPageMetaAsset#desktop.language-en.in.167162-T1.162525-T1.166419-T1.186063-T1.195041-T1.203659-T1.151985-T1.183511-T1.103061-T1.184424-T1.186073-T2.200616-T1.173971-T1.131900-C.144201-T1.186725-T1.186696-T1.173115-T1.184758-T1.184759-T1.185101-T1.184757-T1.126331-C.156391-T1.202285-C.109378-T1.147957-T1.154031-T3.198898-C.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41fMrDoAFbL._RC%7C71GkUD1temL.js,61u3dpzHy+L.js,41W9ohA0e+L.js,11vrNkbdcvL.js,21SHd9g2LAL.js,311T8Q1zWKL.js,51+klsvwgqL.js,31IEOtBPX+L.js_.js?AUIClients/AmazonNavigationDesktopMetaAsset#desktop", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ET%2BPmLUUL._RC%7C119njhJT7LL.css,41j52RQ1GmL.css,210LbiKyCML.css,31j6BOPjmzL.css,01ekIXTj5kL.css,11UGK4+GCNL.css,01KvCqKMBgL.css,21ckusqmu6L.css,01N8OOpUZPL.css,41M1QoNbYzL.css,21ByukFKG4L.css,01f0Gtj6a9L.css,31q5EHoIcZL.css,31JMnREMjZL.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,31MkQHV3gaL.css,01uHoBLsGfL.css,314gb2LkLML.css,01FtAuFRr3L.css,01QLwk8mu6L.css,014Z+MbaRaL.css,01RRH0yFa4L.css,01bkkYjxP7L.css,018mGORJ7tL.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,01mju9O84EL.css,01wL78bNyyL.css,01MLzcotflL.css,31SN3jkqdEL.css,21Wf53xZ5jL.css,01OhA16ND1L.css,01gtuC0zSuL.css,01qwEWNuxuL.css,21qxDmhZV3L.css,11XXguyjjZL.css,31WlxajeYrL.css,01clde05tlL.css,11Z7S+lK47L.css,01AT3O0C6cL.css_.css?AUIClients/SoftlinesDetailPageMetaAsset#desktop.in.113788-C.162525-T1.166419-T1.203659-T1.103061-T1.184424-T1.131900-C.94145-T1.144201-T1.126331-C.202285-C.215632-C.109378-T1.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/218rehcHYxL._RC%7C118Say7HIZL.js,21E2aIDj6DL.js,31eEXkvrJzL.js,01g2etah0NL.js,31selSsN+1L.js,413u98XONQL.js,0185ITV0M6L.js,41Dds42UuNL.js,11FOFYUJH9L.js,21CoP20PxBL.js,71LEtO5Vv5L.js,41COmOfIQhL.js,11nOzlnr6+L.js,31BBQa2c9BL.js,31Gy8EGyyiL.js,31UjTApGOPL.js,31Ac-cQ+ZWL.js,21NDIsf0a1L.js,11AVRVWTouL.js,11MQqFPEK+L.js,01jqyAujTwL.js,31+0pACITzL.js,613fAh2h0OL.js,11jf5oS-4FL.js,01RQtSMdG+L.js,01OtvpwikQL.js,21J9Onr4hrL.js,21m9o6VHhOL.js,21bSviTzsOL.js,11mvqFXObSL.js,217rNh01UsL.js,31W9fAH+1aL.js,01lcH4zcTaL.js,01qPwv8D5hL.js,01YivelYW5L.js,01rg6Ce9FhL.js,016QFWAAdML.js,41Eko5EJ6TL.js,31apIfAEBaL.js,31NuG3-7xRL.js,11div+n5b+L.js,01IQoRXvpnL.js,011bX2ciJbL.js,21222B+rAzL.js,01gp3oqpb5L.js,31ItJPFyotL.js,11CIaAZhucL.js,01NGbPzAzBL.js,011kwg0OTQL.js,01jLpHmb92L.js,014kCoIHgIL.js,019W6kk1gjL.js,01hkseOXj6L.js,0189flJt-AL.js,01lPKWAwBBL.js_.js?AUIClients/HardlinesDetailPageMetaAssetVariable#desktop.language-en.in.167162-T1.203659-T1.183511-T1.103061-T1.184424-T1.186073-T2.150150-T1.200616-T1.173971-T1.144201-T1.186725-T1.186696-T1.173115-T1.184758-T1.184759-T1.185101-T1.184757-T1.126331-C.109378-T1.147957-T1.154031-T3.198898-C.213433-T1.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("gv", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("get_application_resources_fo");
    ns_web_url ("get_application_resources_fo",
        "URL=https://www.amazon.in/gp/customer-reviews/aj/private/reviewsGallery/get-application-resources-for-reviews-gallery",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;csm-hit;session-id-time;visitCount",
        "PreSnapshot=webpage_1562592299891.png",
        "Snapshot=webpage_1562592300413.png",
        BODY_BEGIN,
            "noCache=1562592299861",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/buy-buttons/review-1-click-order._CB138348768_.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/buttons/continue-shopping._CB138360611_.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/buy-buttons/thank-you-elbow._CB138348794_.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/communities/social/snwicons_v2._CB402380004_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/checkout/assets/carrot._CB138350193_.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("get_application_resources_fo", NS_AUTO_STATUS);
    ns_page_think_time(1.079);

    //Page Auto splitted for Button 'Add to Cart' Clicked by User
    ns_start_transaction("yellow_rounded_corner_sprite");
    ns_web_url ("yellow_rounded_corner_sprite",
        "URL=https://images-eu.ssl-images-amazon.com/images/G/31/checkout/thank-you-page/assets/yellow-rounded-corner-sprite._CB166613107_.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562592300162.png",
        "Snapshot=webpage_1562592300174.png"
    );

    ns_end_transaction("yellow_rounded_corner_sprite", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_31");
    ns_web_url ("index_31",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount",
        "PreSnapshot=webpage_1562592300174.png",
        "Snapshot=webpage_1562592300193.png",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/index_31_url_0_1_1562592364149.body",
        BODY_END
    );

    ns_end_transaction("index_31", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_csm_nexusclient_p_4");
    ns_web_url ("com_amazon_csm_nexusclient_p_4",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.csm.nexusclient.prod",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "PreSnapshot=webpage_1562592300193.png",
        "Snapshot=webpage_1562592300477.png",
        BODY_BEGIN,
            "{"cs":{"dct":{"#0":"violationType","#1":"unresponsive-clicks","#2":"violationCount","#3":"totalScanned","#4":"producerId","#5":"csm","#6":"schemaId","#7":"csm.ArmoredCXGuardrailsViolation.3","#8":"timestamp","#9":"messageId","#10":"sessionId","#11":"259-1202557-5929705","#12":"requestId","#13":"XS1R1NSST0MSNB81W2M8","#14":"obfuscatedMarketplaceId","#15":"A21TJRUUN4KGV"}},"events":[{"data":{"#0":"#1","#2":0,"#3":1,"#4":"#5","#6":"#7","#8":"2019-07-08T13:25:00.148Z","#9":"XS1R1NSST0MSNB81W2M8-1562592300148-5589696088","#10":"#11","#12":"#13","#14":"#15"}}]}",
        BODY_END
    );

    ns_end_transaction("com_amazon_csm_nexusclient_p_4", NS_AUTO_STATUS);
    ns_page_think_time(0.174);

    ns_start_transaction("ref_dp_start_bbf_1_glance");
    ns_web_url ("ref_dp_start_bbf_1_glance",
        "URL=https://www.amazon.in/gp/product/handle-buy-box/ref=dp_start-bbf_1_glance",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount;csm-hit",
        "PreSnapshot=webpage_1562592300230.png",
        "Snapshot=webpage_1562592300690.png",
        INLINE_URLS,
            "URL=https://analytics.twitter.com/i/adsct?p_id=985&p_user_id=TxUMpLjCQra7Z9ymu-dsNQ&twitter_redir=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dtwca%26id%3DTxUMpLjCQra7Z9ymu-dsNQ%26", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://www.imdb.com/ads/idsync?cid=79bc437ba&ex=imdb.com", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210LbiKyCML._RC%7C31j6BOPjmzL.css,01ekIXTj5kL.css,01KvCqKMBgL.css,21ckusqmu6L.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,31q5EHoIcZL.css,41hIrT0+wbL.css,01FlII1u-ZL.css,219oCRGl-sL.css,212hS9k0-iL.css,31MkQHV3gaL.css,314gb2LkLML.css,31dTK1hHb6L.css,014Z+MbaRaL.css,01RRH0yFa4L.css,01bkkYjxP7L.css,31Wg0ai095L.css,01f31VNCowL.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,31Fo-RK+JML.css,01CslPlvtoL.css,01mju9O84EL.css,11Z7S+lK47L.css,21Wf53xZ5jL.css,01OhA16ND1L.css,11xmZPMxSJL.css,41Uz4bMH9yL.css,01TZ9fpDSSL.css,11ikU6MX1JL.css,01qwEWNuxuL.css,21qxDmhZV3L.css,11XXguyjjZL.css,31WlxajeYrL.css,01clde05tlL.css,01nX97hgmYL.css,61hZ-YG-XRL.css,01Jrt6rHBlL.css_.css?AUIClients/HardlinesDetailPageMetaAssetVariable_ACCESSORIES_AND_FAMILY_STRIPE#desktop.in.not-trident.122952-T1.113788-C.203659-T1.103061-T1.184424-T1.150150-T1.144201-T1.126331-C.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("ref_dp_start_bbf_1_glance", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_32");
    ns_web_url ("index_32",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount",
        "PreSnapshot=webpage_1562592300690.png",
        "Snapshot=webpage_1562592300971.png",
        BODY_BEGIN,
            "{"rid":"XS1R1NSST0MSNB81W2M8","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"csmcount":{"counter":"dpOffers:buybox:desktop:AddToCartClicked","value":1,"t":6833}},{"csmcount":{"counter":"QF-N:SNC:QN:TN","value":1,"t":6843}},{"csmcount":{"counter":"cel.PDM.TotalExecutions","value":6,"t":6843}},{"csmcount":{"counter":"cel.VPI.TotalExecutions","value":1,"t":6843}},{"csmcount":{"counter":"cel.VPI.TotalExecutionTime","value":0,"t":6843}},{"csmcount":{"counter":"cel.VPI.AverageExecutionTime","value":0,"t":6843}},{"csmcount":{"counter":"cel.widgets.batchesProcessed","value":16,"t":6843}},{"cel":{"k":"mmm1","e":[{"x":1039,"y":377,"t":5960},{"x":1038,"y":377,"t":6019},{"x":1038,"y":377,"t":6843}],"min":9,"max":50,"avg":29}},{"cel":{"k":"hrt","t":6843}},{"cel":{"k":"eod","t0":1562592293306,"t":6843}},{"csmcount":{"counter":"armored-cxguardrails.unresponsive-clicks.violations","value":0,"t":6844}},{"csmcount":{"counter":"armored-cxguardrails.unresponsive-clicks.violationRate","value":0,"t":6844}},{"csm":{"k":"chk","f":2,"l":{"csmcount":252,"cel":158,"navigation":1,"csm":3,"jserr-rw":1},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":1204}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.google.com/pagead/1p-user-list/984527532/?value=0&label=r_58CJXm0gIQw9iz3gM&guid=ON&script=0&data=ecomm_pagetype%3DProductDetail%3Becomm_prodid%3DB07H6DJZ1P%3Becomm_price%3D%3Becomm_pcat%3DElectronics%3Becomm_pname%3D(Renewed)%20Philips%20BT40BK%2F94%20Portable%20Wireless%20Bluetooth%20Speaker%20(Black)%3Bsearchterm%3D%3BCURRENT_TIME%3D2019-07-08T13%3A24%3A59.512Z%3BSignedIn%3DN&cdct=2&is_vtc=1&random=3634564517", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://afd668173c15dceacd316d037106fb5b5.profile.lhr61-c1.cloudfront.net/test.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31SN3jkqdEL.css?AUIClients/DetailPageSnSAssets#215632-C.109378-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("index_32", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_33");
    ns_web_url ("index_33",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount",
        "PreSnapshot=webpage_1562592300971.png",
        "Snapshot=webpage_1562592302689.png",
        BODY_BEGIN,
            "{"rid":"EH62JJ2C4MP7MD1QJXHQ","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"mmm1","e":[{"x":864,"y":248,"t":16223},{"x":761,"y":210,"t":16316},{"x":692,"y":196,"t":16360},{"x":626,"y":197,"t":16411},{"x":580,"y":221,"t":16471},{"x":360,"y":232,"t":17012},{"x":280,"y":274,"t":17185},{"x":272,"y":296,"t":17283},{"x":309,"y":327,"t":17454}],"min":49,"max":130,"avg":90}},{"cel":{"k":"hrt","t":26207}},{"csm":{"k":"chk","f":4,"l":{"csmcount":68,"cel":74,"csm":5,"navigation":1,"jserr-rw":2},"s":"full"}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/218rehcHYxL._RC%7C118Say7HIZL.js,21E2aIDj6DL.js,31eEXkvrJzL.js,01g2etah0NL.js,31selSsN+1L.js,413u98XONQL.js,0185ITV0M6L.js,41Dds42UuNL.js,11FOFYUJH9L.js,21CoP20PxBL.js,71LEtO5Vv5L.js,41COmOfIQhL.js,11nOzlnr6+L.js,31BBQa2c9BL.js,31Gy8EGyyiL.js,31UjTApGOPL.js,31Ac-cQ+ZWL.js,21NDIsf0a1L.js,11AVRVWTouL.js,11MQqFPEK+L.js,01jqyAujTwL.js,31+0pACITzL.js,613fAh2h0OL.js,11jf5oS-4FL.js,01RQtSMdG+L.js,01OtvpwikQL.js,21J9Onr4hrL.js,21m9o6VHhOL.js,21bSviTzsOL.js,11mvqFXObSL.js,217rNh01UsL.js,31W9fAH+1aL.js,01lcH4zcTaL.js,01qPwv8D5hL.js,01YivelYW5L.js,01rg6Ce9FhL.js,016QFWAAdML.js,41Eko5EJ6TL.js,31apIfAEBaL.js,31NuG3-7xRL.js,11div+n5b+L.js,01IQoRXvpnL.js,011bX2ciJbL.js,21222B+rAzL.js,01gp3oqpb5L.js,31ItJPFyotL.js,11CIaAZhucL.js,01NGbPzAzBL.js,011kwg0OTQL.js,01jLpHmb92L.js,014kCoIHgIL.js,019W6kk1gjL.js,01hkseOXj6L.js,0189flJt-AL.js,01lPKWAwBBL.js,41ZKpsOG2XL.js,41WTMwhRXFL.js,61m-slBs3VL.js,013yVF4PBmL.js_.js?AUIClients/HardlinesDetailPageMetaAssetVariable_ACCESSORIES_AND_FAMILY_STRIPE#desktop.language-en.in.167162-T1.203659-T1.183511-T1.103061-T1.184424-T1.186073-T2.150150-T1.200616-T1.173971-T1.215516-T1.144201-T1.186725-T1.186696-T1.173115-T1.184758-T1.184759-T1.185101-T1.184757-T1.126331-C.109378-T1.147957-T1.154031-T3.198898-C.213433-T1.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ET%2BPmLUUL._RC%7C119njhJT7LL.css,51QoAH-sF5L.css,01g2EoxOu-L.css,11UGK4+GCNL.css,21ByukFKG4L.css,01N8OOpUZPL.css,11xRy3bSkOL.css,01QUs5FVXoL.css,31JMnREMjZL.css,015QemNxHyL.css,41vOQb1k0LL.css,01uHoBLsGfL.css,01FtAuFRr3L.css,01rgQ3jqo7L.css,31B2u5k-3gL.css,312UeeukJML.css,11X8K4AolpL.css,21cgGInnQ9L.css,21QKJp6qQ9L.css,31cE7qTuwaL.css_.css?AUIClients/HardlinesDetailPageMetaAssetFixed#desktop.in.138488-T1.102054-T1.131900-C.129737-C.94145-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41gCbfiTdaL._RC%7C516fcOUE-HL.css,01evdoiemkL.css,01K+Ps1DeEL.css,31pdJv9iSzL.css,01tgK36lpGL.css,11UGC+GXOPL.css,21LK7jaicML.css,11L58Qpo0GL.css,21kyTi1FabL.css,01Xl9KigtzL.css,01YhS3Cs-hL.css,21GwE3cR-yL.css,019SHZnt8RL.css,01wAWQRgXzL.css,21bWcRJYNIL.css,11WgRxUdJRL.css,01dU8+SPlFL.css,11ocrgKoE-L.css,01SHjPML6tL.css,111-D2qRjiL.css,01QrWuRrZ-L.css,310Imb6LqFL.css,11Z1a0FxSIL.css,01cbS3UK11L.css,21mOLw+nYYL.css,01L8Y-JFEhL.css_.css?AUIClients/AmazonUI#not-trident", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/01fozSdJDJL._RC%7C417sUrLoU7L.css_.css?AUIClients/SharedHUCDesktopCSSAsset#in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210UtsRqV6L._RC%7C71+WX4uo+uL.css,11zh5zoa5AL.css,31cuIVKhckL.css,210-42NMyML.css,31wWWC6YAvL.css,11G4HxMtMSL.css,31OvHRW+XiL.css,01XHMOHpK1L.css_.css?AUIClients/AmazonNavigationDesktopMetaAsset#desktop.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41dDGZMv-uL._SS50_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/checkout/gifts_icon._CB501075126_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41pGpjrGumL._AC_SL230_PE46_OU31_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41u0ybQF08L._AC_SL230_PE72_OU31_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41rfOvos%2BjL._AC_SL230_PE50_OU31_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/common/sprites/sprite-site-wide-2.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51-1ThMSvyL._AC_SL230_PE52_OU31_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51yNhR0sj7L._AC_SL230_PE41_OU31_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41FDw9jR2dL._AC_SL230_PE43_OU31_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31QdG6W5bNL._AC_SL230_PE60_OU31_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51AnZKB2UPL._AC_SL230_PE77_OU31_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61kzhTBl2qL._RC%7C11-BZEJ8lnL.js,61GQ9IdK7HL.js,21Of0-9HPCL.js,012FVc3131L.js,119KAWlHU6L.js,51xL2QLv4YL.js,11AHlQhPRjL.js,016iHgpF74L.js,11aNYFFS5hL.js,116tgw9TSaL.js,211-p4GRUCL.js,01PoLXBDXWL.js,61BanVD+50L.js,01mi-J86cyL.js,11BOgvnnntL.js,31UWuPgtTtL.js,01rpauTep4L.js,01iyxuSGj4L.js,01OWoGffjKL.js_.js?AUIClients/AmazonUI#189458-T1.192338-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11wPDHNFiRL._RC%7C41t33lO96fL.js_.js?AUIClients/SharedHUCDesktopCSSAsset#125328-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/01c2iBf4a9L.js?AUIClients/SharedHUCDesktopJSAsset", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41rfiXY2HwL._AC_SL230_PE90_OU31_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41PmBnwnpDL._AC_SL230_PE56_OU31_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41FOSGvW2fL._AC_SL230_PE76_OU31_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51%2BaCA1ESGL._AC_SL230_PE81_OU31_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51z-0wtflPL._AC_SL230_PE56_OU31_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41D6nq3MFoL._AC_SL230_PE11_OU31_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/618I%2BpLRIRL._AC_SL230_PE37_OU31_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41LVtRX7OcL._AC_SL230_PE33_OU31_.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41YUeDE3zHL._RC%7C71aLqNGbWsL.js,61u3dpzHy+L.js,417SPNjYS3L.js,11vrNkbdcvL.js,21SHd9g2LAL.js,31xNSJua7KL.js,51YeRc8UK1L.js,31R1liuRRmL.js_.js?AUIClients/AmazonNavigationDesktopMetaAsset#desktop", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/312aj6HKNXL.js?AUIClients/INRetargetingAsset", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("index_33", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("suggestions_4");
    ns_web_url ("suggestions_4",
        "URL=https://completion.amazon.co.uk/api/2017/suggestions?session-id=259-1202557-5929705&customer-id=&request-id=RNQ1C7RT53MRT72MT77A&page-type=ShoppingCart&lop=en_IN&site-variant=desktop&client-info=amazon-search-ui&mid=A21TJRUUN4KGV&alias=electronics&searchTerm=a&suggestion-type=KEYWORD&suggestion-type=WIDGET&_=1562592302657",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562592302689.png",
        "Snapshot=webpage_1562592302938.png",
        INLINE_URLS,
            "URL=https://www.amazon.in/gp/product/handle-buy-box/ref=dp_start-bbf_1_glance/uedata/unsticky/259-1202557-5929705/ShoppingCart/ntpoffrw?ld&v=0.204299.0&id=RNQ1C7RT53MRT72MT77A&bf=dall_1-dcm_1-xhr_1-qs_1-ael_1-atob_1-pjs_0-njs_0-cjs_0-rhn_0-sel_0-chrm_0-plg_1-no_0-&m=1&sc=RNQ1C7RT53MRT72MT77A&ue=3&cb=10&ns=111&ne=139&af=140&cf=314&be=1025&fp=127&fcp=127&pc=1048&tc=-1497&na_=-1497&ul_=-163&_ul=-162&rd_=-1562592301647&_rd=-1562592301647&fe_=-1497&lk_=-1497&_lk=-1497&co_=-1497&_co=-1497&sc_=-1562592301647&rq_=-937&rs_=-308&_rs=944&dl_=-126&di_=1037&de_=1038&_de=1044&_dc=1047&ld_=1047&_ld=-1562592301647&ntd=-1&ty=0&rc=0&hob=1&hoe=3&ld=1053&t=1562592302700&ctb=1&rt=cf:16-0-3-8-2-8-1_af:10-0-3-3-2-7-1_ld:36-5-3-22-2-9-0&csmtags=aui|aui:aui_build_date:3.19.4-2019-05-28|navbar|iss-on-time|fls-eu|adblk_no&viz=visible:2&pty=ShoppingCart&spty=NewHUC&pti=B07H6DJZ1P&tid=FQHMBRA36T6KVA44S1T8&aftb=1", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount;csm-hit", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:RNQ1C7RT53MRT72MT77A$uedata=s:%2Fgp%2Fproduct%2Fhandle-buy-box%2Fref%3Ddp_start-bbf_1_glance%2Fuedata%2Funsticky%2F259-1202557-5929705%2FShoppingCart%2Fntpoffrw%3Fld%26v%3D0.204299.0%26id%3DRNQ1C7RT53MRT72MT77A%26bf%3Ddall_1-dcm_1-xhr_1-qs_1-ael_1-atob_1-pjs_0-njs_0-cjs_0-rhn_0-sel_0-chrm_0-plg_1-no_0-%26m%3D1%26sc%3DRNQ1C7RT53MRT72MT77A%26ue%3D3%26cb%3D10%26ns%3D111%26ne%3D139%26af%3D140%26cf%3D314%26be%3D1025%26fp%3D127%26fcp%3D127%26pc%3D1048%26tc%3D-1497%26na_%3D-1497%26ul_%3D-163%26_ul%3D-162%26rd_%3D-1562592301647%26_rd%3D-1562592301647%26fe_%3D-1497%26lk_%3D-1497%26_lk%3D-1497%26co_%3D-1497%26_co%3D-1497%26sc_%3D-1562592301647%26rq_%3D-937%26rs_%3D-308%26_rs%3D944%26dl_%3D-126%26di_%3D1037%26de_%3D1038%26_de%3D1044%26_dc%3D1047%26ld_%3D1047%26_ld%3D-1562592301647%26ntd%3D-1%26ty%3D0%26rc%3D0%26hob%3D1%26hoe%3D3%26ld%3D1053%26t%3D1562592302700%26ctb%3D1%26rt%3Dcf%3A16-0-3-8-2-8-1_af%3A10-0-3-3-2-7-1_ld%3A36-5-3-22-2-9-0%26csmtags%3Daui%7Caui%3Aaui_build_date%3A3.19.4-2019-05-28%7Cnavbar%7Ciss-on-time%7Cfls-eu%7Cadblk_no%26viz%3Dvisible%3A2%26pty%3DShoppingCart%26spty%3DNewHUC%26pti%3DB07H6DJZ1P%26tid%3DFQHMBRA36T6KVA44S1T8%26aftb%3D1:1054", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:RNQ1C7RT53MRT72MT77A$uedata=s:%2Fgp%2Fproduct%2Fhandle-buy-box%2Fref%3Ddp_start-bbf_1_glance%2Fuedata%2Funsticky%2F259-1202557-5929705%2FShoppingCart%2Fntpoffrw%3Fld%26v%3D0.204299.0%26id%3DRNQ1C7RT53MRT72MT77A%26bf%3Ddall_1-dcm_1-xhr_1-qs_1-ael_1-atob_1-pjs_0-njs_0-cjs_0-rhn_0-sel_0-chrm_0-plg_1-no_0-%26sc0%3Diss-init-pc%26bb0%3D133%26cf0%3D1001%26be0%3D1001%26pc0%3D1001%26ld0%3D1001%26t0%3D1562592302648%26sc1%3DcsmCELLSframework%26bb1%3D1021%26pc1%3D1021%26ld1%3D1021%26t1%3D1562592302668%26sc2%3DcsmCELLSpdm%26bb2%3D1021%26pc2%3D1024%26ld2%3D1024%26t2%3D1562592302671%26sc3%3DcsmCELLSvpm%26bb3%3D1024%26pc3%3D1024%26ld3%3D1024%26t3%3D1562592302671%26sc4%3DcsmCELLSfem%26bb4%3D1024%26pc4%3D1024%26ld4%3D1024%26t4%3D1562592302671%26ctb%3D1:1054", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/AmazonVideo/2019/SingleTitle/Kalank/499x492-GNO_without-disclaimer._CB443211996_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img17/TV/Flyout/1050726_InternetTV_flyout-2._CB505081595_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonBrands/Mamabear/Overall/Flyoutnew_500x450_1559280449._CB461564221_.png", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://www.amazon.in/gp/huc/view.html?ie=UTF8&newItems=Cd9af5c3f-62f6-4611-b472-1c48a14a8386%2C1", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/AUIClients/ClientSideMetricsAUIJavascript@jserrorsForesterSushi.0ae51f959b37defea676349f19fac6428628826b._V2_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/AUIClients/FWCIMAssets.51c2a8513bb855c92a49e78dbeab4f9e24afeb55._V2_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/01GseLPi47L.js?AUIClients/PerformanceResourceTimingAssets", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:RNQ1C7RT53MRT72MT77A$uedata=s:%2Fgp%2Fproduct%2Fhandle-buy-box%2Fref%3Ddp_start-bbf_1_glance%2Fuedata%2Funsticky%2F259-1202557-5929705%2FShoppingCart%2Fntpoffrw%3Fld%26v%3D0.204299.0%26id%3DRNQ1C7RT53MRT72MT77A%26ctb%3D1%26sc0%3Diss-warmup%3Asuccess%26bb0%3D1007%26cf0%3D1348%26be0%3D1348%26pc0%3D1348%26ld0%3D1348%26t0%3D1562592302995%26csmtags%3Daui%3Asw%3Abrowser%3Aregister%3Asupported%26pty%3DShoppingCart%26spty%3DNewHUC%26pti%3DB07H6DJZ1P%26tid%3DFQHMBRA36T6KVA44S1T8%26aftb%3D1:1348", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/iu3?d=amazon.in&slot=navFooter&a2=010167e39654ed462ded327d5bc14af764ce778e0ead47b9221cdb8bb4f01946cace&old_oo=0&ts=1562592302085&s=AT7CxupTIZHwSjHSFSNWvUF8WQQsznGWFPOkqsQNkThR&cb=1562592302085", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:259-1202557-5929705:RNQ1C7RT53MRT72MT77A$uedata=s:%2Fgp%2Fproduct%2Fhandle-buy-box%2Fref%3Ddp_start-bbf_1_glance%2Fuedata%2Funsticky%2F259-1202557-5929705%2FShoppingCart%2Fntpoffrw%3Fld%26v%3D0.204299.0%26id%3DRNQ1C7RT53MRT72MT77A%26ctb%3D1%26sc0%3Due_sushi_v1%26bb0%3D1634%26pc0%3D1635%26ld0%3D1635%26t0%3D1562592303282%26pty%3DShoppingCart%26spty%3DNewHUC%26pti%3DB07H6DJZ1P%26tid%3DFQHMBRA36T6KVA44S1T8%26aftb%3D1:1635", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/v3/pr?exlist=twca&fv=1.0&ex-pl-twca=TxUMpLjCQra7Z9ymu-dsNQ&a=cm", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-in", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://analytics.twitter.com/i/adsct?p_id=985&p_user_id=TxUMpLjCQra7Z9ymu-dsNQ&twitter_redir=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dtwca%26id%3DTxUMpLjCQra7Z9ymu-dsNQ%26", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/remote-weblab-triggers/1/OE/A21TJRUUN4KGV:259-1202557-5929705:RNQ1C7RT53MRT72MT77A$s:wl-client-id%3DCSMTriger%2Cwl%3DUEDATA_AA_SERVERSIDE_ASSIGNMENT_CLIENTSIDE_TRIGGER_190249%2FC:1234", "HEADER=Cache-Control:max-age=0", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount", END_INLINE
    );

    ns_end_transaction("suggestions_4", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_34");
    ns_web_url ("index_34",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount",
        "PreSnapshot=NA",
        "Snapshot=NA",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/index_34_url_0_1_1562592365074.body",
        BODY_END
    );

    ns_end_transaction("index_34", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_csm_nexusclient_p_5");
    ns_web_url ("com_amazon_csm_nexusclient_p_5",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.csm.nexusclient.prod",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "PreSnapshot=NA",
        "Snapshot=webpage_1562592303969.png",
        BODY_BEGIN,
            "{"cs":{"dct":{"#0":"requestId","#1":"RNQ1C7RT53MRT72MT77A","#2":"server","#3":"www.amazon.in","#4":"obfuscatedMarketplaceId","#5":"A21TJRUUN4KGV","#6":"producerId","#7":"csm","#8":"schemaId","#9":"csm.CSMBaselineEvent.4","#10":"timestamp","#11":"messageId","#12":"sessionId","#13":"259-1202557-5929705","#14":"csm.CSMUnloadBaselineEvent.2","#15":"violationType","#16":"unresponsive-clicks","#17":"violationCount","#18":"totalScanned","#19":"csm.ArmoredCXGuardrailsViolation.3"}},"events":[{"data":{"#0":"#1","#2":"#3","#4":"#5","#6":"#7","#8":"#9","#10":"2019-07-08T13:25:03.281Z","#11":"RNQ1C7RT53MRT72MT77A-1562592303281-4015614896","#12":"#13"}},{"data":{"#2":"#3","#6":"csm","#8":"#14","#10":"2019-07-08T13:25:03.801Z","#11":"RNQ1C7RT53MRT72MT77A-1562592303801-7838803264","#12":"#13","#0":"#1","#4":"#5"}},{"data":{"#15":"#16","#17":0,"#18":0,"#6":"csm","#8":"#19","#10":"2019-07-08T13:25:03.802Z","#11":"RNQ1C7RT53MRT72MT77A-1562592303802-1795004531","#12":"#13","#0":"#1","#4":"#5"}}]}",
        BODY_END
    );

    ns_end_transaction("com_amazon_csm_nexusclient_p_5", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_35");
    ns_web_url ("index_35",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount",
        "PreSnapshot=webpage_1562592303969.png",
        "Snapshot=webpage_1562592312670.png",
        BODY_BEGIN,
            "{"rid":"EH62JJ2C4MP7MD1QJXHQ","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"mmm1","e":[{"x":1414,"y":8,"t":26776},{"x":1399,"y":17,"t":26912}],"min":29,"max":130,"avg":70}},{"cel":{"k":"efo","t":29106,"s":"default"}},{"cel":{"k":"hrt","t":29207}},{"csm":{"k":"chk","f":5,"l":{"csmcount":68,"cel":77,"csm":6,"navigation":1,"jserr-rw":2},"s":"full"}}]}",
        BODY_END
    );

    ns_end_transaction("index_35", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_36");
    ns_web_url ("index_36",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount",
        "PreSnapshot=webpage_1562592312670.png",
        "Snapshot=webpage_1562592304285.png",
        BODY_BEGIN,
            "{"rid":"EH62JJ2C4MP7MD1QJXHQ","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"w":1536,"h":726,"x":0,"y":574.4000244140625,"t":31078,"k":"vpi"}},{"cel":{"k":"mmm1","e":[{"x":1384,"y":28,"t":29106},{"x":764,"y":404,"t":29662},{"x":715,"y":465,"t":29787},{"x":710,"y":1027,"t":30539},{"x":674,"y":1000,"t":30562},{"x":568,"y":962,"t":30587},{"x":453,"y":940,"t":30611},{"x":279,"y":929,"t":30662},{"x":64,"y":959,"t":30895},{"x":1,"y":969,"t":30978}],"min":29,"max":130,"avg":63}},{"cel":{"w":1536,"h":726,"x":0,"y":68,"t":32459,"k":"vpi"}},{"cel":{"w":1536,"h":726,"x":0,"y":0,"t":32570,"k":"vpi"}},{"csmcount":{"counter":"nav-flyout-aj:https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/megamenumar18f.json:subnav-sl-megamenu-1:0-show","value":1,"t":32675}},{"csmcount":{"counter":"nav-flyout-aj:https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/megamenumar18f.json:subnav-sl-megamenu-1:0-landing-show","value":1,"t":32675}},{"csmcount":{"counter":"nav-flyout-megamenumar18f.json:subnav-sl-megamenu-1:0-dwellTime","value":396,"t":33071}},{"csmcount":{"counter":"nav-flyout-megamenumar18f.json:subnav-sl-megamenu-1:0-bounceCount","value":1,"t":33071}},{"cel":{"k":"mmm1","e":[{"x":0,"y":968,"t":31301},{"x":36,"y":976,"t":31503},{"x":148,"y":694,"t":32020},{"x":156,"y":688,"t":32057},{"x":156,"y":113,"t":33015},{"x":34,"y":4,"t":33142}],"min":29,"max":130,"avg":59}},{"cel":{"w":1000,"h":4518,"t":34679,"k":"doi"}},{"cel":{"n":"Navigation-desktop-navbar","w":1000,"h":149,"d":0,"x":0,"y":0,"t":34724,"k":"ewi"}},{"cel":{"n":"result_0","w":255.3249969482422,"h":418,"d":0,"x":224,"y":273.8000183105469,"t":34724,"k":"ewi"}},{"cel":{"n":"result_1","w":255.3249969482422,"h":418,"d":0,"x":479.32501220703125,"y":273.8000183105469,"t":34724,"k":"ewi"}},{"cel":{"n":"result_2","w":255.3249969482422,"h":418,"d":0,"x":734.6500244140625,"y":273.8000183105469,"t":34724,"k":"ewi"}},{"cel":{"n":"result_3","w":255.3249969482422,"h":418,"d":0,"x":224,"y":692.2000122070312,"t":34724,"k":"ewi"}},{"cel":{"n":"result_4","w":255.3249969482422,"h":418,"d":0,"x":479.32501220703125,"y":692.2000122070312,"t":34724,"k":"ewi"}},{"cel":{"n":"result_5","w":255.3249969482422,"h":418,"d":0,"x":734.6500244140625,"y":692.2000122070312,"t":34724,"k":"ewi"}},{"cel":{"n":"result_6","w":255.3249969482422,"h":384,"d":0,"x":224,"y":1110.5999755859375,"t":34724,"k":"ewi"}},{"cel":{"n":"result_7","w":255.3249969482422,"h":384,"d":0,"x":479.32501220703125,"y":1110.5999755859375,"t":34724,"k":"ewi"}},{"cel":{"n":"result_8","w":255.3249969482422,"h":384,"d":0,"x":734.6500244140625,"y":1110.5999755859375,"t":34724,"k":"ewi"}},{"cel":{"n":"result_9","w":255.3249969482422,"h":418,"d":0,"x":224,"y":1494.5999755859375,"t":34724,"k":"ewi"}},{"cel":{"n":"result_10","w":255.3249969482422,"h":418,"d":0,"x":479.32501220703125,"y":1494.5999755859375,"t":34724,"k":"ewi"}},{"cel":{"n":"result_11","w":255.3249969482422,"h":418,"d":0,"x":734.6500244140625,"y":1494.5999755859375,"t":34724,"k":"ewi"}},{"cel":{"n":"result_12","w":255.3249969482422,"h":418,"d":0,"x":224,"y":1913,"t":34724,"k":"ewi"}},{"cel":{"n":"result_13","w":255.3249969482422,"h":418,"d":0,"x":479.32501220703125,"y":1913,"t":34724,"k":"ewi"}},{"cel":{"n":"result_14","w":255.3249969482422,"h":418,"d":0,"x":734.6500244140625,"y":1913,"t":34724,"k":"ewi"}},{"cel":{"n":"result_15","w":255.3249969482422,"h":389,"d":0,"x":224,"y":2331.400146484375,"t":34724,"k":"ewi"}},{"cel":{"n":"result_16","w":255.3249969482422,"h":389,"d":0,"x":479.32501220703125,"y":2331.400146484375,"t":34724,"k":"ewi"}},{"cel":{"n":"result_17","w":255.3249969482422,"h":389,"d":0,"x":734.6500244140625,"y":2331.400146484375,"t":34724,"k":"ewi"}},{"cel":{"n":"result_18","w":255.3249969482422,"h":418,"d":0,"x":224,"y":2720.199951171875,"t":34724,"k":"ewi"}},{"cel":{"n":"result_19","w":255.3249969482422,"h":418,"d":0,"x":479.32501220703125,"y":2720.199951171875,"t":34724,"k":"ewi"}},{"cel":{"n":"result_20","w":255.3249969482422,"h":418,"d":0,"x":734.6500244140625,"y":2720.199951171875,"t":34724,"k":"ewi"}},{"cel":{"n":"result_21","w":255.3249969482422,"h":418,"d":0,"x":224,"y":3138.60009765625,"t":34724,"k":"ewi"}},{"cel":{"n":"result_22","w":255.3249969482422,"h":418,"d":0,"x":479.32501220703125,"y":3138.60009765625,"t":34724,"k":"ewi"}},{"cel":{"n":"result_23","w":255.3249969482422,"h":418,"d":0,"x":734.6500244140625,"y":3138.60009765625,"t":34724,"k":"ewi"}},{"cel":{"w":626,"h":360,"x":0,"y":0,"t":34775,"k":"vpi"}},{"cel":{"n":"result_0","w":255.3249969482422,"h":436,"d":0,"x":224,"y":273.8000183105469,"t":34821,"k":"ewi"}},{"cel":{"n":"result_1","w":255.3249969482422,"h":436,"d":0,"x":479.32501220703125,"y":273.8000183105469,"t":34821,"k":"ewi"}},{"cel":{"n":"result_2","w":255.3249969482422,"h":436,"d":0,"x":734.6500244140625,"y":273.8000183105469,"t":34821,"k":"ewi"}},{"cel":{"n":"result_3","w":255.3249969482422,"h":437,"d":0,"x":224,"y":709.7999877929688,"t":34821,"k":"ewi"}},{"cel":{"n":"result_4","w":255.3249969482422,"h":437,"d":0,"x":479.32501220703125,"y":709.7999877929688,"t":34821,"k":"ewi"}},{"cel":{"n":"result_5","w":255.3249969482422,"h":437,"d":0,"x":734.6500244140625,"y":709.7999877929688,"t":34821,"k":"ewi"}},{"cel":{"n":"result_6","w":255.3249969482422,"h":402,"d":0,"x":224,"y":1146.5999755859375,"t":34821,"k":"ewi"}},{"cel":{"n":"result_7","w":255.3249969482422,"h":402,"d":0,"x":479.32501220703125,"y":1146.5999755859375,"t":34821,"k":"ewi"}},{"cel":{"n":"result_8","w":255.3249969482422,"h":402,"d":0,"x":734.6500244140625,"y":1146.5999755859375,"t":34821,"k":"ewi"}},{"cel":{"n":"result_9","w":255.3249969482422,"h":437,"d":0,"x":224,"y":1549,"t":34821,"k":"ewi"}},{"cel":{"n":"result_10","w":255.3249969482422,"h":437,"d":0,"x":479.32501220703125,"y":1549,"t":34821,"k":"ewi"}},{"cel":{"n":"result_11","w":255.3249969482422,"h":437,"d":0,"x":734.6500244140625,"y":1549,"t":34821,"k":"ewi"}},{"cel":{"n":"result_12","w":255.3249969482422,"h":455,"d":0,"x":224,"y":1985.800048828125,"t":34821,"k":"ewi"}},{"cel":{"n":"result_13","w":255.3249969482422,"h":455,"d":0,"x":479.32501220703125,"y":1985.800048828125,"t":34821,"k":"ewi"}},{"cel":{"n":"result_14","w":255.3249969482422,"h":455,"d":0,"x":734.6500244140625,"y":1985.800048828125,"t":34821,"k":"ewi"}},{"cel":{"n":"result_15","w":255.3249969482422,"h":407,"d":0,"x":224,"y":2441,"t":34821,"k":"ewi"}},{"cel":{"n":"result_16","w":255.3249969482422,"h":407,"d":0,"x":479.32501220703125,"y":2441,"t":34821,"k":"ewi"}},{"cel":{"n":"result_17","w":255.3249969482422,"h":407,"d":0,"x":734.6500244140625,"y":2441,"t":34821,"k":"ewi"}},{"cel":{"n":"result_18","w":255.3249969482422,"h":455,"d":0,"x":224,"y":2848.199951171875,"t":34821,"k":"ewi"}},{"cel":{"n":"result_19","w":255.3249969482422,"h":455,"d":0,"x":479.32501220703125,"y":2848.199951171875,"t":34821,"k":"ewi"}},{"cel":{"n":"result_20","w":255.3249969482422,"h":455,"d":0,"x":734.6500244140625,"y":2848.199951171875,"t":34821,"k":"ewi"}},{"cel":{"n":"result_21","w":255.3249969482422,"h":455,"d":0,"x":224,"y":3303.400146484375,"t":34821,"k":"ewi"}},{"cel":{"n":"result_22","w":255.3249969482422,"h":455,"d":0,"x":479.32501220703125,"y":3303.400146484375,"t":34821,"k":"ewi"}},{"cel":{"n":"result_23","w":255.3249969482422,"h":455,"d":0,"x":734.6500244140625,"y":3303.400146484375,"t":34821,"k":"ewi"}},{"cel":{"w":1000,"h":4719,"t":35181,"k":"doi"}},{"cel":{"k":"mmm1","e":[{"x":174,"y":14,"t":35963},{"x":83,"y":153,"t":35986},{"x":0,"y":308,"t":36015}],"min":9,"max":130,"avg":50}},{"cel":{"k":"ebl","t":37909,"s":"default"}},{"cel":{"k":"hrt","t":37909}},{"csm":{"k":"chk","f":6,"l":{"csmcount":72,"cel":137,"csm":7,"navigation":1,"jserr-rw":2},"s":"full"}}]}",
        BODY_END
    );

    ns_end_transaction("index_36", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("megamenumar18f_json_2");
    ns_web_url ("megamenumar18f_json_2",
        "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/megamenumar18f.json?_=1562592304263",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1562592304285.png",
        "Snapshot=webpage_1562592315839.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_Mobiles_access.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_laptops_harddrives.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_tv_hometheatre.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_audio_speaker.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_cameras_dslr.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_cameras_access.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_cameras_security.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_PCperipherals_routers.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Printers/V101208515_IN_PC_Printers_Mega_menu_graphics_473x623.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_smarthome_beginners.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Wearables/Revamp_Dec26th_18/smart_watches_472x674.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Wearables/Revamp_Dec26th_18/activity_trackers_472x674.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_MI_beginners.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_MI_soundrecording.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Electronics/Megamenu/CEPC_Megasubnav_office_officesupplies.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=https://www.amazon.in/service-worker.js", "HEADER=Service-Worker:script", "HEADER=Accept-Language:en-in", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount;csm-hit", END_INLINE
    );

    ns_end_transaction("megamenumar18f_json_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_37");
    ns_web_url ("index_37",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount",
        "PreSnapshot=webpage_1562592315839.png",
        "Snapshot=webpage_1562592320995.png",
        BODY_BEGIN,
            "{"rid":"EH62JJ2C4MP7MD1QJXHQ","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"efo","t":40783,"s":"default"}},{"cel":{"k":"hrt","t":41082}},{"csm":{"k":"chk","f":7,"l":{"csmcount":72,"cel":139,"csm":8,"navigation":1,"jserr-rw":2},"s":"full"}}]}",
        BODY_END
    );

    ns_end_transaction("index_37", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_38");
    ns_web_url ("index_38",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount",
        "PreSnapshot=webpage_1562592320995.png",
        "Snapshot=webpage_1562592316008.png",
        BODY_BEGIN,
            "{"rid":"EH62JJ2C4MP7MD1QJXHQ","sid":"259-1202557-5929705","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"mmm1","e":[{"x":227,"y":357,"t":41934},{"x":566,"y":2,"t":42009},{"x":446,"y":7,"t":42668},{"x":229,"y":196,"t":42925},{"x":224,"y":188,"t":43011}],"min":9,"max":130,"avg":49}},{"cel":{"k":"mmm1","e":[{"x":222,"y":188,"t":45022},{"x":84,"y":92,"t":45074}],"min":9,"max":130,"avg":45}},{"cel":{"k":"ebl","t":46224,"s":"default"}},{"cel":{"k":"hrt","t":46224}},{"csm":{"k":"chk","f":8,"l":{"csmcount":72,"cel":143,"csm":9,"navigation":1,"jserr-rw":2},"s":"full"}}]}",
        BODY_END
    );

    ns_end_transaction("index_38", NS_AUTO_STATUS);
    ns_page_think_time(5.193);

}
