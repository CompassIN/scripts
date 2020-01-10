 /*-----------------------------------------------------------------------------
    Name: SaveForLater
    Recorded By: netstorm
    Date of recording: 10/10/2017 01:37:38
    Flow details:
    Build details: 4.1.8 (build# 50)
    Modification History:

-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void SaveForLater()
{


    // Save For LAter
    //ns_add_cookie_val_ex("Refresh_Token", NULL, NULL, ns_eval_string("{RefreshtokenSP}"));
    ns_start_transaction("MOB_SB_SaveForLater");
    ns_start_transaction("MB_API_SFL_bagitems_OPTIONS");
    ns_web_url("BagItemsFetchPage",
       // "URL=https://order-api.jcpenney.com/order-api/v1/accounts/Q79gbeTiThLEOgHYyTvG/draft-order/bag/items/ci81418071419",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/bag/items/{SaveForlaterItemIdSP}",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:DELETE",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us"
    );
    ns_end_transaction("MB_API_SFL_bagitems_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_SFL_bagitems_DELETE");
    ns_web_url ("BagItemsPage",
        //"URL=https://order-api.jcpenney.com/order-api/v1/accounts/Q79gbeTiThLEOgHYyTvG/draft-order/bag/items/ci81418071419",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order/bag/items/{SaveForlaterItemIdSP}",
        "METHOD=DELETE",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1507617385352.png",
        "Snapshot=webpage_1507617385584.png"
    );

    ns_end_transaction("MB_API_SFL_bagitems_DELETE", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_savedForLater_OPTIONS");
    ns_web_url("SaveForLaterFetchPage",
        //"URL=https://account-api.jcpenney.com/v5/accounts/Q79gbeTiThLEOgHYyTvG/saved-items/savedForLater?limit=11",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/saved-items/savedForLater?limit=5",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:accept-version, authorization, content-type, view-myfavorites",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s42402459026164?AQB=1&ndh=1&pf=1&t=10%2F9%2F2017%201%3A36%3A25%202%20300&mid=78336365923674312680824865177198804394&aamlh=3&ce=UTF-8&ns=jcpenney&pageName=d%3Acheckout%3Acheckout%20shopping%20cart&g=https%3A%2F%2Fwww.jcpenney.com%2Fcart%3FpTmplType%3Dregular%26catId%3Dcat1003500018%26deptId%3Ddept20000013%26urlState%3D%2Fg%2FN-bwo3xDglghki%2FN-bwo3xDglghki%26badge%3Dundefined&cc=USD&ch=checkout&server=DTCOMEXPR1L2J3_06&events=event67&products=%3B%3B1%3B0.00%3B%3B&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fwww.jcpenney.com%2Fcart%3FpTmplType%3Dregular%26catId%3Dcat1003500018%26deptId%3Ddept20000013%26urlState%3D%2Fg%2FN-bwo3xDglghki%2FN-bwo3xDglghki%26badge%3Dundefined&v7=1%3A36%20AM%7CTuesday&c10=2017%20yoda%20cart&c11=checkout&v11=D%3Dc11&v16=D%3DpageName&c17=d%3Apdp%3Appr5007255926%3Ablack%20label%20by%20evan-picone%20suit%20jacket&v17=D%3Dc17&c19=DU-2478764%2CMU-2478767%2CGT-2478563%2CABC-2478923%2CAET-2475188%2CAGV-2336264&c44=desktop&v44=D%3Dc44&v53=pdp&pe=lnk_o&pev2=saveProductInCart&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=yoda-desktop:true", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_savedForLater_OPTIONS", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_savedForLater_GET");
    ns_web_url ("SavedForLaterPage",
       // "URL=https://account-api.jcpenney.com/v5/accounts/Q79gbeTiThLEOgHYyTvG/saved-items/savedForLater?limit=11",
        "URL=https://account-api.jcpenney.com/v5/accounts/{CustomerIdSP}/saved-items/savedForLater?limit=5",
        "HEADER=accept-version:5",
        "HEADER=view-myfavorites:{SaveForlaterPrdIdSP}:{SaveForlaterSkuIdSP}",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1507617385584.png",
        "Snapshot=webpage_1507617386076.png"
    );

    ns_end_transaction("MB_API_savedForLater_GET", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_SFL_draftorder_OPTIONS");
    ns_web_url("DraftOrderFetchPage",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery&origin=cart",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:GET",
        "HEADER=Access-Control-Request-Headers:authorization, content-type",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s42234170175397?AQB=1&ndh=1&pf=1&t=10%2F9%2F2017%201%3A36%3A25%202%20300&mid=78336365923674312680824865177198804394&aamlh=3&ce=UTF-8&ns=jcpenney&pageName=d%3Acheckout%3Acheckout%20shopping%20cart&g=https%3A%2F%2Fwww.jcpenney.com%2Fcart%3FpTmplType%3Dregular%26catId%3Dcat1003500018%26deptId%3Ddept20000013%26urlState%3D%2Fg%2FN-bwo3xDglghki%2FN-bwo3xDglghki%26badge%3Dundefined&cc=USD&ch=checkout&server=DTCOMEXPR1L2J3_06&events=event57%2CscRemove&products=%3Bppr5007255926%3B1%3B49.99%3Bevent57%3D49.99%3Bevar6%3D2281010%7Cevar4%3Dblack%20label%20by%20evan-picone%20suit%20jacket%7Cevar64%3Dno%7Cevar71%3Din%20stock%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D22810100216%7Cevar41%3Dship%20to%20home%20or%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fwww.jcpenney.com%2Fcart%3FpTmplType%3Dregular%26catId%3Dcat1003500018%26deptId%3Ddept20000013%26urlState%3D%2Fg%2FN-bwo3xDglghki%2FN-bwo3xDglghki%26badge%3Dundefined&v7=1%3A36%20AM%7CTuesday&c10=2017%20yoda%20cart&c11=checkout&v11=D%3Dc11&v16=D%3DpageName&c17=d%3Apdp%3Appr5007255926%3Ablack%20label%20by%20evan-picone%20suit%20jacket&v17=D%3Dc17&c19=DU-2478764%2CMU-2478767%2CGT-2478563%2CABC-2478923%2CAET-2475188%2CAGV-2336264&c44=desktop&v44=D%3Dc44&v53=pdp&pe=lnk_o&pev2=cartUpdate&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=yoda-desktop:true", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("MB_API_SFL_draftorder_OPTIONS", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_SFL_draftorder_GET");
    ns_web_url ("draftorderPage",
        "URL=https://order-api.jcpenney.com/order-api/v1/accounts/{CustomerIdSP}/draft-order?expand=status%2Cdelivery&origin=cart",
        "HEADER=authorization:Bearer {AccessTokenSP}",
        "HEADER=content-type:application/json;charset=utf-8",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1507617386076.png",
        "Snapshot=webpage_1507617394402.png"
    );

    ns_end_transaction("MB_API_SFL_draftorder_GET", NS_AUTO_STATUS);
    
//       ns_start_transaction("MB_API_SFL_online_GET");
//       ns_web_url("MB_API_SFL_online",
//        "URL=https://m.jcpenney.com/v2/content/pg40072100007/online/S1",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//        "PreSnapshot=webpage_1467031198484.png",
//        "Snapshot=webpage_1467031198529.png"
//        INLINE_URLS,
//            "URL=https://jcpenney.d1.sc.omtrdc.net/b/ss/jcpenneyprod/1/JS-1.7.0/s4733174110221?AQB=1&ndh=1&pf=1&t=12%2F5%2F2017%202%3A53%3A42%201%20300&mid=45529909927814030712367151988437404809&aamlh=9&ce=UTF-8&ns=jcpenney&pageName=d%3Afindcoupon&g=https%3A%2F%2Fm.jcpenney.com%2Fcart&cc=USD&ch=checkout&server=DTAPIEXPR1L1J3_19&products=%3B1c41b57%3B1%3B20.00%3B%3Bevar6%3D5030205%7Cevar4%3Dnike%206-pk.%20performance%20cotton%20crew%20socks%7Cevar20%3Dsale%7Cevar32%3Dno%20rating%3Ano%20reviews%7Cevar34%3D50302050083%7Cevar35%3Dcongruent%7Cevar41%3Dship%20to%20store&c1=shopping%20cart&v1=D%3Dc1&c6=checkout%3Acheckout%20shopping%20cart&c7=http%3A%2F%2Fm.jcpenney.com%2Fcart&c11=d%3Acheckout%3Acheckout%20shopping%20cart&v11=D%3Dc11&v16=D%3DpageName&c17=r%3Acheckout%3Acheckout%20shopping%20cart&v17=D%3Dc17&c19=DU-2321669%2CMU-2321679%2CGT-2314509%2CABC-2314511%2CAET-2296995%2CAGV-2314512&c44=desktop&v44=D%3Dc44&v53=d%3Acheckout%3Acheckout%20shopping%20cart&pe=lnk_o&pev2=openModal&c.&a.&activitymap.&page=d%3Acheckout%3Acheckout%20shopping%20cart&link=FIND%20BEST%20COUPON&region=content&pageIDType=1&.activitymap&.a&.c&s=0x0&j=1.6&v=N&k=Y&bw=1366&bh=607&AQE=1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", END_INLINE,
//            "URL=https://va.v.liveperson.net/api/js/58507821?sid=aFKaaWZlQueDa41Ci38lzg&cb=lpCb75822x79794&t=ip&ts=1497254023074&pid=6684145455&tid=1033325825&vid=U5MTNjZGUzYjA2MjcyNTk1", "HEADER=Yoda-checkout:true", "HEADER=DPCluster:L1", "HEADER=X-Auto-Login:true", "HEADER=Accept-Language:en-us", "COOKIE=LPSessionID;LPVisitorID;DPCluster;Yoda-checkout", END_INLINE
//    );
//     ns_end_transaction("MB_API_SFL_online_GET", NS_AUTO_STATUS);
    
    ns_end_transaction("MOB_SB_SaveForLater", NS_AUTO_STATUS);
    ns_page_think_time(7.875);

}
