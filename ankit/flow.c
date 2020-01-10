/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 07/17/2019 11:56:42
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
        "URL=https://redirector.gvt1.com/edgedl/chrome/dict/en-us-8-0.bdic",
        "PreSnapshot=webpage_1563387803213.png",
        "Snapshot=webpage_1563387816781.png",
        INLINE_URLS,
            "URL=https://r3---sn-qxa7snee.gvt1.com/edgedl/chrome/dict/en-us-8-0.bdic?cms_redirect=yes&mip=61.12.67.22&mm=28&mn=sn-qxa7snee&ms=nvh&mt=1563387059&mv=u&mvi=2&pl=24&shardbypass=yes", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.amazon.in/", "HEADER=Accept-Language:en-us", "HEADER=Upgrade-Insecure-Requests:1", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41gCbfiTdaL._RC%7C516fcOUE-HL.css,01evdoiemkL.css,01K+Ps1DeEL.css,31pdJv9iSzL.css,01tgK36lpGL.css,11UGC+GXOPL.css,21LK7jaicML.css,11L58Qpo0GL.css,21kyTi1FabL.css,01Xl9KigtzL.css,01YhS3Cs-hL.css,21GwE3cR-yL.css,019SHZnt8RL.css,01wAWQRgXzL.css,21bWcRJYNIL.css,11WgRxUdJRL.css,01dU8+SPlFL.css,11ocrgKoE-L.css,01SHjPML6tL.css,111-D2qRjiL.css,01QrWuRrZ-L.css,310Imb6LqFL.css,11Z1a0FxSIL.css,01cbS3UK11L.css,21mOLw+nYYL.css,01L8Y-JFEhL.css_.css?AUIClients/AmazonUI#not-trident", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210UtsRqV6L._RC%7C71+WX4uo+uL.css,11zh5zoa5AL.css,31cuIVKhckL.css,210-42NMyML.css,31wWWC6YAvL.css,11G4HxMtMSL.css,31OvHRW+XiL.css,01XHMOHpK1L.css_.css?AUIClients/AmazonNavigationDesktopMetaAsset#desktop.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41rsDDFiZxL.css?AUIClients/AmazonGatewayAuiAssets", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:QTX88JN8XW6309TZ412A$uedata=s:%2Fgp%2Fuedata%3Fstaticb%26id%3DQTX88JN8XW6309TZ412A:0", "HEADER=Accept-Language:en-us", "COOKIE=session-id;session-id-time;i18n-prefs", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/gno/sprites/nav-sprite-global_bluebeacon-V3-1x_optimized._CB468962293_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/transparent-pixel._CB386942716_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Wireless/Xiaomi/MiDays17thJuly/GW/P25039210_BAU-WLA_Day_Mi_Days_17th-18th_Tall-Heroes_1500x600._CB442467463_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/Gateway/BrightBuy/MensFashion_4._CB464576364_SY119_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/Gateway/BrightBuy/WomensFashion_4._CB464576364_SY119_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/Gateway/BrightBuy/Electronics_4._CB464576365_SY119_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/Gateway/BrightBuy/HomeDecor_4._CB464576365_SY119_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonPay/HFC/May/GW/PCQC/HFC_Quad-card_152x119_Recharge._CB463422856_SY119_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonPay/GW/PC/PC_Quad-card_152x119_Bills._CB463288209_SY119_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonPay/GW/PC/PC_Quad-card_152x119_Food._CB463288209_SY119_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonPay/GW/PC/PC_Quad-card_152x119_Offers._CB463288209_SY119_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Toys/Popsugar/1x._CB441844456_SY260_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Beauty/GW/Skincare_260._CB442948247_SY260_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Baby/GW/Desktop/NBStoreCC_260x260._CB466084335_SY260_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Beauty/GW/desktop/Deo_desktop_1x._CB442948156_SY260_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Beauty/GW/haircare_260._CB443016067_SY260_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img16/PetSupplies/CategoryCard/1022529_Dog-food_Category-card_260x260._CB453611061_SY260_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61kzhTBl2qL.js?AUIClients/AmazonUIjQuery", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/01gMokLtdHL.js?AUIClients/GenericObservableJS", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41B2UxcRhYL.js?AUIClients/AmazonGatewayAuiAssets", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31S6jpIf+nL.js?AUIClients/AmazonGatewayHerotatorJS", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/51JufFk7OpL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41rlc6mVK%2BL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/515lBVmAGpL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41xsehYdCeL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41rkw9ufQIL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41KUEunBWEL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/amazonui/loading/loading-4x._CB398267825_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/91D-zq7R8NL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61uhJL32LGL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61YtqJpDkVL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81tevFy3q3L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61VoCNLMeUL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51xyAM3jgxL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71b+X+Y1jFL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Wearables/GW/PCBB/D10485051_wearables_atf_260x260._CB463261881_SY260_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Solimo/Furniture/GW/Solimo_Wardrobe_260x260._CB443272434_SY260_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Audio/GatewayBAU/PC_Cards/PC_Cards_head_520x520._CB463219350_SY260_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/in-certifiedrefurbished/gateway/1173850_AllCat_260._CB463219347_SY260_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/412sFP8Q4aL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71IqBlFRJzL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81z5-WF05-L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71eC7JS2viL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61S9XsagcDL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71qslwIiHjL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61NU5RurS6L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51plkreMyKL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/612gmey-FKL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61dPSbJONkL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81VP9ax+ccL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81AE1ZHo8pL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71z6xNwC4zL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61-d2v7cefL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/PCA/Xiaomi_Launch/BB/db_prod_1x._CB442624851_SY260_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/in-certifiedrefurbished/gateway/Speakers_1174172_260._CB443372723_SY260_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/apparel/GW/Desktop_Exp/260x260-GW-Exp-3._CB453991672_SY260_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/CEPC/networking/D10471260_data_atf_card_260x260._CB463210104_SY260_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/613-i2wkvIL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/715N0oTr1RL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61b223-yyML._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/613nx2zA4iL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71lIIGW4G3L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71UtKTJvMQL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71I0whasSkL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81DliuzBwyL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81huuE14QsL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81KKMt1HqKL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71JhEnGtlfL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81JwfMYbwPL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81sORLhPKKL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/8163y9qPqdL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Wearables/Lenovo_Watch/D10886103_lenovo_C2_DC_GW_260x260._CB442950225_SY260_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/Img18/Tablets_RK/PCBB/D10485051_monitor_atf_260x260._CB463220420_SY260_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img17/Home/LA/DekstopCARD/11O._CB453990151_SY260_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonBrands/GW/CPB/PC/New-born_kit_QC_260x260._CB442466308_SY260_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71jfxhe9zyL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/711AIcEmtsL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81uuu+8humL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81jzLbgQ8uL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/716Cr-YHw9L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41TMRaEB3wL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/410CjLU2qPL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/personalization/ybh/loading-4x-gray._CB317974815_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/MAI/Sweepstakes/01/1155936--IN--MOBILE-JAN19-JACKPOT_400x39_1546509767_6.31kb._CB459061293_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUICarousel-arrows-c495a9b59afd9b35a08c12513d40b8c7e7771499._V2_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUISpinner-spinner_gray_2x-305997434ebd5a72cd3aa598a019fcc6e1efe23a._V2_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/ape/sf/desktop/DAsf-1.50.d23453f._V461670253_.js?csm_attribution=APE-SafeFrame", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11-BZEJ8lnL._RC%7C61GQ9IdK7HL.js,21Of0-9HPCL.js,012FVc3131L.js,119KAWlHU6L.js,51xL2QLv4YL.js,11AHlQhPRjL.js,016iHgpF74L.js,11aNYFFS5hL.js,116tgw9TSaL.js,211-p4GRUCL.js,01PoLXBDXWL.js,61BanVD+50L.js,01mi-J86cyL.js,11BOgvnnntL.js,31UWuPgtTtL.js,01rpauTep4L.js,01iyxuSGj4L.js,018kT7oogLL.js_.js?AUIClients/AmazonUI#189458-T1.192338-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41YUeDE3zHL._RC%7C71aLqNGbWsL.js,61u3dpzHy+L.js,417SPNjYS3L.js,11vrNkbdcvL.js,21SHd9g2LAL.js,31xNSJua7KL.js,51YeRc8UK1L.js,31R1liuRRmL.js_.js?AUIClients/AmazonNavigationDesktopMetaAsset#desktop", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11VbV%2B%2BKhQL.js?AUIClients/RetailWebsiteOverlayAUIAssets", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("index", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_csm_nexusclient_p");
    ns_web_url ("com_amazon_csm_nexusclient_p",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.csm.nexusclient.prod",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "PreSnapshot=webpage_1563387816781.png",
        "Snapshot=webpage_1563387817320.png",
        BODY_BEGIN,
            "{"cs":{"dct":{"#0":"requestId","#1":"QTX88JN8XW6309TZ412A","#2":"server","#3":"www.amazon.in","#4":"obfuscatedMarketplaceId","#5":"A21TJRUUN4KGV","#6":"producerId","#7":"csm","#8":"schemaId","#9":"csm.CSMBaselineEvent.4","#10":"timestamp","#11":"messageId","#12":"sessionId","#13":"260-6898445-8949221"}},"events":[{"data":{"#0":"#1","#2":"#3","#4":"#5","#6":"#7","#8":"#9","#10":"2019-07-17T18:23:35.403Z","#11":"QTX88JN8XW6309TZ412A-1563387815403-6807829499","#12":"#13"}}]}",
        BODY_END
    );

    ns_end_transaction("com_amazon_csm_nexusclient_p", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("counter");
    ns_web_url ("counter",
        "URL=https://www.amazon.in/ah/ajax/counter?ctr=desktop_ajax_atf&exp=1563387924421&rId=QTX88JN8XW6309TZ412A&mkId=A21TJRUUN4KGV&h=748491c353e257bb4b8ab0f14aefc7eb66f5d6af1deef4b9e914f25bad490958",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;session-id-time;i18n-prefs;csm-hit",
        "PreSnapshot=webpage_1563387817320.png",
        "Snapshot=webpage_1563387820320.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61VRSCbMQqL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/712TX50ZhmL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81im8ZLf2lL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61Z4fxBfkVL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81Way6oKRRL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51wkCMxPQhL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71Q7VeAsGRL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/613dYX7pLhL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61AssSXffkL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61wJrW3qb8L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/912Zt4F5-EL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51Wb9Rm454L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51wWCAGVdhL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71SFc-bF-dL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51GdCxXv6ML._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61zi7KBn0+L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/713d7u9+4ZL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/714Qp4ljpBL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51GFMXKWyPL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51MqLkrw5fL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51sAwfD62fL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41FgYpc48CL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51d64ZDUX5L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41ss-R7u37L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51LgVwUZIYL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51gUwMrtYFL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41Nqa6Z+rwL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71qiMBE6jCL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81hzBITuj0L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71Xv1g0oGZL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71zk8++XEeL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41PDBk1QewL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81R25A+XdIL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/5128i+GuHcL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51A2gx2I88L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71-loLV0n5L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71k-axCvpTL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/818ZbfaXqUL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/91ULJsL8PXL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81HV9pwLfIL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81ZAvdalcHL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81qnvOcsg5L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/811ZMszzT4L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81rpC23-5OL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51ln1ZyvXRL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81GRorwj8vL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/7163RP12SNL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51pu1g61sHL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61RWA0goSML._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51I5V3avqpL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81BPVYj6vhL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61jnoF3JWOL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31SE+IXfT8L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/91sCN4rZSBL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71MKTG4GDLL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71AaH5W7c1L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/91AUI-p024L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71p+xZvGDtL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/91RGgiMe2NL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/717QVNvbVTL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71TfaThZpmL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ExKS6ndyL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61JI4lEfY-L._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/515nBpMgvHL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61W0HecMHSL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/81DxpxY-BaL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71LPz7Qy4NL._AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("counter", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_2");
    ns_web_url ("index_2",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;session-id-time;i18n-prefs",
        "PreSnapshot=webpage_1563387820320.png",
        "Snapshot=webpage_1563387826674.png",
        BODY_BEGIN,
            "{"rid":"QTX88JN8XW6309TZ412A","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"csmcount":{"counter":"baselineCounter2","value":1,"t":19}},{"csmcount":{"counter":"nexusBaselineCounter","value":1,"t":19}},{"csmcount":{"counter":"aui:hiResDesktop","value":0,"t":3901}},{"csmcount":{"counter":"aui:pagejs:pkgExecTime","value":1356.4750000000004,"t":5239}},{"csmcount":{"counter":"aui:resource_count","value":1,"t":5240}},{"csmcount":{"counter":"aui:resource_count","value":2,"t":5269}},{"csmcount":{"counter":"aui:resource_count","value":3,"t":5269}},{"csmcount":{"counter":"gw-preload-img","value":1,"t":5271}},{"csmcount":{"counter":"csm.cookieSize","value":75,"t":5339}},{"csmcount":{"counter":"aui:resource_count","value":4,"t":5369}},{"csmcount":{"counter":"gatewayCardInstrumentationFail","value":1,"t":8618}},{"csmcount":{"counter":"aui:resource_count","value":5,"t":8618}},{"csmcount":{"counter":"aui:resource_count","value":6,"t":8625}},{"csmcount":{"counter":"aui:resource_count","value":7,"t":8626}},{"csmcount":{"counter":"aui:resource_count","value":8,"t":9188}},{"csmcount":{"counter":"totalImages","value":82,"t":10446}},{"cel":{"k":"mrg","n":"page module","t":10449}},{"cel":{"k":"pmd","o":"https://www.amazon.in","p":"/","t":10450}},{"cel":{"w":1360,"aw":1360,"h":768,"ah":738,"cd":0,"pd":0,"t":10451,"k":"sci"}},{"cel":{"w":1000,"h":6090,"t":10563,"k":"doi"}},{"cel":{"k":"mso","n":"page module","t":10563}},{"cel":{"k":"mrg","n":"viewport module","t":10563}},{"cel":{"w":784,"h":463,"x":0,"y":0,"t":10563,"k":"vpi"}},{"cel":{"k":"mso","n":"viewport module","t":10564}},{"cel":{"k":"mrg","n":"features module","t":10564}},{"cel":{"k":"mso","n":"features module","t":10564}},{"cel":{"k":"mrg","n":"mouse click module","t":10564}},{"cel":{"k":"mso","n":"mouse click module","t":10565}},{"cel":{"k":"mrg","n":"mouse move module","t":10565}},{"cel":{"k":"mso","n":"mouse move module","t":10565}},{"csmcount":{"counter":"gwAjaxCall","value":1,"t":12236}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":1,"t":12255}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":2,"t":12297}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":3,"t":12324}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":4,"t":12338}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":5,"t":12353}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":6,"t":12362}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":7,"t":12372}},{"csmcount":{"counter":"gw-lazy-load-all","value":1,"t":12384}},{"csmcount":{"counter":"gw-lazy-load-non-empty","value":1,"t":12389}},{"csmcount":{"counter":"gw-lazy-load-all","value":2,"t":12389}},{"csmcount":{"counter":"gw-lazy-load-non-empty","value":2,"t":12390}},{"csmcount":{"counter":"gw-lazy-load-all","value":3,"t":12390}},{"csmcount":{"counter":"gw-lazy-load-non-empty","value":3,"t":12391}},{"csmcount":{"counter":"gw-lazy-load-all","value":4,"t":12391}},{"csmcount":{"counter":"gw-lazy-load-non-empty","value":4,"t":12392}},{"csmcount":{"counter":"gw-lazy-load-all","value":5,"t":12392}},{"csmcount":{"counter":"gw-lazy-load-non-empty","value":5,"t":12393}},{"csmcount":{"counter":"gw-lazy-load-all","value":6,"t":12393}},{"csmcount":{"counter":"gw-lazy-load-non-empty","value":6,"t":12393}},{"csmcount":{"counter":"gw-lazy-load-all","value":7,"t":12394}},{"csmcount":{"counter":"gw-lazy-load-non-empty","value":7,"t":12395}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":8,"t":12402}},{"csmcount":{"counter":"gw-desktop-1-lazy-cards","value":32,"t":12416}},{"csmcount":{"counter":"gw-desktop-1-lazy","value":1,"t":12416}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":9,"t":12420}},{"csmcount":{"counter":"gw-desktop-2-lazy-cards","value":13,"t":12426}},{"csmcount":{"counter":"gw-desktop-2-lazy","value":1,"t":12426}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":10,"t":12438}},{"csmcount":{"counter":"gw-desktop-3-lazy-cards","value":13,"t":12440}},{"csmcount":{"counter":"gw-desktop-3-lazy","value":1,"t":12440}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":11,"t":12443}},{"csmcount":{"counter":"gw-desktop-4-lazy-cards","value":13,"t":12446}},{"csmcount":{"counter":"gw-desktop-4-lazy","value":1,"t":12446}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":12,"t":12448}},{"csmcount":{"counter":"gw-desktop-5-lazy-cards","value":9,"t":12451}},{"csmcount":{"counter":"gw-desktop-5-lazy","value":1,"t":12451}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":13,"t":12453}},{"csmcount":{"counter":"gw-desktop-6-lazy-cards","value":9,"t":12458}},{"csmcount":{"counter":"gw-desktop-6-lazy","value":1,"t":12459}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":14,"t":12463}},{"csmcount":{"counter":"gw-desktop-7-lazy-cards","value":10,"t":12477}},{"csmcount":{"counter":"gw-desktop-7-lazy","value":1,"t":12477}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":15,"t":12495}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":16,"t":12533}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":17,"t":12537}},{"csmcount":{"counter":"shovelerNotEnoughItem","value":18,"t":12747}},{"cel":{"k":"hrt","t":13449}},{"csm":{"k":"chk","f":1,"l":{"csmcount":63,"cel":15,"csm":1},"s":"inln"}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41YDcWOUavL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/AUIClients/INRetargetingAsset-fe13df5df0c9265752c892a20feddfc5baaec718.secure.min._V2_.js?AUIClients/INRetargetingAsset", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/511lYmjDMPL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/51AwQo1vmyL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/418xbK2iGlL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41kVge6hx3L.__AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41xeLaLBoFL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41XMPnmYjjL.__AC_SY200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/ape/sf/whitelisted/desktop/sf-1.50.d23453f._V461669522_.html", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("index_2", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("suggestions");
    ns_web_url ("suggestions",
        "URL=https://completion.amazon.co.uk/api/2017/suggestions?session-id=260-6898445-8949221&customer-id=&request-id=QTX88JN8XW6309TZ412A&page-type=Gateway&lop=en_IN&site-variant=desktop&client-info=amazon-search-ui&mid=A21TJRUUN4KGV&alias=aps&searchTerm=a&suggestion-type=KEYWORD&suggestion-type=WIDGET&_=1563387826636",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387826674.png",
        "Snapshot=webpage_1563387827074.png",
        INLINE_URLS,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonGatewayAuiAssets-gw_sprite_desktop-25075f36f083535bad9a2e0edabbb339435e8e65._V2_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonDevices/neel/checkers/500x450_Flyout._CB443265716_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/AmazonDevices/Tank/Flyout_just._CB458220204_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/AmazonVideo/2019/SingleTitle/Kalank/499x492-GNO_without-disclaimer._CB442308835_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/digital/music/merch/India/2019/May/Flyout_Reduced._CB462852406_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Laptops/Flyout/fashion_flyout_500x500_2._CB442684549_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/MI/Flyout/MIbeginners._CB487070566_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Fashion/Flyout/men._CB468888570_.jpg", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("suggestions", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("display_html");
    ns_web_url ("display_html",
        "URL=https://www.amazon.in/gp/overlay/display.html",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "COOKIE=session-id;session-id-time;i18n-prefs;csm-hit;ubid-acbin",
        "PreSnapshot=webpage_1563387827074.png",
        "Snapshot=webpage_1563387829434.png",
        BODY_BEGIN,
            "origSessionId=260-6898445-8949221&subPageType=null&pageType=Gateway&ASIN=null&path=%2F&isAUI=1&referrer=&queryString=",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Fashion/Flyout/Women-fashion_Flyout_500x450._CB468888565_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/IMG-2017/GW_Flyout_500x450_Flyout._CB487102089_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img17/Sports/Exercise_Fitness/Get_fit_at_home/gym_essentials/flyout._CB505942756_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Family/flyout_new_last_1534496402_1534508273._CB470411914_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/books/072019/ChildrenBookshelf/CB_flyout._CB442372930_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img16/GiftCards/MarchSweep/Nov/RGC24_JupiterW1GC_500x500_Nov._CB479161047_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/getAdj?src=511&slot=right-2&rid=0101d4da62fab3ac360f4b94ccd594c7d53f991cc7431a31d6e17997ba29d9b0f926&callback=aax_xsp_render_ad", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/getAdj?src=511&slot=desktop-ad-center-1&rid=0101d4da62fab3ac360f4b94ccd594c7d53f991cc7431a31d6e17997ba29d9b0f926&callback=aax_xsp_render_ad", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonPay/Boson/Flights/nonprime1500X300._CB442470875_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/shoes/July/EOSS/GW/TallBunk/TallHero_1500x600-Shoes-EOSS-2._CB443524606_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonPay/HFC/June/GW/HFC_DesktopHero_1500x600_DTH_Airtel._CB461663034_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/prime/Events/Bruno/Leadout/Leadout_1500x600_2_nonprime._CB442475681_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Wireless/OPPOK3/June11_SpecReveal/Ingress/D11100997_PD_OPPOK3_GC_DesktopTallHero_1500x600._CB441784089_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonDevices/neel/PD19/1X-2499._CB442493419_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/getAdj?src=511&slot=right-7&rid=0101d4da62fab3ac360f4b94ccd594c7d53f991cc7431a31d6e17997ba29d9b0f926&callback=aax_xsp_render_ad", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/984527532/?value=0&label=r_58CJXm0gIQw9iz3gM&guid=ON&script=0&data=ecomm_pagetype%3DGateway%3BCURRENT_TIME%3D2019-07-17T18%3A23%3A49.154Z%3BSignedIn%3DN", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("display_html", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("record_impressions");
    ns_web_url ("record_impressions",
        "URL=https://www.amazon.in/ah/ajax/record-impressions?c4i=ePm_fHprndDLigIxEIXhJzrQieZSSxVHQVciuq5UKjoo3aItor68CgNCjyu3Z3Hg_-4d4aynXdscPkBPuNULX7veA7MaDua0nLv1aPjT1Z817RSj5QLHZ8em_r1pBtcZ5_o9fFNZJMdoA8NURtGXokiaIkR6Iil7lVK6EuqjMck5sM8W_cgZVHmGNVUgIm-8yFvrDwIt7_fY6rHB-B-gdeys71nE4NLzMRASBYVW2ZAt5FKhF_IDwnFvLQ&rId=QTX88JN8XW6309TZ412A&mkId=A21TJRUUN4KGV&exp=1563387924454&h=027009ead0bf96eeee50eba90112bc98379083d3b5d299c0c561ac690b9a9911",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;csm-hit;ubid-acbin;x-wl-uid;session-token;session-id-time;visitCount",
        "PreSnapshot=webpage_1563387829434.png",
        "Snapshot=webpage_1563387830722.png",
        INLINE_URLS,
            "URL=https://aax-eu.amazon-adsystem.com/x/px/QtMG-JWCd165NAnWLgHMrnwAAAFsASy7FwMAAAH_AdT4Tbs/nii/%7B%22ni%22:true%7D", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/x/px/QuWHe7LZEadF4vPRlHVVttIAAAFsASy7FwMAAAH_ASUVaw8/nii/%7B%22ni%22:true%7D", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/x/px/Qgqq2xluKSmxlU1pzAYKglYAAAFsASy7FwMAAAH_AbHwgNw/nii/%7B%22ni%22:true%7D", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/AMS/banners1/Laptops._CB454409461_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/AMS/banners1/Home-Products._CB454409463_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/AMS/banners1/Fashion._CB454409460_.jpg", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("record_impressions", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("af_link_handler_html");
    ns_web_url ("af_link_handler_html",
        "URL=https://www.amazon.in/gp/aq-feedback/lazyLoad/handler/af-link-handler.html?pl=%7B%22adPlacementMetaData%22%3A%7B%22pageUrl%22%3A%22aHR0cHM6Ly93d3cuYW1hem9uLmluL3Nob3BwaW5nUG9ydGFsL2Rlc2t0b3A%3D%22%2C%22adElementId%22%3A%22ape_Gateway_right-2_desktop_placement%22%2C%22pageType%22%3A%22Gateway%22%2C%22slotName%22%3A%22right-2%22%7D%2C%22adCreativeMetaData%22%3A%7B%22adNetwork%22%3A%22cs%22%7D%7D",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;csm-hit;ubid-acbin;x-wl-uid;session-token;session-id-time;visitCount",
        "PreSnapshot=webpage_1563387830722.png",
        "Snapshot=webpage_1563387830984.png"
    );

    ns_end_transaction("af_link_handler_html", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("af_link_handler_html_2");
    ns_web_url ("af_link_handler_html_2",
        "URL=https://www.amazon.in/gp/aq-feedback/lazyLoad/handler/af-link-handler.html?pl=%7B%22adPlacementMetaData%22%3A%7B%22pageUrl%22%3A%22aHR0cHM6Ly93d3cuYW1hem9uLmluL3Nob3BwaW5nUG9ydGFsL2Rlc2t0b3A%3D%22%2C%22adElementId%22%3A%22ape_Gateway_desktop-ad-center-1_desktop_placement%22%2C%22pageType%22%3A%22Gateway%22%2C%22slotName%22%3A%22desktop-ad-center-1%22%7D%2C%22adCreativeMetaData%22%3A%7B%22adNetwork%22%3A%22cs%22%7D%7D",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;csm-hit;ubid-acbin;x-wl-uid;session-token;session-id-time;visitCount",
        "PreSnapshot=webpage_1563387830984.png",
        "Snapshot=webpage_1563387830864.png"
    );

    ns_end_transaction("af_link_handler_html_2", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("af_link_handler_html_3");
    ns_web_url ("af_link_handler_html_3",
        "URL=https://www.amazon.in/gp/aq-feedback/lazyLoad/handler/af-link-handler.html?pl=%7B%22adPlacementMetaData%22%3A%7B%22pageUrl%22%3A%22aHR0cHM6Ly93d3cuYW1hem9uLmluL3Nob3BwaW5nUG9ydGFsL2Rlc2t0b3A%3D%22%2C%22adElementId%22%3A%22ape_Gateway_right-7_desktop_placement%22%2C%22pageType%22%3A%22Gateway%22%2C%22slotName%22%3A%22right-7%22%7D%2C%22adCreativeMetaData%22%3A%7B%22adNetwork%22%3A%22cs%22%7D%7D",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;csm-hit;ubid-acbin;x-wl-uid;session-token;session-id-time;visitCount",
        "PreSnapshot=webpage_1563387830864.png",
        "Snapshot=webpage_1563387834962.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/productAds/ad_feedback_icon_1Xsprite._CB319582757_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/984527532/?value=0&label=r_58CJXm0gIQw9iz3gM&guid=ON&script=0&data=ecomm_pagetype%3DGateway%3BCURRENT_TIME%3D2019-07-17T18%3A23%3A49.154Z%3BSignedIn%3DN&cdct=2&is_vtc=1&random=2184427175", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/984527532/?value=0&label=r_58CJXm0gIQw9iz3gM&guid=ON&script=0&data=ecomm_pagetype%3DGateway%3BCURRENT_TIME%3D2019-07-17T18%3A23%3A49.154Z%3BSignedIn%3DN&cdct=2&is_vtc=1&random=2184427175&ipr=y", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.amazon.in/gp/uedata?ld&v=0.204437.0&id=QTX88JN8XW6309TZ412A&sw=1360&sh=768&vw=767&vh=446&m=1&sc=QTX88JN8XW6309TZ412A&ue=20&bb=5347&ns=5351&cf=8612&af=8615&ne=8616&be=9199&fp=9226&fcp=9226&pc=29634&tc=-1644&na_=-1644&ul_=-1563387804836&_ul=-1563387804836&rd_=-1563387804836&_rd=-1563387804836&fe_=-1643&lk_=-1547&_lk=-1252&co_=-1252&_co=-694&sc_=-1014&rq_=-693&rs_=-75&_rs=3368&dl_=-25&di_=10739&de_=10739&_de=10741&_dc=29634&ld_=29634&_ld=-1563387804836&ntd=-1&ty=0&rc=0&hob=17&hoe=21&ld=29635&t=1563387834471&ctb=1&rt=cf:21-0-3-18-1-0-1_af:21-0-3-18-1-0-1_ld:202-9-3-174-7-0-1&ec=1&ecf=0&csmtags=aui|aui:aui_build_date:3.19.4-2019-06-27|navbar|gwCFImgNoCache|fls-eu|ABPStatusUnknown:Gateway:right-2:desktop|ABPStatusUnknown:Gateway:desktop-ad-center-1:desktop|ABPStatusUnknown:Gateway:right-7:desktop|iss-on-time|aui:ajax|noadrender:Gateway:right-2:desktop|noadrender:Gateway:desktop-ad-center-1:desktop|noadrender:e44985f6-46f4-4231-90aa-f5c16f7c50aa|noadrender:Gateway:right-7:desktop|noadrender:d28cb697-85f2-43bd-9473-37dfd1e3666a&viz=visible:20&pty=Gateway&spty=desktop&pti=desktop&tid=QTX88JN8XW6309TZ412A&aftb=1", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;csm-hit;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:QTX88JN8XW6309TZ412A$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DQTX88JN8XW6309TZ412A%26sw%3D1360%26sh%3D768%26vw%3D767%26vh%3D446%26m%3D1%26sc%3DQTX88JN8XW6309TZ412A%26ue%3D20%26bb%3D5347%26ns%3D5351%26cf%3D8612%26af%3D8615%26ne%3D8616%26be%3D9199%26fp%3D9226%26fcp%3D9226%26pc%3D29634%26tc%3D-1644%26na_%3D-1644%26ul_%3D-1563387804836%26_ul%3D-1563387804836%26rd_%3D-1563387804836%26_rd%3D-1563387804836%26fe_%3D-1643%26lk_%3D-1547%26_lk%3D-1252%26co_%3D-1252%26_co%3D-694%26sc_%3D-1014%26rq_%3D-693%26rs_%3D-75%26_rs%3D3368%26dl_%3D-25%26di_%3D10739%26de_%3D10739%26_de%3D10741%26_dc%3D29634%26ld_%3D29634%26_ld%3D-1563387804836%26ntd%3D-1%26ty%3D0%26rc%3D0%26hob%3D17%26hoe%3D21%26ld%3D29635%26t%3D1563387834471%26ctb%3D1%26rt%3Dcf%3A21-0-3-18-1-0-1_af%3A21-0-3-18-1-0-1_ld%3A202-9-3-174-7-0-1%26ec%3D1%26ecf%3D0%26csmtags%3Daui%7Caui%3Aaui_build_date%3A3.19.4-2019-06-27%7Cnavbar%7CgwCFImgNoCache%7Cfls-eu%7CABPStatusUnknown%3AGateway%3Aright-2%3Adesktop%7CABPStatusUnknown%3AGateway%3Adesktop-ad-center-1%3Adesktop%7CABPStatusUnknown%3AGateway%3Aright-7%3Adesktop%7Ciss-on-time%7Caui%3Aajax%7Cnoadrender%3AGateway%3Aright-2%3Adesktop%7Cnoadrender%3AGateway%3Adesktop-ad-center-1%3Adesktop%7Cnoadrender%3Ae44985f6-46f4-4231-90aa-f5c16f7c50aa%7Cnoadrender%3AGateway%3Aright-7%3Adesktop%7Cnoadrender%3Ad28cb697-85f2-43bd-9473-37dfd1e3666a%26viz%3Dvisible%3A20%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:29639", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:QTX88JN8XW6309TZ412A$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DQTX88JN8XW6309TZ412A%26sc0%3Dportal-bb%26pc0%3D2%26ld0%3D2%26t0%3D1563387810185%26sc1%3Diss-init-pc%26bb1%3D5361%26cf1%3D21784%26be1%3D21784%26pc1%3D21784%26ld1%3D21784%26t1%3D1563387826620%26sc2%3Dh1Af%26cf2%3D5366%26pc2%3D5366%26ld2%3D5366%26t2%3D1563387810202%26sc3%3Ddesktop-grid-1-D1-visible%26cf3%3D5371%26pc3%3D5371%26ld3%3D5371%26t3%3D1563387810207%26sc4%3Ddesktop-grid-1-D1-active%26cf4%3D5375%26pc4%3D5375%26ld4%3D5375%26t4%3D1563387810211%26sc5%3Ddesktop-grid-4-visible%26cf5%3D8608%26pc5%3D8608%26ld5%3D8608%26t5%3D1563387813444%26sc6%3Ddesktop-grid-5-visible%26cf6%3D8609%26pc6%3D8609%26ld6%3D8609%26t6%3D1563387813445%26sc7%3Ddesktop-grid-1-visible%26cf7%3D8611%26pc7%3D8611%26ld7%3D8611%26t7%3D1563387813447%26sc8%3Ddesktop-grid-2-visible%26cf8%3D8614%26pc8%3D8614%26ld8%3D8614%26t8%3D1563387813450%26sc9%3Ddesktop-grid-3-visible%26cf9%3D8615%26pc9%3D8615%26ld9%3D8615%26t9%3D1563387813451%26sc10%3DspLoadJs%26cf10%3D8616%26pc10%3D8616%26ld10%3D8616%26t10%3D1563387813452%26sc11%3Ddesktop-grid-6-visible%26cf11%3D8617%26pc11%3D8617%26ld11%3D8617%26t11%3D1563387813453%26sc12%3Ddesktop-grid-7-visible%26cf12%3D8618%26pc12%3D8618%26ld12%3D8618%26t12%3D1563387813454%26sc13%3DnavCF%26cf13%3D8626%26pc13%3D8626%26ld13%3D8626%26t13%3D1563387813462%26sc14%3DcsmCELLSframework%26bb14%3D10450%26pc14%3D10450%26ld14%3D10450%26t14%3D1563387815286%26sc15%3DcsmCELLSpdm%26bb15%3D10450%26pc15%3D10564%26ld15%3D10564%26t15%3D1563387815400%26sc16%3DcsmCELLSvpm%26bb16%3D10564%26pc16%3D10565%26ld16%3D10565%26t16%3D1563387815401%26sc17%3DcsmCELLSfem%26bb17%3D10565%26pc17%3D10565%26ld17%3D10565%26t17%3D1563387815401%26sc18%3Due_sushi_v1%26bb18%3D10567%26pc18%3D10568%26ld18%3D10568%26t18%3D1563387815404%26sc19%3Ddesktop-btf-grid-1-visible%26cf19%3D10748%26pc19%3D10748%26ld19%3D10748%26t19%3D1563387815584%26sc20%3Ddesktop-btf-grid-3-visible%26cf20%3D10749%26pc20%3D10749%26ld20%3D10749%26t20%3D1563387815585%26sc21%3Ddesktop-btf-grid-2-visible%26cf21%3D10749%26pc21%3D10749%26ld21%3D10749%26t21%3D1563387815585%26sc22%3Ddesktop-btf-grid-4-visible%26cf22%3D10815%26pc22%3D10815%26ld22%3D10815%26t22%3D1563387815651%26sc23%3Ddesktop-btf-grid-5-visible%26cf23%3D11365%26pc23%3D11365%26ld23%3D11365%26t23%3D1563387816201%26sc24%3Dgateway-asset-load%26cf24%3D11394%26pc24%3D11394%26ld24%3D11394%26t24%3D1563387816230%26sc25%3Ddesktop-btf-grid-6-visible%26cf25%3D11395%26pc25%3D11395%26ld25%3D11395%26t25%3D1563387816231%26sc26%3Ddesktop-btf-grid-8-visible%26cf26%3D11395%26pc26%3D11395%26ld26%3D11395%26t26%3D1563387816231%26sc27%3Ddesktop-btf-grid-7-visible%26cf27%3D11395%26pc27%3D11395%26ld27%3D11395%26t27%3D1563387816231%26sc28%3DjQueryReady%26cf28%3D12189%26pc28%3D12189%26ld28%3D12189%26t28%3D1563387817025%26sc29%3DgwGridInit%26cf29%3D12197%26pc29%3D12197%26ld29%3D12197%26t29%3D1563387817033%26sc30%3DgwBTFGridInit%26cf30%3D12208%26pc30%3D12208%26ld30%3D12208%26t30%3D1563387817044%26sc31%3Ddesktop-2-visible%26cf31%3D12292%26pc31%3D12292%26ld31%3D12292%26t31%3D1563387817128%26sc32%3Ddesktop-3-visible%26cf32%3D12323%26pc32%3D12323%26ld32%3D12323%26t32%3D1563387817159%26sc33%3Ddesktop-4-visible%26cf33%3D12337%26pc33%3D12337%26ld33%3D12337%26t33%3D1563387817173%26sc34%3Ddesktop-5-visible%26cf34%3D12352%26pc34%3D12352%26ld34%3D12352%26t34%3D1563387817188%26sc35%3Ddesktop-6-visible%26cf35%3D12532%26pc35%3D12532%26ld35%3D12532%26t35%3D1563387817368%26sc36%3Ddesktop-btf-grid-9-visible%26cf36%3D12850%26pc36%3D12850%26ld36%3D12850%26t36%3D1563387817686%26sc37%3Ddesktop-btf-grid-10-visible%26cf37%3D12889%26pc37%3D12889%26ld37%3D12889%26t37%3D1563387817725%26sc38%3Ddesktop-btf-grid-12-visible%26cf38%3D15458%26pc38%3D15458%26ld38%3D15458%26t38%3D1563387820294%26sc39%3Ddesktop-7-visible%26cf39%3D15482%26pc39%3D15482%26ld39%3D15482%26t39%3D1563387820318%26sc40%3Ddesktop-btf-grid-11-visible%26cf40%3D15496%26pc40%3D15496%26ld40%3D15496%26t40%3D1563387820332%26sc41%3Ddesktop-1-visible%26cf41%3D16938%26pc41%3D16938%26ld41%3D16938%26t41%3D1563387821774%26sc42%3DgwLayoutReady%26cf42%3D21418%26pc42%3D21418%26ld42%3D21418%26t42%3D1563387826254%26sc43%3DgwAUIReady%26cf43%3D21428%26pc43%3D21428%26ld43%3D21428%26t43%3D1563387826264%26sc44%3Diss-warmup%3Afailure%26bb44%3D21799%26cf44%3D23802%26be44%3D23802%26pc44%3D23802%26ld44%3D23802%26t44%3D1563387828638%26sc45%3Dgw-hero-btf-populate%26cf45%3D22080%26pc45%3D22080%26ld45%3D22080%26t45%3D1563387826916%26sc46%3DgwHerotatorActive%26cf46%3D22113%26pc46%3D22113%26ld46%3D22113%26t46%3D1563387826949%26ctb%3D1:29639", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/01/AUIClients/ClientSideMetricsAUIJavascript@jserrorsForester.10f2559e93ec589d92509318a7e2acbac74c343a._V2_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/csm/showads.v2.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:QTX88JN8XW6309TZ412A$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DQTX88JN8XW6309TZ412A%26ctb%3D1%26sc0%3DjQueryDomReady%26cf0%3D29643%26pc0%3D29643%26ld0%3D29643%26t0%3D1563387834479%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:29642", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:QTX88JN8XW6309TZ412A$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DQTX88JN8XW6309TZ412A%26ctb%3D1%26sc0%3Ddesktop-1-active%26cf0%3D29643%26pc0%3D29643%26ld0%3D29643%26t0%3D1563387834479%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:29642", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:QTX88JN8XW6309TZ412A$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DQTX88JN8XW6309TZ412A%26ctb%3D1%26sc0%3Ddesktop-2-active%26cf0%3D29644%26pc0%3D29644%26ld0%3D29644%26t0%3D1563387834480%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:29643", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:QTX88JN8XW6309TZ412A$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DQTX88JN8XW6309TZ412A%26ctb%3D1%26sc0%3Ddesktop-3-active%26cf0%3D29644%26pc0%3D29644%26ld0%3D29644%26t0%3D1563387834480%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:29643", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:QTX88JN8XW6309TZ412A$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DQTX88JN8XW6309TZ412A%26ctb%3D1%26sc0%3Ddesktop-4-active%26cf0%3D29644%26pc0%3D29644%26ld0%3D29644%26t0%3D1563387834480%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:29643", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:QTX88JN8XW6309TZ412A$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DQTX88JN8XW6309TZ412A%26ctb%3D1%26sc0%3Ddesktop-5-active%26cf0%3D29644%26pc0%3D29644%26ld0%3D29644%26t0%3D1563387834480%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:29643", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:QTX88JN8XW6309TZ412A$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DQTX88JN8XW6309TZ412A%26ctb%3D1%26sc0%3Ddesktop-6-active%26cf0%3D29644%26pc0%3D29644%26ld0%3D29644%26t0%3D1563387834480%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:29644", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:QTX88JN8XW6309TZ412A$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DQTX88JN8XW6309TZ412A%26ctb%3D1%26sc0%3Ddesktop-7-active%26cf0%3D29645%26pc0%3D29645%26ld0%3D29645%26t0%3D1563387834481%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:29644", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:QTX88JN8XW6309TZ412A$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DQTX88JN8XW6309TZ412A%26ctb%3D1%26sc0%3DjQueryWindowLoad%26cf0%3D29646%26pc0%3D29646%26ld0%3D29646%26t0%3D1563387834482%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:29645", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time", END_INLINE
    );

    ns_end_transaction("af_link_handler_html_3", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("sessionCacheUpdateHandler_ht");
    ns_web_url ("sessionCacheUpdateHandler_ht",
        "URL=https://www.amazon.in/gp/product/sessionCacheUpdateHandler.html",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "COOKIE=session-id;i18n-prefs;csm-hit;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time",
        "PreSnapshot=webpage_1563387834962.png",
        "Snapshot=webpage_1563387836541.png",
        BODY_BEGIN,
            "sessionCacheUpdateFlag=1&pageType=Gateway&browserWidth=767&browserHeight=446&token=fVoboEDsYMjWCjzTN8sCObLZif2%2FoaBmQ3S2N5KuRr8%3D",
        BODY_END
    );

    ns_end_transaction("sessionCacheUpdateHandler_ht", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("P25039210_BAU_WLA_Day_Mi_Day");
    ns_web_url ("P25039210_BAU_WLA_Day_Mi_Day",
        "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Wireless/Xiaomi/MiDays17thJuly/GW/P25039210_BAU-WLA_Day_Mi_Days_17th-18th_Tall-Heroes_1500x600._CB442467463_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387836541.png",
        "Snapshot=webpage_1563387836704.png",
        INLINE_URLS,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUIFont-amazonember_rg-cc7ebaa05a2cd3b02c0929ac0475a44ab30b7efa._V2_.woff2", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUIFont-amazonember_bd-46b91bda68161c14e554a779643ef4957431987b._V2_.woff2", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUIFont-amazonember_rgit-9cc1bb64eb270135f1adf3a4881c2ee5e7c37be5._V2_.woff2", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUIFont-amazonember_bdit-80ff7aba37dd1ff5a6b90233a19e3a780a96dc2f._V2_.woff2", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("P25039210_BAU_WLA_Day_Mi_Day", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1KUEunBWEL___AC_SY200__jpg");
    ns_web_url ("X1KUEunBWEL___AC_SY200__jpg",
        "URL=https://images-na.ssl-images-amazon.com/images/I/41KUEunBWEL.__AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387836704.png",
        "Snapshot=webpage_1563387836732.png"
    );

    ns_end_transaction("X1KUEunBWEL___AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1rkw9ufQIL___AC_SY200__jpg");
    ns_web_url ("X1rkw9ufQIL___AC_SY200__jpg",
        "URL=https://images-na.ssl-images-amazon.com/images/I/41rkw9ufQIL.__AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387836732.png",
        "Snapshot=webpage_1563387836772.png"
    );

    ns_end_transaction("X1rkw9ufQIL___AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1xsehYdCeL___AC_SY200__jpg");
    ns_web_url ("X1xsehYdCeL___AC_SY200__jpg",
        "URL=https://images-na.ssl-images-amazon.com/images/I/41xsehYdCeL.__AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387836772.png",
        "Snapshot=webpage_1563387836824.png"
    );

    ns_end_transaction("X1xsehYdCeL___AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X15lBVmAGpL___AC_SY200__jpg");
    ns_web_url ("X15lBVmAGpL___AC_SY200__jpg",
        "URL=https://images-na.ssl-images-amazon.com/images/I/515lBVmAGpL.__AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387836824.png",
        "Snapshot=webpage_1563387836903.png"
    );

    ns_end_transaction("X15lBVmAGpL___AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1rlc6mVK_2BL___AC_SY200__jp");
    ns_web_url ("X1rlc6mVK_2BL___AC_SY200__jp",
        "URL=https://images-na.ssl-images-amazon.com/images/I/41rlc6mVK%2BL.__AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387836903.png",
        "Snapshot=webpage_1563387836942.png"
    );

    ns_end_transaction("X1rlc6mVK_2BL___AC_SY200__jp", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1JufFk7OpL___AC_SY200__jpg");
    ns_web_url ("X1JufFk7OpL___AC_SY200__jpg",
        "URL=https://images-na.ssl-images-amazon.com/images/I/51JufFk7OpL.__AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387836942.png",
        "Snapshot=webpage_1563387837006.png"
    );

    ns_end_transaction("X1JufFk7OpL___AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1xyAM3jgxL__AC_SY200__jpg");
    ns_web_url ("X1xyAM3jgxL__AC_SY200__jpg",
        "URL=https://images-eu.ssl-images-amazon.com/images/I/51xyAM3jgxL._AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387837006.png",
        "Snapshot=webpage_1563387837136.png"
    );

    ns_end_transaction("X1xyAM3jgxL__AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1VoCNLMeUL__AC_SY200__jpg");
    ns_web_url ("X1VoCNLMeUL__AC_SY200__jpg",
        "URL=https://images-eu.ssl-images-amazon.com/images/I/61VoCNLMeUL._AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387837136.png",
        "Snapshot=webpage_1563387837169.png"
    );

    ns_end_transaction("X1VoCNLMeUL__AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1tevFy3q3L__AC_SY200__jpg");
    ns_web_url ("X1tevFy3q3L__AC_SY200__jpg",
        "URL=https://images-eu.ssl-images-amazon.com/images/I/81tevFy3q3L._AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387837169.png",
        "Snapshot=webpage_1563387837213.png"
    );

    ns_end_transaction("X1tevFy3q3L__AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1YtqJpDkVL__AC_SY200__jpg");
    ns_web_url ("X1YtqJpDkVL__AC_SY200__jpg",
        "URL=https://images-eu.ssl-images-amazon.com/images/I/61YtqJpDkVL._AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387837213.png",
        "Snapshot=webpage_1563387837268.png"
    );

    ns_end_transaction("X1YtqJpDkVL__AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1uhJL32LGL__AC_SY200__jpg");
    ns_web_url ("X1uhJL32LGL__AC_SY200__jpg",
        "URL=https://images-eu.ssl-images-amazon.com/images/I/61uhJL32LGL._AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387837268.png",
        "Snapshot=webpage_1563387837357.png"
    );

    ns_end_transaction("X1uhJL32LGL__AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = HEAD
    ns_start_transaction("X1D_zq7R8NL__AC_SY200__jpg");
    ns_web_url ("X1D_zq7R8NL__AC_SY200__jpg",
        "URL=https://images-eu.ssl-images-amazon.com/images/I/91D-zq7R8NL._AC_SY200_.jpg",
        "METHOD=HEAD",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387837357.png",
        "Snapshot=webpage_1563387837415.png"
    );

    ns_end_transaction("X1D_zq7R8NL__AC_SY200__jpg", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("record_impressions_2");
    ns_web_url ("record_impressions_2",
        "URL=https://www.amazon.in/ah/ajax/record-impressions?c4i=ePm_fHprndDBasJAFIXhJzowd-beSbKMghbqqoiu52ZmVAxJsSli-_IqCIHoyu1ZHPi__4lwTD_Hof9-Ab0MQzqHy9S7ps2sXlXrlWzns8VU_7MfPjBff-F069h1h78UEbqI324c3ql0nKRgVhTqPbjyisA5w5fW2FzGSpmnEo5EjCtLsFIDboJH1QSFzVkjWaMqMmo9IDCEtsU-nXosngDFCBE7QkOSbo8mQ6kQRCtiyTvVWNyRr8jsbaQ&rId=QTX88JN8XW6309TZ412A&mkId=A21TJRUUN4KGV&exp=1563387924454&h=13be6fac4e06ca9daab37992970ccdeca32a4e17f3340658c082bac401e85e7e",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;csm-hit;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time",
        "PreSnapshot=webpage_1563387837415.png",
        "Snapshot=webpage_1563387838337.png",
        INLINE_URLS,
            "URL=https://www.amazon.in/service-worker.js", "HEADER=Service-Worker:script", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;csm-hit;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time", END_INLINE
    );

    ns_end_transaction("record_impressions_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_3");
    ns_web_url ("index_3",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time",
        "PreSnapshot=webpage_1563387838337.png",
        "Snapshot=webpage_1563387839065.png",
        BODY_BEGIN,
            "{"rid":"QTX88JN8XW6309TZ412A","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"jserr-rw":{"m":"ISS AJAX call failed for iss-warmup with responseText: undefined, pageType: Gateway, status: timeout, error: timeout","csm":"v5 ueLogError callee","logLevel":"WARN","attribution":"iss-warmup","pageURL":"https://www.amazon.in/","s":["function (){if(g.ue_err.erl){var b=g.ue_err.erl.length,l,a;for(l=0;l<b;l++)a=g.ue_err.erl[l],B(a.ex,a.info);ue_err.erl=[]}}","function (g,f){function y(b){if(b)return b.replace(/^\\s+|\\s+$/g,\"\")}function w(b,l){if(!b)return{};var a=\"INFO\"===l.logLevel;b.m&&b.m.message&&(b=b.m);var e=l.m||l.message||\"\",e=b.m&&b.m.message?e+b.m.message:b.m&&b.m.target&&b.m.target.tagName?e+(\"Error handler invoked by \"+b.m.target.tagName+\" tag\"):b.m?e+b.m:b.message?e+b.message:e+\"Unknown error\",e={m:e,name:b.name,type:b.type,csm:N+\" \"+(b.fromOnError?\"onerror\":\"ueLogError\")},k,f,h=0,q;e.logLevel=l.logLevel||A;l.adb&&(e.adb=l.adb);if(k=l.attribution)e.a"],"t":32708}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":1099}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.amazon.in/gp/uedata?at&v=0.204437.0&id=QTX88JN8XW6309TZ412A&m=1&sc=adblk_no&pc=32715&at=32715&t=1563387837551&csmtags=aui:sw:browser:register:supported|adblk_no&pty=Gateway&spty=desktop&pti=desktop&tid=QTX88JN8XW6309TZ412A&aftb=1", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time;csm-hit", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:QTX88JN8XW6309TZ412A$uedata=s:%2Fgp%2Fuedata%3Fat%26v%3D0.204437.0%26id%3DQTX88JN8XW6309TZ412A%26m%3D1%26sc%3Dadblk_no%26pc%3D32715%26at%3D32715%26t%3D1563387837551%26csmtags%3Daui%3Asw%3Abrowser%3Aregister%3Asupported%7Cadblk_no%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:32715", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/21B34wJMzKL.js?AUIClients/MSAVowelsJavascriptAssets", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41fMrDoAFbL._RC%7C71GkUD1temL.js,61u3dpzHy+L.js,41W9ohA0e+L.js,11vrNkbdcvL.js,21SHd9g2LAL.js,311T8Q1zWKL.js,51+klsvwgqL.js,31IEOtBPX+L.js_.js?AUIClients/AmazonNavigationDesktopMetaAsset#desktop", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/cs/orders/images/amazon-gc-100._CB349914954_.gif", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/authportal/common/js/ap-checkout-frn._CB309255200_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/common/sprites/sprite-communities._V138349855_.png", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/authportal/common/images/amazon_logo_no-org_mid._CB377570192_.png", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/javascripts/lib/popover/images/snake._CB138350263_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/iu3?d=amazon.in&slot=navFooter&a2=0101afceec47c6c6a16996aadaf40663cff63e043af14328b0b1712cd8256e0aeee5&old_oo=0&ts=1563387804466&s=Aa4R5keEG8swlRpwnJj8olSG4HAPW08D7tP1stH53doa&cb=1563387804466", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/iu3?d=amazon.in&slot=navFooter&a2=0101afceec47c6c6a16996aadaf40663cff63e043af14328b0b1712cd8256e0aeee5&old_oo=0&ts=1563387804466&s=Aa4R5keEG8swlRpwnJj8olSG4HAPW08D7tP1stH53doa&cb=1563387804466&dcc=t", END_INLINE
    );

    ns_end_transaction("index_3", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_4");
    ns_web_url ("index_4",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time",
        "PreSnapshot=webpage_1563387839065.png",
        "Snapshot=webpage_1563387839178.png",
        BODY_BEGIN,
            "{"rid":"QTX88JN8XW6309TZ412A","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"jserr-rw":{"m":"Hit Info","csm":"v5 onerror","logLevel":"INFO","adb":"adblk_no"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":258}}]}",
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
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time",
        "PreSnapshot=webpage_1563387839178.png",
        "Snapshot=webpage_1563387845506.png",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/index_5_url_0_1_1563388008355.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://aax-eu.amazon-adsystem.com/s/iu3?d=amazon.in&slot=navFooter&a2=0101afceec47c6c6a16996aadaf40663cff63e043af14328b0b1712cd8256e0aeee5&old_oo=0&ts=1563387804466&s=Aa4R5keEG8swlRpwnJj8olSG4HAPW08D7tP1stH53doa&cb=1563387804466&dcc=t", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", "COOKIE=ad-id", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/buttons/sign-in-secure._CB138348554_.gif", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/authportal/flex/reduced-nav/ap-flex-reduced-nav-2.1._CB343893441_.css", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/gno/images/general/navAmazonLogoFooter._CB391206769_.gif", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/communities/social/snwicons_v2._CB402380004_.png", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41gCbfiTdaL._RC%7C516fcOUE-HL.css,01evdoiemkL.css,01K+Ps1DeEL.css,31pdJv9iSzL.css,01tgK36lpGL.css,11UGC+GXOPL.css,21LK7jaicML.css,11L58Qpo0GL.css,21kyTi1FabL.css,01Xl9KigtzL.css,01YhS3Cs-hL.css,21GwE3cR-yL.css,019SHZnt8RL.css,01wAWQRgXzL.css,21bWcRJYNIL.css,11WgRxUdJRL.css,01dU8+SPlFL.css,11ocrgKoE-L.css,01SHjPML6tL.css,111-D2qRjiL.css,01QrWuRrZ-L.css,310Imb6LqFL.css,11Z1a0FxSIL.css,01cbS3UK11L.css,21mOLw+nYYL.css,01L8Y-JFEhL.css_.css?AUIClients/AmazonUI#not-trident", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/v3/pr?exlist=pp_mp_sx_af_kr_g_bsw_ox_index_aold_an_rb_fw_imdb_fbca_twca_y_pm_rlsa_adb&fv=1.0&ex-pl-fbca=vb6JKmqdRAKA9qQqWmgyPw&ex-pl-twca=aaH5aWjRQqaxx4v_accW2w&a=cm&ep=Qkn8kuulbIKAPBLg4_t_SUAzEqpUQItNaRzL4sa67yuFswtELrcVhYPO0VMn6CtPWENvyv62nKU2rsQBIzCjkQSNScwooa9g1EnRUj3UN1z9TLRvhIqYuXWtaD4adE1ZSR7rqXrh5NAX0YhZ-AAuKGHgkN0-zm472s8uhgXIWB6gCyvuBwX3FwbuxLOra1OqT_xGBiAA8sjuYxtaa97ksQ", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/authportal/flex/reduced-nav/ap-flex-reduced-nav-2.0._CB309255176_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61kzhTBl2qL._RC%7C11-BZEJ8lnL.js,61GQ9IdK7HL.js,21Of0-9HPCL.js,012FVc3131L.js,119KAWlHU6L.js,51xL2QLv4YL.js,11AHlQhPRjL.js,016iHgpF74L.js,11aNYFFS5hL.js,116tgw9TSaL.js,211-p4GRUCL.js,01PoLXBDXWL.js,61BanVD+50L.js,01mi-J86cyL.js,11BOgvnnntL.js,31UWuPgtTtL.js,01rpauTep4L.js,01iyxuSGj4L.js,018kT7oogLL.js_.js?AUIClients/AmazonUI#189458-T1.192338-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://bh.contextweb.com/bh/rtset?pid=557477&ev=&rurl=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fid%3D%25%25VGUID%25%25%26ex%3Dpulsepoint.com%26", "HEADER=Accept-Language:en-us", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?id=YGQLrwZBcDlh&ex=pulsepoint.com&&ev=&pid=557477", END_INLINE,
            "URL=https://odr.mookie1.com/t/v2?tagid=V2_393725&AMAZON_REGION_SPECIFIC_ENDPOINT=aax-eu.amazon-adsystem.com/s&src.visitorID=QcM6TRmEQ0SXNkOlHgPnDA", "HEADER=Accept-Language:en-us", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=mplatform.com&id=11461801790036416195", END_INLINE,
            "URL=https://sync.search.spotxchange.com/partner?adv_id=7922&redir=https://aax-eu.amazon-adsystem.com%2Fs/ecm3?ex%3Dspotx.com%26id%3D%24SPOTX_USER_ID", "HEADER=Accept-Language:en-us", "REDIRECT=YES", "LOCATION=/partner?adv_id=7922&redir=https://aax-eu.amazon-adsystem.com%2Fs/ecm3?ex%3Dspotx.com%26id%3D%24SPOTX_USER_ID&__user_check__=1&sync_id=0e415e83-a8c0-11e9-a690-1837648d0601", END_INLINE,
            "URL=https://c1.adform.net/serving/cookie/match?party=1153&redirect_url=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dadform.net%26id%3D%24%7BUUID%7D", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://usermatch.krxd.net/um/v2?partner=amzn", "HEADER=Accept-Language:en-us", "REDIRECT=YES", "LOCATION=https://beacon.krxd.net/usermatch.gif?kuid_status=new&partner=amzn", END_INLINE,
            "URL=https://cm.g.doubleclick.net/pixel?google_nid=a9eu&google_cm&ex=doubleclick.net&", "HEADER=Accept-Language:en-us", "COOKIE=test_cookie", END_INLINE,
            "URL=https://x.bidswitch.net/sync_a9/https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dbidswitch.com%26id%3D%24%7BUUID%7D", "HEADER=Accept-Language:en-us", "REDIRECT=YES", "LOCATION=https://x.bidswitch.net/ul_cb/sync_a9/https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dbidswitch.com%26id%3D%24%7BUUID%7D", END_INLINE,
            "URL=https://us-u.openx.net/w/1.0/cm?id=e818ca1e-0c23-caa8-0dd3-096b0ada08b7&r=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dopenx.com%26id%3D", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://ssum-sec.casalemedia.com/usermatchredir?s=184155&cb=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dindex%26id%3D__UID__", "HEADER=Accept-Language:en-us", "REDIRECT=YES", "LOCATION=https://ssum-sec.casalemedia.com/usermatchredir?s=184155&cb=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dindex%26id%3D__UID__&C=1", END_INLINE,
            "URL=https://pixel.advertising.com/ups/56613/sync?redir=true&_origin=1", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/956747825/?userId=CRxs81unSUqxwMW42PGE4g&guid=ON&script=0", "HEADER=Accept-Language:en-us", "COOKIE=test_cookie", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/cs/projects/text-trace/texttrace_typ._CB353753460_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/21PWs2LLIGL._RC%7C11qRTlQry4L.js,21E2aIDj6DL.js,31eEXkvrJzL.js,01g2etah0NL.js,31selSsN+1L.js,413u98XONQL.js,0185ITV0M6L.js,41Dds42UuNL.js,11BrVfD3DeL.js,01nnV9HCzgL.js,71LEtO5Vv5L.js,41COmOfIQhL.js,11nOzlnr6+L.js,31BBQa2c9BL.js,31Gy8EGyyiL.js,31UjTApGOPL.js,31Ac-cQ+ZWL.js,21NDIsf0a1L.js,11AVRVWTouL.js,11MQqFPEK+L.js,01jqyAujTwL.js,31+0pACITzL.js,61rODlgNeWL.js,11jf5oS-4FL.js,01RQtSMdG+L.js,01OtvpwikQL.js,21J9Onr4hrL.js,21m9o6VHhOL.js,21bSviTzsOL.js,11mvqFXObSL.js,01t2esUHF0L.js,31W9fAH+1aL.js,01lcH4zcTaL.js,01qPwv8D5hL.js,01YivelYW5L.js,01rg6Ce9FhL.js,016QFWAAdML.js,41Eko5EJ6TL.js,31apIfAEBaL.js,31NuG3-7xRL.js,11div+n5b+L.js,01IQoRXvpnL.js,011bX2ciJbL.js,21222B+rAzL.js,01gp3oqpb5L.js,31ItJPFyotL.js,11CIaAZhucL.js,01NGbPzAzBL.js,011kwg0OTQL.js,01jLpHmb92L.js,014kCoIHgIL.js,019W6kk1gjL.js,01hkseOXj6L.js,0189flJt-AL.js,01lPKWAwBBL.js,41ZKpsOG2XL.js,41WTMwhRXFL.js,61m-slBs3VL.js,013yVF4PBmL.js_.js?AUIClients/HardlinesDetailPageMetaAssetVariable_ACCESSORIES_AND_FAMILY_STRIPE#language-en.in.167162-T1.203659-T1.183511-T1.103061-T1.184424-T1.186073-T2.150150-T1.200616-T1.173971-T1.215516-T1.144201-T1.186725-T1.186696-T1.173115-T1.184758-T1.184759-T1.185101-T1.184757-T1.126331-C.109378-T1.154031-T3.198898-C.200963-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/javascripts/lib/jquery/jquery-1.2.6.min._CB166146506_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.amazon.in/gp/uedata?at&v=0.204437.0&id=QTX88JN8XW6309TZ412A&ctb=1&m=1&sc=QTX88JN8XW6309TZ412A&pc=37394&at=37394&t=1563387842230&csmtags=csm-feature-touch-enabled:false&pty=Gateway&spty=desktop&pti=desktop&tid=QTX88JN8XW6309TZ412A&aftb=1", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;csm-hit;session-id-time;lc-acbin", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:QTX88JN8XW6309TZ412A$uedata=s:%2Fgp%2Fuedata%3Fat%26v%3D0.204437.0%26id%3DQTX88JN8XW6309TZ412A%26ctb%3D1%26m%3D1%26sc%3DQTX88JN8XW6309TZ412A%26pc%3D37394%26at%3D37394%26t%3D1563387842230%26csmtags%3Dcsm-feature-touch-enabled%3Afalse%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:37394", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time;lc-acbin", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/cs/help/images/spotlight/kindle-family-02b._CB160654563_.jpg", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.amazon.in/gp/uedata?at&v=0.204437.0&id=QTX88JN8XW6309TZ412A&ctb=1&m=1&sc=QTX88JN8XW6309TZ412A&pc=37402&at=37402&t=1563387842238&pty=Gateway&spty=desktop&pti=desktop&tid=QTX88JN8XW6309TZ412A&aftb=1&ui=2", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;csm-hit;session-id-time;lc-acbin", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:QTX88JN8XW6309TZ412A$uedata=s:%2Fgp%2Fuedata%3Fat%26v%3D0.204437.0%26id%3DQTX88JN8XW6309TZ412A%26ctb%3D1%26m%3D1%26sc%3DQTX88JN8XW6309TZ412A%26pc%3D37402%26at%3D37402%26t%3D1563387842238%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1%26ui%3D2:37401", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;session-id-time;lc-acbin", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/956747825/?userId=CRxs81unSUqxwMW42PGE4g&guid=ON&script=0&cdct=2&is_vtc=1&random=450141897", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?id=YGQLrwZBcDlh&ex=pulsepoint.com&&ev=&pid=557477", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/956747825/?userId=CRxs81unSUqxwMW42PGE4g&guid=ON&script=0&cdct=2&is_vtc=1&random=450141897&ipr=y", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/cs/ya/images/new-link._CB380689125_.gif", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/cs/orders/images/btn-close._CB138349123_.gif", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://ib.adnxs.com/getuid?https://aax-eu.amazon-adsystem.com/s/ecm3?id=$UID&ex=appnexus.com&", "HEADER=Accept-Language:en-us", "REDIRECT=YES", "LOCATION=https://ib.adnxs.com/bounce?%2Fgetuid%3Fhttps%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fid%3D%24UID%26ex%3Dappnexus.com%26", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ET%2BPmLUUL._RC%7C119njhJT7LL.css,41j52RQ1GmL.css,210LbiKyCML.css,31j6BOPjmzL.css,01ekIXTj5kL.css,01KvCqKMBgL.css,21ckusqmu6L.css,01N8OOpUZPL.css,41NTvbcsBfL.css,01f0Gtj6a9L.css,310NMB80xGL.css,31JMnREMjZL.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,31MkQHV3gaL.css,314gb2LkLML.css,01FtAuFRr3L.css,01QLwk8mu6L.css,014Z+MbaRaL.css,01RRH0yFa4L.css,01bkkYjxP7L.css,018mGORJ7tL.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,01wL78bNyyL.css,31SN3jkqdEL.css,21Wf53xZ5jL.css,01OhA16ND1L.css,01gtuC0zSuL.css,01qwEWNuxuL.css,21qxDmhZV3L.css,11XXguyjjZL.css,31WlxajeYrL.css,01clde05tlL.css,11Z7S+lK47L.css,01AT3O0C6cL.css_.css?AUIClients/SoftlinesDetailPageMetaAsset#in.162525-T1.166419-T1.203659-T1.103061-T1.184424-T1.131900-C.94145-T1.144201-T1.126331-C.202285-C.215632-C.109378-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/01/browser-scripts/dpSpritesCSS/en_IN-secure-combined-1941710172._CB357966679_.css", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://c1.adform.net/serving/cookie/match?CC=1&party=1153&redirect_url=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dadform.net%26id%3D%24%7BUUID%7D", "HEADER=Accept-Language:en-us", "COOKIE=uid", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=mplatform.com&id=11461801790036416195", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://sync.search.spotxchange.com/partner?adv_id=7922&redir=https://aax-eu.amazon-adsystem.com%2Fs/ecm3?ex%3Dspotx.com%26id%3D%24SPOTX_USER_ID&__user_check__=1&sync_id=0e415e83-a8c0-11e9-a690-1837648d0601", "HEADER=Accept-Language:en-us", "COOKIE=audience", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=spotx.com&id=0e415e5c-a8c0-11e9-a690-1837648d0601", END_INLINE,
            "URL=https://x.bidswitch.net/ul_cb/sync_a9/https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dbidswitch.com%26id%3D%24%7BUUID%7D", "HEADER=Accept-Language:en-us", "COOKIE=tuuid;c;tuuid_lu", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=bidswitch.com&id=24f69138760b9d32382db1e2acfebb7e", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/authportal/common/css/ap-checkout-frn._CB319254382_.css", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://pixel.advertising.com/ups/56613/sync?redir=true&_origin=1&verify=true", "HEADER=Accept-Language:en-us", "COOKIE=APID", END_INLINE,
            "URL=https://us-u.openx.net/w/1.0/cm?cc=1&id=e818ca1e-0c23-caa8-0dd3-096b0ada08b7&r=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dopenx.com%26id%3D", "HEADER=Accept-Language:en-us", "COOKIE=i", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=doubleclick.net&google_gid=CAESEK7lF8UuYMhvOjJaQ-zqNxo&google_cver=1", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?kuid_status=new&partner=amzn", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://ssum-sec.casalemedia.com/usermatchredir?s=184155&cb=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dindex%26id%3D__UID__&C=1", "HEADER=Accept-Language:en-us", "COOKIE=CMID;CMPS", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=index&id=FH1Q9DdcefJwUiTwWFpuNTcEcyo4ZgAC", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ET%2BPmLUUL._RC%7C417qBNXt1HL.css,31j6BOPjmzL.css,01ekIXTj5kL.css,01KvCqKMBgL.css,21ckusqmu6L.css,21LLdt69ldL.css,21jNhNxHFBL.css,31JMnREMjZL.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,31MkQHV3gaL.css,314gb2LkLML.css,01FtAuFRr3L.css,01RRH0yFa4L.css,01bkkYjxP7L.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,01FlII1u-ZL.css,219oCRGl-sL.css,212hS9k0-iL.css,312UeeukJML.css,21cgGInnQ9L.css,210LbiKyCML.css,31SN3jkqdEL.css,21Wf53xZ5jL.css_.css?AUIClients/MediaDetailPageMetaAsset#in.122952-T1.103061-T1.131900-C.94145-T1.215632-C.109378-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51foFGmxtyL.js?AUIClients/DetailPageSnSAssets#109378-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("index_5", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("record_impressions_3");
    ns_web_url ("record_impressions_3",
        "URL=https://www.amazon.in/ah/ajax/record-impressions?c4i=ePm_fHprndDNSsNAGIXhKzowk5mvM7NsArZgVqXo-sxfFUsiMVJab94KQiG66vbAWbzP10I4l4-3eXz_B3rDuZx4Xnqv9VO77sO-l-eufVjqP47zFt1-h-nacRheLyWDQ8bncBvuqcyuyaqWCjrtYTUNPFOCyYzJi6X4sJQwyVsl0cA1xl0_NYJVCZh0cIG16Li6af1CYObxiJcyjdj8ATS6aKHKiEECLA3hpQpcbRSjtaIKf5C_AVt4bvk&rId=QTX88JN8XW6309TZ412A&mkId=A21TJRUUN4KGV&exp=1563387924454&h=b0f7e07a87ffb587ea770847117557883800349eaead6d6d255bf7fa3f1e2ede",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;csm-hit;session-id-time;lc-acbin",
        "PreSnapshot=webpage_1563387845506.png",
        "Snapshot=webpage_1563387846003.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31SN3jkqdEL.css?AUIClients/DetailPageSnSAssets#215632-C.109378-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://token.rubiconproject.com/token?pid=2179&pt=n", "HEADER=Accept-Language:en-us", "REDIRECT=YES", "LOCATION=https://s.amazon-adsystem.com/ecm3?id=I9sG44nCxj5Luw-Dw5tzOQ&ex=rubiconproject.com&status=ok", END_INLINE,
            "URL=https://ads.stickyadstv.com/user-matching?id=2545", "HEADER=Accept-Language:en-us", "REDIRECT=YES", "LOCATION=https://s.amazon-adsystem.com/ecm3?id=a73a8460713e33823f5ca334d931bd&ex=freewheel.tv", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=adform.net&id=3085593661845138817", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=spotx.com&id=0e415e5c-a8c0-11e9-a690-1837648d0601", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=bidswitch.com&id=24f69138760b9d32382db1e2acfebb7e", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/errors-alerts/error-styles-ssl._CB138362389_.css", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://ups.analytics.yahoo.com/ups/56613/sync?redir=true&_origin=1&apid=UP0e3a9be7-a8c0-11e9-8d3d-0aba2c9d9bfe", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.imdb.com/ads/idsync?cid=79bc437ba&ex=imdb.com", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.facebook.com/fr/r.php?p=558293300959460&e=vb6JKmqdRAKA9qQqWmgyPw&r=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dfbca%26id%3Dvb6JKmqdRAKA9qQqWmgyPw&s=1563387840&h=OEpUVDNmbC9va0xNR0ZmUE04TUmrLzFUMXcDT0GH50ERurW5", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=openx.com&id=14987260-ab31-caf0-341e-16fe3305bc28", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://analytics.twitter.com/i/adsct?p_id=985&p_user_id=aaH5aWjRQqaxx4v_accW2w&twitter_redir=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dtwca%26id%3DaaH5aWjRQqaxx4v_accW2w%26", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=index&id=FH1Q9DdcefJwUiTwWFpuNTcEcyo4ZgAC", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://ib.adnxs.com/bounce?%2Fgetuid%3Fhttps%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fid%3D%24UID%26ex%3Dappnexus.com%26", "HEADER=Accept-Language:en-us", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?id=0&ex=appnexus.com&", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/transparent-pixel._CB386942716_.gif", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/01/x-locale/cs/css/images/amznbtn-sprite03._CB387356454_.png", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/login/fwcim._CB481730939_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("record_impressions_3", NS_AUTO_STATUS);
    ns_page_think_time(1.055);

    //Page Auto splitted for Link 'A' Clicked by User
    ns_start_transaction("AmazonNavigationDesktopMetaA");
    ns_web_url ("AmazonNavigationDesktopMetaA",
        "URL=https://images-na.ssl-images-amazon.com/images/I/210UtsRqV6L._RC%7C71+WX4uo+uL.css,11zh5zoa5AL.css,31cuIVKhckL.css,213skwsyD4L.css,31wWWC6YAvL.css,11G4HxMtMSL.css,31OvHRW+XiL.css,01XHMOHpK1L.css_.css?AUIClients/AmazonNavigationDesktopMetaAsset#desktop.in",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387847533.png",
        "Snapshot=webpage_1563387847795.png",
        INLINE_URLS,
            "URL=https://ads.yahoo.com/cms/v1?esig=1~6772d6d12bf5fd5c41ee5ef107d84db09124942a&nwid=10000936839&sigv=1", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://image5.pubmatic.com/AdServer/usersync/usersync.html?predirect=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fid%3DPM_UID%26ex%3Dpubmatic.com&userIdMacro=PM_UID", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("AmazonNavigationDesktopMetaA", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_6");
    ns_web_url ("index_6",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1563387847795.png",
        "Snapshot=webpage_1563387848126.png",
        BODY_BEGIN,
            "{"rid":"QTX88JN8XW6309TZ412A","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"csmcount":{"counter":"gw-img-size-success","value":3,"t":33894}},{"csmcount":{"counter":"gw-img-size-success","value":4,"t":33930}},{"csmcount":{"counter":"gw-img-size-success","value":5,"t":33931}},{"csmcount":{"counter":"gw-img-size-success","value":6,"t":33957}},{"csmcount":{"counter":"gw-img-size-success","value":7,"t":33958}},{"csmcount":{"counter":"gw-shoveler-img-size-1","value":0,"t":33958}},{"csmcount":{"counter":"gw-img-size-success","value":8,"t":33958}},{"csmcount":{"counter":"gw-img-size-success","value":9,"t":33959}},{"csmcount":{"counter":"gw-img-size-success","value":10,"t":33959}},{"csmcount":{"counter":"gw-img-size-success","value":11,"t":33963}},{"csmcount":{"counter":"gw-img-size-success","value":12,"t":34287}},{"csmcount":{"counter":"gw-img-size-success","value":13,"t":34288}},{"csmcount":{"counter":"gw-shoveler-img-size-2","value":0,"t":34288}},{"csmcount":{"counter":"aui:preload_fulfilled","value":1,"t":35142}},{"csmcount":{"counter":"aui:preload_fulfilled","value":2,"t":35144}},{"csmcount":{"counter":"aui:preload_fulfilled","value":3,"t":35289}},{"csmcount":{"counter":"aui:preload_fulfilled","value":4,"t":35291}},{"csmcount":{"counter":"aui:preload_fulfilled","value":5,"t":35295}},{"csmcount":{"counter":"aui:sw:browser:register:success","value":1,"t":35740}},{"csmcount":{"counter":"aui:preload_fulfilled","value":6,"t":35783}},{"csmcount":{"counter":"aui:preload_fulfilled","value":7,"t":35934}},{"csmcount":{"counter":"aui:preload_fulfilled","value":8,"t":37000}},{"csmcount":{"counter":"aui:preload_fulfilled","value":9,"t":37002}},{"csmcount":{"counter":"aui:preload_fulfilled","value":10,"t":37004}},{"csmcount":{"counter":"aui:preload_fulfilled","value":11,"t":37346}},{"csmcount":{"counter":"aui:preload_fulfilled","value":12,"t":37348}},{"csmcount":{"counter":"postbackImageSize","value":227,"t":37394}},{"csmcount":{"counter":"postbackImageSize","value":192,"t":37401}},{"cel":{"k":"mmm1","e":[{"x":479,"y":176,"t":37395},{"x":461,"y":144,"t":37546}],"min":30,"max":30,"avg":30}},{"csmcount":{"counter":"aui:preload_fulfilled","value":13,"t":38358}},{"csmcount":{"counter":"aui:preload_fulfilled","value":14,"t":38435}},{"csmcount":{"counter":"aui:preload_fulfilled","value":15,"t":38847}},{"csmcount":{"counter":"aui:preload_fulfilled","value":16,"t":39082}},{"csmcount":{"counter":"aui:preload_fulfilled","value":17,"t":39505}},{"csmcount":{"counter":"adplacements:htmlviewed:Gateway:right-2:desktop","value":1,"t":40246}},{"cel":{"w":784,"h":463,"x":0,"y":350,"t":40248,"k":"vpi"}},{"csmcount":{"counter":"aui:preload_fulfilled","value":18,"t":40283}},{"csmcount":{"counter":"aui:preload_fulfilled","value":19,"t":40284}},{"csmcount":{"counter":"adplacements:adload:unservedviewabilityfired_amzn:Gateway:right-2:desktop","value":1,"t":40288}},{"cel":{"k":"mmm1","e":[{"x":456,"y":137,"t":37591},{"x":435,"y":123,"t":37703},{"x":338,"y":108,"t":37740},{"x":262,"y":114,"t":37860},{"x":246,"y":114,"t":37968},{"x":238,"y":114,"t":38278},{"x":316,"y":237,"t":38982},{"x":323,"y":578,"t":40245},{"x":486,"y":539,"t":40267}],"min":30,"max":80,"avg":55}},{"csmcount":{"counter":"gwAjaxCall","value":4,"t":40641}},{"csmcount":{"counter":"aui:preload_fulfilled","value":20,"t":40795}},{"csmcount":{"counter":"aui:preload_fulfilled","value":21,"t":40961}},{"csmcount":{"counter":"aui:preload_fulfilled","value":22,"t":42006}},{"csmcount":{"counter":"aui:preload_fulfilled","value":23,"t":42187}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-F","w":1000,"h":600,"d":1,"x":-1000,"y":99,"t":40841,"k":"ewi"}},{"cel":{"n":"gw-ftGr-desktop-tall-hero-G","w":1000,"h":600,"d":0,"x":0,"y":99,"t":40841,"k":"ewi"}},{"cel":{"k":"mcm","w":1000,"h":5574,"t":42370,"x":78,"y":474,"p":"//*[@id='6JFAsPqW8yRa0bfFqmpSpA']/DIV[2]/DIV/DIV/A","n":"A","dt":78.86,"r":"https://www.amazon.in/Low-Price-With-Free-Shipping/bbp?category=/mens&pf_rd_p=b139ea56-b471-44e1-96c4-9419c155d0ed&pf_rd_r=QTX88JN8XW6309TZ412A","c":["a-link-normal","quadrant-overlay"]}},{"cel":{"k":"efo","t":42374,"s":"default"}},{"csmcount":{"counter":"aui:preload_fulfilled","value":24,"t":42392}},{"csmcount":{"counter":"aui:preload_fulfilled","value":25,"t":42393}},{"csmcount":{"counter":"aui:preload_fulfilled","value":26,"t":42409}},{"csmcount":{"counter":"QF-N:SN:QN:TN","value":1,"t":42648}},{"csmcount":{"counter":"cel.PDM.TotalExecutions","value":32,"t":42649}},{"csmcount":{"counter":"cel.VPI.TotalExecutions","value":2,"t":42649}},{"csmcount":{"counter":"cel.VPI.TotalExecutionTime","value":0,"t":42649}},{"csmcount":{"counter":"cel.VPI.AverageExecutionTime","value":0,"t":42649}},{"csmcount":{"counter":"cel.widgets.batchesProcessed","value":32,"t":42649}},{"cel":{"k":"mmm1","e":[{"x":289,"y":494,"t":42262},{"x":78,"y":474,"t":42342},{"x":78,"y":474,"t":42650}],"min":10,"max":80,"avg":40}},{"cel":{"k":"hrt","t":42650}},{"cel":{"k":"eod","t0":1563387804836,"t":42650}},{"csmcount":{"counter":"armored-cxguardrails.unresponsive-clicks.violations","value":0,"t":42650}},{"csmcount":{"counter":"armored-cxguardrails.unresponsive-clicks.violationRate","value":0,"t":42650}},{"csm":{"k":"chk","f":3,"l":{"csmcount":317,"cel":77,"csm":4,"navigation":1,"jserr-rw":2},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":5358}}]}",
        BODY_END
    );

    ns_end_transaction("index_6", NS_AUTO_STATUS);
    ns_page_think_time(0.154);

    ns_start_transaction("mens_pf_rd_p_b139ea56_b471_4");
    ns_web_url ("mens_pf_rd_p_b139ea56_b471_4",
        "URL=https://www.amazon.in/Low-Price-With-Free-Shipping/bbp?category=/mens&pf_rd_p=b139ea56-b471-44e1-96c4-9419c155d0ed&pf_rd_r=QTX88JN8XW6309TZ412A",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time;csm-hit",
        "PreSnapshot=webpage_1563387852577.png",
        "Snapshot=webpage_1563387849107.png",
        INLINE_URLS,
            "URL=https://dpm.demdex.net/ibs:dpid=139200&dpuuid=EEcGm8XjSoKzrfuqf-XkNA&redir=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dadobe.com%26id%3D%24%7BDD_UUID%7D", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11rSsS-PDPL._RC%7C21PWs2LLIGL.js,11qRTlQry4L.js,21E2aIDj6DL.js,31eEXkvrJzL.js,01g2etah0NL.js,01Re6AqkVUL.js,31selSsN+1L.js,413u98XONQL.js,21u1PnPEsML.js,51+io-0L8GL.js,01I-WWW2CuL.js,01AdYLY9rHL.js,01IOMCsVFCL.js,11BrVfD3DeL.js,01nnV9HCzgL.js,11dhZ6zkMNL.js,71LEtO5Vv5L.js,0185ITV0M6L.js,41Dds42UuNL.js,31UjTApGOPL.js,01wYyhYnnFL.js,01LHJt5PiyL.js,31Ac-cQ+ZWL.js,01VgEfU-GFL.js,01HmcbFsnFL.js,01JzE3-DfLL.js,31sG+M5QN5L.js,11AVRVWTouL.js,11MQqFPEK+L.js,01I+ls4AqQL.js,01jqyAujTwL.js,31+0pACITzL.js,01OrQ5AXqsL.js,11gAPPElxuL.js,01OtvpwikQL.js,21J9Onr4hrL.js,01t2esUHF0L.js,01S8y9NkxoL.js,01ZF+ovNflL.js,21PR-xiFCvL.js,51foFGmxtyL.js,01Z-Ip0c4YL.js,01qPwv8D5hL.js,01YivelYW5L.js,016QFWAAdML.js,01rg6Ce9FhL.js,010kX03xiRL.js,31NuG3-7xRL.js,011bX2ciJbL.js,21222B+rAzL.js,01gp3oqpb5L.js,31ItJPFyotL.js,11CIaAZhucL.js,01NGbPzAzBL.js,01NKGaW0w5L.js,01rEmdLLpxL.js,019W6kk1gjL.js,01hkseOXj6L.js,01lcH4zcTaL.js,01UkZ13lKKL.js_.js?AUIClients/SoftlinesDetailPageMetaAsset#language-en.in.167162-T1.162525-T1.166419-T1.203659-T1.151985-T1.183511-T1.103061-T1.184424-T1.186073-T2.200616-T1.173971-T1.131900-C.144201-T1.186725-T1.186696-T1.173115-T1.184758-T1.184759-T1.185101-T1.184757-T1.126331-C.156391-T1.202285-C.109378-T1.154031-T3.198898-C.200963-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?id=0&ex=appnexus.com&", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/msa/vowels/metrics.jpg?time=1563387847948&rand=407048", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210LbiKyCML._RC%7C31j6BOPjmzL.css,01ekIXTj5kL.css,01KvCqKMBgL.css,21ckusqmu6L.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,310NMB80xGL.css,41hIrT0+wbL.css,01FlII1u-ZL.css,219oCRGl-sL.css,212hS9k0-iL.css,31MkQHV3gaL.css,314gb2LkLML.css,31dTK1hHb6L.css,014Z+MbaRaL.css,01RRH0yFa4L.css,01bkkYjxP7L.css,31Wg0ai095L.css,01f31VNCowL.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,31Fo-RK+JML.css,01CslPlvtoL.css,11Z7S+lK47L.css,21Wf53xZ5jL.css,01OhA16ND1L.css,01tBHVauY+L.css,41Uz4bMH9yL.css,01TZ9fpDSSL.css,01IY99sMV0L.css,01qwEWNuxuL.css,21qxDmhZV3L.css,11XXguyjjZL.css,31WlxajeYrL.css,01clde05tlL.css_.css?AUIClients/HardlinesDetailPageMetaAssetVariable#in.not-trident.122952-T1.203659-T1.103061-T1.184424-T1.150150-T1.144201-T1.126331-C", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/x/px/QtMG-JWCd165NAnWLgHMrnwAAAFsASy7FwMAAAH_AdT4Tbs/niv/%7B%22wh%22:463,%22ww%22:784,%22sx%22:0,%22sy%22:350,%22ah%22:250,%22aw%22:300,%22top%22:439,%22left%22:676.671875,%22v%22:%7B%22p%22:0,%22t%22:0,%22def%22:%22amzn%22%7D,%22ptv%22:40.287,%22ttv%22:34.91,%22niv%22:true%7D", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://s.amazon-adsystem.com/ecm3?id=I9sG44nCxj5Luw-Dw5tzOQ&ex=rubiconproject.com&status=ok", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://s.amazon-adsystem.com/ecm3?id=a73a8460713e33823f5ca334d931bd&ex=freewheel.tv", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61kzhTBl2qL._RC%7C11-BZEJ8lnL.js,61GQ9IdK7HL.js,21Of0-9HPCL.js,012FVc3131L.js,119KAWlHU6L.js,51xL2QLv4YL.js,11AHlQhPRjL.js,016iHgpF74L.js,11aNYFFS5hL.js,116tgw9TSaL.js,211-p4GRUCL.js,01PoLXBDXWL.js,61BanVD+50L.js,01mi-J86cyL.js,11BOgvnnntL.js,31UWuPgtTtL.js,01rpauTep4L.js,01iyxuSGj4L.js,01OWoGffjKL.js_.js?AUIClients/AmazonUI#189458-T1.192338-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?p_user_id=aaH5aWjRQqaxx4v_accW2w&ex=twca&id=aaH5aWjRQqaxx4v_accW2w", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/msa-vowels/1/OP/?src=https%3A//m.media-amazon.com/images/G/01/msa/vowels/metrics.jpg%3Ftime%3D1563387847948%26rand%3D407048&l=824&s=www.amazon.in&u=/&sy=c&tz=mozilla/5.0%20%28windows%20nt%2010.0%3B%20wow64%29%20applewebkit/537.36%20%28khtml%2C%20like%20gecko%29%20chrome/64.0.3282.24%20safari/537.36&", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/msa/vowels/metrics._STID792694-1563387848773_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/msa-vowels/1/OP/?src=https%3A//images-eu.ssl-images-amazon.com/images/G/31/gno/sprites/nav-sprite-global_bluebeacon-V3-1x_optimized._CB468962293_.png&dns=0&dur=7914&siz=11842&tcp=0&ttf=2831&con=223&s=www.amazon.in&u=/&sy=c&tz=mozilla/5.0%20%28windows%20nt%2010.0%3B%20wow64%29%20applewebkit/537.36%20%28khtml%2C%20like%20gecko%29%20chrome/64.0.3282.24%20safari/537.36&", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/msa-vowels/1/OP/?src=https%3A//images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/transparent-pixel._CB386942716_.gif&dns=0&dur=5218&siz=473&tcp=0&ttf=322&con=86&s=www.amazon.in&u=/&sy=c&tz=mozilla/5.0%20%28windows%20nt%2010.0%3B%20wow64%29%20applewebkit/537.36%20%28khtml%2C%20like%20gecko%29%20chrome/64.0.3282.24%20safari/537.36&", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/msa-vowels/1/OP/?src=https%3A//images-eu.ssl-images-amazon.com/images/G/31/img19/Wireless/Xiaomi/MiDays17thJuly/GW/P25039210_BAU-WLA_Day_Mi_Days_17th-18th_Tall-Heroes_1500x600._CB442467463_.jpg&dns=0&dur=7414&siz=43159&tcp=0&ttf=2331&con=306&s=www.amazon.in&u=/&sy=c&tz=mozilla/5.0%20%28windows%20nt%2010.0%3B%20wow64%29%20applewebkit/537.36%20%28khtml%2C%20like%20gecko%29%20chrome/64.0.3282.24%20safari/537.36&", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE
    );

    ns_end_transaction("mens_pf_rd_p_b139ea56_b471_4", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_csm_nexusclient_p_2");
    ns_web_url ("com_amazon_csm_nexusclient_p_2",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.csm.nexusclient.prod",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "PreSnapshot=webpage_1563387849107.png",
        "Snapshot=webpage_1563387849176.png",
        BODY_BEGIN,
            "{"cs":{"dct":{"#0":"violationType","#1":"unresponsive-clicks","#2":"violationCount","#3":"totalScanned","#4":"producerId","#5":"csm","#6":"schemaId","#7":"csm.ArmoredCXGuardrailsViolation.3","#8":"timestamp","#9":"messageId","#10":"sessionId","#11":"260-6898445-8949221","#12":"requestId","#13":"QTX88JN8XW6309TZ412A","#14":"obfuscatedMarketplaceId","#15":"A21TJRUUN4KGV"}},"events":[{"data":{"#0":"#1","#2":0,"#3":0,"#4":"#5","#6":"#7","#8":"2019-07-17T18:24:07.484Z","#9":"QTX88JN8XW6309TZ412A-1563387847484-2418550643","#10":"#11","#12":"#13","#14":"#15"}}]}",
        BODY_END
    );

    ns_end_transaction("com_amazon_csm_nexusclient_p_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_7");
    ns_web_url ("index_7",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1563387849176.png",
        "Snapshot=webpage_1563387852872.png",
        BODY_BEGIN,
            "{"rid":"QTX88JN8XW6309TZ412A","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"csmcount":{"counter":"aui:preload_fulfilled","value":27,"t":43190}},{"csmcount":{"counter":"aui:preload_fulfilled","value":28,"t":43429}},{"csm":{"k":"chk","f":4,"l":{"csmcount":319,"cel":77,"csm":5,"navigation":1,"jserr-rw":2},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":417}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41gCbfiTdaL._RC%7C516fcOUE-HL.css,01evdoiemkL.css,01K+Ps1DeEL.css,31pdJv9iSzL.css,01tgK36lpGL.css,11UGC+GXOPL.css,21LK7jaicML.css,11L58Qpo0GL.css,21kyTi1FabL.css,01Xl9KigtzL.css,01YhS3Cs-hL.css,21GwE3cR-yL.css,019SHZnt8RL.css,01wAWQRgXzL.css,21bWcRJYNIL.css,11WgRxUdJRL.css,01dU8+SPlFL.css,11ocrgKoE-L.css,01SHjPML6tL.css,111-D2qRjiL.css,01QrWuRrZ-L.css,310Imb6LqFL.css,11Z1a0FxSIL.css,01cbS3UK11L.css,21mOLw+nYYL.css,01L8Y-JFEhL.css_.css?AUIClients/AmazonUI#not-trident", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210UtsRqV6L._RC%7C71+WX4uo+uL.css,11zh5zoa5AL.css,31cuIVKhckL.css,210-42NMyML.css,31wWWC6YAvL.css,11G4HxMtMSL.css,31OvHRW+XiL.css,01XHMOHpK1L.css_.css?AUIClients/AmazonNavigationDesktopMetaAsset#desktop.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/11+m+vGvN2L._RC%7C015yvUC3ixL.css,210J99bV+pL.css,01OLDJeDWQL.css,313udYRpVeL.css_.css?AUIClients/BrightBuyWebAppAssets", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/gno/sprites/nav-sprite-global_bluebeacon-V3-1x_optimized._CB468962293_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/transparent-pixel._CB386942716_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/51IvUNGK07L._RC%7C31+zKtwGmCL.js_.js?AUIClients/WestlakeCommonCoreAssets", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/11bcdKPAT6L._RC%7C11zLvtc5-xL.js,31BTlmzn6kL.js,216DcUV+LPL.js,31QlhC-s4fL.js_.js?AUIClients/BrightBuyWebAppAssets", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/MAI/Sweepstakes/01/1155936--IN--MOBILE-JAN19-JACKPOT_400x39_1546509767_6.31kb._CB459061293_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/BrightBuyWebAppAssets@assets-bbp_sprites_1x-9cb0455f730080292a4c43bad40d6be44007704e._V2_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUIIcon@legacyImages-sprite_1x-6c462f5dc3bc3e40d0788502814fa7043355712a._V2_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61kzhTBl2qL._RC%7C11-BZEJ8lnL.js,61GQ9IdK7HL.js,21Of0-9HPCL.js,012FVc3131L.js,119KAWlHU6L.js,51xL2QLv4YL.js,11AHlQhPRjL.js,016iHgpF74L.js,11aNYFFS5hL.js,116tgw9TSaL.js,211-p4GRUCL.js,01PoLXBDXWL.js,61BanVD+50L.js,01mi-J86cyL.js,11BOgvnnntL.js,31UWuPgtTtL.js,01rpauTep4L.js,01iyxuSGj4L.js,018kT7oogLL.js_.js?AUIClients/AmazonUI#189458-T1.192338-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41YUeDE3zHL._RC%7C71aLqNGbWsL.js,61u3dpzHy+L.js,417SPNjYS3L.js,11vrNkbdcvL.js,21SHd9g2LAL.js,31xNSJua7KL.js,51YeRc8UK1L.js,31R1liuRRmL.js_.js?AUIClients/AmazonNavigationDesktopMetaAsset#desktop", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://ecx.images-amazon.com/images/I/61lMXmz1BLL._SR258,310_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/71E2eQhEXCL._SR258,310_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/81oOn2SPIOL._SR258,310_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://ecx.images-amazon.com/images/I/61fnWYBtoVL._SR258,310_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/81jPkfdXW2L._SR258,310_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.amazon.in/gp/uedata?ld&v=0.204437.0&id=CEBK9MEJXP1JY36NH606&m=1&sc=bb:initload&cf=1607&af=1607&pc=1607&ld=1607&t=1563387852278&rt=__&csmtags=aui|aui:aui_build_date:3.19.4-2019-06-27|navbar|fls-eu|adblk_no&viz=visible:3&pty=BrightBuy&spty=LandingPage&pti=bb:mens&tid=QTX88JN8XW6309TZ412A&aftb=1", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time;csm-hit", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:CEBK9MEJXP1JY36NH606$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DCEBK9MEJXP1JY36NH606%26m%3D1%26sc%3Dbb%3Ainitload%26cf%3D1607%26af%3D1607%26pc%3D1607%26ld%3D1607%26t%3D1563387852278%26rt%3D__%26csmtags%3Daui%7Caui%3Aaui_build_date%3A3.19.4-2019-06-27%7Cnavbar%7Cfls-eu%7Cadblk_no%26viz%3Dvisible%3A3%26pty%3DBrightBuy%26spty%3DLandingPage%26pti%3Dbb%3Amens%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:1608", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:CEBK9MEJXP1JY36NH606$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DCEBK9MEJXP1JY36NH606%26sc0%3Dportal-bb%26pc0%3D2%26ld0%3D2%26t0%3D1563387851004%26sc1%3DcsmCELLSframework%26bb1%3D523%26pc1%3D523%26ld1%3D523%26t1%3D1563387851194%26sc2%3DcsmCELLSpdm%26bb2%3D523%26pc2%3D569%26ld2%3D569%26t2%3D1563387851240%26sc3%3DcsmCELLSvpm%26bb3%3D569%26pc3%3D570%26ld3%3D570%26t3%3D1563387851241%26sc4%3DcsmCELLSfem%26bb4%3D570%26pc4%3D571%26ld4%3D571%26t4%3D1563387851242%26sc5%3Due_sushi_v1%26bb5%3D573%26pc5%3D574%26ld5%3D574%26t5%3D1563387851245%26ctb%3D1:1609", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE
    );

    ns_end_transaction("index_7", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_csm_nexusclient_p_3");
    ns_web_url ("com_amazon_csm_nexusclient_p_3",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.csm.nexusclient.prod",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "PreSnapshot=webpage_1563387852872.png",
        "Snapshot=webpage_1563387852893.png",
        BODY_BEGIN,
            "{"cs":{"dct":{"#0":"requestId","#1":"CEBK9MEJXP1JY36NH606","#2":"server","#3":"www.amazon.in","#4":"obfuscatedMarketplaceId","#5":"A21TJRUUN4KGV","#6":"producerId","#7":"csm","#8":"schemaId","#9":"csm.CSMBaselineEvent.4","#10":"timestamp","#11":"messageId","#12":"sessionId","#13":"260-6898445-8949221"}},"events":[{"data":{"#0":"#1","#2":"#3","#4":"#5","#6":"#7","#8":"#9","#10":"2019-07-17T18:24:11.244Z","#11":"CEBK9MEJXP1JY36NH606-1563387851244-9097008071","#12":"#13"}}]}",
        BODY_END
    );

    ns_end_transaction("com_amazon_csm_nexusclient_p_3", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("stream");
    ns_web_url ("stream",
        "URL=https://www.amazon.in/bbp/data/stream?cursor=eyJzIjo4OTg4NTczOTksIm8iOjEwLCJpayI6MSwiaXMiOnt9LCJlcmMiOjB9.v1&count=20&program=bb&category=%2Fmens&contextAsins=&ingress=&ingressAsins=&searchKeywords=&filters=%7B%22sizes%22%3A%5B%5D%7D&currencyCode=&bbWl=&_=1563387852318",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time;csm-hit",
        "PreSnapshot=webpage_1563387852893.png",
        "Snapshot=webpage_1563387852981.png"
    );

    ns_end_transaction("stream", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("bb_d33a38_B07MPSZ7NK_B07L2FP");
    ns_web_url ("bb_d33a38_B07MPSZ7NK_B07L2FP",
        "URL=https://fls-eu.amazon.in/1/action-impressions/1/OP/brightbuy/asin/bb_d33a38:B07MPSZ7NK,B07L2FP9WJ,B01MSTXWBS?marketplaceId=A21TJRUUN4KGV&session=260-6898445-8949221&requestId=CEBK9MEJXP1JY36NH606&csm=1",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1563387852981.png",
        "Snapshot=webpage_1563387853326.png",
        INLINE_URLS,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUISpinner-spinner_simple_2x-feb7df32f9e911dfefeed80d0548b616c17b017f._V2_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:CEBK9MEJXP1JY36NH606$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DCEBK9MEJXP1JY36NH606%26ctb%3D1%26sc0%3Diss-init-pc%26bb0%3D493%26cf0%3D2521%26be0%3D2521%26pc0%3D2521%26ld0%3D2521%26t0%3D1563387853192%26pty%3DBrightBuy%26spty%3DLandingPage%26pti%3Dbb%3Amens%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:2522", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE
    );

    ns_end_transaction("bb_d33a38_B07MPSZ7NK_B07L2FP", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("suggestions_2");
    ns_web_url ("suggestions_2",
        "URL=https://completion.amazon.co.uk/api/2017/suggestions?session-id=260-6898445-8949221&customer-id=&request-id=CEBK9MEJXP1JY36NH606&page-type=BrightBuy&lop=en_IN&site-variant=desktop&client-info=amazon-search-ui&mid=A21TJRUUN4KGV&alias=aps&searchTerm=a&suggestion-type=KEYWORD&suggestion-type=WIDGET&_=1563387853213",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387853326.png",
        "Snapshot=webpage_1563387855096.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonDevices/neel/checkers/500x450_Flyout._CB443265716_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/AmazonDevices/Tank/Flyout_just._CB458220204_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/AmazonVideo/2019/SingleTitle/Kalank/499x492-GNO_without-disclaimer._CB442308835_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/digital/music/merch/India/2019/May/Flyout_Reduced._CB462852406_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/Laptops/Flyout/fashion_flyout_500x500_2._CB442684549_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/MI/Flyout/MIbeginners._CB487070566_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Fashion/Flyout/men._CB468888570_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Fashion/Flyout/Women-fashion_Flyout_500x450._CB468888565_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/IMG-2017/GW_Flyout_500x450_Flyout._CB487102089_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img17/Sports/Exercise_Fitness/Get_fit_at_home/gym_essentials/flyout._CB505942756_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img18/Family/flyout_new_last_1534496402_1534508273._CB470411914_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/books/072019/ChildrenBookshelf/CB_flyout._CB442372930_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img16/GiftCards/MarchSweep/Nov/RGC24_JupiterW1GC_500x500_Nov._CB479161047_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/615PZAkP3OL._SR258,310_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/61tUnoFsZiL._SR258,310_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/61zPrwq9SuL._SR258,310_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/81CNX-6YKtL._SR258,310_.jpg", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("suggestions_2", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("stream_2");
    ns_web_url ("stream_2",
        "URL=https://www.amazon.in/bbp/data/stream?cursor=eyJzIjo4OTg4NTczOTksIm8iOjMwLCJpayI6MiwiaXMiOnsiNDE0MTAyMzU4IjowfSwiZXJjIjowfQ%3D%3D.v1&count=20&program=bb&category=%2Fmens&contextAsins=&ingress=&ingressAsins=&searchKeywords=&filters=%7B%22sizes%22%3A%5B%5D%7D&currencyCode=&bbWl=&_=1563387854718",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1563387855096.png",
        "Snapshot=webpage_1563387856041.png",
        INLINE_URLS,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:CEBK9MEJXP1JY36NH606$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DCEBK9MEJXP1JY36NH606%26ctb%3D1%26sc0%3Diss-warmup%3Asuccess%26bb0%3D2539%26cf0%3D4487%26be0%3D4487%26pc0%3D4487%26ld0%3D4487%26t0%3D1563387855158%26csmtags%3Diss-on-time%7Caui%7Caui%3Aajax%26pty%3DBrightBuy%26spty%3DLandingPage%26pti%3Dbb%3Amens%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:4487", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://www.amazon.in/gp/uedata?ld&v=0.204437.0&id=CEBK9MEJXP1JY36NH606&sw=1360&sh=768&vw=767&vh=446&m=1&sc=CEBK9MEJXP1JY36NH606&ue=4&bb=331&ns=335&ne=498&be=520&fp=481&fcp=481&pc=5102&tc=-3183&na_=-3183&ul_=-1605&_ul=-1604&rd_=-1563387850671&_rd=-1563387850671&fe_=-3182&lk_=-3182&_lk=-3182&co_=-3182&_co=-3182&sc_=-1563387850671&rq_=-2649&rs_=-1995&_rs=-115&dl_=-1586&di_=576&de_=576&_de=577&_dc=5102&ld_=5102&_ld=-1563387850671&ntd=-1&ty=0&rc=0&hob=2&hoe=4&ld=5104&t=1563387855775&ctb=1&ec=2&ecf=0&pty=BrightBuy&spty=LandingPage&pti=bb:mens&tid=QTX88JN8XW6309TZ412A&aftb=1", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:CEBK9MEJXP1JY36NH606$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DCEBK9MEJXP1JY36NH606%26sw%3D1360%26sh%3D768%26vw%3D767%26vh%3D446%26m%3D1%26sc%3DCEBK9MEJXP1JY36NH606%26ue%3D4%26bb%3D331%26ns%3D335%26ne%3D498%26be%3D520%26fp%3D481%26fcp%3D481%26pc%3D5102%26tc%3D-3183%26na_%3D-3183%26ul_%3D-1605%26_ul%3D-1604%26rd_%3D-1563387850671%26_rd%3D-1563387850671%26fe_%3D-3182%26lk_%3D-3182%26_lk%3D-3182%26co_%3D-3182%26_co%3D-3182%26sc_%3D-1563387850671%26rq_%3D-2649%26rs_%3D-1995%26_rs%3D-115%26dl_%3D-1586%26di_%3D576%26de_%3D576%26_de%3D577%26_dc%3D5102%26ld_%3D5102%26_ld%3D-1563387850671%26ntd%3D-1%26ty%3D0%26rc%3D0%26hob%3D2%26hoe%3D4%26ld%3D5104%26t%3D1563387855775%26ctb%3D1%26ec%3D2%26ecf%3D0%26pty%3DBrightBuy%26spty%3DLandingPage%26pti%3Dbb%3Amens%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:5104", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/01/AUIClients/ClientSideMetricsAUIJavascript@jserrorsForester.10f2559e93ec589d92509318a7e2acbac74c343a._V2_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("stream_2", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("stream_3");
    ns_web_url ("stream_3",
        "URL=https://www.amazon.in/bbp/data/stream?cursor=eyJzIjo4OTg4NTczOTksIm8iOjUwLCJpayI6MywiaXMiOnsiNDE0MTAyMzU4IjowfSwiZXJjIjowfQ%3D%3D.v1&count=18&program=bb&category=%2Fmens&contextAsins=&ingress=&ingressAsins=&searchKeywords=&filters=%7B%22sizes%22%3A%5B%5D%7D&currencyCode=&bbWl=&_=1563387855965",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1563387856041.png",
        "Snapshot=webpage_1563387856306.png",
        INLINE_URLS,
            "URL=https://aax-eu.amazon-adsystem.com/s/iu3?d=amazon.in&slot=navFooter&a2=0101afceec47c6c6a16996aadaf40663cff63e043af14328b0b1712cd8256e0aeee5&old_oo=0&ts=1563387848089&s=Aay45gQtNHOkwteJ9HZRYIOVFhtozvO3GZnPOdgzYboz&cb=1563387848089", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE
    );

    ns_end_transaction("stream_3", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_8");
    ns_web_url ("index_8",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1563387856306.png",
        "Snapshot=webpage_1563387856596.png",
        BODY_BEGIN,
            "{"rid":"CEBK9MEJXP1JY36NH606","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"jserr-rw":{"m":"[CSM] Insecure content detected img : http://ecx.images-amazon.com/images/I/61lMXmz1BLL._SR258,310_.jpg","csm":"v5 ueLogError stack","logLevel":"WARN","attribution":"//*[@id='bb-s-item-0']/A/DIV[2]/DIV[2]/IMG","pageURL":"https://www.amazon.in/Low-Price-With-Free-Shipping/bbp?category=/mens&pf_rd_p=b139ea56-b471-44e1-96c4-9419c155d0ed&pf_rd_r=QTX88JN8XW6309TZ412A","s":["N/A"],"t":5523}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":581}}]}",
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
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1563387856596.png",
        "Snapshot=webpage_1563387856782.png",
        BODY_BEGIN,
            "{"rid":"CEBK9MEJXP1JY36NH606","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"jserr-rw":{"m":"[CSM] Insecure content detected img : http://ecx.images-amazon.com/images/I/61fnWYBtoVL._SR258,310_.jpg","csm":"v5 ueLogError stack","logLevel":"WARN","attribution":"//*[@id='bb-s-item-3']/A/DIV[2]/DIV[2]/IMG","pageURL":"https://www.amazon.in/Low-Price-With-Free-Shipping/bbp?category=/mens&pf_rd_p=b139ea56-b471-44e1-96c4-9419c155d0ed&pf_rd_r=QTX88JN8XW6309TZ412A","s":["N/A"],"t":5524}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":581}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://aax-eu.amazon-adsystem.com/s/v3/pr?exlist=rb_fw_imdb_fbca_kr_y_aold_pm_adb&fv=1.0&ex-pl-fbca=vb6JKmqdRAKA9qQqWmgyPw&a=cm&ep=G-bt0QVfmqkVP-j_o6PXsttFXA88KLlQvvX6Fa5f-Nvk68NpeF2mRcixDvq4mnP7", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE
    );

    ns_end_transaction("index_9", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("stream_4");
    ns_web_url ("stream_4",
        "URL=https://www.amazon.in/bbp/data/stream?cursor=eyJzIjo4OTg4NTczOTksIm8iOjY5LCJpayI6NCwiaXMiOnsiNDE0MTAyMzU4IjowfSwiZXJjIjowfQ%3D%3D.v1&count=15&program=bb&category=%2Fmens&contextAsins=&ingress=&ingressAsins=&searchKeywords=&filters=%7B%22sizes%22%3A%5B%5D%7D&currencyCode=&bbWl=&_=1563387856765",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1563387856782.png",
        "Snapshot=webpage_1563387857281.png",
        INLINE_URLS,
            "URL=https://token.rubiconproject.com/token?pid=2179&pt=n", "HEADER=Accept-Language:en-us", "COOKIE=khaos", "REDIRECT=YES", "LOCATION=https://s.amazon-adsystem.com/ecm3?id=I9sG44nCxj5Luw-Dw5tzOQ&ex=rubiconproject.com&status=ok", END_INLINE,
            "URL=https://ads.stickyadstv.com/user-matching?id=2545", "HEADER=Accept-Language:en-us", "COOKIE=UID;uid-bp-30833;sessionId", "REDIRECT=YES", "LOCATION=https://s.amazon-adsystem.com/ecm3?id=a73a8460713e33823f5ca334d931bd&ex=freewheel.tv", END_INLINE,
            "URL=https://www.imdb.com/ads/idsync?cid=79bc437ba&ex=imdb.com", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.facebook.com/fr/r.php?p=558293300959460&e=vb6JKmqdRAKA9qQqWmgyPw&r=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dfbca%26id%3Dvb6JKmqdRAKA9qQqWmgyPw&s=1563387856&h=UmFIR0M1YlhTUkZPTUkyWFJ975EG58DJzgKeiht9qIXKeeVB", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://usermatch.krxd.net/um/v2?partner=amzn", "HEADER=Accept-Language:en-us", "COOKIE=_kuid_", "REDIRECT=YES", "LOCATION=//s.amazon-adsystem.com/ecm3?ex=krux.com&id=Mz1lP9u-", END_INLINE,
            "URL=https://ads.yahoo.com/cms/v1?esig=1~6772d6d12bf5fd5c41ee5ef107d84db09124942a&nwid=10000936839&sigv=1", "HEADER=Accept-Language:en-us", "COOKIE=B", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=rightmedia.com&xid=kKGSA5DNTKgLHSF2vALeot0t", END_INLINE,
            "URL=https://pixel.advertising.com/ups/56613/sync?redir=true&_origin=1", "HEADER=Accept-Language:en-us", "COOKIE=APID", END_INLINE,
            "URL=https://image5.pubmatic.com/AdServer/usersync/usersync.html?predirect=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fid%3DPM_UID%26ex%3Dpubmatic.com&userIdMacro=PM_UID", "HEADER=Accept-Language:en-us", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?id=1B6FD067-8884-465A-AA8C-284907FB287E&ex=pubmatic.com", END_INLINE,
            "URL=https://dpm.demdex.net/ibs:dpid=139200&dpuuid=EEcGm8XjSoKzrfuqf-XkNA&redir=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dadobe.com%26id%3D%24%7BDD_UUID%7D", "HEADER=Accept-Language:en-us", "REDIRECT=YES", "LOCATION=https://dpm.demdex.net/demconf.jpg?et:ibs%7cdata:dpid=139200&dpuuid=EEcGm8XjSoKzrfuqf-XkNA&redir=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dadobe.com%26id%3D%24%7BDD_UUID%7D", END_INLINE
    );

    ns_end_transaction("stream_4", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_10");
    ns_web_url ("index_10",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1563387857281.png",
        "Snapshot=webpage_1563387857513.png",
        BODY_BEGIN,
            "{"rid":"CEBK9MEJXP1JY36NH606","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"csmcount":{"counter":"baselineCounter2","value":1,"t":4}},{"csmcount":{"counter":"nexusBaselineCounter","value":1,"t":4}},{"csmcount":{"counter":"aui:hiResDesktop","value":0,"t":91}},{"csmcount":{"counter":"aui:pagejs:pkgExecTime","value":7.445000000000164,"t":94}},{"csmcount":{"counter":"aui:resource_count","value":1,"t":311}},{"csmcount":{"counter":"aui:resource_count","value":2,"t":312}},{"csmcount":{"counter":"csm.cookieSize","value":590,"t":327}},{"csmcount":{"counter":"aui:resource_count","value":3,"t":500}},{"csmcount":{"counter":"totalImages","value":2,"t":521}},{"cel":{"k":"mrg","n":"page module","t":523}},{"cel":{"k":"pmd","o":"https://www.amazon.in","p":"/Low-Price-With-Free-Shipping/bbp","t":524}},{"cel":{"w":1360,"aw":1360,"h":768,"ah":738,"cd":0,"pd":0,"t":525,"k":"sci"}},{"cel":{"w":1000,"h":1080,"t":569,"k":"doi"}},{"cel":{"k":"mso","n":"page module","t":569}},{"cel":{"k":"mrg","n":"viewport module","t":569}},{"cel":{"w":784,"h":463,"x":0,"y":0,"t":570,"k":"vpi"}},{"cel":{"k":"mso","n":"viewport module","t":570}},{"cel":{"k":"mrg","n":"features module","t":571}},{"cel":{"k":"mso","n":"features module","t":571}},{"cel":{"k":"mrg","n":"mouse click module","t":571}},{"cel":{"k":"mso","n":"mouse click module","t":572}},{"cel":{"k":"mrg","n":"mouse move module","t":572}},{"cel":{"k":"mso","n":"mouse move module","t":572}},{"csmcount":{"counter":"aui:resource_count","value":4,"t":579}},{"csmcount":{"counter":"aui:preload_asks","value":1,"t":1538}},{"csmcount":{"counter":"aui:preload_asks","value":2,"t":1538}},{"csmcount":{"counter":"wl-storage-set","value":1,"t":1591}},{"csmcount":{"counter":"bb:stream:initial-item-count","value":5,"t":1594}},{"csmcount":{"counter":"postbackImageSize","value":284,"t":1608}},{"cel":{"w":1000,"h":1055,"t":1878,"k":"doi"}},{"csmcount":{"counter":"p13n:rhf:invalidPage","value":1,"t":2407}},{"navigation":{"quirks":0}},{"csmcount":{"counter":"nav-flyout-prime-attach-latency","value":1979,"t":2475}},{"csmcount":{"counter":"nav-flyout-primeTooltip-attach-latency","value":1986,"t":2482}},{"csmcount":{"counter":"nav-flyout-accountList-attach-latency","value":1988,"t":2484}},{"csmcount":{"counter":"nav-flyout-shopAll-attach-latency","value":1994,"t":2490}},{"csmcount":{"counter":"nav-flyout-transientFlyout-attach-latency","value":1996,"t":2492}},{"csmcount":{"counter":"iss-warmup:init","value":1,"t":2536}},{"csmcount":{"counter":"iss-warmup:ajax:init","value":1,"t":2539}},{"csmcount":{"counter":"iss-api-v2:init","value":1,"t":2549}},{"cel":{"k":"hrt","t":3525}},{"csmcount":{"counter":"bb-fetch-items-success","value":1,"t":4004}},{"csmcount":{"counter":"iss-warmup:ajax:success","value":1,"t":4487}},{"cel":{"w":1000,"h":1677,"t":4574,"k":"doi"}},{"csmcount":{"counter":"postbackImageSize","value":554,"t":5104}},{"csmcount":{"counter":"aui:aui-supported-rupee","value":1,"t":5268}},{"csmcount":{"counter":"NavJS:TimeUpTo:ATF:desktop","value":237,"t":5271}},{"csmcount":{"counter":"NavJS:TimeUpTo:CF:desktop","value":240,"t":5273}},{"csmcount":{"counter":"NavJS:TimeUpTo:PageLoaded:desktop","value":242,"t":5276}},{"csmcount":{"counter":"NavJS:TotalCallCount:PageLoaded:desktop","value":1116,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:network:D:desktop","value":1187,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:navFirstPaint:D:desktop","value":2330,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:NavStart:C:desktop","value":335,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:PreNav:D:desktop","value":3,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:PreNav:C:desktop","value":338,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:UpNav:D:desktop","value":0,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:UpNav:C:desktop","value":338,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:HamburgerMenuIcon:D:desktop","value":0,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:HamburgerMenuIcon:C:desktop","value":338,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:Logo:D:desktop","value":0,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:Logo:C:desktop","value":339,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:SWM:D:desktop","value":0,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:SWM:C:desktop","value":339,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:Search:D:desktop","value":28,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:Search:C:desktop","value":367,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:Tools:D:desktop","value":113,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:Tools:C:desktop","value":480,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:CrossShop:D:desktop","value":0,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:CrossShop:C:desktop","value":481,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:NavBar:D:desktop","value":143,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:NavBar:C:desktop","value":481,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:PostNav:D:desktop","value":14,"t":5276}},{"csmcount":{"counter":"Nav:CSM:Latency:PostNav:C:desktop","value":496,"t":5276}},{"csmcount":{"counter":"aui:sw:browser:register:success","value":1,"t":5281}},{"csmcount":{"counter":"bb-fetch-items-success","value":2,"t":5288}},{"cel":{"k":"efo","t":5346,"s":"default"}},{"cel":{"n":"Navigation-desktop-navbar","w":1000,"h":99,"d":0,"x":0,"y":0,"t":5373,"k":"ewi","cl":"nav-sprite-v1 celwidget nav-bluebeacon nav-packard-glow nav-a11y-t1"}},{"cel":{"n":"bb-stream-widget","w":1000,"h":2453,"d":0,"x":0,"y":135,"t":5373,"k":"ewi","cl":"a-section bb-stream-widget celwidget bb-p-bb"}},{"cel":{"n":"nav_sitewide_msg","w":400,"h":39,"d":0,"x":600,"y":9,"t":5373,"k":"ewi","cl":""}},{"cel":{"n":"nav_sitewide_msg","w":0,"h":0,"d":1,"x":0,"y":0,"t":5373,"k":"ewi","cl":""}},{"cel":{"w":1000,"h":2610,"t":5705,"k":"doi"}},{"csmcount":{"counter":"bb-fetch-items-success","value":3,"t":6048}},{"cel":{"n":"bb-stream-widget","w":1000,"h":2764,"d":0,"x":0,"y":135,"t":6114,"k":"ewi"}},{"cel":{"w":1000,"h":2921,"t":6218,"k":"doi"}},{"cel":{"k":"hrt","t":6526}},{"csm":{"k":"chk","f":1,"l":{"csmcount":58,"cel":26,"navigation":1,"jserr-rw":2,"csm":1},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":6306}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-na.ssl-images-amazon.com/images/I/210UtsRqV6L._RC%7C71+WX4uo+uL.css,11zh5zoa5AL.css,31cuIVKhckL.css,213skwsyD4L.css,31wWWC6YAvL.css,11G4HxMtMSL.css,31OvHRW+XiL.css,01XHMOHpK1L.css_.css?AUIClients/AmazonNavigationDesktopMetaAsset#desktop.in", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41fMrDoAFbL._RC%7C71GkUD1temL.js,61u3dpzHy+L.js,41W9ohA0e+L.js,11vrNkbdcvL.js,21SHd9g2LAL.js,311T8Q1zWKL.js,51+klsvwgqL.js,31IEOtBPX+L.js_.js?AUIClients/AmazonNavigationDesktopMetaAsset#desktop", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("index_10", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("stream_5");
    ns_web_url ("stream_5",
        "URL=https://www.amazon.in/bbp/data/stream?cursor=eyJzIjo4OTg4NTczOTksIm8iOjg0LCJpayI6NSwiaXMiOnsiNDE0MTAyMzU4IjowfSwiZXJjIjowfQ%3D%3D.v1&count=13&program=bb&category=%2Fmens&contextAsins=&ingress=&ingressAsins=&searchKeywords=&filters=%7B%22sizes%22%3A%5B%5D%7D&currencyCode=&bbWl=&_=1563387857467",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1563387857513.png",
        "Snapshot=webpage_1563387858818.png",
        INLINE_URLS,
            "URL=https://dpm.demdex.net/demconf.jpg?et:ibs%7cdata:dpid=139200&dpuuid=EEcGm8XjSoKzrfuqf-XkNA&redir=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dadobe.com%26id%3D%24%7BDD_UUID%7D", "HEADER=Accept-Language:en-us", "COOKIE=demdex", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=adobe.com&id=30011250938841173712140356056757696890", END_INLINE,
            "URL=https://s.amazon-adsystem.com/ecm3?id=a73a8460713e33823f5ca334d931bd&ex=freewheel.tv", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://s.amazon-adsystem.com/ecm3?ex=krux.com&id=Mz1lP9u-", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=fbca&id=vb6JKmqdRAKA9qQqWmgyPw", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?rcode=1&ex=imdb.com", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://ups.analytics.yahoo.com/ups/56613/sync?redir=true&_origin=1&apid=UP0e3a9be7-a8c0-11e9-8d3d-0aba2c9d9bfe", "HEADER=Accept-Language:en-us", "COOKIE=B", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?id=1B6FD067-8884-465A-AA8C-284907FB287E&ex=pubmatic.com", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE
    );

    ns_end_transaction("stream_5", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("stream_6");
    ns_web_url ("stream_6",
        "URL=https://www.amazon.in/bbp/data/stream?cursor=eyJzIjo4OTg4NTczOTksIm8iOjk4LCJpayI6NiwiaXMiOnsiNDE0MTAyMzU4IjowfSwiZXJjIjowfQ%3D%3D.v1&count=10&program=bb&category=%2Fmens&contextAsins=&ingress=&ingressAsins=&searchKeywords=&filters=%7B%22sizes%22%3A%5B%5D%7D&currencyCode=&bbWl=&_=1563387858215",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1563387858818.png",
        "Snapshot=webpage_1563387859576.png",
        INLINE_URLS,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=adobe.com&id=30011250938841173712140356056757696890", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://s.amazon-adsystem.com/ecm3?id=I9sG44nCxj5Luw-Dw5tzOQ&ex=rubiconproject.com&status=ok", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?id=93c93e0d5bda57ca322d25af41240e8f42491f55&ex=aoldisplay.com", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=rightmedia.com&xid=kKGSA5DNTKgLHSF2vALeot0t", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://www.amazon.in/service-worker.js", "HEADER=Service-Worker:script", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time", END_INLINE
    );

    ns_end_transaction("stream_6", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("stream_7");
    ns_web_url ("stream_7",
        "URL=https://www.amazon.in/bbp/data/stream?cursor=eyJzIjo4OTg4NTczOTksIm8iOjEwOCwiaWsiOjcsImlzIjp7IjQxNDEwMjM1OCI6MH0sImVyYyI6MH0%3D.v1&count=10&program=bb&category=%2Fmens&contextAsins=&ingress=&ingressAsins=&searchKeywords=&filters=%7B%22sizes%22%3A%5B%5D%7D&currencyCode=&bbWl=&_=1563387859517",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1563387859576.png",
        "Snapshot=webpage_1563387860140.png"
    );

    ns_end_transaction("stream_7", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("stream_8");
    ns_web_url ("stream_8",
        "URL=https://www.amazon.in/bbp/data/stream?cursor=eyJzIjo4OTg4NTczOTksIm8iOjExOCwiaWsiOjgsImlzIjp7IjQxNDEwMjM1OCI6MH0sImVyYyI6MH0%3D.v1&count=10&program=bb&category=%2Fmens&contextAsins=&ingress=&ingressAsins=&searchKeywords=&filters=%7B%22sizes%22%3A%5B%5D%7D&currencyCode=&bbWl=&_=1563387860116",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1563387860140.png",
        "Snapshot=webpage_1563387865019.png"
    );

    ns_end_transaction("stream_8", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_11");
    ns_web_url ("index_11",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1563387865019.png",
        "Snapshot=webpage_1563387866438.png",
        BODY_BEGIN,
            "{"rid":"CEBK9MEJXP1JY36NH606","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"csmcount":{"counter":"bb-fetch-items-success","value":4,"t":6747}},{"cel":{"n":"bb-stream-widget","w":1000,"h":3075,"d":0,"x":0,"y":135,"t":6847,"k":"ewi"}},{"csmcount":{"counter":"aui:preload_fulfilled","value":1,"t":6982}},{"cel":{"w":1000,"h":3232,"t":7275,"k":"doi"}},{"csmcount":{"counter":"bb-fetch-items-success","value":5,"t":7499}},{"cel":{"w":1000,"h":3854,"t":7833,"k":"doi"}},{"cel":{"n":"bb-stream-widget","w":1000,"h":3697,"d":0,"x":0,"y":135,"t":7832,"k":"ewi"}},{"csmcount":{"counter":"aui:preload_fulfilled","value":2,"t":8153}},{"csmcount":{"counter":"bb-fetch-items-success","value":6,"t":8821}},{"cel":{"w":1000,"h":4165,"t":8908,"k":"doi"}},{"cel":{"n":"bb-stream-widget","w":1000,"h":4008,"d":0,"x":0,"y":135,"t":8908,"k":"ewi"}},{"cel":{"w":1000,"h":4476,"t":9418,"k":"doi"}},{"csmcount":{"counter":"bb-fetch-items-success","value":7,"t":9424}},{"cel":{"n":"bb-stream-widget","w":1000,"h":4319,"d":0,"x":0,"y":135,"t":9478,"k":"ewi"}},{"csmcount":{"counter":"bb-fetch-items-success","value":8,"t":9974}},{"cel":{"k":"hrt","t":13279}},{"cel":{"k":"hrt","t":14280}},{"csm":{"k":"chk","f":2,"l":{"csmcount":65,"cel":36,"navigation":1,"jserr-rw":2,"csm":2},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":1366}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.amazon.in/gp/uedata?at&v=0.204437.0&id=CEBK9MEJXP1JY36NH606&ctb=1&m=1&sc=CEBK9MEJXP1JY36NH606&pc=15079&at=15079&t=1563387865750&csmtags=aui:sw:browser:register:supported|aui|aui:ajax|csm-feature-touch-enabled:false&pty=BrightBuy&spty=LandingPage&pti=bb:mens&tid=QTX88JN8XW6309TZ412A&aftb=1", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:CEBK9MEJXP1JY36NH606$uedata=s:%2Fgp%2Fuedata%3Fat%26v%3D0.204437.0%26id%3DCEBK9MEJXP1JY36NH606%26ctb%3D1%26m%3D1%26sc%3DCEBK9MEJXP1JY36NH606%26pc%3D15079%26at%3D15079%26t%3D1563387865750%26csmtags%3Daui%3Asw%3Abrowser%3Aregister%3Asupported%7Caui%7Caui%3Aajax%7Ccsm-feature-touch-enabled%3Afalse%26pty%3DBrightBuy%26spty%3DLandingPage%26pti%3Dbb%3Amens%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:15080", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://www.amazon.in/gp/uedata?at&v=0.204437.0&id=CEBK9MEJXP1JY36NH606&ctb=1&m=1&sc=CEBK9MEJXP1JY36NH606&pc=15092&at=15092&t=1563387865763&pty=BrightBuy&spty=LandingPage&pti=bb:mens&tid=QTX88JN8XW6309TZ412A&aftb=1&ui=2", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:CEBK9MEJXP1JY36NH606$uedata=s:%2Fgp%2Fuedata%3Fat%26v%3D0.204437.0%26id%3DCEBK9MEJXP1JY36NH606%26ctb%3D1%26m%3D1%26sc%3DCEBK9MEJXP1JY36NH606%26pc%3D15092%26at%3D15092%26t%3D1563387865763%26pty%3DBrightBuy%26spty%3DLandingPage%26pti%3Dbb%3Amens%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1%26ui%3D2:15093", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE
    );

    ns_end_transaction("index_11", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_12");
    ns_web_url ("index_12",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1563387866438.png",
        "Snapshot=webpage_1563387867487.png",
        BODY_BEGIN,
            "{"rid":"CEBK9MEJXP1JY36NH606","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"csmcount":{"counter":"postbackImageSize","value":280,"t":15080}},{"csmcount":{"counter":"postbackImageSize","value":198,"t":15093}},{"cel":{"k":"hrt","t":15533}},{"csm":{"k":"chk","f":3,"l":{"csmcount":67,"cel":37,"navigation":1,"jserr-rw":2,"csm":3},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":440}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-na.ssl-images-amazon.com/images/I/413h-P8lkZL._SR258,310_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/61J7ngfV9JL._SR258,310_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/71mkffVNHfL._SR258,310_.jpg", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("index_12", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("stream_9");
    ns_web_url ("stream_9",
        "URL=https://www.amazon.in/bbp/data/stream?cursor=eyJzIjo4OTg4NTczOTksIm8iOjEyOSwiaWsiOjksImlzIjp7IjQxNDEwMjM1OCI6MH0sImVyYyI6MH0%3D.v1&count=10&program=bb&category=%2Fmens&contextAsins=&ingress=&ingressAsins=&searchKeywords=&filters=%7B%22sizes%22%3A%5B%5D%7D&currencyCode=&bbWl=&_=1563387867385",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1563387867487.png",
        "Snapshot=webpage_1563387867513.png"
    );

    ns_end_transaction("stream_9", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_13");
    ns_web_url ("index_13",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1563387867513.png",
        "Snapshot=webpage_1563387867539.png",
        BODY_BEGIN,
            "{"rid":"CEBK9MEJXP1JY36NH606","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"mmm1","e":[{"x":80,"y":124,"t":15083},{"x":96,"y":122,"t":15238},{"x":220,"y":200,"t":15403},{"x":199,"y":249,"t":15501}],"min":75,"max":75,"avg":75}},{"cel":{"w":784,"h":463,"x":0,"y":425,"t":16688,"k":"vpi"}},{"cel":{"k":"hrt","t":16749}},{"csm":{"k":"chk","f":4,"l":{"csmcount":67,"cel":40,"navigation":1,"jserr-rw":2,"csm":4},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":530}}]}",
        BODY_END
    );

    ns_end_transaction("index_13", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("bb_d33a38_B07C3Y74SC_B0721XY");
    ns_web_url ("bb_d33a38_B07C3Y74SC_B0721XY",
        "URL=https://fls-eu.amazon.in/1/action-impressions/1/OP/brightbuy/asin/bb_d33a38:B07C3Y74SC,B0721XYQ98,B075XGLWTD?marketplaceId=A21TJRUUN4KGV&session=260-6898445-8949221&requestId=CEBK9MEJXP1JY36NH606&csm=1",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1563387867539.png",
        "Snapshot=webpage_1563387868142.png",
        INLINE_URLS,
            "URL=https://images-na.ssl-images-amazon.com/images/I/51MOlPUsICL._SR258,310_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/710jFGLW3nL._SR258,310_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/51NmxVCwUfL._SR258,310_.jpg", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("bb_d33a38_B07C3Y74SC_B0721XY", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("bb_d33a38_B01B9CCCIK_B07CN2B");
    ns_web_url ("bb_d33a38_B01B9CCCIK_B07CN2B",
        "URL=https://fls-eu.amazon.in/1/action-impressions/1/OP/brightbuy/asin/bb_d33a38:B01B9CCCIK,B07CN2BDS6,B07D1MYH9C?marketplaceId=A21TJRUUN4KGV&session=260-6898445-8949221&requestId=CEBK9MEJXP1JY36NH606&csm=1",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1563387868142.png",
        "Snapshot=webpage_1563387868465.png"
    );

    ns_end_transaction("bb_d33a38_B01B9CCCIK_B07CN2B", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("stream_10");
    ns_web_url ("stream_10",
        "URL=https://www.amazon.in/bbp/data/stream?cursor=eyJzIjo4OTg4NTczOTksIm8iOjEzOSwiaWsiOjEwLCJpcyI6eyI0MTQxMDIzNTgiOjAsIi03MDA5NjAxMjEiOjR9LCJlcmMiOjB9.v1&count=10&program=bb&category=%2Fmens&contextAsins=&ingress=&ingressAsins=&searchKeywords=&filters=%7B%22sizes%22%3A%5B%5D%7D&currencyCode=&bbWl=&_=1563387868355",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1563387868465.png",
        "Snapshot=webpage_1563387875324.png"
    );

    ns_end_transaction("stream_10", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_csm_nexusclient_p_4");
    ns_web_url ("com_amazon_csm_nexusclient_p_4",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.csm.nexusclient.prod",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "PreSnapshot=webpage_1563387875324.png",
        "Snapshot=webpage_1563387875368.png",
        BODY_BEGIN,
            "{"cs":{"dct":{"#0":"violationType","#1":"unresponsive-clicks","#2":"violationCount","#3":"totalScanned","#4":"producerId","#5":"csm","#6":"schemaId","#7":"csm.ArmoredCXGuardrailsViolation.3","#8":"timestamp","#9":"messageId","#10":"sessionId","#11":"260-6898445-8949221","#12":"requestId","#13":"CEBK9MEJXP1JY36NH606","#14":"obfuscatedMarketplaceId","#15":"A21TJRUUN4KGV"}},"events":[{"data":{"#0":"#1","#2":0,"#3":1,"#4":"#5","#6":"#7","#8":"2019-07-17T18:24:35.272Z","#9":"CEBK9MEJXP1JY36NH606-1563387875272-3866477365","#10":"#11","#12":"#13","#14":"#15"}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.amazon.in/Low-Price-With-Free-Shipping/bbp?category=/mens&pf_rd_p=b139ea56-b471-44e1-96c4-9419c155d0ed&pf_rd_r=QTX88JN8XW6309TZ412A", END_INLINE
    );

    ns_end_transaction("com_amazon_csm_nexusclient_p_4", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_14");
    ns_web_url ("index_14",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1563387875368.png",
        "Snapshot=webpage_1563387875623.png",
        BODY_BEGIN,
            "{"rid":"CEBK9MEJXP1JY36NH606","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"w":784,"h":463,"x":0,"y":575,"t":17167,"k":"vpi"}},{"csmcount":{"counter":"bb-fetch-items-success","value":9,"t":17678}},{"cel":{"n":"bb-stream-widget","w":1000,"h":4630,"d":0,"x":0,"y":135,"t":17770,"k":"ewi"}},{"cel":{"w":1000,"h":4787,"t":18024,"k":"doi"}},{"csmcount":{"counter":"bb-fetch-items-success","value":10,"t":18513}},{"cel":{"w":1000,"h":5098,"t":18532,"k":"doi"}},{"cel":{"k":"mmm1","e":[{"x":202,"y":255,"t":15660},{"x":374,"y":338,"t":16284},{"x":374,"y":335,"t":16551},{"x":368,"y":905,"t":17501},{"x":265,"y":777,"t":17807},{"x":254,"y":756,"t":18052},{"x":256,"y":754,"t":18550}],"min":75,"max":95,"avg":85}},{"cel":{"n":"bb-stream-widget","w":1000,"h":4941,"d":0,"x":0,"y":135,"t":18585,"k":"ewi"}},{"cel":{"w":784,"h":463,"x":0,"y":275,"t":19467,"k":"vpi"}},{"cel":{"w":784,"h":463,"x":0,"y":250,"t":19602,"k":"vpi"}},{"cel":{"k":"mmm1","e":[{"x":270,"y":739,"t":18584},{"x":308,"y":716,"t":18616},{"x":339,"y":711,"t":18649},{"x":372,"y":717,"t":18683},{"x":434,"y":778,"t":18850},{"x":453,"y":821,"t":18987},{"x":461,"y":497,"t":20037},{"x":561,"y":506,"t":20167},{"x":566,"y":506,"t":20313},{"x":393,"y":506,"t":20650},{"x":260,"y":474,"t":21081}],"min":75,"max":274,"avg":148}},{"cel":{"k":"mcm","w":1000,"h":5098,"t":23269,"x":316,"y":506,"p":"//*[@id='bb-s-item-0']/A/DIV[2]/DIV","n":"DIV","dt":17.46,"c":["bb-s-item-description-overlay"]}},{"csmcount":{"counter":"wl-storage-set","value":1,"t":24618}},{"csmcount":{"counter":"QF-N:SN:QN:TN","value":1,"t":24620}},{"csmcount":{"counter":"cel.PDM.TotalExecutions","value":43,"t":24621}},{"csmcount":{"counter":"cel.VPI.TotalExecutions","value":5,"t":24621}},{"csmcount":{"counter":"cel.VPI.TotalExecutionTime","value":1,"t":24621}},{"csmcount":{"counter":"cel.VPI.AverageExecutionTime","value":0.2,"t":24621}},{"csmcount":{"counter":"cel.widgets.batchesProcessed","value":20,"t":24622}},{"cel":{"k":"mmm1","e":[{"x":264,"y":476,"t":21866},{"x":349,"y":500,"t":21933},{"x":547,"y":525,"t":22216},{"x":361,"y":525,"t":22802},{"x":316,"y":506,"t":22966},{"x":274,"y":491,"t":24622}],"min":75,"max":405,"avg":212}},{"cel":{"k":"hrt","t":24623}},{"cel":{"k":"eod","t0":1563387850671,"t":24623}},{"csmcount":{"counter":"armored-cxguardrails.unresponsive-clicks.violations","value":0,"t":24623}},{"csmcount":{"counter":"armored-cxguardrails.unresponsive-clicks.violationRate","value":0,"t":24623}},{"csm":{"k":"chk","f":5,"l":{"csmcount":78,"cel":53,"navigation":1,"jserr-rw":2,"csm":5},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":2654}}]}",
        BODY_END
    );

    ns_end_transaction("index_14", NS_AUTO_STATUS);
    ns_page_think_time(0.207);

    //Page Auto splitted for 
    ns_start_transaction("ref_bbp_bb_d33a38_st_CCqh_w__2");
    ns_web_url ("ref_bbp_bb_d33a38_st_CCqh_w__2",
        "URL=https://www.amazon.in/Giant-Innovative-Stylish-Sunglasses-Aviator/dp/B07MPSZ7NK/ref=bbp_bb_d33a38_st_CCqh_w_0?psc=1&smid=ANTJPL45A9VCN",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time;csm-hit",
        "PreSnapshot=webpage_1563387875740.png",
        "Snapshot=webpage_1563387886684.png"
    );

    ns_end_transaction("ref_bbp_bb_d33a38_st_CCqh_w__2", NS_AUTO_STATUS);
    ns_page_think_time(91.5);

    ns_start_transaction("ref_bbp_bb_d33a38_st_CCqh_w_");
    ns_web_url ("ref_bbp_bb_d33a38_st_CCqh_w_",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1563387876024.png",
        "Snapshot=webpage_1563387876024.png",
        BODY_BEGIN,
            "{"rid":"CEBK9MEJXP1JY36NH606","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"csmcount":{"counter":"wl-storage-set","value":1,"t":25009}},{"csm":{"k":"chk","f":6,"l":{"csmcount":79,"cel":53,"navigation":1,"jserr-rw":2,"csm":6},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":338}}]}",
        BODY_END
    );

    ns_end_transaction("ref_bbp_bb_d33a38_st_CCqh_w_", NS_AUTO_STATUS);
    ns_page_think_time(0.344);

    //Page Auto splitted for 
    ns_start_transaction("AmazonUI");
    ns_web_url ("AmazonUI",
        "URL=https://images-eu.ssl-images-amazon.com/images/I/41gCbfiTdaL._RC%7C516fcOUE-HL.css,01evdoiemkL.css,01K+Ps1DeEL.css,31pdJv9iSzL.css,01tgK36lpGL.css,11UGC+GXOPL.css,21LK7jaicML.css,11L58Qpo0GL.css,21kyTi1FabL.css,01Xl9KigtzL.css,01YhS3Cs-hL.css,21GwE3cR-yL.css,019SHZnt8RL.css,01wAWQRgXzL.css,21bWcRJYNIL.css,11WgRxUdJRL.css,01dU8+SPlFL.css,11ocrgKoE-L.css,01SHjPML6tL.css,111-D2qRjiL.css,01QrWuRrZ-L.css,310Imb6LqFL.css,11Z1a0FxSIL.css,01cbS3UK11L.css,21mOLw+nYYL.css,01L8Y-JFEhL.css_.css?AUIClients/AmazonUI#not-trident",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387876351.png",
        "Snapshot=webpage_1563387882969.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210UtsRqV6L._RC%7C71+WX4uo+uL.css,11zh5zoa5AL.css,31cuIVKhckL.css,210-42NMyML.css,31wWWC6YAvL.css,11G4HxMtMSL.css,31OvHRW+XiL.css,01XHMOHpK1L.css_.css?AUIClients/AmazonNavigationDesktopMetaAsset#desktop.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ET%2BPmLUUL._RC%7C119njhJT7LL.css,41j52RQ1GmL.css,210LbiKyCML.css,31j6BOPjmzL.css,01ekIXTj5kL.css,11UGK4+GCNL.css,01KvCqKMBgL.css,21ckusqmu6L.css,01N8OOpUZPL.css,41M1QoNbYzL.css,21ByukFKG4L.css,01f0Gtj6a9L.css,31q5EHoIcZL.css,31JMnREMjZL.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,31MkQHV3gaL.css,01uHoBLsGfL.css,314gb2LkLML.css,01FtAuFRr3L.css,01QLwk8mu6L.css,014Z+MbaRaL.css,01RRH0yFa4L.css,01bkkYjxP7L.css,018mGORJ7tL.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,01mju9O84EL.css,01wL78bNyyL.css,01MLzcotflL.css,31SN3jkqdEL.css,21Wf53xZ5jL.css,01OhA16ND1L.css,01gtuC0zSuL.css,01qwEWNuxuL.css,21qxDmhZV3L.css,11XXguyjjZL.css,31WlxajeYrL.css,01clde05tlL.css,11Z7S+lK47L.css,01AT3O0C6cL.css_.css?AUIClients/SoftlinesDetailPageMetaAsset#desktop.in.113788-C.162525-T1.166419-T1.203659-T1.103061-T1.184424-T1.131900-C.94145-T1.144201-T1.126331-C.202285-C.215632-C.109378-T1.181561-T1", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/IMG17/Fashion/January/Ingresses/Subnav/Amazon-fashion-logo._CB534243057_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img17/Fashion/150-x-50._CB515077405_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/31YpfwQMXpL._SR38,50_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/31Kp8IFKHuL._SR38,50_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/31qPynSAYEL._SR38,50_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/31h12w1%2BVWL._SR38,50_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/31M4HMxxYWL._SR38,50_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/31ns5hCqZML._SR38,50_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41sSuts3x3L._SR38,50_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/x-locale/common/transparent-pixel._V192234675_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img15/rcx-events/test/HQP_VQL2._CB332164879_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/71X3u2rsesL._AC_UL160_SR142,160_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/61pSF703V2L._AC_UL160_SR160,160_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/61AX6WRwTpL._AC_UL160_SR160,160_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/61d-6W14cLL._AC_UL160_SR160,160_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/51anszXw7tL._AC_UL160_SR160,160_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/71vIPuGIW%2BL._AC_UL160_SR160,160_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31IrBg5y4HL._AC_SR160,200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41U0dIXhY0L._AC_SR160,200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31+gZQ0NsVL._AC_SR160,200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31FGQkBgh4L._AC_SR160,200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/413LcxfGMYL._AC_SR160,200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31K8FicAubL._AC_SR160,200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/4142XYrRXEL._AC_SR160,200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41OdkKfb8CL._AC_SR160,200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41qQs7kxtUL._AC_SR160,200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41egTBiq9IL._AC_SR160,200_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11hlEWdpPvL._RC%7C31uFjzN0JPL.css_.css?AUIClients/AskAuiAssets", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/ui/loadIndicators/loadIndicator-large._CB138348995_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/01LAv8I1AxL._RC%7C01MPykUsrCL.css,01LKsGfpclL.css,01PTkp9JOCL.css,01cdXa5nSoL.css_.css?AUIClients/DesktopMedleyFilteringMetaAsset", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/x-locale/common/grey-pixel.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUISpinner-spinner_gray_2x-305997434ebd5a72cd3aa598a019fcc6e1efe23a._V2_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/DeliveryStaticPackard-pin_desktop_1x-c944b6819f9e5642fdfd4ff3d1109d60d66d8f87._V2_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/71QsEZVEzHL._AC_UL70_SR70,70_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/71X3u2rsesL._AC_UL70_SR70,70_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/ape/sf/desktop/DAsf-1.50.d23453f._V461670253_.js?csm_attribution=APE-SafeFrame", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/personalization/ybh/loading-4x-gray._CB317974815_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/productAds/ad_feedback_icon_2Xsprite.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/410T8njFemL.js?AUIClients/AmazonPopoversAUIShim#in", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11rSsS-PDPL._RC%7C218rehcHYxL.js,11qRTlQry4L.js,21E2aIDj6DL.js,31eEXkvrJzL.js,01g2etah0NL.js,31Nb5hZQizL.js,31selSsN+1L.js,413u98XONQL.js,21u1PnPEsML.js,51+io-0L8GL.js,316nVZ1c+gL.js,01AdYLY9rHL.js,01IOMCsVFCL.js,11FOFYUJH9L.js,21CoP20PxBL.js,11dhZ6zkMNL.js,71LEtO5Vv5L.js,0185ITV0M6L.js,41Dds42UuNL.js,31UjTApGOPL.js,01bJ1qvdy1L.js,11K4T3M0xSL.js,11uqR2Ko2WL.js,01wYyhYnnFL.js,01LHJt5PiyL.js,31Ac-cQ+ZWL.js,01VgEfU-GFL.js,01HmcbFsnFL.js,01JzE3-DfLL.js,31sG+M5QN5L.js,11AVRVWTouL.js,11MQqFPEK+L.js,01I+ls4AqQL.js,01jqyAujTwL.js,31+0pACITzL.js,01OrQ5AXqsL.js,11gAPPElxuL.js,01OtvpwikQL.js,21J9Onr4hrL.js,217rNh01UsL.js,01S8y9NkxoL.js,01ZF+ovNflL.js,31Zl-BWE10L.js,51foFGmxtyL.js,01Z-Ip0c4YL.js,01qPwv8D5hL.js,01YivelYW5L.js,016QFWAAdML.js,01rg6Ce9FhL.js,010kX03xiRL.js,31NuG3-7xRL.js,011bX2ciJbL.js,21222B+rAzL.js,01gp3oqpb5L.js,31ItJPFyotL.js,11CIaAZhucL.js,01NGbPzAzBL.js,01NKGaW0w5L.js,01rEmdLLpxL.js,019W6kk1gjL.js,01hkseOXj6L.js,01lcH4zcTaL.js,01UkZ13lKKL.js_.js?AUIClients/SoftlinesDetailPageMetaAsset#desktop.language-en.in.167162-T1.162525-T1.166419-T1.186063-T1.195041-T1.203659-T1.151985-T1.183511-T1.103061-T1.184424-T1.186073-T2.200616-T1.173971-T1.131900-C.144201-T1.186725-T1.186696-T1.173115-T1.184758-T1.184759-T1.185101-T1.184757-T1.126331-C.156391-T1.202285-C.109378-T1.154031-T3.198898-C.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61kzhTBl2qL._RC%7C11-BZEJ8lnL.js,61GQ9IdK7HL.js,21Of0-9HPCL.js,012FVc3131L.js,119KAWlHU6L.js,51xL2QLv4YL.js,11AHlQhPRjL.js,016iHgpF74L.js,11aNYFFS5hL.js,116tgw9TSaL.js,211-p4GRUCL.js,01PoLXBDXWL.js,61BanVD+50L.js,01mi-J86cyL.js,11BOgvnnntL.js,31UWuPgtTtL.js,01rpauTep4L.js,01iyxuSGj4L.js,018kT7oogLL.js_.js?AUIClients/AmazonUI#189458-T1.192338-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/311%2BNUiljjL._RC%7C51a29A9dNjL.js_.js?AUIClients/AskAuiAssets#155248-T1.170181-T1.161288-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11omjJhwsqL.js?AUIClients/DetailPageLazyLoadLibAssets", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31lKiJrlhZL._RC%7C11tXe99yWBL.js,01-4MbsHMWL.js,11gFiYe7KbL.js,21s7OLLfWPL.js_.js?AUIClients/DesktopMedleyFilteringMetaAsset", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61BbXE-QENL.js?AUIClients/DetailPageImageBlockAssets", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41YUeDE3zHL._RC%7C71aLqNGbWsL.js,61u3dpzHy+L.js,417SPNjYS3L.js,11vrNkbdcvL.js,21SHd9g2LAL.js,31xNSJua7KL.js,51YeRc8UK1L.js,31R1liuRRmL.js_.js?AUIClients/AmazonNavigationDesktopMetaAsset#desktop", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/AUIClients/INRetargetingAsset-fe13df5df0c9265752c892a20feddfc5baaec718.secure.min._V2_.js?AUIClients/INRetargetingAsset", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/ape/sf/whitelisted/desktop/sf-1.50.d23453f._V461669522_.html", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("AmazonUI", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_csm_nexusclient_p_5");
    ns_web_url ("com_amazon_csm_nexusclient_p_5",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.csm.nexusclient.prod",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "PreSnapshot=webpage_1563387882969.png",
        "Snapshot=webpage_1563387883555.png",
        BODY_BEGIN,
            "{"cs":{"dct":{"#0":"requestId","#1":"0ZFJYD08MQTRDRQYVHA4","#2":"server","#3":"www.amazon.in","#4":"obfuscatedMarketplaceId","#5":"A21TJRUUN4KGV","#6":"producerId","#7":"csm","#8":"schemaId","#9":"csm.CSMBaselineEvent.4","#10":"timestamp","#11":"messageId","#12":"sessionId","#13":"260-6898445-8949221"}},"events":[{"data":{"#0":"#1","#2":"#3","#4":"#5","#6":"#7","#8":"#9","#10":"2019-07-17T18:24:40.639Z","#11":"0ZFJYD08MQTRDRQYVHA4-1563387880639-0928401094","#12":"#13"}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.amazon.in/service-worker.js", "HEADER=Service-Worker:script", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time;csm-hit", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/61lMXmz1BLL._UX385_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/getAdj?src=511&slot=ams-detail-right-v2&rid=0101e7a8f8afc6cf58ae0369144f109d9b6e9fd91bf37a4d2450c1a5215495288972&callback=aax_xsp_render_ad", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE
    );

    ns_end_transaction("com_amazon_csm_nexusclient_p_5", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("suggestions_3");
    ns_web_url ("suggestions_3",
        "URL=https://completion.amazon.co.uk/api/2017/suggestions?session-id=260-6898445-8949221&customer-id=&request-id=0ZFJYD08MQTRDRQYVHA4&page-type=Detail&lop=en_IN&site-variant=desktop&client-info=amazon-search-ui&mid=A21TJRUUN4KGV&alias=apparel&searchTerm=a&suggestion-type=KEYWORD&suggestion-type=WIDGET&_=1563387883420",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387883555.png",
        "Snapshot=webpage_1563387884084.png",
        INLINE_URLS,
            "URL=https://images-na.ssl-images-amazon.com/images/I/71X3u2rsesL._AC_UL320_SR284,320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/getAdj?src=511&slot=dp-ads-center-promo&rid=0101e7a8f8afc6cf58ae0369144f109d9b6e9fd91bf37a4d2450c1a5215495288972&callback=aax_xsp_render_ad", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/AmazonVideo/2019/SingleTitle/Astarisborn/499x492-GNO_without-disclaimer._CB442309568_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/AmazonBrands/Mamabear/Overall/Flyoutnew_500x450_1559280449._CB461564221_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/getAdj?src=511&slot=customer-reviews-top&rid=0101e7a8f8afc6cf58ae0369144f109d9b6e9fd91bf37a4d2450c1a5215495288972&callback=aax_xsp_render_ad", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/x/px/QhQaUW2922WSyzC4cjippG8AAAFsAS3TdgMAAAH_AYKEmJM/nii/%7B%22ni%22:true%7D", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/vap/video/airy2/prod/2.0.1460.0/js/airy.skin._CB513066589_.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/vap/video/airy2/prod/2.0.1460.0/css/beacon._CB513066589_.css", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/books/062019/AmishTripathi/FLY-OUT_PR_Less._CB443002928_.png", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("suggestions_3", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("iconFarm_sv_loader_html");
    ns_web_url ("iconFarm_sv_loader_html",
        "URL=https://www.amazon.in/gp/product/features/icon-farm/iconFarm-sv-loader.html",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time;csm-hit",
        "PreSnapshot=webpage_1563387884084.png",
        "Snapshot=webpage_1563387884107.png",
        BODY_BEGIN,
            "{"events":[{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20020073183707","adIndex":"0","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20015983404407","adIndex":"1","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20023311152506","adIndex":"2","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20020077097807","adIndex":"3","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20022518385005","adIndex":"4","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20015230536904","adIndex":"5","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20022518384305","adIndex":"6","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20012881383806","adIndex":"7","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20019470361207","adIndex":"8","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20015981247707","adIndex":"9","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"260351114673563","widgetName":"sp_detail2","adId":"20020073183707","adIndex":"0","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"260351114673563","widgetName":"sp_detail2","adId":"20015983404407","adIndex":"1","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"260351114673563","widgetName":"sp_detail2","adId":"20023311152506","adIndex":"2","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"260351114673563","widgetName":"sp_detail2","adId":"20015230536904","adIndex":"3","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"260351114673563","widgetName":"sp_detail2","adId":"20020077097807","adIndex":"4","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"260351114673563","widgetName":"sp_detail2","adId":"20022518385005","adIndex":"5","eventType":"2"}}]}",
        BODY_END
    );

    ns_end_transaction("iconFarm_sv_loader_html", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("ref_iconfarm_wid_gv");
    ns_web_url ("ref_iconfarm_wid_gv",
        "URL=https://www.amazon.in/gp/product/ajax/dpx-metrics-handler.html/ref=iconfarm_wid_gv?pageAsin=B07MPSZ7NK&pageType=Detail&subPageType=IconFarm&merchantId=ANTJPL45A9VCN",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time;csm-hit",
        "PreSnapshot=webpage_1563387884107.png",
        "Snapshot=webpage_1563387884178.png"
    );

    ns_end_transaction("ref_iconfarm_wid_gv", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("ref_iconfarm_pod_gv");
    ns_web_url ("ref_iconfarm_pod_gv",
        "URL=https://www.amazon.in/gp/product/ajax/dpx-metrics-handler.html/ref=iconfarm_pod_gv?pageAsin=B07MPSZ7NK&pageType=Detail&subPageType=IconFarm&merchantId=ANTJPL45A9VCN",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time;csm-hit",
        "PreSnapshot=webpage_1563387884178.png",
        "Snapshot=webpage_1563387886435.png",
        INLINE_URLS,
            "URL=https://images-na.ssl-images-amazon.com/images/G/31/A2I-Convert/mobile/IconFarm/icon-cod._CB474582901_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/31/A2I-Convert/mobile/IconFarm/icon-returns._CB474582901_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/31/A2I-Convert/mobile/IconFarm/icon-amazon-delivered._CB474582901_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://unagi-eu.amazon.com/1/events/com.amazon.eel.SponsoredProductsEventTracking.prod", "METHOD=OPTIONS", "HEADER=Origin:https://www.amazon.in", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:content-type,x-requested-with", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/x/px/QqL1cGRp7V3UM4dTA5R5rKkAAAFsAS3SzAMAAAH_AYijIBY/nii/%7B%22ni%22:true%7D", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41cRRCHAhBL._RC%7C51FYeABtyfL.css,01Q48KXvqCL.css,01K+Ps1DeEL.css,41tjoad5w2L.css,01tgK36lpGL.css,11InxsaTq4L.css,21eflE7vp9L.css,11IXeMfyywL.css,21ugv+CDRhL.css,01J8hfjebnL.css,01YhS3Cs-hL.css,21YU4aKBNKL.css,11rfwfQ8DkL.css,01T0I3IjgPL.css,21SS07CAVRL.css,11X17kCPZNL.css,01dU8+SPlFL.css,11ocrgKoE-L.css,11BzYu2x6pL.css,11Ttta26NOL.css,01YVY7jPXEL.css,31qfJ3LXk-L.css,113JXQXq+aL.css,01cbS3UK11L.css,21sF-vjkv-L.css,01XpF1+3ICL.css_.css?AUIClients/AmazonUI", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31IrBg5y4HL._AC_SR160,160_.jpg", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("ref_iconfarm_pod_gv", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("af_link_handler_html_4");
    ns_web_url ("af_link_handler_html_4",
        "URL=https://www.amazon.in/gp/aq-feedback/lazyLoad/handler/af-link-handler.html?pl=%7B%22adPlacementMetaData%22%3A%7B%22pageUrl%22%3A%22aHR0cHM6Ly93d3cuYW1hem9uLmluL1dFQi1JTkYvdmlld3MvbWVkbGV5UkFXUGFnZVZpZXcuanNwP3JlZiU1Rj1iYnAlNUZiYiU1RmQzM2EzOCU1RnN0JTVGQ0NxaCU1RnclNUYwJnBzYz0xJnNtaWQ9QU5USlBMNDVBOVZDTg%3D%3D%22%2C%22adElementId%22%3A%22ape_Detail_customer-reviews-top_Glance_placement%22%2C%22pageType%22%3A%22Detail%22%2C%22slotName%22%3A%22customer-reviews-top%22%7D%2C%22adCreativeMetaData%22%3A%7B%22adNetwork%22%3A%22cs%22%2C%22adProgramId%22%3A1024%2C%22adImpressionId%22%3A%22https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fe%2Fxsp%2Fimp%3Fb%3DQq9yOPqeUJhodw37gmP7sGIAAAFsAS3UZgMAAAH_AerdFRs%22%2C%22adCreativeId%22%3A-1924146692%2C%22adId%22%3A20020073183707%2C%22adCreativeDetails%22%3A%5B%7B%22asin%22%3A%22B00J58O0T0%22%2C%22title%22%3A%22Fastrack%20Aviator%20unisex%20Sunglasses%20(M062GR2Grey)%22%2C%22price%22%3A%22INR%22%2C%22merchantName%22%3A%22Cloudtail%20India%22%2C%22merchantCustomerID%22%3A%22AT95IG9ONZD7S%22%2C%22sku%22%3A%22B00J58O0T0%22%2C%22adId%22%3A%22A021170610LOUEAQ2ND76%22%2C%22campaignId%22%3A%22A036110434EAG7JAKVIEC%22%7D%5D%7D%7D",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1563387886435.png",
        "Snapshot=webpage_1563387885520.png"
    );

    ns_end_transaction("af_link_handler_html_4", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("ref_iconfarm_ad_gv");
    ns_web_url ("ref_iconfarm_ad_gv",
        "URL=https://www.amazon.in/gp/product/ajax/dpx-metrics-handler.html/ref=iconfarm_ad_gv?pageAsin=B07MPSZ7NK&pageType=Detail&subPageType=IconFarm&merchantId=ANTJPL45A9VCN",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1563387885520.png",
        "Snapshot=webpage_1563387885548.png"
    );

    ns_end_transaction("ref_iconfarm_ad_gv", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("ref_iconfarm_rp_gv");
    ns_web_url ("ref_iconfarm_rp_gv",
        "URL=https://www.amazon.in/gp/product/ajax/dpx-metrics-handler.html/ref=iconfarm_rp_gv?pageAsin=B07MPSZ7NK&pageType=Detail&subPageType=IconFarm&merchantId=ANTJPL45A9VCN",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time",
        "PreSnapshot=webpage_1563387885548.png",
        "Snapshot=webpage_1563387885762.png",
        INLINE_URLS,
            "URL=https://images-na.ssl-images-amazon.com/images/G/31/HomeCustomProduct/360_icon_73x73v2._CB498022779_SX38_SY50_CR,0,0,38,50_FMpng_RI_.png", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("ref_iconfarm_rp_gv", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_15");
    ns_web_url ("index_15",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time",
        "PreSnapshot=webpage_1563387885762.png",
        "Snapshot=webpage_1563387885845.png",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/index_15_url_0_1_1563388013580.body",
        BODY_END
    );

    ns_end_transaction("index_15", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_eel_SponsoredProd");
    ns_web_url ("com_amazon_eel_SponsoredProd",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.eel.SponsoredProductsEventTracking.prod",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:application/json",
        "PreSnapshot=webpage_1563387885845.png",
        "Snapshot=webpage_1563387886114.png",
        BODY_BEGIN,
            "{"events":[{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20020073183707","adIndex":"0","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20015983404407","adIndex":"1","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20023311152506","adIndex":"2","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20020077097807","adIndex":"3","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20022518385005","adIndex":"4","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20015230536904","adIndex":"5","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20022518384305","adIndex":"6","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20012881383806","adIndex":"7","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20019470361207","adIndex":"8","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"4458542140467160","widgetName":"sp_detail","adId":"20015981247707","adIndex":"9","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"260351114673563","widgetName":"sp_detail2","adId":"20020073183707","adIndex":"0","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"260351114673563","widgetName":"sp_detail2","adId":"20015983404407","adIndex":"1","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"260351114673563","widgetName":"sp_detail2","adId":"20023311152506","adIndex":"2","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"260351114673563","widgetName":"sp_detail2","adId":"20015230536904","adIndex":"3","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"260351114673563","widgetName":"sp_detail2","adId":"20020077097807","adIndex":"4","eventType":"2"}},{"data":{"qualifier":"1563387876","id":"260351114673563","widgetName":"sp_detail2","adId":"20022518385005","adIndex":"5","eventType":"2"}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/AmazonUIIcon@legacyImages-sprite_1x-6c462f5dc3bc3e40d0788502814fa7043355712a._V2_.png", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("com_amazon_eel_SponsoredProd", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_eel_SponsoredProd_2");
    ns_web_url ("com_amazon_eel_SponsoredProd_2",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.eel.SponsoredProductsEventTracking.prod",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:application/json",
        "PreSnapshot=webpage_1563387886114.png",
        "Snapshot=webpage_1563387886183.png",
        BODY_BEGIN,
            "{"events":[{"data":{"qualifier":"1563387876","id":"260351114673563","widgetName":"sp_detail2","adId":"20022518384305","adIndex":"6","eventType":"2"}}]}",
        BODY_END
    );

    ns_end_transaction("com_amazon_eel_SponsoredProd_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_eel_SponsoredProd_3");
    ns_web_url ("com_amazon_eel_SponsoredProd_3",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.eel.SponsoredProductsEventTracking.prod",
        "METHOD=POST",
        "PreSnapshot=webpage_1563387886183.png",
        "Snapshot=webpage_1563387887194.png",
        INLINE_URLS,
            "URL=https://www.amazon.in/gp/uedata?ld&v=0.204437.0&id=0ZFJYD08MQTRDRQYVHA4&sw=1360&sh=768&vw=767&vh=446&m=1&sc=0ZFJYD08MQTRDRQYVHA4&ue=25&bb=1929&ns=1932&ne=1947&x1=1947&af=2251&cf=4257&be=4281&fp=2458&fcp=2458&pc=9981&tc=-609&na_=-609&ul_=-33&_ul=-32&rd_=-1563387876290&_rd=-1563387876290&fe_=-609&lk_=-609&_lk=-609&co_=-609&_co=-609&sc_=-1563387876290&rq_=-480&rs_=-93&_rs=2284&dl_=-11&di_=4351&de_=4351&_de=4352&_dc=9980&ld_=9980&_ld=-1563387876290&ntd=0&ty=0&rc=0&hob=23&hoe=25&ld=9982&t=1563387886272&ctb=1&rt=cf:43-0-5-31-3-7-0_af:21-0-3-13-3-7-1_ld:91-11-6-52-7-17-1&csmtags=aui|aui:aui_build_date:3.19.4-2019-06-27|navbar|desktop-html-atf-marker|SoftlinesDetailPageMetaAssetNotCached|auiNotCached|fls-eu|adblk_no|ABPStatusNotEnabled:Detail:ams-detail-right-v2:desktop|ABPStatusNotEnabled:Detail:dp-ads-center-promo:Desktop|ABPStatusNotEnabled:Detail:customer-reviews-top:Glance|iss-on-time|navigate|noadrender:Detail:ams-detail-right-v2:desktop|noadrender:Detail:dp-ads-center-promo:Desktop|noadrender:3fa6ae61-e017-444f-9a6f-e9b39addf953|adrender:Detail:customer-reviews-top:Glance|adrender:c9a09184-bad8-4206-80a7-f9db64ba2bb1|adrender:Detail:customer-reviews-top:Glance:creativeid:-1924146692|adrender:c9a09184-bad8-4206-80a7-f9db64ba2bb1:creativeid:-1924146692|adrender:Detail:customer-reviews-top:Glance:programid:1024|adrender:c9a09184-bad8-4206-80a7-f9db64ba2bb1:programid:1024|aui:ajax|DPCIFBuyable|DPCIFLongPoleimageblock&viz=visible:24&pty=Detail&spty=Glance&pti=B07MPSZ7NK&tid=QTX88JN8XW6309TZ412A&aftb=1", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;csm-hit;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:0ZFJYD08MQTRDRQYVHA4$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3D0ZFJYD08MQTRDRQYVHA4%26sw%3D1360%26sh%3D768%26vw%3D767%26vh%3D446%26m%3D1%26sc%3D0ZFJYD08MQTRDRQYVHA4%26ue%3D25%26bb%3D1929%26ns%3D1932%26ne%3D1947%26x1%3D1947%26af%3D2251%26cf%3D4257%26be%3D4281%26fp%3D2458%26fcp%3D2458%26pc%3D9981%26tc%3D-609%26na_%3D-609%26ul_%3D-33%26_ul%3D-32%26rd_%3D-1563387876290%26_rd%3D-1563387876290%26fe_%3D-609%26lk_%3D-609%26_lk%3D-609%26co_%3D-609%26_co%3D-609%26sc_%3D-1563387876290%26rq_%3D-480%26rs_%3D-93%26_rs%3D2284%26dl_%3D-11%26di_%3D4351%26de_%3D4351%26_de%3D4352%26_dc%3D9980%26ld_%3D9980%26_ld%3D-1563387876290%26ntd%3D0%26ty%3D0%26rc%3D0%26hob%3D23%26hoe%3D25%26ld%3D9982%26t%3D1563387886272%26ctb%3D1%26rt%3Dcf%3A43-0-5-31-3-7-0_af%3A21-0-3-13-3-7-1_ld%3A91-11-6-52-7-17-1%26csmtags%3Daui%7Caui%3Aaui_build_date%3A3.19.4-2019-06-27%7Cnavbar%7Cdesktop-html-atf-marker%7CSoftlinesDetailPageMetaAssetNotCached%7CauiNotCached%7Cfls-eu%7Cadblk_no%7CABPStatusNotEnabled%3ADetail%3Aams-detail-right-v2%3Adesktop%7CABPStatusNotEnabled%3ADetail%3Adp-ads-center-promo%3ADesktop%7CABPStatusNotEnabled%3ADetail%3Acustomer-reviews-top%3AGlance%7Ciss-on-time%7Cnavigate%7Cnoadrender%3ADetail%3Aams-detail-right-v2%3Adesktop%7Cnoadrender%3ADetail%3Adp-ads-center-promo%3ADesktop%7Cnoadrender%3A3fa6ae61-e017-444f-9a6f-e9b39addf953%7Cadrender%3ADetail%3Acustomer-reviews-top%3AGlance%7Cadrender%3Ac9a09184-bad8-4206-80a7-f9db64ba2bb1%7Cadrender%3ADetail%3Acustomer-reviews-top%3AGlance%3Acreativeid%3A-1924146692%7Cadrender%3Ac9a09184-bad8-4206-80a7-f9db64ba2bb1%3Acreativeid%3A-1924146692%7Cadrender%3ADetail%3Acustomer-reviews-top%3AGlance%3Aprogramid%3A1024%7Cadrender%3Ac9a09184-bad8-4206-80a7-f9db64ba2bb1%3Aprogramid%3A1024%7Caui%3Aajax%7CDPCIFBuyable%7CDPCIFLongPoleimageblock%26viz%3Dvisible%3A24%26pty%3DDetail%26spty%3DGlance%26pti%3DB07MPSZ7NK%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:9986", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:0ZFJYD08MQTRDRQYVHA4$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3D0ZFJYD08MQTRDRQYVHA4%26sc0%3DclickToCI%26bb0%3D1651%26cf0%3D9265%26pc0%3D9267%26ld0%3D9267%26t0%3D1563387885557%26sc1%3Dportal-bb%26pc1%3D1%26ld1%3D2%26t1%3D1563387878221%26sc2%3Diss-init-pc%26bb2%3D1945%26cf2%3D7120%26be2%3D7120%26pc2%3D7121%26ld2%3D7121%26t2%3D1563387883411%26sc3%3DudpV3atfwait%26bb3%3D1947%26be3%3D1948%26pc3%3D1948%26ld3%3D1948%26t3%3D1563387878238%26sc4%3Dadplacements%3ADetail%3Acustomer-reviews-top%3AGlance%26bb4%3D4204%26af4%3D6253%26cf4%3D6844%26be4%3D7424%26pc4%3D9738%26ld4%3D9722%26t4%3D1563387886012%26sc5%3Dadplacements%3Ac9a09184-bad8-4206-80a7-f9db64ba2bb1%26bb5%3D4204%26af5%3D6253%26cf5%3D6844%26be5%3D7424%26pc5%3D9738%26ld5%3D9722%26t5%3D1563387886012%26sc6%3DcsmCELLSframework%26bb6%3D4284%26pc6%3D4284%26ld6%3D4284%26t6%3D1563387880574%26sc7%3DcsmCELLSpdm%26bb7%3D4285%26pc7%3D4345%26ld7%3D4345%26t7%3D1563387880635%26sc8%3DcsmCELLSvpm%26bb8%3D4346%26pc8%3D4346%26ld8%3D4346%26t8%3D1563387880636%26sc9%3DcsmCELLSfem%26bb9%3D4347%26pc9%3D4347%26ld9%3D4347%26t9%3D1563387880637%26sc10%3Due_sushi_v1%26bb10%3D4349%26pc10%3D4350%26ld10%3D4350%26t10%3D1563387880640%26sc11%3Diss-warmup%3Asuccess%26bb11%3D7129%26cf11%3D8080%26be11%3D8080%26pc11%3D8080%26ld11%3D8080%26t11%3D1563387884370%26sc12%3DdpATCTTI%26bb12%3D7468%26cf12%3D2005%26pc12%3D9267%26ld12%3D9267%26t12%3D1563387885557%26ctb%3D1:9987", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;visitCount;session-token;lc-acbin;session-id-time", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/61lMXmz1BLL._UL1500_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/imp?b=Qq9yOPqeUJhodw37gmP7sGIAAAFsAS3UZgMAAAH_AerdFRs", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/01/AUIClients/ClientSideMetricsAUIJavascript@jserrorsForester.10f2559e93ec589d92509318a7e2acbac74c343a._V2_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/productAds/ad_feedback_icon_1Xsprite._CB319582757_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/984527532/?value=0&label=r_58CJXm0gIQw9iz3gM&guid=ON&script=0&data=ecomm_pagetype%3DProductDetail%3Becomm_prodid%3DB07MPSZ7NK%3Becomm_price%3D%3Becomm_pcat%3DClothing%20%26%20Accessories%3Becomm_pname%3DGiant%20Innovative%20-%20Stylish%20Cool%20and%20Trendy%20Sunglasses%20for%20men%2C%20women%20(Aviator%20-%20Black%20Lens%2FBlack%20Frame)%3Bsearchterm%3D%3BCURRENT_TIME%3D2019-07-17T18%3A24%3A46.798Z%3BSignedIn%3DN", "HEADER=Accept-Language:en-us", "COOKIE=IDE", END_INLINE
    );

    ns_end_transaction("com_amazon_eel_SponsoredProd_3", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("get_image_gallery_assets");
    ns_web_url ("get_image_gallery_assets",
        "URL=https://www.amazon.in/gp/customer-reviews/aj/private/reviewsGallery/get-image-gallery-assets",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;csm-hit;visitCount;session-id-time",
        "PreSnapshot=webpage_1563387887194.png",
        "Snapshot=webpage_1563387888161.png",
        INLINE_URLS,
            "URL=https://cloudfront-labs.amazonaws.com/x.png", "HEADER=Accept-Language:en-us", "REDIRECT=YES", "LOCATION=https://a38bbff7eaee5cd9c23b0cab830cddf77.profile.lhr52.cloudfront.net/test.png", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/iu3?d=amazon.in&slot=navFooter&a2=0101afceec47c6c6a16996aadaf40663cff63e043af14328b0b1712cd8256e0aeee5&old_oo=0&ts=1563387875907&s=ARxzdQqBRG2F2qHT0dHGSiV36Jj7I8G-M-2mLeXvekGr&cb=1563387875907", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://www.amazon.in/gp/uedata?at&v=0.204437.0&id=0ZFJYD08MQTRDRQYVHA4&ctb=1&m=1&sc=0ZFJYD08MQTRDRQYVHA4&pc=11054&at=11054&t=1563387887344&csmtags=aui|aui:ajax|aui:sw:browser:register:supported|csm-feature-touch-enabled:false&pty=Detail&spty=Glance&pti=B07MPSZ7NK&tid=QTX88JN8XW6309TZ412A&aftb=1", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;csm-hit;visitCount;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:0ZFJYD08MQTRDRQYVHA4$uedata=s:%2Fgp%2Fuedata%3Fat%26v%3D0.204437.0%26id%3D0ZFJYD08MQTRDRQYVHA4%26ctb%3D1%26m%3D1%26sc%3D0ZFJYD08MQTRDRQYVHA4%26pc%3D11054%26at%3D11054%26t%3D1563387887344%26csmtags%3Daui%7Caui%3Aajax%7Caui%3Asw%3Abrowser%3Aregister%3Asupported%7Ccsm-feature-touch-enabled%3Afalse%26pty%3DDetail%26spty%3DGlance%26pti%3DB07MPSZ7NK%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:11054", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/31/apparel/rcxgs/tile._CB483369979_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/v3/pr?exlist=y_adb_aold&fv=1.0&a=cm&ep=G-bt0QVfmqkVP-j_o6PXsttFXA88KLlQvvX6Fa5f-Nvk68NpeF2mRcixDvq4mnP7", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/984527532/?value=0&label=r_58CJXm0gIQw9iz3gM&guid=ON&script=0&data=ecomm_pagetype%3DProductDetail%3Becomm_prodid%3DB07MPSZ7NK%3Becomm_price%3D%3Becomm_pcat%3DClothing%20%26%20Accessories%3Becomm_pname%3DGiant%20Innovative%20-%20Stylish%20Cool%20and%20Trendy%20Sunglasses%20for%20men%2C%20women%20(Aviator%20-%20Black%20Lens%2FBlack%20Frame)%3Bsearchterm%3D%3BCURRENT_TIME%3D2019-07-17T18%3A24%3A46.798Z%3BSignedIn%3DN&cdct=2&is_vtc=1&random=2014123291", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/reviews-legacy/review-lightbox-combined._CB279607588_.css", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/reviews-legacy/review-lightbox-combined._CB279607633_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("get_image_gallery_assets", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("gv");
    ns_web_url ("gv",
        "URL=https://www.amazon.in/gp/cerberus/gv",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:no-cache",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;csm-hit;visitCount;session-id-time",
        "PreSnapshot=webpage_1563387888161.png",
        "Snapshot=webpage_1563387888309.png",
        BODY_BEGIN,
            "payload=%7B%22producerId%22%3A%22detail-page%22%2C%22asin%22%3A%22B07MPSZ7NK%22%2C%22asin_price%22%3A%22189.00%22%2C%22asin_shipping_price%22%3A%220.0%22%2C%22asin_currency_code%22%3A%22INR%22%2C%22device_type%22%3A%22WEB%22%2C%22display_code%22%3A%22Asin+is+not+eligible+because+it+is+price+competitive%22%2C%22substitute_count%22%3A%22-1%22%7D",
        BODY_END,
        INLINE_URLS,
            "URL=https://ads.yahoo.com/cms/v1?esig=1~6772d6d12bf5fd5c41ee5ef107d84db09124942a&nwid=10000936839&sigv=1", "HEADER=Accept-Language:en-us", "COOKIE=B;APID;APIDTS", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=rightmedia.com&xid=kKGSA5DNTKgLHSF2vALeot0t", END_INLINE,
            "URL=https://dpm.demdex.net/ibs:dpid=139200&dpuuid=EEcGm8XjSoKzrfuqf-XkNA&redir=https%3A%2F%2Faax-eu.amazon-adsystem.com%2Fs%2Fecm3%3Fex%3Dadobe.com%26id%3D%24%7BDD_UUID%7D", "HEADER=Accept-Language:en-us", "COOKIE=demdex;dpm", "REDIRECT=YES", "LOCATION=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=adobe.com&id=30011250938841173712140356056757696890", END_INLINE,
            "URL=https://pixel.advertising.com/ups/56613/sync?redir=true&_origin=1", "HEADER=Accept-Language:en-us", "COOKIE=APID", END_INLINE
    );

    ns_end_transaction("gv", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_16");
    ns_web_url ("index_16",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time",
        "PreSnapshot=webpage_1563387888309.png",
        "Snapshot=webpage_1563387889092.png",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/index_16_url_0_1_1563388015277.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/buy-buttons/review-1-click-order._CB138348768_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/buttons/continue-shopping._CB138360611_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/buy-buttons/thank-you-elbow._CB138348794_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/communities/social/snwicons_v2._CB402380004_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/checkout/assets/carrot._CB138350193_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/checkout/thank-you-page/assets/yellow-rounded-corner-sprite._CB166613107_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/984527532/?value=0&label=r_58CJXm0gIQw9iz3gM&guid=ON&script=0&data=ecomm_pagetype%3DProductDetail%3Becomm_prodid%3DB07MPSZ7NK%3Becomm_price%3D%3Becomm_pcat%3DClothing%20%26%20Accessories%3Becomm_pname%3DGiant%20Innovative%20-%20Stylish%20Cool%20and%20Trendy%20Sunglasses%20for%20men%2C%20women%20(Aviator%20-%20Black%20Lens%2FBlack%20Frame)%3Bsearchterm%3D%3BCURRENT_TIME%3D2019-07-17T18%3A24%3A46.798Z%3BSignedIn%3DN&cdct=2&is_vtc=1&random=2014123291&ipr=y", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/21E2aIDj6DL._RC%7C31eEXkvrJzL.js,01g2etah0NL.js,31Nb5hZQizL.js,31selSsN+1L.js,413u98XONQL.js,01Ng0K110HL.js,21JtT0mJXEL.js,31vMFUg376L.js,11dhZ6zkMNL.js,71LEtO5Vv5L.js,0185ITV0M6L.js,41Dds42UuNL.js,31UjTApGOPL.js,01bJ1qvdy1L.js,11K4T3M0xSL.js,11uqR2Ko2WL.js,01wYyhYnnFL.js,01LHJt5PiyL.js,31Ac-cQ+ZWL.js,01VgEfU-GFL.js,01JzE3-DfLL.js,11MQqFPEK+L.js,01jqyAujTwL.js,31+0pACITzL.js,01OtvpwikQL.js,21J9Onr4hrL.js,11nOzlnr6+L.js,31BBQa2c9BL.js,31Gy8EGyyiL.js,11p0nLfNCcL.js,11iHZuQapKL.js,217rNh01UsL.js,218rehcHYxL.js,11qRTlQry4L.js,51foFGmxtyL.js,01qPwv8D5hL.js,01rg6Ce9FhL.js,016QFWAAdML.js,31NuG3-7xRL.js,019W6kk1gjL.js,01hkseOXj6L.js_.js?AUIClients/MediaDetailPageMetaAsset#desktop.language-en.in.167162-T1.186063-T1.195041-T1.151985-T1.183511-T1.103061-T1.186073-T2.200616-T1.173971-T1.131900-C.156391-T1.109378-T1.154031-T3.198898-C", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210LbiKyCML._RC%7C31j6BOPjmzL.css,01ekIXTj5kL.css,01KvCqKMBgL.css,21ckusqmu6L.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,31q5EHoIcZL.css,41hIrT0+wbL.css,01FlII1u-ZL.css,219oCRGl-sL.css,212hS9k0-iL.css,31MkQHV3gaL.css,314gb2LkLML.css,31dTK1hHb6L.css,014Z+MbaRaL.css,01RRH0yFa4L.css,01bkkYjxP7L.css,31Wg0ai095L.css,01f31VNCowL.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,31Fo-RK+JML.css,01CslPlvtoL.css,01mju9O84EL.css,11Z7S+lK47L.css,21Wf53xZ5jL.css,01OhA16ND1L.css,11xmZPMxSJL.css,41Uz4bMH9yL.css,01TZ9fpDSSL.css,11ikU6MX1JL.css,01qwEWNuxuL.css,21qxDmhZV3L.css,11XXguyjjZL.css,31WlxajeYrL.css,01clde05tlL.css_.css?AUIClients/HardlinesDetailPageMetaAssetVariable#desktop.in.not-trident.122952-T1.113788-C.203659-T1.103061-T1.184424-T1.150150-T1.144201-T1.126331-C.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31SN3jkqdEL.css?AUIClients/DetailPageSnSAssets#215632-C.109378-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/218rehcHYxL._RC%7C11qRTlQry4L.js,21E2aIDj6DL.js,31eEXkvrJzL.js,01g2etah0NL.js,31selSsN+1L.js,413u98XONQL.js,0185ITV0M6L.js,41Dds42UuNL.js,11FOFYUJH9L.js,21CoP20PxBL.js,71LEtO5Vv5L.js,41COmOfIQhL.js,11nOzlnr6+L.js,31BBQa2c9BL.js,31Gy8EGyyiL.js,31UjTApGOPL.js,31Ac-cQ+ZWL.js,21NDIsf0a1L.js,11AVRVWTouL.js,11MQqFPEK+L.js,01jqyAujTwL.js,31+0pACITzL.js,613fAh2h0OL.js,11jf5oS-4FL.js,01RQtSMdG+L.js,01OtvpwikQL.js,21J9Onr4hrL.js,21m9o6VHhOL.js,21bSviTzsOL.js,11mvqFXObSL.js,217rNh01UsL.js,31W9fAH+1aL.js,01lcH4zcTaL.js,01qPwv8D5hL.js,01YivelYW5L.js,01rg6Ce9FhL.js,016QFWAAdML.js,41Eko5EJ6TL.js,31apIfAEBaL.js,31NuG3-7xRL.js,11div+n5b+L.js,01IQoRXvpnL.js,011bX2ciJbL.js,21222B+rAzL.js,01gp3oqpb5L.js,31ItJPFyotL.js,11CIaAZhucL.js,01NGbPzAzBL.js,011kwg0OTQL.js,01jLpHmb92L.js,014kCoIHgIL.js,019W6kk1gjL.js,01hkseOXj6L.js,0189flJt-AL.js,01lPKWAwBBL.js,41ZKpsOG2XL.js,41WTMwhRXFL.js,61m-slBs3VL.js,013yVF4PBmL.js_.js?AUIClients/HardlinesDetailPageMetaAssetVariable_ACCESSORIES_AND_FAMILY_STRIPE#desktop.language-en.in.167162-T1.203659-T1.183511-T1.103061-T1.184424-T1.186073-T2.150150-T1.200616-T1.173971-T1.215516-T1.144201-T1.186725-T1.186696-T1.173115-T1.184758-T1.184759-T1.185101-T1.184757-T1.126331-C.109378-T1.154031-T3.198898-C.213433-T1.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61kzhTBl2qL._RC%7C11-BZEJ8lnL.js,61GQ9IdK7HL.js,21Of0-9HPCL.js,012FVc3131L.js,119KAWlHU6L.js,51xL2QLv4YL.js,11AHlQhPRjL.js,016iHgpF74L.js,11aNYFFS5hL.js,116tgw9TSaL.js,211-p4GRUCL.js,01PoLXBDXWL.js,61BanVD+50L.js,01mi-J86cyL.js,11BOgvnnntL.js,31UWuPgtTtL.js,01rpauTep4L.js,01iyxuSGj4L.js,01OWoGffjKL.js_.js?AUIClients/AmazonUI#189458-T1.192338-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=adobe.com&id=30011250938841173712140356056757696890", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE
    );

    ns_end_transaction("index_16", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("get_application_resources_fo");
    ns_web_url ("get_application_resources_fo",
        "URL=https://www.amazon.in/gp/customer-reviews/aj/private/reviewsGallery/get-application-resources-for-reviews-gallery",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;csm-hit;visitCount;session-id-time",
        "PreSnapshot=webpage_1563387889092.png",
        "Snapshot=webpage_1563387896199.png",
        BODY_BEGIN,
            "noCache=1563387889035",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/nav2/images/gui/searchSprite._CB272921266_.png", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://ups.analytics.yahoo.com/ups/56613/sync?redir=true&_origin=1&apid=UP0e3a9be7-a8c0-11e9-8d3d-0aba2c9d9bfe", "HEADER=Accept-Language:en-us", "COOKIE=B;IDSYNC;APID;APIDTS", END_INLINE,
            "URL=https://a38bbff7eaee5cd9c23b0cab830cddf77.profile.lhr52.cloudfront.net/test.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ET%2BPmLUUL._RC%7C417qBNXt1HL.css,31j6BOPjmzL.css,01ekIXTj5kL.css,11UGK4+GCNL.css,01KvCqKMBgL.css,21ckusqmu6L.css,21LLdt69ldL.css,21jNhNxHFBL.css,31JMnREMjZL.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,31MkQHV3gaL.css,01uHoBLsGfL.css,314gb2LkLML.css,01FtAuFRr3L.css,01RRH0yFa4L.css,01bkkYjxP7L.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,01FlII1u-ZL.css,219oCRGl-sL.css,212hS9k0-iL.css,312UeeukJML.css,21cgGInnQ9L.css,01mju9O84EL.css,210LbiKyCML.css,31SN3jkqdEL.css,21Wf53xZ5jL.css_.css?AUIClients/MediaDetailPageMetaAsset#desktop.in.122952-T1.113788-C.103061-T1.131900-C.94145-T1.215632-C.109378-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210LbiKyCML._RC%7C31j6BOPjmzL.css,01ekIXTj5kL.css,01KvCqKMBgL.css,21ckusqmu6L.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,31q5EHoIcZL.css,41hIrT0+wbL.css,01FlII1u-ZL.css,219oCRGl-sL.css,212hS9k0-iL.css,31MkQHV3gaL.css,314gb2LkLML.css,31dTK1hHb6L.css,014Z+MbaRaL.css,01RRH0yFa4L.css,01bkkYjxP7L.css,31Wg0ai095L.css,01f31VNCowL.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,31Fo-RK+JML.css,01CslPlvtoL.css,01mju9O84EL.css,11Z7S+lK47L.css,21Wf53xZ5jL.css,01OhA16ND1L.css,11xmZPMxSJL.css,41Uz4bMH9yL.css,01TZ9fpDSSL.css,11ikU6MX1JL.css,01qwEWNuxuL.css,21qxDmhZV3L.css,11XXguyjjZL.css,31WlxajeYrL.css,01clde05tlL.css,01nX97hgmYL.css,61hZ-YG-XRL.css,01Jrt6rHBlL.css_.css?AUIClients/HardlinesDetailPageMetaAssetVariable_ACCESSORIES_AND_FAMILY_STRIPE#desktop.in.not-trident.122952-T1.113788-C.203659-T1.103061-T1.184424-T1.150150-T1.144201-T1.126331-C.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?id=93c93e0d5bda57ca322d25af41240e8f42491f55&ex=aoldisplay.com", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/ecm3?ex=rightmedia.com&xid=kKGSA5DNTKgLHSF2vALeot0t", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51foFGmxtyL.js?AUIClients/DetailPageSnSAssets#desktop.109378-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/210UtsRqV6L._RC%7C71+WX4uo+uL.css,11zh5zoa5AL.css,31cuIVKhckL.css,213skwsyD4L.css,31wWWC6YAvL.css,11G4HxMtMSL.css,31OvHRW+XiL.css,01XHMOHpK1L.css_.css?AUIClients/AmazonNavigationDesktopMetaAsset#desktop.in", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41fMrDoAFbL._RC%7C71GkUD1temL.js,61u3dpzHy+L.js,41W9ohA0e+L.js,11vrNkbdcvL.js,21SHd9g2LAL.js,311T8Q1zWKL.js,51+klsvwgqL.js,31IEOtBPX+L.js_.js?AUIClients/AmazonNavigationDesktopMetaAsset#desktop", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11aN96%2Bj6xL._RC%7C31Nb5hZQizL.js,316nVZ1c+gL.js,21u1PnPEsML.js,318rs4piGPL.js,11ISJZDdTuL.js,11dhZ6zkMNL.js,01jEqq6I0UL.js,519XfwEmqnL.js,61QSjY0aK1L.js,01bJ1qvdy1L.js,11K4T3M0xSL.js,11uqR2Ko2WL.js,01wYyhYnnFL.js,01LHJt5PiyL.js,01VgEfU-GFL.js,0193uyIciNL.js,41D4kRuiy9L.js,31OZzUTY2yL.js,11p0nLfNCcL.js,01s9HEfbt3L.js,11iHZuQapKL.js,015TRQC5i+L.js,01JzE3-DfLL.js,61ZSPeOQowL.js,01I+ls4AqQL.js_.js?AUIClients/HardlinesDetailPageMetaAssetFixed#desktop.in.138488-T1.196359-T1.102054-T1.186063-T1.195041-T1.151985-T1.131900-C.156391-T1.195589-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ET%2BPmLUUL._RC%7C119njhJT7LL.css,51QoAH-sF5L.css,01g2EoxOu-L.css,11UGK4+GCNL.css,21ByukFKG4L.css,01N8OOpUZPL.css,11xRy3bSkOL.css,01QUs5FVXoL.css,31JMnREMjZL.css,015QemNxHyL.css,41vOQb1k0LL.css,01uHoBLsGfL.css,01FtAuFRr3L.css,01rgQ3jqo7L.css,31B2u5k-3gL.css,312UeeukJML.css,11X8K4AolpL.css,21cgGInnQ9L.css,21QKJp6qQ9L.css,31cE7qTuwaL.css_.css?AUIClients/HardlinesDetailPageMetaAssetFixed#desktop.in.138488-T1.102054-T1.131900-C.129737-C.94145-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11rSsS-PDPL._RC%7C218rehcHYxL.js,11qRTlQry4L.js,21E2aIDj6DL.js,31eEXkvrJzL.js,01g2etah0NL.js,31Nb5hZQizL.js,31selSsN+1L.js,413u98XONQL.js,21u1PnPEsML.js,51+io-0L8GL.js,316nVZ1c+gL.js,01AdYLY9rHL.js,01IOMCsVFCL.js,11FOFYUJH9L.js,21CoP20PxBL.js,11dhZ6zkMNL.js,71LEtO5Vv5L.js,0185ITV0M6L.js,41Dds42UuNL.js,31UjTApGOPL.js,01bJ1qvdy1L.js,11K4T3M0xSL.js,11uqR2Ko2WL.js,01wYyhYnnFL.js,01LHJt5PiyL.js,31Ac-cQ+ZWL.js,01VgEfU-GFL.js,01HmcbFsnFL.js,01JzE3-DfLL.js,31sG+M5QN5L.js,11AVRVWTouL.js,11MQqFPEK+L.js,01I+ls4AqQL.js,01jqyAujTwL.js,31+0pACITzL.js,01OrQ5AXqsL.js,11gAPPElxuL.js,01OtvpwikQL.js,21J9Onr4hrL.js,217rNh01UsL.js,01S8y9NkxoL.js,01ZF+ovNflL.js,31Zl-BWE10L.js,51foFGmxtyL.js,01Z-Ip0c4YL.js,01qPwv8D5hL.js,01YivelYW5L.js,016QFWAAdML.js,01rg6Ce9FhL.js,010kX03xiRL.js,31NuG3-7xRL.js,011bX2ciJbL.js,21222B+rAzL.js,01gp3oqpb5L.js,31ItJPFyotL.js,11CIaAZhucL.js,01NGbPzAzBL.js,01NKGaW0w5L.js,01rEmdLLpxL.js,019W6kk1gjL.js,01hkseOXj6L.js,01lcH4zcTaL.js,01UkZ13lKKL.js_.js?AUIClients/SoftlinesDetailPageMetaAsset#desktop.language-en.in.167162-T1.162525-T1.166419-T1.186063-T1.195041-T1.203659-T1.151985-T1.183511-T1.103061-T1.184424-T1.186073-T2.200616-T1.173971-T1.131900-C.144201-T1.186725-T1.186696-T1.173115-T1.184758-T1.184759-T1.185101-T1.184757-T1.126331-C.156391-T1.202285-C.109378-T1.154031-T3.198898-C.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ET%2BPmLUUL._RC%7C119njhJT7LL.css,41j52RQ1GmL.css,210LbiKyCML.css,31j6BOPjmzL.css,01ekIXTj5kL.css,11UGK4+GCNL.css,01KvCqKMBgL.css,21ckusqmu6L.css,01N8OOpUZPL.css,41M1QoNbYzL.css,21ByukFKG4L.css,01f0Gtj6a9L.css,31q5EHoIcZL.css,31JMnREMjZL.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,31MkQHV3gaL.css,01uHoBLsGfL.css,314gb2LkLML.css,01FtAuFRr3L.css,01QLwk8mu6L.css,014Z+MbaRaL.css,01RRH0yFa4L.css,01bkkYjxP7L.css,018mGORJ7tL.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,01mju9O84EL.css,01wL78bNyyL.css,01MLzcotflL.css,31SN3jkqdEL.css,21Wf53xZ5jL.css,01OhA16ND1L.css,01gtuC0zSuL.css,01qwEWNuxuL.css,21qxDmhZV3L.css,11XXguyjjZL.css,31WlxajeYrL.css,01clde05tlL.css,11Z7S+lK47L.css,01AT3O0C6cL.css_.css?AUIClients/SoftlinesDetailPageMetaAsset#desktop.in.113788-C.162525-T1.166419-T1.203659-T1.103061-T1.184424-T1.131900-C.94145-T1.144201-T1.126331-C.202285-C.215632-C.109378-T1.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/218rehcHYxL._RC%7C11qRTlQry4L.js,21E2aIDj6DL.js,31eEXkvrJzL.js,01g2etah0NL.js,31selSsN+1L.js,413u98XONQL.js,0185ITV0M6L.js,41Dds42UuNL.js,11FOFYUJH9L.js,21CoP20PxBL.js,71LEtO5Vv5L.js,41COmOfIQhL.js,11nOzlnr6+L.js,31BBQa2c9BL.js,31Gy8EGyyiL.js,31UjTApGOPL.js,31Ac-cQ+ZWL.js,21NDIsf0a1L.js,11AVRVWTouL.js,11MQqFPEK+L.js,01jqyAujTwL.js,31+0pACITzL.js,613fAh2h0OL.js,11jf5oS-4FL.js,01RQtSMdG+L.js,01OtvpwikQL.js,21J9Onr4hrL.js,21m9o6VHhOL.js,21bSviTzsOL.js,11mvqFXObSL.js,217rNh01UsL.js,31W9fAH+1aL.js,01lcH4zcTaL.js,01qPwv8D5hL.js,01YivelYW5L.js,01rg6Ce9FhL.js,016QFWAAdML.js,41Eko5EJ6TL.js,31apIfAEBaL.js,31NuG3-7xRL.js,11div+n5b+L.js,01IQoRXvpnL.js,011bX2ciJbL.js,21222B+rAzL.js,01gp3oqpb5L.js,31ItJPFyotL.js,11CIaAZhucL.js,01NGbPzAzBL.js,011kwg0OTQL.js,01jLpHmb92L.js,014kCoIHgIL.js,019W6kk1gjL.js,01hkseOXj6L.js,0189flJt-AL.js,01lPKWAwBBL.js_.js?AUIClients/HardlinesDetailPageMetaAssetVariable#desktop.language-en.in.167162-T1.203659-T1.183511-T1.103061-T1.184424-T1.186073-T2.150150-T1.200616-T1.173971-T1.144201-T1.186725-T1.186696-T1.173115-T1.184758-T1.184759-T1.185101-T1.184757-T1.126331-C.109378-T1.154031-T3.198898-C.213433-T1.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41gCbfiTdaL._RC%7C516fcOUE-HL.css,01evdoiemkL.css,01K+Ps1DeEL.css,31pdJv9iSzL.css,01tgK36lpGL.css,11UGC+GXOPL.css,21LK7jaicML.css,11L58Qpo0GL.css,21kyTi1FabL.css,01Xl9KigtzL.css,01YhS3Cs-hL.css,21GwE3cR-yL.css,019SHZnt8RL.css,01wAWQRgXzL.css,21bWcRJYNIL.css,11WgRxUdJRL.css,01dU8+SPlFL.css,11ocrgKoE-L.css,01SHjPML6tL.css,111-D2qRjiL.css,01QrWuRrZ-L.css,310Imb6LqFL.css,11Z1a0FxSIL.css,01cbS3UK11L.css,21mOLw+nYYL.css,01L8Y-JFEhL.css_.css?AUIClients/AmazonUI#not-trident", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("get_application_resources_fo", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_17");
    ns_web_url ("index_17",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time",
        "PreSnapshot=webpage_1563387896199.png",
        "Snapshot=webpage_1563387900452.png",
        BODY_BEGIN,
            "{"rid":"0ZFJYD08MQTRDRQYVHA4","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"csmcount":{"counter":"dppc_hoverZoomOpened","value":1,"t":12070}},{"csmcount":{"counter":"aui:preload_fulfilled","value":1,"t":12783}},{"cel":{"k":"mmm1","e":[{"x":274,"y":241,"t":11067}],"min":19,"max":19,"avg":19}},{"csmcount":{"counter":"aui:preload_fulfilled","value":2,"t":13581}},{"csmcount":{"counter":"aui:preload_fulfilled","value":3,"t":13584}},{"csmcount":{"counter":"aui:preload_fulfilled","value":4,"t":14231}},{"csmcount":{"counter":"aui:preload_fulfilled","value":5,"t":14338}},{"csmcount":{"counter":"aui:preload_fulfilled","value":6,"t":14341}},{"csmcount":{"counter":"aui:preload_fulfilled","value":7,"t":15193}},{"csmcount":{"counter":"aui:preload_fulfilled","value":8,"t":15194}},{"csmcount":{"counter":"aui:preload_fulfilled","value":9,"t":15739}},{"csmcount":{"counter":"aui:preload_fulfilled","value":10,"t":15808}},{"csmcount":{"counter":"aui:preload_fulfilled","value":11,"t":16337}},{"csmcount":{"counter":"aui:preload_fulfilled","value":12,"t":16381}},{"csmcount":{"counter":"aui:preload_fulfilled","value":13,"t":16382}},{"csmcount":{"counter":"aui:preload_fulfilled","value":14,"t":17328}},{"csmcount":{"counter":"aui:preload_fulfilled","value":15,"t":17328}},{"csmcount":{"counter":"aui:preload_fulfilled","value":16,"t":17493}},{"csmcount":{"counter":"aui:preload_fulfilled","value":17,"t":17978}},{"cel":{"k":"hrt","t":18638}},{"cel":{"k":"hrt","t":19641}},{"csm":{"k":"chk","f":3,"l":{"csmcount":223,"cel":147,"navigation":1,"csm":4},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":1657}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.amazon.in/gp/uedata?at&v=0.204437.0&id=0ZFJYD08MQTRDRQYVHA4&ctb=1&m=1&sc=0ZFJYD08MQTRDRQYVHA4&pc=23947&at=23947&t=1563387900237&csmtags=aui|aui:ajax&pty=Detail&spty=Glance&pti=B07MPSZ7NK&tid=QTX88JN8XW6309TZ412A&aftb=1&ui=2", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;csm-hit;visitCount;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:0ZFJYD08MQTRDRQYVHA4$uedata=s:%2Fgp%2Fuedata%3Fat%26v%3D0.204437.0%26id%3D0ZFJYD08MQTRDRQYVHA4%26ctb%3D1%26m%3D1%26sc%3D0ZFJYD08MQTRDRQYVHA4%26pc%3D23947%26at%3D23947%26t%3D1563387900237%26csmtags%3Daui%7Caui%3Aajax%26pty%3DDetail%26spty%3DGlance%26pti%3DB07MPSZ7NK%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1%26ui%3D2:23948", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time", END_INLINE
    );

    ns_end_transaction("index_17", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("subnavmay18_json");
    ns_web_url ("subnavmay18_json",
        "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img16/wayfinding/json/subnavmay18.json?_=1563387900400",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387900452.png",
        "Snapshot=webpage_1563387908112.png",
        INLINE_URLS,
            "URL=https://m.media-amazon.com/images/G/31/img18/Fashion/September18/Flyouts/Women.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/Jew/Feb/380-500.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img18/The-Designer-Boutique/Ingresses/WayFindingLite_Tiles_Women_New.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img18/Fashion/September18/Flyouts/Men.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img18/Fashion/September18/Flyouts/Running-Shoes.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img18/The-Designer-Boutique/Ingresses/WayFindingLite_Tiles_Men_New.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/Apparel/KA/GW/Sub-Nav/3._CB469401626_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/Apparel/KA/GW/Sub-Nav/2._CB469401627_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/Apparel/KA/GW/Sub-Nav/girls._CB469401626_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/Fashion/DesktopSubnav/Updated/HB.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/Fashion/DesktopSubnav/Updated/BP.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/Fashion/DesktopSubnav/Updated/BWL.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img18/Fashion/September18/Flyouts/Sports_M._CB483839267_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img18/Fashion/September18/Flyouts/Sports_W._CB483839267_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/Fashion/DesktopSubnav/Updated/CL.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/Fashion/DesktopSubnav/Updated/SH.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/Fashion/DesktopSubnav/Updated/W.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/Fashion/DesktopSubnav/Updated/LG.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/Fashion/DesktopSubnav/Updated/JW.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/31/img19/Fashion/DesktopSubnav/Updated/SG.jpg", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("subnavmay18_json", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_csm_nexusclient_p_6");
    ns_web_url ("com_amazon_csm_nexusclient_p_6",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.csm.nexusclient.prod",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "PreSnapshot=webpage_1563387908112.png",
        "Snapshot=webpage_1563387908383.png",
        BODY_BEGIN,
            "{"cs":{"dct":{"#0":"violationType","#1":"unresponsive-clicks","#2":"violationCount","#3":"totalScanned","#4":"producerId","#5":"csm","#6":"schemaId","#7":"csm.ArmoredCXGuardrailsViolation.3","#8":"timestamp","#9":"messageId","#10":"sessionId","#11":"260-6898445-8949221","#12":"requestId","#13":"0ZFJYD08MQTRDRQYVHA4","#14":"obfuscatedMarketplaceId","#15":"A21TJRUUN4KGV"}},"events":[{"data":{"#0":"#1","#2":0,"#3":0,"#4":"#5","#6":"#7","#8":"2019-07-17T18:25:08.089Z","#9":"0ZFJYD08MQTRDRQYVHA4-1563387908089-0076968233","#10":"#11","#12":"#13","#14":"#15"}}]}",
        BODY_END
    );

    ns_end_transaction("com_amazon_csm_nexusclient_p_6", NS_AUTO_STATUS);
    ns_page_think_time(0.231);

    //Page Auto splitted for Link 'A' Clicked by User
    ns_start_transaction("ref_mega_sv_s23_1_1_1_2");
    ns_web_url ("ref_mega_sv_s23_1_1_1_2",
        "URL=https://www.amazon.in/s/ref=mega_sv_s23_1_1_1_2?rh=i%3Aapparel%2Cn%3A1571271031%2Cn%3A%211597453031%2Cn%3A%211597455031%2Cn%3A16194128031%2Cn%3A1953602031&bbn=16194128031&sort=date-desc-rank&ie=UTF8",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time;csm-hit",
        "PreSnapshot=webpage_1563387908200.png",
        "Snapshot=webpage_1563387908343.png"
    );

    ns_end_transaction("ref_mega_sv_s23_1_1_1_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_18");
    ns_web_url ("index_18",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time",
        "PreSnapshot=webpage_1563387908343.png",
        "Snapshot=webpage_1563387914237.png",
        BODY_BEGIN,
            "{"rid":"0ZFJYD08MQTRDRQYVHA4","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"csmcount":{"counter":"postbackImageSize","value":214,"t":23948}},{"cel":{"k":"mmm1","e":[{"x":276,"y":242,"t":23923},{"x":290,"y":246,"t":23958},{"x":279,"y":148,"t":24078},{"x":218,"y":118,"t":24174},{"x":214,"y":152,"t":24384},{"x":88,"y":99,"t":24528},{"x":53,"y":65,"t":24622},{"x":142,"y":59,"t":24763}],"min":19,"max":100,"avg":60}},{"csmcount":{"counter":"nav-flyout-aj:https://images-eu.ssl-images-amazon.com/images/G/31/img16/wayfinding/json/subnavmay18.json:subnav-sl-megamenu-1:0-show","value":1,"t":26310}},{"csmcount":{"counter":"nav-flyout-aj:https://images-eu.ssl-images-amazon.com/images/G/31/img16/wayfinding/json/subnavmay18.json:subnav-sl-megamenu-1:0-detail-show","value":1,"t":26310}},{"navigation":{"t":"subnav"}},{"cel":{"k":"mmm1","e":[{"x":52,"y":3,"t":25471},{"x":71,"y":18,"t":25739},{"x":103,"y":68,"t":25824},{"x":182,"y":100,"t":26110},{"x":233,"y":112,"t":26189},{"x":293,"y":169,"t":26755},{"x":234,"y":168,"t":26805},{"x":259,"y":189,"t":26935},{"x":193,"y":224,"t":27373},{"x":110,"y":226,"t":27505},{"x":61,"y":236,"t":27739},{"x":71,"y":212,"t":28068}],"min":19,"max":524,"avg":214}},{"cel":{"k":"mcm","w":1000,"h":5564,"t":31675,"x":71,"y":212,"p":"//*[@id='nav-flyout-aj:https://images-eu.ssl-images-amazon.com/images/G/31/img16/wayfinding/json/subnavmay18.json:subnav-sl-megamenu-1:0']/DIV[2]/DIV/DIV/UL/LI/A","n":"A","dt":10.11,"r":"https://www.amazon.in/s/ref=mega_sv_s23_1_1_1_2?rh=i%3Aapparel%2Cn%3A1571271031%2Cn%3A%211597453031%2Cn%3A%211597455031%2Cn%3A16194128031%2Cn%3A1953602031&bbn=16194128031&sort=date-desc-rank&ie=UTF8"}},{"csmcount":{"counter":"nav-flyout-subnavmay18.json:subnav-sl-megamenu-1:0-dwellTime","value":5485,"t":31795}},{"csmcount":{"counter":"QF-N:SNC:QN:TN","value":1,"t":31800}},{"csmcount":{"counter":"cel.PDM.TotalExecutions","value":41,"t":31802}},{"csmcount":{"counter":"cel.VPI.TotalExecutions","value":1,"t":31802}},{"csmcount":{"counter":"cel.VPI.TotalExecutionTime","value":0,"t":31802}},{"csmcount":{"counter":"cel.VPI.AverageExecutionTime","value":0,"t":31802}},{"csmcount":{"counter":"cel.widgets.batchesProcessed","value":73,"t":31802}},{"cel":{"k":"mmm1","e":[{"x":71,"y":212,"t":31803}],"min":10,"max":524,"avg":163}},{"cel":{"k":"hrt","t":31803}},{"cel":{"k":"eod","t0":1563387876290,"t":31803}},{"csmcount":{"counter":"armored-cxguardrails.unresponsive-clicks.violations","value":0,"t":31803}},{"csmcount":{"counter":"armored-cxguardrails.unresponsive-clicks.violationRate","value":0,"t":31803}},{"csm":{"k":"chk","f":4,"l":{"csmcount":235,"cel":153,"navigation":2,"csm":5},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":2749}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41gCbfiTdaL._RC%7C516fcOUE-HL.css,01evdoiemkL.css,01K+Ps1DeEL.css,31pdJv9iSzL.css,01tgK36lpGL.css,11UGC+GXOPL.css,21LK7jaicML.css,11L58Qpo0GL.css,21kyTi1FabL.css,01Xl9KigtzL.css,01YhS3Cs-hL.css,21GwE3cR-yL.css,019SHZnt8RL.css,01wAWQRgXzL.css,21bWcRJYNIL.css,11WgRxUdJRL.css,01dU8+SPlFL.css,11ocrgKoE-L.css,01SHjPML6tL.css,111-D2qRjiL.css,01QrWuRrZ-L.css,310Imb6LqFL.css,11Z1a0FxSIL.css,01cbS3UK11L.css,21mOLw+nYYL.css,01L8Y-JFEhL.css_.css?AUIClients/AmazonUI#not-trident", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210UtsRqV6L._RC%7C71+WX4uo+uL.css,11zh5zoa5AL.css,31cuIVKhckL.css,210-42NMyML.css,31wWWC6YAvL.css,11G4HxMtMSL.css,31OvHRW+XiL.css,01XHMOHpK1L.css_.css?AUIClients/AmazonNavigationDesktopMetaAsset#desktop.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/01mI9NDJJTL._RC%7C518JPVVnVcL.css,41HsTOfMfmL.css,01LHNe-m9DL.css,21XYhpIUBvL.css_.css?AUIClients/SearchAssets#203709-T1", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/614g7QLGSmL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/41JOfbYHoHL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/616gO0IIUkL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/81LJpiqitQL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/81XJjPjlzhL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/81f9tS2YeFL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/71qyhAhT2IL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/81cLyrt2yiL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/71KA88ZqdtL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/71yn5duRhRL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/81u0FKVSj8L._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/51Sd0SGkfSL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/81qE2gUYjoL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/81cSociwiJL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/71BTDJdRMEL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/81Cl6pqo5YL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/819VclbP2tL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/81U2t2RaGOL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/813mS2VHNQL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/61dJbpjeIRL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/81re39mRwVL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/818oDAmazzL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/71l8HFPpNzL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/91vCxayxGlL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/81AY1O20RxL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/81CbMQ8qxBL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/91zCUoWxwBL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/71NSaotTDWL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/81inWCyXd4L._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/61OmQyhIVoL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/91ncMs8AuhL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/81BUz9zUSlL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/4194UTZm1eL.js?AUIClients/AmazonRushFramework#174096-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/21t9+Tmf9rL.js?AUIClients/AmazonRushRouter", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/31RX+GdnWQL._RC%7C01BPbuoKVCL.js,014lsdCY99L.js,01Ni5Zr1JEL.js,418YJGCneZL.js,31L-vf4C6NL.js,01zrMtHPDCL.js,51U2AmetLZL.js_.js?AUIClients/SearchAssets#183962-T1.174096-T1.199262-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/31QzXV3qyHL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/31rRWn5bhQL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/41YCjGOR2VL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/31rl+vjNA6L._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/31p5syX0vUL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/41MkfCUN0vL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/31KOZ3GdDCL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/31GhuRNeyFL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/41uTIFDXmHL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/31E4mPNOf-L._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/31TkXPVUloL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/41nogegMTiL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/41fI8BrwJJL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/41V2MoAFkVL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/31551e234RL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/31qZvjDO+-L._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/71Gh1+AEkkL._AC_UL320_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/SearchStyleAssets-back_arrow-4aa34b56021f5b5a7a37841a51c9af192a866919._V2_.svg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/31/nav2/images/gui/clothing-color-swatches._CB507876473_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/AUIClients/SearchStyleAssets-info_icon-64ccf6ca2f6e4bf61f9120e321937381cc13067e._V2_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61kzhTBl2qL._RC%7C11-BZEJ8lnL.js,61GQ9IdK7HL.js,21Of0-9HPCL.js,012FVc3131L.js,119KAWlHU6L.js,51xL2QLv4YL.js,11AHlQhPRjL.js,016iHgpF74L.js,11aNYFFS5hL.js,116tgw9TSaL.js,211-p4GRUCL.js,01PoLXBDXWL.js,61BanVD+50L.js,01mi-J86cyL.js,11BOgvnnntL.js,31UWuPgtTtL.js,01rpauTep4L.js,01iyxuSGj4L.js,018kT7oogLL.js_.js?AUIClients/AmazonUI#189458-T1.192338-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("index_18", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_csm_nexusclient_p_7");
    ns_web_url ("com_amazon_csm_nexusclient_p_7",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.csm.nexusclient.prod",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "PreSnapshot=webpage_1563387914237.png",
        "Snapshot=webpage_1563387915234.png",
        BODY_BEGIN,
            "{"cs":{"dct":{"#0":"requestId","#1":"RSS9BTGBT3PYWEC79TA5","#2":"server","#3":"www.amazon.in","#4":"obfuscatedMarketplaceId","#5":"A21TJRUUN4KGV","#6":"producerId","#7":"csm","#8":"schemaId","#9":"csm.CSMBaselineEvent.4","#10":"timestamp","#11":"messageId","#12":"sessionId","#13":"260-6898445-8949221"}},"events":[{"data":{"#0":"#1","#2":"#3","#4":"#5","#6":"#7","#8":"#9","#10":"2019-07-17T18:25:12.921Z","#11":"RSS9BTGBT3PYWEC79TA5-1563387912921-3320455490","#12":"#13"}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41YUeDE3zHL._RC%7C71aLqNGbWsL.js,61u3dpzHy+L.js,417SPNjYS3L.js,11vrNkbdcvL.js,21SHd9g2LAL.js,31xNSJua7KL.js,51YeRc8UK1L.js,31R1liuRRmL.js_.js?AUIClients/AmazonNavigationDesktopMetaAsset#desktop", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("com_amazon_csm_nexusclient_p_7", NS_AUTO_STATUS);
    ns_page_think_time(130.778);

    ns_start_transaction("s");
    ns_web_url ("s",
        "URL=https://www.amazon.in/s?i=apparel&bbn=16194128031&rh=n%3A1571271031%2Cn%3A%211597453031%2Cn%3A%211597455031%2Cn%3A16194128031%2Cn%3A1953602031&s=date-desc-rank&ref=mega_sv_s23_1_1_1_2",
        "PreSnapshot=webpage_1563387915684.png",
        "Snapshot=webpage_1563387916792.png",
        INLINE_URLS,
            "URL=https://d1lxz4vuik53pc.cloudfront.net/ih/1557836970682/inner-host.min.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/41gCbfiTdaL._RC%7C516fcOUE-HL.css,01evdoiemkL.css,01K+Ps1DeEL.css,31pdJv9iSzL.css,01tgK36lpGL.css,11UGC+GXOPL.css,21LK7jaicML.css,11L58Qpo0GL.css,21kyTi1FabL.css,01Xl9KigtzL.css,01YhS3Cs-hL.css,21GwE3cR-yL.css,019SHZnt8RL.css,01wAWQRgXzL.css,21bWcRJYNIL.css,11WgRxUdJRL.css,01dU8+SPlFL.css,11ocrgKoE-L.css,01SHjPML6tL.css,111-D2qRjiL.css,01QrWuRrZ-L.css,310Imb6LqFL.css,11Z1a0FxSIL.css,01cbS3UK11L.css,21mOLw+nYYL.css,01L8Y-JFEhL.css_.css?AUIClients/AmazonUI#not-trident", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("s", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("suggestions_4");
    ns_web_url ("suggestions_4",
        "URL=https://completion.amazon.co.uk/api/2017/suggestions?session-id=260-6898445-8949221&customer-id=&request-id=RSS9BTGBT3PYWEC79TA5&page-type=Search&lop=en_IN&site-variant=desktop&client-info=amazon-search-ui&mid=A21TJRUUN4KGV&alias=undefined&searchTerm=a&suggestion-type=KEYWORD&suggestion-type=WIDGET&_=1563387916674",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387916792.png",
        "Snapshot=webpage_1563387917498.png",
        INLINE_URLS,
            "URL=https://www.amazon.in/service-worker.js", "HEADER=Service-Worker:script", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time;csm-hit", END_INLINE,
            "URL=https://m.media-amazon.com/images/I/61kzhTBl2qL._RC%7C11-BZEJ8lnL.js,61GQ9IdK7HL.js,21Of0-9HPCL.js,012FVc3131L.js,119KAWlHU6L.js,51xL2QLv4YL.js,11AHlQhPRjL.js,016iHgpF74L.js,11aNYFFS5hL.js,116tgw9TSaL.js,211-p4GRUCL.js,01PoLXBDXWL.js,61BanVD+50L.js,01mi-J86cyL.js,11BOgvnnntL.js,31UWuPgtTtL.js,01rpauTep4L.js,01iyxuSGj4L.js,01OWoGffjKL.js_.js?AUIClients/AmazonUI#189458-T1.192338-T1", "HEADER=Origin:null", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/AmazonVideo/2019/SingleTitle/Venom/499x492-GNO_without-disclaimer._CB442309479_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img19/books/062019/MemorableSummer/xcm_manual-1175404_memorablebooks-summer-2019_flyout_500x450_01_1561224420._CB442522193_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/getAdj?src=511&slot=auto-left-advertising-1&rid=01012a7e663ba3abe8a0bace22e6faa3341e930a6fbdbb117b708b2c0f38fac88c8c&callback=aax_xsp_render_ad", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE
    );

    ns_end_transaction("suggestions_4", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("af_link_handler_html_5");
    ns_web_url ("af_link_handler_html_5",
        "URL=https://www.amazon.in/gp/aq-feedback/lazyLoad/handler/af-link-handler.html?ie=UTF-8&pl=%7B%22adPlacementMetaData%22%3A%7B%22pageType%22%3A%22Search%22%2C%22slotName%22%3A%22auto-left-advertising-1%22%2C%22feedbackType%22%3A%22loomSearch%22%7D%2C%22adCreativeMetaData%22%3A%7B%22adProgramId%22%3A%22undefined%22%2C%22adCreativeId%22%3A%22undefined%22%2C%22adId%22%3A%22undefined%22%7D%7D",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time;csm-hit",
        "PreSnapshot=webpage_1563387917498.png",
        "Snapshot=webpage_1563387917564.png",
        INLINE_URLS,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/getAdj?src=511&slot=auto-bottom-advertising-0&rid=01012a7e663ba3abe8a0bace22e6faa3341e930a6fbdbb117b708b2c0f38fac88c8c&callback=aax_xsp_render_ad", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE
    );

    ns_end_transaction("af_link_handler_html_5", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("af_link_handler_html_6");
    ns_web_url ("af_link_handler_html_6",
        "URL=https://www.amazon.in/gp/aq-feedback/lazyLoad/handler/af-link-handler.html?ie=UTF-8&pl=%7B%22adPlacementMetaData%22%3A%7B%22pageType%22%3A%22Search%22%2C%22slotName%22%3A%22auto-bottom-advertising-0%22%2C%22feedbackType%22%3A%22loomSearch%22%7D%2C%22adCreativeMetaData%22%3A%7B%22adProgramId%22%3A%22undefined%22%2C%22adCreativeId%22%3A%22undefined%22%2C%22adId%22%3A%22undefined%22%7D%7D",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time;csm-hit",
        "PreSnapshot=webpage_1563387917564.png",
        "Snapshot=webpage_1563387917944.png"
    );

    ns_end_transaction("af_link_handler_html_6", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_19");
    ns_web_url ("index_19",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time",
        "PreSnapshot=webpage_1563387917944.png",
        "Snapshot=webpage_1563387918177.png",
        BODY_BEGIN,
            "{"rid":"RSS9BTGBT3PYWEC79TA5","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"csmcount":{"counter":"baselineCounter2","value":1,"t":5}},{"csmcount":{"counter":"nexusBaselineCounter","value":1,"t":5}},{"csmcount":{"counter":"aui:hiResDesktop","value":0,"t":120}},{"csmcount":{"counter":"aui:pagejs:pkgExecTime","value":7.4849999999999,"t":123}},{"csmcount":{"counter":"aui:resource_count","value":1,"t":668}},{"csmcount":{"counter":"aui:resource_count","value":2,"t":669}},{"csmcount":{"counter":"aui:resource_count","value":3,"t":669}},{"csmcount":{"counter":"csm.cookieSize","value":590,"t":1071}},{"csmcount":{"counter":"aui:resource_count","value":4,"t":3247}},{"csmcount":{"counter":"totalImages","value":54,"t":3518}},{"cel":{"k":"mrg","n":"page module","t":3523}},{"cel":{"k":"pmd","o":"https://www.amazon.in","p":"/s/ref=mega_sv_s23_1_1_1_2","t":3524}},{"cel":{"w":1360,"aw":1360,"h":768,"ah":738,"cd":0,"pd":0,"t":3524,"k":"sci"}},{"cel":{"w":1000,"h":8970,"t":3539,"k":"doi"}},{"cel":{"k":"mso","n":"page module","t":3540}},{"cel":{"k":"mrg","n":"viewport module","t":3540}},{"cel":{"w":784,"h":463,"x":0,"y":0,"t":3540,"k":"vpi"}},{"cel":{"k":"mso","n":"viewport module","t":3540}},{"cel":{"k":"mrg","n":"features module","t":3541}},{"cel":{"k":"mso","n":"features module","t":3541}},{"cel":{"k":"mrg","n":"mouse click module","t":3541}},{"cel":{"k":"mso","n":"mouse click module","t":3541}},{"cel":{"k":"mrg","n":"mouse move module","t":3542}},{"cel":{"k":"mso","n":"mouse move module","t":3542}},{"csmcount":{"counter":"aui:resource_count","value":5,"t":3563}},{"csmcount":{"counter":"Search.GenericLatencyMeasurement.CfIdx","value":0,"t":6246}},{"csmcount":{"counter":"Search.GenericLatencyMeasurement.NumInInitialViewport","value":2,"t":6246}},{"csmcount":{"counter":"Search.GenericLatencyMeasurement.ThousandsPixelsInInitialViewport","value":120,"t":6247}},{"csmcount":{"counter":"safeFrame:6711014270a37cd3cd8d7e47d333ff58eefb5754:clientReady","value":1,"t":6348}},{"csmcount":{"counter":"safeFrame:412fa7a81328520564afd6b98d8b621d4045284d:clientReady","value":1,"t":6349}},{"cel":{"k":"hrt","t":6524}},{"csmcount":{"counter":"flexigrid:cssGridSupport","value":1,"t":7085,"scope":"s-result-grid-metrics"}},{"csmcount":{"counter":"aui:preload_asks","value":1,"t":7093}},{"csmcount":{"counter":"aui:preload_asks","value":2,"t":7093}},{"navigation":{"quirks":0}},{"csmcount":{"counter":"nav-flyout-prime-attach-latency","value":6044,"t":7170}},{"csmcount":{"counter":"sp_hidden","value":0,"t":7215}},{"csmcount":{"counter":"sp_delivered","value":1,"t":7215}},{"csmcount":{"counter":"s-swac","value":1,"t":7221,"scope":"pages"}},{"csmcount":{"counter":"nav-flyout-primeTooltip-attach-latency","value":6115,"t":7240}},{"csmcount":{"counter":"nav-flyout-accountList-attach-latency","value":6116,"t":7242}},{"csmcount":{"counter":"nav-flyout-shopAll-attach-latency","value":6119,"t":7244}},{"csmcount":{"counter":"nav-flyout-transientFlyout-attach-latency","value":6121,"t":7246}},{"csmcount":{"counter":"nav-flyout-subnavmay18.json:subnav-sl-megamenu-1:0-attach-latency","value":6131,"t":7256}},{"csmcount":{"counter":"nav-flyout-subnavmay18.json:subnav-sl-megamenu-2:0-attach-latency","value":6133,"t":7258}},{"csmcount":{"counter":"nav-flyout-subnavmay18.json:subnav-sl-megamenu-3:0-attach-latency","value":6134,"t":7259}},{"csmcount":{"counter":"nav-flyout-subnavmay18.json:subnav-sl-megamenu-4:0-attach-latency","value":6136,"t":7261}},{"csmcount":{"counter":"nav-flyout-subnavmay18.json:subnav-sl-megamenu-5:0-attach-latency","value":6137,"t":7262}},{"csmcount":{"counter":"nav-flyout-subnavmay18.json:subnav-sl-megamenu-7:0-attach-latency","value":6138,"t":7263}},{"csmcount":{"counter":"iss-warmup:init","value":1,"t":7292}},{"csmcount":{"counter":"iss-warmup:ajax:init","value":1,"t":7294}},{"csmcount":{"counter":"iss-api-v2:init","value":1,"t":7304}},{"csmcount":{"counter":"safeFrame:SafeModalView:Unset:clientReady","value":1,"t":7497}},{"csmcount":{"counter":"safeFrame:6711014270a37cd3cd8d7e47d333ff58eefb5754:adplacements:search:auto-left-advertising-1:search-desktop-loom:abpstatus:notenabled","value":1,"t":8011}},{"csmcount":{"counter":"safeFrame:412fa7a81328520564afd6b98d8b621d4045284d:adplacements:search:auto-bottom-advertising-0:portal-batch-fast-btf-loom:abpstatus:notenabled","value":1,"t":8076}},{"cel":{"w":1000,"h":8989,"t":8126,"k":"doi"}},{"csm":{"k":"chk","f":1,"l":{"csmcount":39,"cel":16,"navigation":1,"csm":1},"s":"inln"}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.amazon.in/gp/uedata?ld&v=0.204437.0&id=RSS9BTGBT3PYWEC79TA5&sw=1360&sh=768&vw=767&vh=446&m=1&sc=RSS9BTGBT3PYWEC79TA5&ue=5&bb=1076&ns=1079&ne=1135&be=3517&fp=1879&fcp=1879&cf=3252&af=3252&pc=8960&tc=-1283&na_=-1283&ul_=-201&_ul=-200&rd_=-1563387909377&_rd=-1563387909377&fe_=-1283&lk_=-1283&_lk=-1283&co_=-1283&_co=-1283&sc_=-1563387909377&rq_=-1170&rs_=-359&_rs=3232&dl_=-132&di_=3547&de_=3547&_de=3549&_dc=8960&ld_=8960&_ld=-1563387909377&ntd=0&ty=0&rc=0&hob=3&hoe=6&ld=8964&t=1563387918341&ctb=1&rt=cf:23-0-3-15-2-9-0_af:23-0-3-15-2-9-0_ld:86-5-3-67-6-21-1&csmtags=aui|aui:aui_build_date:3.19.4-2019-06-27|navbar|fls-eu|adblk_no|iss-on-time|hasInlineWidgets:false|aui:ajax&viz=visible:5&pty=Search&spty=List&pti=undefined&tid=QTX88JN8XW6309TZ412A&aftb=1", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;csm-hit;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:RSS9BTGBT3PYWEC79TA5$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DRSS9BTGBT3PYWEC79TA5%26sw%3D1360%26sh%3D768%26vw%3D767%26vh%3D446%26m%3D1%26sc%3DRSS9BTGBT3PYWEC79TA5%26ue%3D5%26bb%3D1076%26ns%3D1079%26ne%3D1135%26be%3D3517%26fp%3D1879%26fcp%3D1879%26cf%3D3252%26af%3D3252%26pc%3D8960%26tc%3D-1283%26na_%3D-1283%26ul_%3D-201%26_ul%3D-200%26rd_%3D-1563387909377%26_rd%3D-1563387909377%26fe_%3D-1283%26lk_%3D-1283%26_lk%3D-1283%26co_%3D-1283%26_co%3D-1283%26sc_%3D-1563387909377%26rq_%3D-1170%26rs_%3D-359%26_rs%3D3232%26dl_%3D-132%26di_%3D3547%26de_%3D3547%26_de%3D3549%26_dc%3D8960%26ld_%3D8960%26_ld%3D-1563387909377%26ntd%3D0%26ty%3D0%26rc%3D0%26hob%3D3%26hoe%3D6%26ld%3D8964%26t%3D1563387918341%26ctb%3D1%26rt%3Dcf%3A23-0-3-15-2-9-0_af%3A23-0-3-15-2-9-0_ld%3A86-5-3-67-6-21-1%26csmtags%3Daui%7Caui%3Aaui_build_date%3A3.19.4-2019-06-27%7Cnavbar%7Cfls-eu%7Cadblk_no%7Ciss-on-time%7ChasInlineWidgets%3Afalse%7Caui%3Aajax%26viz%3Dvisible%3A5%26pty%3DSearch%26spty%3DList%26pti%3Dundefined%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:8968", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:RSS9BTGBT3PYWEC79TA5$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DRSS9BTGBT3PYWEC79TA5%26sc0%3Dportal-bb%26pc0%3D1%26ld0%3D1%26t0%3D1563387910454%26sc1%3Diss-init-pc%26bb1%3D1124%26cf1%3D7283%26be1%3D7283%26pc1%3D7283%26ld1%3D7283%26t1%3D1563387916660%26sc2%3DsearchSafeFrame%3AFOOTER%26bb2%3D2180%26be2%3D2513%26x12%3D3240%26cf2%3D6339%26pc2%3D6349%26ld2%3D6350%26t2%3D1563387915727%26sc3%3DcsmCELLSframework%26bb3%3D3523%26pc3%3D3523%26ld3%3D3523%26t3%3D1563387912900%26sc4%3DcsmCELLSpdm%26bb4%3D3524%26pc4%3D3540%26ld4%3D3541%26t4%3D1563387912918%26sc5%3DcsmCELLSvpm%26bb5%3D3541%26pc5%3D3541%26ld5%3D3541%26t5%3D1563387912918%26sc6%3DcsmCELLSfem%26bb6%3D3542%26pc6%3D3542%26ld6%3D3542%26t6%3D1563387912919%26sc7%3Due_sushi_v1%26bb7%3D3543%26pc7%3D3545%26ld7%3D3545%26t7%3D1563387912922%26sc8%3DamznSafeFrameHost%26bb8%3D6252%26pc8%3D6277%26ld8%3D6277%26t8%3D1563387915654%26sc9%3Ds-startup-component-scan%26bb9%3D7209%26cf9%3D7209%26pc9%3D7216%26ld9%3D7216%26t9%3D1563387916593%26sc10%3Ds-swac%26bb10%3D7217%26cf10%3D7218%26pc10%3D7218%26ld10%3D7218%26t10%3D1563387916595%26ctb%3D1:8968", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time", END_INLINE
    );

    ns_end_transaction("index_19", NS_AUTO_STATUS);
    ns_page_think_time(0.242);

    ns_start_transaction("ref_sr_1_1");
    ns_web_url ("ref_sr_1_1",
        "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:RSS9BTGBT3PYWEC79TA5$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DRSS9BTGBT3PYWEC79TA5%26ctb%3D1%26sc0%3Diss-warmup%3Afailure%26bb0%3D7295%26cf0%3D9222%26be0%3D9223%26pc0%3D9223%26ld0%3D9223%26t0%3D1563387918600%26csmtags%3Daui%3Asw%3Abrowser%3Aregister%3Asupported%26pty%3DSearch%26spty%3DList%26pti%3Dundefined%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:9222",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time",
        "PreSnapshot=NA",
        "Snapshot=webpage_1563387919035.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/01/AUIClients/ClientSideMetricsAUIJavascript@jserrorsForester.10f2559e93ec589d92509318a7e2acbac74c343a._V2_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/iu3?d=amazon.in&slot=navFooter&a2=0101afceec47c6c6a16996aadaf40663cff63e043af14328b0b1712cd8256e0aeee5&old_oo=0&ts=1563387908713&s=ATQBMHR-blKWYRDLDQcJotOnjMulOPe00tqPjKuvKGOl&cb=1563387908713", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/javascripts/lib/popover/images/snake._CB138350263_.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("ref_sr_1_1", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_20");
    ns_web_url ("index_20",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time",
        "PreSnapshot=webpage_1563387919035.png",
        "Snapshot=webpage_1563387920581.png",
        BODY_BEGIN,
            "{"rid":"RSS9BTGBT3PYWEC79TA5","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"jserr-rw":{"m":"ISS AJAX call failed for iss-warmup with responseText: Invalid Request: mid [null] alias [undefined], pageType: Search, status: error, error: Bad Request","csm":"v5 ueLogError callee","logLevel":"WARN","attribution":"iss-warmup","pageURL":"https://www.amazon.in/s?i=apparel&bbn=16194128031&rh=n%3A1571271031%2Cn%3A%211597453031%2Cn%3A%211597455031%2Cn%3A16194128031%2Cn%3A1953602031&s=date-desc-rank&ref=mega_sv_s23_1_1_1_2","s":["function (){if(g.ue_err.erl){var b=g.ue_err.erl.length,l,a;for(l=0;l<b;l++)a=g.ue_err.erl[l],B(a.ex,a.info);ue_err.erl=[]}}","function (g,f){function y(b){if(b)return b.replace(/^\\s+|\\s+$/g,\"\")}function w(b,l){if(!b)return{};var a=\"INFO\"===l.logLevel;b.m&&b.m.message&&(b=b.m);var e=l.m||l.message||\"\",e=b.m&&b.m.message?e+b.m.message:b.m&&b.m.target&&b.m.target.tagName?e+(\"Error handler invoked by \"+b.m.target.tagName+\" tag\"):b.m?e+b.m:b.message?e+b.message:e+\"Unknown error\",e={m:e,name:b.name,type:b.type,csm:N+\" \"+(b.fromOnError?\"onerror\":\"ueLogError\")},k,f,h=0,q;e.logLevel=l.logLevel||A;l.adb&&(e.adb=l.adb);if(k=l.attribution)e.a"],"t":9634}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":1296}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-na.ssl-images-amazon.com/images/I/210UtsRqV6L._RC%7C71+WX4uo+uL.css,11zh5zoa5AL.css,31cuIVKhckL.css,213skwsyD4L.css,31wWWC6YAvL.css,11G4HxMtMSL.css,31OvHRW+XiL.css,01XHMOHpK1L.css_.css?AUIClients/AmazonNavigationDesktopMetaAsset#desktop.in", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41fMrDoAFbL._RC%7C71GkUD1temL.js,61u3dpzHy+L.js,41W9ohA0e+L.js,11vrNkbdcvL.js,21SHd9g2LAL.js,311T8Q1zWKL.js,51+klsvwgqL.js,31IEOtBPX+L.js_.js?AUIClients/AmazonNavigationDesktopMetaAsset#desktop", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("index_20", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_21");
    ns_web_url ("index_21",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time",
        "PreSnapshot=webpage_1563387920581.png",
        "Snapshot=webpage_1563387920891.png",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/index_21_url_0_1_1563388018459.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.amazon.in/gp/uedata?at&v=0.204437.0&id=RSS9BTGBT3PYWEC79TA5&ctb=1&m=1&sc=RSS9BTGBT3PYWEC79TA5&pc=11291&at=11291&t=1563387920668&ec=1&ecf=0&csmtags=aui|aui:ajax|csm-feature-touch-enabled:false&pty=Search&spty=List&pti=undefined&tid=QTX88JN8XW6309TZ412A&aftb=1", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;csm-hit;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:RSS9BTGBT3PYWEC79TA5$uedata=s:%2Fgp%2Fuedata%3Fat%26v%3D0.204437.0%26id%3DRSS9BTGBT3PYWEC79TA5%26ctb%3D1%26m%3D1%26sc%3DRSS9BTGBT3PYWEC79TA5%26pc%3D11291%26at%3D11291%26t%3D1563387920668%26ec%3D1%26ecf%3D0%26csmtags%3Daui%7Caui%3Aajax%7Ccsm-feature-touch-enabled%3Afalse%26pty%3DSearch%26spty%3DList%26pti%3Dundefined%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:11290", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time", END_INLINE,
            "URL=https://www.amazon.in/gp/uedata?at&v=0.204437.0&id=RSS9BTGBT3PYWEC79TA5&ctb=1&m=1&sc=RSS9BTGBT3PYWEC79TA5&pc=11376&at=11376&t=1563387920753&pty=Search&spty=List&pti=undefined&tid=QTX88JN8XW6309TZ412A&aftb=1&ui=2", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;csm-hit;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:RSS9BTGBT3PYWEC79TA5$uedata=s:%2Fgp%2Fuedata%3Fat%26v%3D0.204437.0%26id%3DRSS9BTGBT3PYWEC79TA5%26ctb%3D1%26m%3D1%26sc%3DRSS9BTGBT3PYWEC79TA5%26pc%3D11376%26at%3D11376%26t%3D1563387920753%26pty%3DSearch%26spty%3DList%26pti%3Dundefined%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1%26ui%3D2:11375", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time", END_INLINE
    );

    ns_end_transaction("index_21", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("subnavmay18_json_2");
    ns_web_url ("subnavmay18_json_2",
        "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img16/wayfinding/json/subnavmay18.json?_=1563387920835",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387920891.png",
        "Snapshot=webpage_1563387928162.png",
        INLINE_URLS,
            "URL=https://www.amazon.in/Ateesa-Womens-Rayon-Pleated-7058_Navy_Xx-Large/dp/B07NFDRP67/ref=sr_1_1?qid=1563387908&s=apparel&sr=1-1", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time;csm-hit", END_INLINE
    );

    ns_end_transaction("subnavmay18_json_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_22");
    ns_web_url ("index_22",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time",
        "PreSnapshot=webpage_1563387928162.png",
        "Snapshot=webpage_1563387928162.png",
        BODY_BEGIN,
            "{"rid":"RSS9BTGBT3PYWEC79TA5","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"csmcount":{"counter":"aui:preload_fulfilled","value":1,"t":10774}},{"csmcount":{"counter":"aui:preload_fulfilled","value":2,"t":11231}},{"csmcount":{"counter":"postbackImageSize","value":249,"t":11290}},{"csmcount":{"counter":"postbackImageSize","value":190,"t":11375}},{"cel":{"k":"mmm1","e":[{"x":75,"y":210,"t":11291},{"x":149,"y":176,"t":11373},{"x":273,"y":158,"t":11445},{"x":376,"y":177,"t":11546},{"x":381,"y":180,"t":11599},{"x":298,"y":226,"t":11796}],"min":125,"max":125,"avg":125}},{"cel":{"k":"mmm1","e":[{"x":296,"y":223,"t":13988},{"x":279,"y":196,"t":14020},{"x":211,"y":91,"t":14229},{"x":230,"y":77,"t":14295},{"x":240,"y":24,"t":14361}],"min":90,"max":125,"avg":107}},{"cel":{"k":"hrt","t":17388}},{"cel":{"k":"mcm","w":1000,"h":8862,"t":18132,"x":400,"y":315,"p":"//*[@id='search']/DIV/DIV[2]/DIV/SPAN[3]/DIV/DIV/DIV/DIV/DIV/DIV[2]/DIV/DIV/DIV/SPAN/A/DIV/IMG","n":"IMG","dt":66.58,"c":["s-image"]}},{"cel":{"k":"ebl","t":18480,"s":"default"}},{"cel":{"k":"hrt","t":18480}},{"csm":{"k":"chk","f":3,"l":{"csmcount":79,"cel":80,"navigation":1,"csm":4,"jserr-rw":1},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":1272}}]}",
        BODY_END
    );

    ns_end_transaction("index_22", NS_AUTO_STATUS);
    ns_page_think_time(0.278);

    //Page Auto splitted for Image Link 'Ateesa by FBB Women's Rayon Pleated Kurta' Clicked by User
    ns_start_transaction("AmazonUI_2");
    ns_web_url ("AmazonUI_2",
        "URL=https://images-eu.ssl-images-amazon.com/images/I/41gCbfiTdaL._RC%7C516fcOUE-HL.css,01evdoiemkL.css,01K+Ps1DeEL.css,31pdJv9iSzL.css,01tgK36lpGL.css,11UGC+GXOPL.css,21LK7jaicML.css,11L58Qpo0GL.css,21kyTi1FabL.css,01Xl9KigtzL.css,01YhS3Cs-hL.css,21GwE3cR-yL.css,019SHZnt8RL.css,01wAWQRgXzL.css,21bWcRJYNIL.css,11WgRxUdJRL.css,01dU8+SPlFL.css,11ocrgKoE-L.css,01SHjPML6tL.css,111-D2qRjiL.css,01QrWuRrZ-L.css,310Imb6LqFL.css,11Z1a0FxSIL.css,01cbS3UK11L.css,21mOLw+nYYL.css,01L8Y-JFEhL.css_.css?AUIClients/AmazonUI#not-trident",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387928417.png",
        "Snapshot=webpage_1563387930414.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210UtsRqV6L._RC%7C71+WX4uo+uL.css,11zh5zoa5AL.css,31cuIVKhckL.css,210-42NMyML.css,31wWWC6YAvL.css,11G4HxMtMSL.css,31OvHRW+XiL.css,01XHMOHpK1L.css_.css?AUIClients/AmazonNavigationDesktopMetaAsset#desktop.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ET%2BPmLUUL._RC%7C119njhJT7LL.css,41j52RQ1GmL.css,210LbiKyCML.css,31j6BOPjmzL.css,01ekIXTj5kL.css,11UGK4+GCNL.css,01KvCqKMBgL.css,21ckusqmu6L.css,01N8OOpUZPL.css,41M1QoNbYzL.css,21ByukFKG4L.css,01f0Gtj6a9L.css,31q5EHoIcZL.css,31JMnREMjZL.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,31MkQHV3gaL.css,01uHoBLsGfL.css,314gb2LkLML.css,01FtAuFRr3L.css,01QLwk8mu6L.css,014Z+MbaRaL.css,01RRH0yFa4L.css,01bkkYjxP7L.css,018mGORJ7tL.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,01mju9O84EL.css,01wL78bNyyL.css,01MLzcotflL.css,31SN3jkqdEL.css,21Wf53xZ5jL.css,01OhA16ND1L.css,01gtuC0zSuL.css,01qwEWNuxuL.css,21qxDmhZV3L.css,11XXguyjjZL.css,31WlxajeYrL.css,01clde05tlL.css,11Z7S+lK47L.css,01AT3O0C6cL.css_.css?AUIClients/SoftlinesDetailPageMetaAsset#desktop.in.113788-C.162525-T1.166419-T1.203659-T1.103061-T1.184424-T1.131900-C.94145-T1.144201-T1.126331-C.202285-C.215632-C.109378-T1.181561-T1", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/319WS6rh4OL._SR38,50_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/313yWIMGIlL._SR38,50_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/319FFu3wKBL._SR38,50_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/51p7shShdVL._SR38,50_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/x-locale/common/transparent-pixel._V192234675_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/ape/sf/desktop/DAsf-1.50.d23453f._V461670253_.js?csm_attribution=APE-SafeFrame", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/01r8lpNJhRL.css?AUIClients/DetailPageTwisterViewAsset#desktop", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11hlEWdpPvL._RC%7C31uFjzN0JPL.css_.css?AUIClients/AskAuiAssets", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/410T8njFemL.js?AUIClients/AmazonPopoversAUIShim#in", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11rSsS-PDPL._RC%7C218rehcHYxL.js,11qRTlQry4L.js,21E2aIDj6DL.js,31eEXkvrJzL.js,01g2etah0NL.js,31Nb5hZQizL.js,31selSsN+1L.js,413u98XONQL.js,21u1PnPEsML.js,51+io-0L8GL.js,316nVZ1c+gL.js,01AdYLY9rHL.js,01IOMCsVFCL.js,11FOFYUJH9L.js,21CoP20PxBL.js,11dhZ6zkMNL.js,71LEtO5Vv5L.js,0185ITV0M6L.js,41Dds42UuNL.js,31UjTApGOPL.js,01bJ1qvdy1L.js,11K4T3M0xSL.js,11uqR2Ko2WL.js,01wYyhYnnFL.js,01LHJt5PiyL.js,31Ac-cQ+ZWL.js,01VgEfU-GFL.js,01HmcbFsnFL.js,01JzE3-DfLL.js,31sG+M5QN5L.js,11AVRVWTouL.js,11MQqFPEK+L.js,01I+ls4AqQL.js,01jqyAujTwL.js,31+0pACITzL.js,01OrQ5AXqsL.js,11gAPPElxuL.js,01OtvpwikQL.js,21J9Onr4hrL.js,217rNh01UsL.js,01S8y9NkxoL.js,01ZF+ovNflL.js,31Zl-BWE10L.js,51foFGmxtyL.js,01Z-Ip0c4YL.js,01qPwv8D5hL.js,01YivelYW5L.js,016QFWAAdML.js,01rg6Ce9FhL.js,010kX03xiRL.js,31NuG3-7xRL.js,011bX2ciJbL.js,21222B+rAzL.js,01gp3oqpb5L.js,31ItJPFyotL.js,11CIaAZhucL.js,01NGbPzAzBL.js,01NKGaW0w5L.js,01rEmdLLpxL.js,019W6kk1gjL.js,01hkseOXj6L.js,01lcH4zcTaL.js,01UkZ13lKKL.js_.js?AUIClients/SoftlinesDetailPageMetaAsset#desktop.language-en.in.167162-T1.162525-T1.166419-T1.186063-T1.195041-T1.203659-T1.151985-T1.183511-T1.103061-T1.184424-T1.186073-T2.200616-T1.173971-T1.131900-C.144201-T1.186725-T1.186696-T1.173115-T1.184758-T1.184759-T1.185101-T1.184757-T1.126331-C.156391-T1.202285-C.109378-T1.154031-T3.198898-C.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61kzhTBl2qL._RC%7C11-BZEJ8lnL.js,61GQ9IdK7HL.js,21Of0-9HPCL.js,012FVc3131L.js,119KAWlHU6L.js,51xL2QLv4YL.js,11AHlQhPRjL.js,016iHgpF74L.js,11aNYFFS5hL.js,116tgw9TSaL.js,211-p4GRUCL.js,01PoLXBDXWL.js,61BanVD+50L.js,01mi-J86cyL.js,11BOgvnnntL.js,31UWuPgtTtL.js,01rpauTep4L.js,01iyxuSGj4L.js,018kT7oogLL.js_.js?AUIClients/AmazonUI#189458-T1.192338-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/01LAv8I1AxL._RC%7C01MPykUsrCL.css,01LKsGfpclL.css,01PTkp9JOCL.css,01cdXa5nSoL.css_.css?AUIClients/DesktopMedleyFilteringMetaAsset", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("AmazonUI_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_23");
    ns_web_url ("index_23",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time",
        "PreSnapshot=webpage_1563387930414.png",
        "Snapshot=webpage_1563387935615.png",
        BODY_BEGIN,
            "{"rid":"RSS9BTGBT3PYWEC79TA5","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"cel":{"k":"mmm1","e":[{"x":413,"y":0,"t":15982},{"x":466,"y":120,"t":16520},{"x":478,"y":141,"t":16598},{"x":378,"y":142,"t":16685},{"x":318,"y":161,"t":16762},{"x":381,"y":304,"t":17714},{"x":400,"y":315,"t":17854}],"min":49,"max":125,"avg":88}},{"cel":{"k":"unr_mcm","t":18133,"dt":67.48,"x":400,"y":315,"p":"//*[@id='search']/DIV/DIV[2]/DIV/SPAN[3]/DIV/DIV/DIV/DIV/DIV/DIV[2]/DIV/DIV/DIV/SPAN/A/DIV/IMG","n":"IMG","c":["s-image"],"wd":"search_result_0"}},{"cel":{"k":"hrt","t":20637}},{"csm":{"k":"chk","f":4,"l":{"csmcount":79,"cel":83,"navigation":1,"csm":5,"jserr-rw":1},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":766}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31QLlXfnpNL.js?AUIClients/TwisterCoreAsset", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/21jqwN6jUsL.js?AUIClients/DetailPageTwisterViewAsset#203321-T1.181142-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/71BIm2ISU3L.js?AUIClients/DetailPageTwisterAssets#203321-T1.129737-C", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/316USUizNLL.js?AUIClients/PageRefreshAsset", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/ape/sf/whitelisted/desktop/sf-1.50.d23453f._V461669522_.html", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/31/personalization/ybh/loading-4x-gray._CB317974815_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/614g7QLGSmL._UX342_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/311%2BNUiljjL._RC%7C51a29A9dNjL.js_.js?AUIClients/AskAuiAssets#155248-T1.170181-T1.161288-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11omjJhwsqL.js?AUIClients/DetailPageLazyLoadLibAssets", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31lKiJrlhZL._RC%7C11tXe99yWBL.js,01-4MbsHMWL.js,11gFiYe7KbL.js,21s7OLLfWPL.js_.js?AUIClients/DesktopMedleyFilteringMetaAsset", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61BbXE-QENL.js?AUIClients/DetailPageImageBlockAssets", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.amazon.in/service-worker.js", "HEADER=Service-Worker:script", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time;csm-hit", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/getAdj?src=511&slot=ams-detail-right-v2&rid=01012ca70a82364065288b0bfefe3b6db347c7b1864acc3786ab3c4ea7dedba23b6c&callback=aax_xsp_render_ad", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/41YUeDE3zHL._RC%7C71aLqNGbWsL.js,61u3dpzHy+L.js,417SPNjYS3L.js,11vrNkbdcvL.js,21SHd9g2LAL.js,31xNSJua7KL.js,51YeRc8UK1L.js,31R1liuRRmL.js_.js?AUIClients/AmazonNavigationDesktopMetaAsset#desktop", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/AUIClients/INRetargetingAsset-fe13df5df0c9265752c892a20feddfc5baaec718.secure.min._V2_.js?AUIClients/INRetargetingAsset", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/e/xsp/getAdj?src=511&slot=customer-reviews-top&rid=01012ca70a82364065288b0bfefe3b6db347c7b1864acc3786ab3c4ea7dedba23b6c&callback=aax_xsp_render_ad", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/x/px/Qgql_8KP5RPuPvx1Ty6HgfEAAAFsAS6etwMAAAH_AemfafY/nii/%7B%22ni%22:true%7D", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/vap/video/airy2/prod/2.0.1460.0/js/airy.skin._CB513066589_.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/G/01/vap/video/airy2/prod/2.0.1460.0/css/beacon._CB513066589_.css", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("index_23", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("askWidget_html");
    ns_web_url ("askWidget_html",
        "URL=https://www.amazon.in/gp/ask-widget/askWidget.html?asin=B07PY95354&askError=&askMessage=&wdg=apparel_display_on_website&askLanguage=&requestID=Q3A6HVWZDTVCTAEBMX6F&_=1563387935552",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time;csm-hit",
        "PreSnapshot=webpage_1563387935615.png",
        "Snapshot=webpage_1563387935669.png"
    );

    ns_end_transaction("askWidget_html", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("askWidget_html_2");
    ns_web_url ("askWidget_html_2",
        "URL=https://www.amazon.in/gp/ask-widget/askWidget.html?asin=B07PY95354&askError=&askMessage=&wdg=apparel_display_on_website&askLanguage=&requestID=Q3A6HVWZDTVCTAEBMX6F&_=1563387935618",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time;csm-hit",
        "PreSnapshot=webpage_1563387935669.png",
        "Snapshot=webpage_1563387936123.png",
        INLINE_URLS,
            "URL=https://aax-eu.amazon-adsystem.com/x/px/Qgql_8KP5RPuPvx1Ty6HgfEAAAFsAS6etwMAAAH_AemfafY/niv/%7B%22wh%22:498,%22ww%22:1072,%22sx%22:0,%22sy%22:0,%22ah%22:250,%22aw%22:244,%22top%22:420,%22left%22:803,%22v%22:%7B%22p%22:0,%22t%22:0,%22def%22:%22amzn%22%7D,%22ptv%22:7.661,%22ttv%22:7.006,%22niv%22:true%7D", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE
    );

    ns_end_transaction("askWidget_html_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_csm_nexusclient_p_8");
    ns_web_url ("com_amazon_csm_nexusclient_p_8",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.csm.nexusclient.prod",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "PreSnapshot=webpage_1563387936123.png",
        "Snapshot=webpage_1563387936254.png",
        BODY_BEGIN,
            "{"cs":{"dct":{"#0":"requestId","#1":"Q3A6HVWZDTVCTAEBMX6F","#2":"server","#3":"www.amazon.in","#4":"obfuscatedMarketplaceId","#5":"A21TJRUUN4KGV","#6":"producerId","#7":"csm","#8":"schemaId","#9":"csm.CSMBaselineEvent.4","#10":"timestamp","#11":"messageId","#12":"sessionId","#13":"260-6898445-8949221"}},"events":[{"data":{"#0":"#1","#2":"#3","#4":"#5","#6":"#7","#8":"#9","#10":"2019-07-17T18:25:34.623Z","#11":"Q3A6HVWZDTVCTAEBMX6F-1563387934623-1900977433","#12":"#13"}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://aax-eu.amazon-adsystem.com/x/px/QqYiOXpHW6c0ED-AqBf8CkIAAAFsAS6fiwMAAAH_AYAhwHE/nii/%7B%22ni%22:true%7D", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE
    );

    ns_end_transaction("com_amazon_csm_nexusclient_p_8", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("suggestions_5");
    ns_web_url ("suggestions_5",
        "URL=https://completion.amazon.co.uk/api/2017/suggestions?session-id=260-6898445-8949221&customer-id=&request-id=Q3A6HVWZDTVCTAEBMX6F&page-type=Detail&lop=en_IN&site-variant=desktop&client-info=amazon-search-ui&mid=A21TJRUUN4KGV&alias=apparel&searchTerm=a&suggestion-type=KEYWORD&suggestion-type=WIDGET&_=1563387935996",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387936254.png",
        "Snapshot=webpage_1563387937505.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img17/TV/Flyout/1050726_InternetTV_flyout-2._CB505081595_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/614g7QLGSmL._UL1459_.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.amazon.in/gp/uedata?ld&v=0.204437.0&id=Q3A6HVWZDTVCTAEBMX6F&sw=1360&sh=768&vw=1055&vh=498&m=1&sc=Q3A6HVWZDTVCTAEBMX6F&ue=39&bb=549&ns=585&ne=625&x1=626&af=678&cf=5313&be=5493&fp=1000&fcp=1000&pc=8865&tc=-690&na_=-690&ul_=-1563387928352&_ul=-1563387928352&rd_=-1563387928352&_rd=-1563387928352&fe_=-689&lk_=-689&_lk=-689&co_=-689&_co=-689&sc_=-1563387928352&rq_=-613&rs_=-102&_rs=3694&dl_=-10&di_=6308&de_=6308&_de=7003&_dc=8865&ld_=8865&_ld=-1563387928352&ntd=-1&ty=0&rc=0&hob=37&hoe=39&ld=8867&t=1563387937219&ctb=1&rt=cf:30-8-6-10-3-10-1_af:12-0-3-4-2-9-1_ld:60-15-7-27-5-24-1&csmtags=aui|aui:aui_build_date:3.19.4-2019-06-27|navbar|desktop-html-atf-marker|ABPStatusNotEnabled:Detail:ams-detail-right-v2:desktop|ABPStatusNotEnabled:Detail:customer-reviews-top:Glance|SoftlinesDetailPageMetaAssetNotCached|auiNotCached|fls-eu|csm-feature-touch-enabled:false|navigate|noadrender:Detail:ams-detail-right-v2:desktop|iss-on-time|variation_dimension:1|size_name|dropdown|noadrender:Detail:customer-reviews-top:Glance|noadrender:c9a09184-bad8-4206-80a7-f9db64ba2bb1|DPCIFBuyable|DPCIFLongPoleimageblock&viz=visible:38&pty=Detail&spty=Glance&pti=B07PY95354&tid=QTX88JN8XW6309TZ412A&aftb=1&ui=2", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;csm-hit;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:Q3A6HVWZDTVCTAEBMX6F$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DQ3A6HVWZDTVCTAEBMX6F%26sw%3D1360%26sh%3D768%26vw%3D1055%26vh%3D498%26m%3D1%26sc%3DQ3A6HVWZDTVCTAEBMX6F%26ue%3D39%26bb%3D549%26ns%3D585%26ne%3D625%26x1%3D626%26af%3D678%26cf%3D5313%26be%3D5493%26fp%3D1000%26fcp%3D1000%26pc%3D8865%26tc%3D-690%26na_%3D-690%26ul_%3D-1563387928352%26_ul%3D-1563387928352%26rd_%3D-1563387928352%26_rd%3D-1563387928352%26fe_%3D-689%26lk_%3D-689%26_lk%3D-689%26co_%3D-689%26_co%3D-689%26sc_%3D-1563387928352%26rq_%3D-613%26rs_%3D-102%26_rs%3D3694%26dl_%3D-10%26di_%3D6308%26de_%3D6308%26_de%3D7003%26_dc%3D8865%26ld_%3D8865%26_ld%3D-1563387928352%26ntd%3D-1%26ty%3D0%26rc%3D0%26hob%3D37%26hoe%3D39%26ld%3D8867%26t%3D1563387937219%26ctb%3D1%26rt%3Dcf%3A30-8-6-10-3-10-1_af%3A12-0-3-4-2-9-1_ld%3A60-15-7-27-5-24-1%26csmtags%3Daui%7Caui%3Aaui_build_date%3A3.19.4-2019-06-27%7Cnavbar%7Cdesktop-html-atf-marker%7CABPStatusNotEnabled%3ADetail%3Aams-detail-right-v2%3Adesktop%7CABPStatusNotEnabled%3ADetail%3Acustomer-reviews-top%3AGlance%7CSoftlinesDetailPageMetaAssetNotCached%7CauiNotCached%7Cfls-eu%7Ccsm-feature-touch-enabled%3Afalse%7Cnavigate%7Cnoadrender%3ADetail%3Aams-detail-right-v2%3Adesktop%7Ciss-on-time%7Cvariation_dimension%3A1%7Csize_name%7Cdropdown%7Cnoadrender%3ADetail%3Acustomer-reviews-top%3AGlance%7Cnoadrender%3Ac9a09184-bad8-4206-80a7-f9db64ba2bb1%7CDPCIFBuyable%7CDPCIFLongPoleimageblock%26viz%3Dvisible%3A38%26pty%3DDetail%26spty%3DGlance%26pti%3DB07PY95354%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1%26ui%3D2:8872", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:Q3A6HVWZDTVCTAEBMX6F$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DQ3A6HVWZDTVCTAEBMX6F%26sc0%3DclickToCI%26bb0%3D545%26cf0%3D7978%26pc0%3D7979%26ld0%3D7979%26t0%3D1563387936331%26sc1%3Dportal-bb%26pc1%3D1%26ld1%3D1%26t1%3D1563387928902%26sc2%3Diss-init-pc%26bb2%3D596%26cf2%3D7632%26be2%3D7632%26pc2%3D7632%26ld2%3D7632%26t2%3D1563387935984%26sc3%3DudpV3atfwait%26bb3%3D626%26be3%3D626%26pc3%3D626%26ld3%3D626%26t3%3D1563387928978%26sc4%3DTwisterAUIWait%26bb4%3D679%26af4%3D5386%26be4%3D7840%26pc4%3D7840%26ld4%3D7840%26t4%3D1563387936192%26sc5%3DdpATCTTI%26bb5%3D5458%26cf5%3D652%26pc5%3D7979%26ld5%3D7979%26t5%3D1563387936331%26sc6%3DcsmCELLSframework%26bb6%3D6264%26pc6%3D6265%26ld6%3D6265%26t6%3D1563387934617%26sc7%3DcsmCELLSpdm%26bb7%3D6265%26pc7%3D6267%26ld7%3D6267%26t7%3D1563387934619%26sc8%3DcsmCELLSvpm%26bb8%3D6267%26pc8%3D6268%26ld8%3D6268%26t8%3D1563387934620%26sc9%3DcsmCELLSfem%26bb9%3D6268%26pc9%3D6268%26ld9%3D6268%26t9%3D1563387934620%26sc10%3Due_sushi_v1%26bb10%3D6270%26pc10%3D6272%26ld10%3D6272%26t10%3D1563387934624%26sc11%3DclickToTwister%26bb11%3D6283%26be11%3D7840%26pc11%3D7840%26ld11%3D7840%26t11%3D1563387936192%26ctb%3D1:8872", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/01/AUIClients/ClientSideMetricsAUIJavascript@jserrorsForester.10f2559e93ec589d92509318a7e2acbac74c343a._V2_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://m.media-amazon.com/images/G/01/csm/showads.v2.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("suggestions_5", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("get_image_gallery_assets_2");
    ns_web_url ("get_image_gallery_assets_2",
        "URL=https://www.amazon.in/gp/customer-reviews/aj/private/reviewsGallery/get-image-gallery-assets",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;csm-hit;session-id-time",
        "PreSnapshot=webpage_1563387937505.png",
        "Snapshot=webpage_1563387938526.png",
        INLINE_URLS,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:Q3A6HVWZDTVCTAEBMX6F$uedata=s:%2Fgp%2Fuedata%3Fld%26v%3D0.204437.0%26id%3DQ3A6HVWZDTVCTAEBMX6F%26ctb%3D1%26sc0%3Diss-warmup%3Asuccess%26bb0%3D7644%26cf0%3D9050%26be0%3D9050%26pc0%3D9050%26ld0%3D9050%26t0%3D1563387937402%26csmtags%3Daui%3Asw%3Abrowser%3Aregister%3Asupported%26pty%3DDetail%26spty%3DGlance%26pti%3DB07PY95354%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:9050", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time", END_INLINE,
            "URL=https://cloudfront-labs.amazonaws.com/x.png", "HEADER=Accept-Language:en-us", "REDIRECT=YES", "LOCATION=https://a1d2db8c469a7b5521ec3c1c33ce01bdb.profile.sfo9.cloudfront.net/test.png", END_INLINE,
            "URL=https://aax-eu.amazon-adsystem.com/s/iu3?d=amazon.in&slot=navFooter&a2=0101afceec47c6c6a16996aadaf40663cff63e043af14328b0b1712cd8256e0aeee5&old_oo=0&ts=1563387928206&s=AVW5jNr73paUo1gKRO5W0q3bRaRrmyAwVuTt_HddaxOf&cb=1563387928206", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", "COOKIE=ad-id;ad-privacy", END_INLINE,
            "URL=https://www.amazon.in/gp/uedata?at&v=0.204437.0&id=Q3A6HVWZDTVCTAEBMX6F&m=1&sc=adblk_no&pc=9469&at=9469&t=1563387937821&csmtags=adblk_no&pty=Detail&spty=Glance&pti=B07PY95354&tid=QTX88JN8XW6309TZ412A&aftb=1", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time;csm-hit", END_INLINE,
            "URL=https://fls-eu.amazon.in/1/batch/1/OP/A21TJRUUN4KGV:260-6898445-8949221:Q3A6HVWZDTVCTAEBMX6F$uedata=s:%2Fgp%2Fuedata%3Fat%26v%3D0.204437.0%26id%3DQ3A6HVWZDTVCTAEBMX6F%26m%3D1%26sc%3Dadblk_no%26pc%3D9469%26at%3D9469%26t%3D1563387937821%26csmtags%3Dadblk_no%26pty%3DDetail%26spty%3DGlance%26pti%3DB07PY95354%26tid%3DQTX88JN8XW6309TZ412A%26aftb%3D1:9469", "HEADER=Accept-Language:en-us", "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/reviews-legacy/review-lightbox-combined._CB279607588_.css", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/reviews-legacy/review-lightbox-combined._CB279607633_.js", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("get_image_gallery_assets_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("get_application_resources_fo_2");
    ns_web_url ("get_application_resources_fo_2",
        "URL=https://www.amazon.in/gp/customer-reviews/aj/private/reviewsGallery/get-application-resources-for-reviews-gallery",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time;csm-hit",
        "PreSnapshot=webpage_1563387938526.png",
        "Snapshot=webpage_1563387938750.png",
        BODY_BEGIN,
            "noCache=1563387938472",
        BODY_END
    );

    ns_end_transaction("get_application_resources_fo_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("gv_2");
    ns_web_url ("gv_2",
        "URL=https://www.amazon.in/gp/cerberus/gv",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:no-cache",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time;csm-hit",
        "PreSnapshot=webpage_1563387938750.png",
        "Snapshot=webpage_1563387938866.png",
        BODY_BEGIN,
            "payload=%7B%22producerId%22%3A%22detail-page%22%2C%22asin%22%3A%22B07PY95354%22%2C%22device_type%22%3A%22WEB%22%2C%22display_code%22%3A%22No+substitutes+were+returned+from+FBAMService%22%2C%22substitute_count%22%3A%220%22%7D",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61kzhTBl2qL._RC%7C11-BZEJ8lnL.js,61GQ9IdK7HL.js,21Of0-9HPCL.js,012FVc3131L.js,119KAWlHU6L.js,51xL2QLv4YL.js,11AHlQhPRjL.js,016iHgpF74L.js,11aNYFFS5hL.js,116tgw9TSaL.js,211-p4GRUCL.js,01PoLXBDXWL.js,61BanVD+50L.js,01mi-J86cyL.js,11BOgvnnntL.js,31UWuPgtTtL.js,01rpauTep4L.js,01iyxuSGj4L.js,01OWoGffjKL.js_.js?AUIClients/AmazonUI#189458-T1.192338-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ET%2BPmLUUL._RC%7C119njhJT7LL.css,51QoAH-sF5L.css,01g2EoxOu-L.css,11UGK4+GCNL.css,21ByukFKG4L.css,01N8OOpUZPL.css,11xRy3bSkOL.css,01QUs5FVXoL.css,31JMnREMjZL.css,015QemNxHyL.css,41vOQb1k0LL.css,01uHoBLsGfL.css,01FtAuFRr3L.css,01rgQ3jqo7L.css,31B2u5k-3gL.css,312UeeukJML.css,11X8K4AolpL.css,21cgGInnQ9L.css,21QKJp6qQ9L.css,31cE7qTuwaL.css_.css?AUIClients/HardlinesDetailPageMetaAssetFixed#desktop.in.138488-T1.102054-T1.131900-C.129737-C.94145-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("gv_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_24");
    ns_web_url ("index_24",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;visitCount;session-id-time",
        "PreSnapshot=webpage_1563387938866.png",
        "Snapshot=webpage_1563387941026.png",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/index_24_url_0_1_1563388020664.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://images-na.ssl-images-amazon.com/images/I/41fMrDoAFbL._RC%7C71GkUD1temL.js,61u3dpzHy+L.js,41W9ohA0e+L.js,11vrNkbdcvL.js,21SHd9g2LAL.js,311T8Q1zWKL.js,51+klsvwgqL.js,31IEOtBPX+L.js_.js?AUIClients/AmazonNavigationDesktopMetaAsset#desktop", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ET%2BPmLUUL._RC%7C417qBNXt1HL.css,31j6BOPjmzL.css,01ekIXTj5kL.css,11UGK4+GCNL.css,01KvCqKMBgL.css,21ckusqmu6L.css,21LLdt69ldL.css,21jNhNxHFBL.css,31JMnREMjZL.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,31MkQHV3gaL.css,01uHoBLsGfL.css,314gb2LkLML.css,01FtAuFRr3L.css,01RRH0yFa4L.css,01bkkYjxP7L.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,01FlII1u-ZL.css,219oCRGl-sL.css,212hS9k0-iL.css,312UeeukJML.css,21cgGInnQ9L.css,01mju9O84EL.css,210LbiKyCML.css,31SN3jkqdEL.css,21Wf53xZ5jL.css_.css?AUIClients/MediaDetailPageMetaAsset#desktop.in.122952-T1.113788-C.103061-T1.131900-C.94145-T1.215632-C.109378-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/31SN3jkqdEL.css?AUIClients/DetailPageSnSAssets#215632-C.109378-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/984527532/?value=0&label=r_58CJXm0gIQw9iz3gM&guid=ON&script=0&data=ecomm_pagetype%3DProductDetail%3Becomm_prodid%3DB07PY95354%3Becomm_price%3D%3Becomm_pcat%3DClothing%20%26%20Accessories%3Becomm_pname%3DAteesa%20by%20FBB%20Women%27s%20Rayon%20Pleated%20Kurta%3Bsearchterm%3D%3BCURRENT_TIME%3D2019-07-17T18%3A25%3A38.978Z%3BSignedIn%3DN", "HEADER=Accept-Language:en-us", "COOKIE=IDE", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/buy-buttons/review-1-click-order._CB138348768_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/buttons/continue-shopping._CB138360611_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/common/buy-buttons/thank-you-elbow._CB138348794_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/x-locale/communities/social/snwicons_v2._CB402380004_.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/checkout/assets/carrot._CB138350193_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/checkout/thank-you-page/assets/yellow-rounded-corner-sprite._CB166613107_.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://a1d2db8c469a7b5521ec3c1c33ce01bdb.profile.sfo9.cloudfront.net/test.png", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/984527532/?value=0&label=r_58CJXm0gIQw9iz3gM&guid=ON&script=0&data=ecomm_pagetype%3DProductDetail%3Becomm_prodid%3DB07PY95354%3Becomm_price%3D%3Becomm_pcat%3DClothing%20%26%20Accessories%3Becomm_pname%3DAteesa%20by%20FBB%20Women%27s%20Rayon%20Pleated%20Kurta%3Bsearchterm%3D%3BCURRENT_TIME%3D2019-07-17T18%3A25%3A38.978Z%3BSignedIn%3DN&cdct=2&is_vtc=1&random=1983521803", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/61ET%2BPmLUUL._RC%7C119njhJT7LL.css,41j52RQ1GmL.css,210LbiKyCML.css,31j6BOPjmzL.css,01ekIXTj5kL.css,11UGK4+GCNL.css,01KvCqKMBgL.css,21ckusqmu6L.css,01N8OOpUZPL.css,41M1QoNbYzL.css,21ByukFKG4L.css,01f0Gtj6a9L.css,31q5EHoIcZL.css,31JMnREMjZL.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,31MkQHV3gaL.css,01uHoBLsGfL.css,314gb2LkLML.css,01FtAuFRr3L.css,01QLwk8mu6L.css,014Z+MbaRaL.css,01RRH0yFa4L.css,01bkkYjxP7L.css,018mGORJ7tL.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,01mju9O84EL.css,01wL78bNyyL.css,01MLzcotflL.css,31SN3jkqdEL.css,21Wf53xZ5jL.css,01OhA16ND1L.css,01gtuC0zSuL.css,01qwEWNuxuL.css,21qxDmhZV3L.css,11XXguyjjZL.css,31WlxajeYrL.css,01clde05tlL.css,11Z7S+lK47L.css,01AT3O0C6cL.css_.css?AUIClients/SoftlinesDetailPageMetaAsset#desktop.in.113788-C.162525-T1.166419-T1.203659-T1.103061-T1.184424-T1.131900-C.94145-T1.144201-T1.126331-C.202285-C.215632-C.109378-T1.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("index_24", NS_AUTO_STATUS);

    //Page Auto splitted for Ajax Header = XMLHttpRequest
    ns_start_transaction("dynamic_menu_html");
    ns_web_url ("dynamic_menu_html",
        "URL=https://www.amazon.in/gp/navigation/ajax/dynamic-menu.html?wishlistItems=wishlist&alexaItems=alexa&metricKey=alexaMetric&rid=RSS9BTGBT3PYWEC79TA5&isFullWidthPrime=0&isPrime=0&dynamicRequest=1&weblabs=&isFreshRegionAndCustomer=&primeMenuWidth=310&_=1563387940967",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;csm-hit;visitCount",
        "PreSnapshot=webpage_1563387941026.png",
        "Snapshot=webpage_1563387941527.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/51foFGmxtyL.js?AUIClients/DetailPageSnSAssets#desktop.109378-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/218rehcHYxL._RC%7C11qRTlQry4L.js,21E2aIDj6DL.js,31eEXkvrJzL.js,01g2etah0NL.js,31selSsN+1L.js,413u98XONQL.js,0185ITV0M6L.js,41Dds42UuNL.js,11FOFYUJH9L.js,21CoP20PxBL.js,71LEtO5Vv5L.js,41COmOfIQhL.js,11nOzlnr6+L.js,31BBQa2c9BL.js,31Gy8EGyyiL.js,31UjTApGOPL.js,31Ac-cQ+ZWL.js,21NDIsf0a1L.js,11AVRVWTouL.js,11MQqFPEK+L.js,01jqyAujTwL.js,31+0pACITzL.js,613fAh2h0OL.js,11jf5oS-4FL.js,01RQtSMdG+L.js,01OtvpwikQL.js,21J9Onr4hrL.js,21m9o6VHhOL.js,21bSviTzsOL.js,11mvqFXObSL.js,217rNh01UsL.js,31W9fAH+1aL.js,01lcH4zcTaL.js,01qPwv8D5hL.js,01YivelYW5L.js,01rg6Ce9FhL.js,016QFWAAdML.js,41Eko5EJ6TL.js,31apIfAEBaL.js,31NuG3-7xRL.js,11div+n5b+L.js,01IQoRXvpnL.js,011bX2ciJbL.js,21222B+rAzL.js,01gp3oqpb5L.js,31ItJPFyotL.js,11CIaAZhucL.js,01NGbPzAzBL.js,011kwg0OTQL.js,01jLpHmb92L.js,014kCoIHgIL.js,019W6kk1gjL.js,01hkseOXj6L.js,0189flJt-AL.js,01lPKWAwBBL.js,41ZKpsOG2XL.js,41WTMwhRXFL.js,61m-slBs3VL.js,013yVF4PBmL.js_.js?AUIClients/HardlinesDetailPageMetaAssetVariable_ACCESSORIES_AND_FAMILY_STRIPE#desktop.language-en.in.167162-T1.203659-T1.183511-T1.103061-T1.184424-T1.186073-T2.150150-T1.200616-T1.173971-T1.215516-T1.144201-T1.186725-T1.186696-T1.173115-T1.184758-T1.184759-T1.185101-T1.184757-T1.126331-C.109378-T1.154031-T3.198898-C.213433-T1.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11rSsS-PDPL._RC%7C218rehcHYxL.js,11qRTlQry4L.js,21E2aIDj6DL.js,31eEXkvrJzL.js,01g2etah0NL.js,31Nb5hZQizL.js,31selSsN+1L.js,413u98XONQL.js,21u1PnPEsML.js,51+io-0L8GL.js,316nVZ1c+gL.js,01AdYLY9rHL.js,01IOMCsVFCL.js,11FOFYUJH9L.js,21CoP20PxBL.js,11dhZ6zkMNL.js,71LEtO5Vv5L.js,0185ITV0M6L.js,41Dds42UuNL.js,31UjTApGOPL.js,01bJ1qvdy1L.js,11K4T3M0xSL.js,11uqR2Ko2WL.js,01wYyhYnnFL.js,01LHJt5PiyL.js,31Ac-cQ+ZWL.js,01VgEfU-GFL.js,01HmcbFsnFL.js,01JzE3-DfLL.js,31sG+M5QN5L.js,11AVRVWTouL.js,11MQqFPEK+L.js,01I+ls4AqQL.js,01jqyAujTwL.js,31+0pACITzL.js,01OrQ5AXqsL.js,11gAPPElxuL.js,01OtvpwikQL.js,21J9Onr4hrL.js,217rNh01UsL.js,01S8y9NkxoL.js,01ZF+ovNflL.js,31Zl-BWE10L.js,51foFGmxtyL.js,01Z-Ip0c4YL.js,01qPwv8D5hL.js,01YivelYW5L.js,016QFWAAdML.js,01rg6Ce9FhL.js,010kX03xiRL.js,31NuG3-7xRL.js,011bX2ciJbL.js,21222B+rAzL.js,01gp3oqpb5L.js,31ItJPFyotL.js,11CIaAZhucL.js,01NGbPzAzBL.js,01NKGaW0w5L.js,01rEmdLLpxL.js,019W6kk1gjL.js,01hkseOXj6L.js,01lcH4zcTaL.js,01UkZ13lKKL.js_.js?AUIClients/SoftlinesDetailPageMetaAsset#desktop.language-en.in.167162-T1.162525-T1.166419-T1.186063-T1.195041-T1.203659-T1.151985-T1.183511-T1.103061-T1.184424-T1.186073-T2.200616-T1.173971-T1.131900-C.144201-T1.186725-T1.186696-T1.173115-T1.184758-T1.184759-T1.185101-T1.184757-T1.126331-C.156391-T1.202285-C.109378-T1.154031-T3.198898-C.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/21E2aIDj6DL._RC%7C31eEXkvrJzL.js,01g2etah0NL.js,31Nb5hZQizL.js,31selSsN+1L.js,413u98XONQL.js,01Ng0K110HL.js,21JtT0mJXEL.js,31vMFUg376L.js,11dhZ6zkMNL.js,71LEtO5Vv5L.js,0185ITV0M6L.js,41Dds42UuNL.js,31UjTApGOPL.js,01bJ1qvdy1L.js,11K4T3M0xSL.js,11uqR2Ko2WL.js,01wYyhYnnFL.js,01LHJt5PiyL.js,31Ac-cQ+ZWL.js,01VgEfU-GFL.js,01JzE3-DfLL.js,11MQqFPEK+L.js,01jqyAujTwL.js,31+0pACITzL.js,01OtvpwikQL.js,21J9Onr4hrL.js,11nOzlnr6+L.js,31BBQa2c9BL.js,31Gy8EGyyiL.js,11p0nLfNCcL.js,11iHZuQapKL.js,217rNh01UsL.js,218rehcHYxL.js,11qRTlQry4L.js,51foFGmxtyL.js,01qPwv8D5hL.js,01rg6Ce9FhL.js,016QFWAAdML.js,31NuG3-7xRL.js,019W6kk1gjL.js,01hkseOXj6L.js_.js?AUIClients/MediaDetailPageMetaAsset#desktop.language-en.in.167162-T1.186063-T1.195041-T1.151985-T1.183511-T1.103061-T1.186073-T2.200616-T1.173971-T1.131900-C.156391-T1.109378-T1.154031-T3.198898-C", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/984527532/?value=0&label=r_58CJXm0gIQw9iz3gM&guid=ON&script=0&data=ecomm_pagetype%3DProductDetail%3Becomm_prodid%3DB07PY95354%3Becomm_price%3D%3Becomm_pcat%3DClothing%20%26%20Accessories%3Becomm_pname%3DAteesa%20by%20FBB%20Women%27s%20Rayon%20Pleated%20Kurta%3Bsearchterm%3D%3BCURRENT_TIME%3D2019-07-17T18%3A25%3A38.978Z%3BSignedIn%3DN&cdct=2&is_vtc=1&random=1983521803&ipr=y", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/11aN96%2Bj6xL._RC%7C31Nb5hZQizL.js,316nVZ1c+gL.js,21u1PnPEsML.js,318rs4piGPL.js,11ISJZDdTuL.js,11dhZ6zkMNL.js,01jEqq6I0UL.js,519XfwEmqnL.js,61QSjY0aK1L.js,01bJ1qvdy1L.js,11K4T3M0xSL.js,11uqR2Ko2WL.js,01wYyhYnnFL.js,01LHJt5PiyL.js,01VgEfU-GFL.js,0193uyIciNL.js,41D4kRuiy9L.js,31OZzUTY2yL.js,11p0nLfNCcL.js,01s9HEfbt3L.js,11iHZuQapKL.js,015TRQC5i+L.js,01JzE3-DfLL.js,61ZSPeOQowL.js,01I+ls4AqQL.js_.js?AUIClients/HardlinesDetailPageMetaAssetFixed#desktop.in.138488-T1.196359-T1.102054-T1.186063-T1.195041-T1.151985-T1.131900-C.156391-T1.195589-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("dynamic_menu_html", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("subnavmay18_json_3");
    ns_web_url ("subnavmay18_json_3",
        "URL=https://images-eu.ssl-images-amazon.com/images/G/31/img16/wayfinding/json/subnavmay18.json?_=1563387941097",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1563387941527.png",
        "Snapshot=webpage_1563387942174.png",
        INLINE_URLS,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210LbiKyCML._RC%7C31j6BOPjmzL.css,01ekIXTj5kL.css,01KvCqKMBgL.css,21ckusqmu6L.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,31q5EHoIcZL.css,41hIrT0+wbL.css,01FlII1u-ZL.css,219oCRGl-sL.css,212hS9k0-iL.css,31MkQHV3gaL.css,314gb2LkLML.css,31dTK1hHb6L.css,014Z+MbaRaL.css,01RRH0yFa4L.css,01bkkYjxP7L.css,31Wg0ai095L.css,01f31VNCowL.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,31Fo-RK+JML.css,01CslPlvtoL.css,01mju9O84EL.css,11Z7S+lK47L.css,21Wf53xZ5jL.css,01OhA16ND1L.css,11xmZPMxSJL.css,41Uz4bMH9yL.css,01TZ9fpDSSL.css,11ikU6MX1JL.css,01qwEWNuxuL.css,21qxDmhZV3L.css,11XXguyjjZL.css,31WlxajeYrL.css,01clde05tlL.css,01nX97hgmYL.css,61hZ-YG-XRL.css,01Jrt6rHBlL.css_.css?AUIClients/HardlinesDetailPageMetaAssetVariable_ACCESSORIES_AND_FAMILY_STRIPE#desktop.in.not-trident.122952-T1.113788-C.203659-T1.103061-T1.184424-T1.150150-T1.144201-T1.126331-C.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-na.ssl-images-amazon.com/images/I/210UtsRqV6L._RC%7C71+WX4uo+uL.css,11zh5zoa5AL.css,31cuIVKhckL.css,213skwsyD4L.css,31wWWC6YAvL.css,11G4HxMtMSL.css,31OvHRW+XiL.css,01XHMOHpK1L.css_.css?AUIClients/AmazonNavigationDesktopMetaAsset#desktop.in", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/218rehcHYxL._RC%7C11qRTlQry4L.js,21E2aIDj6DL.js,31eEXkvrJzL.js,01g2etah0NL.js,31selSsN+1L.js,413u98XONQL.js,0185ITV0M6L.js,41Dds42UuNL.js,11FOFYUJH9L.js,21CoP20PxBL.js,71LEtO5Vv5L.js,41COmOfIQhL.js,11nOzlnr6+L.js,31BBQa2c9BL.js,31Gy8EGyyiL.js,31UjTApGOPL.js,31Ac-cQ+ZWL.js,21NDIsf0a1L.js,11AVRVWTouL.js,11MQqFPEK+L.js,01jqyAujTwL.js,31+0pACITzL.js,613fAh2h0OL.js,11jf5oS-4FL.js,01RQtSMdG+L.js,01OtvpwikQL.js,21J9Onr4hrL.js,21m9o6VHhOL.js,21bSviTzsOL.js,11mvqFXObSL.js,217rNh01UsL.js,31W9fAH+1aL.js,01lcH4zcTaL.js,01qPwv8D5hL.js,01YivelYW5L.js,01rg6Ce9FhL.js,016QFWAAdML.js,41Eko5EJ6TL.js,31apIfAEBaL.js,31NuG3-7xRL.js,11div+n5b+L.js,01IQoRXvpnL.js,011bX2ciJbL.js,21222B+rAzL.js,01gp3oqpb5L.js,31ItJPFyotL.js,11CIaAZhucL.js,01NGbPzAzBL.js,011kwg0OTQL.js,01jLpHmb92L.js,014kCoIHgIL.js,019W6kk1gjL.js,01hkseOXj6L.js,0189flJt-AL.js,01lPKWAwBBL.js_.js?AUIClients/HardlinesDetailPageMetaAssetVariable#desktop.language-en.in.167162-T1.203659-T1.183511-T1.103061-T1.184424-T1.186073-T2.150150-T1.200616-T1.173971-T1.144201-T1.186725-T1.186696-T1.173115-T1.184758-T1.184759-T1.185101-T1.184757-T1.126331-C.109378-T1.154031-T3.198898-C.213433-T1.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/I/210LbiKyCML._RC%7C31j6BOPjmzL.css,01ekIXTj5kL.css,01KvCqKMBgL.css,21ckusqmu6L.css,01TCV-xmeZL.css,01ZGRKhIG-L.css,31q5EHoIcZL.css,41hIrT0+wbL.css,01FlII1u-ZL.css,219oCRGl-sL.css,212hS9k0-iL.css,31MkQHV3gaL.css,314gb2LkLML.css,31dTK1hHb6L.css,014Z+MbaRaL.css,01RRH0yFa4L.css,01bkkYjxP7L.css,31Wg0ai095L.css,01f31VNCowL.css,01NW8VTUeVL.css,019M+d36JfL.css,011uHgmxBfL.css,31Fo-RK+JML.css,01CslPlvtoL.css,01mju9O84EL.css,11Z7S+lK47L.css,21Wf53xZ5jL.css,01OhA16ND1L.css,11xmZPMxSJL.css,41Uz4bMH9yL.css,01TZ9fpDSSL.css,11ikU6MX1JL.css,01qwEWNuxuL.css,21qxDmhZV3L.css,11XXguyjjZL.css,31WlxajeYrL.css,01clde05tlL.css_.css?AUIClients/HardlinesDetailPageMetaAssetVariable#desktop.in.not-trident.122952-T1.113788-C.203659-T1.103061-T1.184424-T1.150150-T1.144201-T1.126331-C.181561-T1", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://images-eu.ssl-images-amazon.com/images/G/31/nav2/images/gui/searchSprite._CB272921266_.png", "HEADER=Origin:https://www.amazon.in", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("subnavmay18_json_3", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("com_amazon_csm_nexusclient_p_9");
    ns_web_url ("com_amazon_csm_nexusclient_p_9",
        "URL=https://unagi-eu.amazon.com/1/events/com.amazon.csm.nexusclient.prod",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "PreSnapshot=NA",
        "Snapshot=NA",
        BODY_BEGIN,
            "{"cs":{"dct":{"#0":"violationType","#1":"unresponsive-clicks","#2":"violationCount","#3":"totalScanned","#4":"producerId","#5":"csm","#6":"schemaId","#7":"csm.ArmoredCXGuardrailsViolation.3","#8":"timestamp","#9":"messageId","#10":"sessionId","#11":"260-6898445-8949221","#12":"requestId","#13":"Q3A6HVWZDTVCTAEBMX6F","#14":"obfuscatedMarketplaceId","#15":"A21TJRUUN4KGV"}},"events":[{"data":{"#0":"#1","#2":0,"#3":0,"#4":"#5","#6":"#7","#8":"2019-07-17T18:25:43.915Z","#9":"Q3A6HVWZDTVCTAEBMX6F-1563387943915-6997578557","#10":"#11","#12":"#13","#14":"#15"}}]}",
        BODY_END
    );

    ns_end_transaction("com_amazon_csm_nexusclient_p_9", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_25");
    ns_web_url ("index_25",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount",
        "PreSnapshot=NA",
        "Snapshot=webpage_1563387951811.png",
        BODY_BEGIN,
            "{"rid":"Q3A6HVWZDTVCTAEBMX6F","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"csmcount":{"counter":"aui:preload_fulfilled","value":1,"t":12479}},{"csmcount":{"counter":"aui:preload_fulfilled","value":2,"t":12599}},{"csmcount":{"counter":"aui:preload_fulfilled","value":3,"t":12601}},{"csmcount":{"counter":"aui:preload_fulfilled","value":4,"t":12602}},{"csmcount":{"counter":"aui:preload_fulfilled","value":5,"t":12603}},{"csmcount":{"counter":"aui:preload_fulfilled","value":6,"t":12724}},{"csmcount":{"counter":"aui:preload_fulfilled","value":7,"t":13054}},{"csmcount":{"counter":"aui:preload_fulfilled","value":8,"t":13718}},{"csmcount":{"counter":"aui:preload_fulfilled","value":9,"t":15103}},{"csmcount":{"counter":"aui:preload_fulfilled","value":10,"t":15104}},{"csmcount":{"counter":"aui:preload_fulfilled","value":11,"t":15226}},{"csmcount":{"counter":"aui:preload_fulfilled","value":12,"t":15283}},{"cel":{"k":"mmm1","e":[{"x":491,"y":13,"t":12476},{"x":508,"y":2,"t":12505},{"x":1002,"y":79,"t":12722},{"x":1004,"y":78,"t":13184}],"min":29,"max":60,"avg":45}},{"csmcount":{"counter":"cel.PDM.TotalExecutions","value":13,"t":15565}},{"csmcount":{"counter":"cel.VPI.TotalExecutions","value":1,"t":15565}},{"csmcount":{"counter":"cel.VPI.TotalExecutionTime","value":0,"t":15565}},{"csmcount":{"counter":"cel.VPI.AverageExecutionTime","value":0,"t":15565}},{"csmcount":{"counter":"cel.widgets.batchesProcessed","value":8,"t":15565}},{"cel":{"k":"mmm1","e":[{"x":1004,"y":78,"t":15565}],"min":4,"max":60,"avg":31}},{"cel":{"k":"hrt","t":15565}},{"cel":{"k":"eod","t0":1563387928352,"t":15566}},{"csmcount":{"counter":"armored-cxguardrails.unresponsive-clicks.violations","value":0,"t":15566}},{"csmcount":{"counter":"armored-cxguardrails.unresponsive-clicks.violationRate","value":0,"t":15566}},{"csmcount":{"counter":"dpTwister:CacheHit","value":0,"t":15566}},{"csmcount":{"counter":"dpTwister:CacheMiss","value":0,"t":15566}},{"csmcount":{"counter":"dpTwister:CacheUsed","value":0,"t":15566}},{"csmcount":{"counter":"dpTwister:CacheUnused","value":0,"t":15566}},{"csmcount":{"counter":"dpTwister:VariantsClicked","value":0,"t":15566}},{"csmcount":{"counter":"dpTwister:HoverCount","value":0,"t":15566}},{"csmcount":{"counter":"dpTwister:ReqDimChangeCount","value":0,"t":15566}},{"csmcount":{"counter":"TwisterDimensionViewsDropdown:CacheHit","value":0,"t":15566}},{"csmcount":{"counter":"TwisterDimensionViewsDropdown:CacheMiss","value":0,"t":15566}},{"csmcount":{"counter":"TwisterDimensionViewsDropdown:CacheUsed","value":0,"t":15566}},{"csmcount":{"counter":"TwisterDimensionViewsDropdown:CacheUnused","value":0,"t":15566}},{"csmcount":{"counter":"TwisterDimensionViewsDropdown:VariantsClicked","value":0,"t":15566}},{"csmcount":{"counter":"TwisterDimensionViewsDropdown:HoverCount","value":0,"t":15567}},{"csmcount":{"counter":"TwisterDimensionViewsDropdown:ReqDimChangeCount","value":0,"t":15567}},{"csmcount":{"counter":":CacheHit","value":0,"t":15567}},{"csmcount":{"counter":":CacheMiss","value":0,"t":15567}},{"csmcount":{"counter":":CacheUsed","value":0,"t":15567}},{"csmcount":{"counter":":CacheUnused","value":0,"t":15567}},{"csmcount":{"counter":":VariantsClicked","value":0,"t":15567}},{"csmcount":{"counter":":HoverCount","value":0,"t":15567}},{"csmcount":{"counter":":ReqDimChangeCount","value":0,"t":15567}},{"csm":{"k":"chk","f":2,"l":{"csmcount":183,"cel":96,"navigation":1,"csm":3},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":3521}}]}",
        BODY_END
    );

    ns_end_transaction("index_25", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("index_26");
    ns_web_url ("index_26",
        "URL=https://fls-eu.amazon.in/1/batch/1/OE/",
        "METHOD=POST",
        "HEADER=Origin:https://www.amazon.in",
        "HEADER=Cache-Control:max-age=0",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "COOKIE=session-id;i18n-prefs;ubid-acbin;x-wl-uid;session-token;lc-acbin;session-id-time;visitCount",
        "PreSnapshot=webpage_1563387951811.png",
        "Snapshot=webpage_1563387951997.png",
        BODY_BEGIN,
            "{"rid":"RSS9BTGBT3PYWEC79TA5","sid":"260-6898445-8949221","mid":"A21TJRUUN4KGV","sn":"www.amazon.in","reqs":[{"csmcount":{"counter":"alexaMetric-AjaxCallCount","value":1,"t":32390}},{"csmcount":{"counter":"alexaMetric-AjaxLatency","value":802,"t":32391}},{"cel":{"k":"mmm1","e":[{"x":599,"y":126,"t":31530}],"min":10,"max":125,"avg":68}},{"cel":{"k":"efo","t":34977,"s":"default"}},{"csmcount":{"counter":"nav-flyout-aj:https://images-eu.ssl-images-amazon.com/images/G/31/img16/wayfinding/json/subnavmay18.json:subnav-sl-megamenu-5:0-show","value":1,"t":35137}},{"csmcount":{"counter":"nav-flyout-aj:https://images-eu.ssl-images-amazon.com/images/G/31/img16/wayfinding/json/subnavmay18.json:subnav-sl-megamenu-5:0-search-show","value":1,"t":35137}},{"cel":{"k":"res_mcm","t":18133,"m":17007}},{"cel":{"k":"mmm1","e":[{"x":753,"y":47,"t":35150},{"x":716,"y":42,"t":35213},{"x":583,"y":75,"t":35239},{"x":514,"y":124,"t":35573},{"x":388,"y":172,"t":35723},{"x":351,"y":223,"t":35828},{"x":343,"y":260,"t":35961},{"x":352,"y":288,"t":36058},{"x":330,"y":202,"t":36384},{"x":298,"y":121,"t":36472},{"x":232,"y":14,"t":36523}],"min":10,"max":125,"avg":66}},{"cel":{"k":"mmm1","e":[{"x":225,"y":12,"t":36555},{"x":200,"y":24,"t":36756},{"x":193,"y":81,"t":36928},{"x":226,"y":114,"t":37121},{"x":242,"y":112,"t":37257},{"x":231,"y":79,"t":37297},{"x":181,"y":27,"t":37373},{"x":160,"y":18,"t":37503},{"x":159,"y":14,"t":37790}],"min":10,"max":370,"avg":116}},{"cel":{"k":"hrt","t":42391}},{"csm":{"k":"chk","f":5,"l":{"csmcount":83,"cel":89,"navigation":1,"csm":6,"jserr-rw":1},"s":"full"}},{"csmcount":{"counter":"foresterPayloadSize","t":0,"value":1651}}]}",
        BODY_END
    );

    ns_end_transaction("index_26", NS_AUTO_STATUS);
    ns_page_think_time(0.268);

}
