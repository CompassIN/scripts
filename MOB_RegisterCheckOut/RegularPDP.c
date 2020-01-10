/*-----------------------------------------------------------------------------
    Name:RegularPDP
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
void RegularPDP()
{
	ns_advance_param("CloudEnvFP");
	 char DPClusterbuff1[64 + 1]="";
     snprintf(DPClusterbuff1,64,"%s",ns_eval_string("{CookieFP}"));
     ns_add_cookie_val_ex("DPCluster", NULL, NULL, DPClusterbuff1);

////********************************Setting for AWS Env******************************//
 	char cloudEnv[64 + 1]="";
	snprintf(cloudEnv,64,"%s",ns_eval_string("{CloudEnvFP}"));
    ns_web_add_auto_header("X-JCPCloud-Origin", cloudEnv, 0);
         
      
	  goto SkipPDP;
    ns_start_transaction("MOB_ProductDetailPage");
	ns_web_url ("MB_API_product",
        //"URL=https://m.jcpenney.com/p/product/1acd377?pTmplType=regular",
        "URL=https://m.jcpenney.com/p/product/{PPIdType1}?pTmplType=regular",
        "HEADER=Accept-Language:en-US,en;q=0.8",
	    "HEADER=Accept-application/json;text/plain;*/*"
    );
    ns_end_transaction("MOB_ProductDetailPage", NS_AUTO_STATUS); 
    
//     if(!strcmp(ns_eval_string("{CloudSP}"),"")){      //Condition to Check cloudEnv
//      ns_start_transaction("NoCloudletSet");
//      ns_end_transaction("NoCloudletSet", NS_AUTO_STATUS);          
//     } 
//	else
//	{
//	ns_start_transaction("{CloudSP}");
//    ns_end_transaction("{CloudSP}", NS_AUTO_STATUS); 
//	}
//    
    
        if(!strcmp(ns_eval_string("{YodaProductIdSP}"),""))
    {
    	//printf("**********************Client Side Rendering**********************");
    	goto ProductAggregator;
    }
    else
    {
    	//printf("**********************Server Side Rendering**********************");
    	goto FreeShippingContent;    	
    }
  	ProductAggregator:
   ns_start_transaction("MB_API_PDP_RegionProductAggregator_GET");  
   ns_web_url("MB_API_ProductAggregartor",
        //"URL=https://browse-api.jcpenney.com/v1/product-aggregator/ppr5007249108?regionId=high",
        "URL=https://browse-api.jcpenney.com/v1/product-aggregator/{PPIdType1}?regionId=high",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "HEADER=x-requested-with:XMLHttpRequest",
        "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;AKJCP;dimOrder;lastSearchText;",
        "PreSnapshot=webpage_1416299191395.png",
        "Snapshot=webpage_1416299192869.png"
    );
	ns_end_transaction("MB_API_PDP_RegionProductAggregator_GET", NS_AUTO_STATUS);
 	
 	FreeShippingContent:
    
 ns_start_transaction("MB_API_PDP_SitePromo_GET");
    ns_web_url ("MB_API_SitePromo",
        "URL=https://browse-api.jcpenney.com/v1/j/sitepromo",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=Content-Type:application/json;charset=UTF-8",
        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;mmapi.store.p.0;mmapi.store.s.0;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;fsr.s;_IFR_jcpenney.com_fsr.a",
        "PreSnapshot=webpage_1467097014095.png",
        "Snapshot=webpage_1467097015631.png"
    );
    ns_end_transaction("MB_API_PDP_SitePromo_GET", NS_AUTO_STATUS);

    ns_start_transaction("MB_API_PDP_BreadCrumb_GET");
    ns_web_url ("MB_API_BreadCrumb",
        //"URL=https://search-api.jcpenney.com/v1/j/breadcrumb?ppId=ppr5007433488&type=product",
        "URL=https://search-api.jcpenney.com/v1/j/breadcrumb?ppId={PPIdType1}&type=product",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=Content-Type:application/json;charset=UTF-8",
        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;mmapi.store.p.0;mmapi.store.s.0;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;fsr.s;_IFR_jcpenney.com_fsr.a",
        "PreSnapshot=webpage_1467097014095.png",
        "Snapshot=webpage_1467097015631.png"
    );
    ns_end_transaction("MB_API_PDP_BreadCrumb_GET", NS_AUTO_STATUS); 
    
    ns_start_transaction("MB_API_PDP_ProductAggregator_OPTIONS");
    ns_web_url("MB_API_ProductAggregator1",
        //"URL=https://m.jcpenney.com/v4/product-aggregator/pp5006081310/inventory/pricing",
        //"URL=https://browse-api.jcpenney.com/v1/product-aggregator/{PPIdType1}/inventory/pricing",
        "URL=https://browse-api.jcpenney.com/v2/product-aggregator/{PPIdType1}/additional-details?deliveryAvailabilityCheckRequired=false",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=Access-Control-Request-Headers:accept-version,x-jcp-forwarded-channel,x-jcp-forwarded-host,x-jcp-forwarded-proto",
        "HEADER=Access-Control-Request-Method:GET",
        //"COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;DPJSESSIONID;DPUserTracking;recentSearchData;clientTestPool1;mmapi.store.p.0;mmapi.store.s.0;CavSF;CavLTS;CavPI;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DPRRSESSIONID;akaau",
        INLINE_URLS,
            "URL=http://netvision.cavisson.com/test_rum?s=000337423317038277436&op=timing&pi=3&d=1|0|-1|-1|-1|500|-1|-1|-1|-1|-1|-1|-1|-1|958|958|186|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fv2%2Fcart%2Fitems|m.jcpenney.com|BNSOrigin%3DA%3B%20BNSPrevPercentage%3D100%3B%20mmcore.tst%3D0.006%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DktCrW3Y4zCGi7PMbqIVw9ViRPdnFlq0b%3B%20_ga%3DGA1.2.1044498744.1467096881%3B%20_gat%3D1%3B%20CavSID%3D000337423317038277436%3B%20DPUserTracking%3Dnull%3B%20recentSearchData%3D%255B%2522jeans%2522%255D%3B%20clientTestPool1%3Drwd%3B%20mmapi.store.p.0%3D%257B%2522mmparams.d%2522%253A%257B%257D%252C%2522mmparams.p%2522%253A%257B%2522mmid%2522%253A%25221498632869164%25PIPE%25%255C%2522-826645866%25PIPE%25AQAAAApgGkstig0AAA%253D%253D%255C%2522%2522%252C%2522pd%2522%253A%25221498632869177%25PIPE%25%255C%25222145647719%25PIPE%25AQAAAAoBQmAaSy2KDa%252FWrOMBAAh0igohn9NIDwAAAAh0igohn9NIAAAAAP%252F%252F%252F%252F%252F%252F%252F%252F%252F%252FAAZEaXJlY3QBig0BAAAAAAAAAAEAABU2AAD%252F%252F%252F%252F%252F%252F%252F%252F%252F%252FwEA62EAAADWFI24ig0AC2EAAAWKDYoN%252F%252F8BAAABAAAAAAE%252F6wAA%252BHMBAAAAAAABRQ%253D%253D%255C%2522%2522%252C%2522srv%2522%253A%25221498632869187%25PIPE%25%255C%2522lvsvwcgus01%255C%2522%2522%252C%2522uat%2522%253A%25221498632933406%25PIPE%25%257B%255C%2522TimeLastPurch%255C%2522%253A%255C%2522None%255C%2522%252C%255C%2522TimeLastVisit%255C%2522%253A%255C%25220-1%2520day%255C%2522%252C%255C%2522LoginStatus%255C%2522%253A%255C%2522NonAccount%255C%2522%257D%2522%257D%252C%2522mmengine%2522%253A%257B%257D%257D%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78562587&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://service.maxymiser.net/cg/v5us/?fv=dmn%3Djcpenney.com%3Bref%3D%3Burl%3Dhttp%253A%252F%252Fm.jcpenney.com%252Flevis-501-original-fit-jeans-%252Fprod.jump%253FppId%253Dpp5003860119%2526Ntt%253Djeans%3Bscrw%3D1366%3Bscrh%3D768%3Bclrd%3D24%3Bcok%3D1&lver=1.4&jsncl=mmRequestCallbacks%5B2%5D&ri=2&mmid=-826645866%7CAQAAAApgGkstig0AAA%3D%3D&pd=2145647719%7CAQAAAAoBQmAaSy2KDa%2FWrOMBAAh0igohn9NIDwAAAAh0igohn9NIAAAAAP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FAAZEaXJlY3QBig0BAAAAAAAAAAEAABU2AAD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEA62EAAADWFI24ig0AC2EAAAWKDYoN%2F%2F8BAAABAAAAAAE%2F6wAA%2BHMBAAAAAAABRQ%3D%3D&srv=lvsvwcgus01&uat=TimeLastPurch%3DNone%3BTimeLastVisit%3D0-1%2520day%3BLoginStatus%3DNonAccount&uv=AppliancePageViews%3D1%3BT142TimeToEngage%3D1%2C2-3%2520min&pageid=mmevents&jsver=5.13.1", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://service.maxymiser.net/cg/v5us/?fv=dmn%3Djcpenney.com%3Bref%3D%3Burl%3Dhttp%253A%252F%252Fm.jcpenney.com%252Flevis-501-original-fit-jeans-%252Fprod.jump%253FppId%253Dpp5003860119%2526Ntt%253Djeans%3Bscrw%3D1366%3Bscrh%3D768%3Bclrd%3D24%3Bcok%3D1&lver=1.4&jsncl=mmRequestCallbacks%5B3%5D&ri=3&mmid=-826645866%7CAQAAAApgGkstig0AAA%3D%3D&pd=2145647719%7CAQAAAAoBQmAaSy2KDa%2FWrOMBAAh0igohn9NIDwAAAAh0igohn9NIAAAAAP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FAAZEaXJlY3QBig0BAAAAAAAAAAEAABU2AAD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEA62EAAADWFI24ig0AC2EAAAWKDYoN%2F%2F8BAAABAAAAAAE%2F6wAA%2BHMBAAAAAAABRQ%3D%3D&srv=lvsvwcgus01&uat=TimeLastPurch%3DNone%3BTimeLastVisit%3D0-1%2520day%3BLoginStatus%3DNonAccount&pageid=mmevents&jsver=5.13.1", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
      );
     ns_end_transaction("MB_API_PDP_ProductAggregator_OPTIONS", NS_AUTO_STATUS);
    
     ns_start_transaction("MB_API_PDP_ProductAggregator_GET");
     ns_web_url("MB_API_ProductAggregator",
        //"URL=https://m.jcpenney.com/v4/product-aggregator/pp5006081310/inventory/pricing",
        //"URL=https://browse-api.jcpenney.com/v1/product-aggregator/{PPIdType1}/inventory/pricing",
        "URL=https://browse-api.jcpenney.com/v2/product-aggregator/{PPIdType1}/additional-details?deliveryAvailabilityCheckRequired=false",
        "HEADER=Accept-Language:en-US,en;q=0.8",
         "HEADER=Origin:http://m.jcpenney.com",
        "HEADER=Content-Type:application/json;charset=UTF-8",
        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;DPJSESSIONID;DPUserTracking;recentSearchData;clientTestPool1;mmapi.store.p.0;mmapi.store.s.0;CavSF;CavLTS;CavPI;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;DPOrder;ItemCount;ItemTotal;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DPRRSESSIONID;akaau",
        INLINE_URLS,
            "URL=http://netvision.cavisson.com/test_rum?s=000337423317038277436&op=timing&pi=3&d=1|0|-1|-1|-1|500|-1|-1|-1|-1|-1|-1|-1|-1|958|958|186|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fv2%2Fcart%2Fitems|m.jcpenney.com|BNSOrigin%3DA%3B%20BNSPrevPercentage%3D100%3B%20mmcore.tst%3D0.006%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DktCrW3Y4zCGi7PMbqIVw9ViRPdnFlq0b%3B%20_ga%3DGA1.2.1044498744.1467096881%3B%20_gat%3D1%3B%20CavSID%3D000337423317038277436%3B%20DPUserTracking%3Dnull%3B%20recentSearchData%3D%255B%2522jeans%2522%255D%3B%20clientTestPool1%3Drwd%3B%20mmapi.store.p.0%3D%257B%2522mmparams.d%2522%253A%257B%257D%252C%2522mmparams.p%2522%253A%257B%2522mmid%2522%253A%25221498632869164%25PIPE%25%255C%2522-826645866%25PIPE%25AQAAAApgGkstig0AAA%253D%253D%255C%2522%2522%252C%2522pd%2522%253A%25221498632869177%25PIPE%25%255C%25222145647719%25PIPE%25AQAAAAoBQmAaSy2KDa%252FWrOMBAAh0igohn9NIDwAAAAh0igohn9NIAAAAAP%252F%252F%252F%252F%252F%252F%252F%252F%252F%252FAAZEaXJlY3QBig0BAAAAAAAAAAEAABU2AAD%252F%252F%252F%252F%252F%252F%252F%252F%252F%252FwEA62EAAADWFI24ig0AC2EAAAWKDYoN%252F%252F8BAAABAAAAAAE%252F6wAA%252BHMBAAAAAAABRQ%253D%253D%255C%2522%2522%252C%2522srv%2522%253A%25221498632869187%25PIPE%25%255C%2522lvsvwcgus01%255C%2522%2522%252C%2522uat%2522%253A%25221498632933406%25PIPE%25%257B%255C%2522TimeLastPurch%255C%2522%253A%255C%2522None%255C%2522%252C%255C%2522TimeLastVisit%255C%2522%253A%255C%25220-1%2520day%255C%2522%252C%255C%2522LoginStatus%255C%2522%253A%255C%2522NonAccount%255C%2522%257D%2522%257D%252C%2522mmengine%2522%253A%257B%257D%257D%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78562587&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://service.maxymiser.net/cg/v5us/?fv=dmn%3Djcpenney.com%3Bref%3D%3Burl%3Dhttp%253A%252F%252Fm.jcpenney.com%252Flevis-501-original-fit-jeans-%252Fprod.jump%253FppId%253Dpp5003860119%2526Ntt%253Djeans%3Bscrw%3D1366%3Bscrh%3D768%3Bclrd%3D24%3Bcok%3D1&lver=1.4&jsncl=mmRequestCallbacks%5B2%5D&ri=2&mmid=-826645866%7CAQAAAApgGkstig0AAA%3D%3D&pd=2145647719%7CAQAAAAoBQmAaSy2KDa%2FWrOMBAAh0igohn9NIDwAAAAh0igohn9NIAAAAAP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FAAZEaXJlY3QBig0BAAAAAAAAAAEAABU2AAD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEA62EAAADWFI24ig0AC2EAAAWKDYoN%2F%2F8BAAABAAAAAAE%2F6wAA%2BHMBAAAAAAABRQ%3D%3D&srv=lvsvwcgus01&uat=TimeLastPurch%3DNone%3BTimeLastVisit%3D0-1%2520day%3BLoginStatus%3DNonAccount&uv=AppliancePageViews%3D1%3BT142TimeToEngage%3D1%2C2-3%2520min&pageid=mmevents&jsver=5.13.1", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://service.maxymiser.net/cg/v5us/?fv=dmn%3Djcpenney.com%3Bref%3D%3Burl%3Dhttp%253A%252F%252Fm.jcpenney.com%252Flevis-501-original-fit-jeans-%252Fprod.jump%253FppId%253Dpp5003860119%2526Ntt%253Djeans%3Bscrw%3D1366%3Bscrh%3D768%3Bclrd%3D24%3Bcok%3D1&lver=1.4&jsncl=mmRequestCallbacks%5B3%5D&ri=3&mmid=-826645866%7CAQAAAApgGkstig0AAA%3D%3D&pd=2145647719%7CAQAAAAoBQmAaSy2KDa%2FWrOMBAAh0igohn9NIDwAAAAh0igohn9NIAAAAAP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FAAZEaXJlY3QBig0BAAAAAAAAAAEAABU2AAD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEA62EAAADWFI24ig0AC2EAAAWKDYoN%2F%2F8BAAABAAAAAAE%2F6wAA%2BHMBAAAAAAABRQ%3D%3D&srv=lvsvwcgus01&uat=TimeLastPurch%3DNone%3BTimeLastVisit%3D0-1%2520day%3BLoginStatus%3DNonAccount&pageid=mmevents&jsver=5.13.1", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
     ns_end_transaction("MB_API_PDP_ProductAggregator_GET", NS_AUTO_STATUS);
    
	ns_start_transaction("MB_API_PDP_urgency_GET");
    	ns_web_url ("MB_API_PDP_urgency",
        "URL=https://api.jcpapi.com/p/urgency/{PPIdType1}?channel=MWEB",
        "HEADER=accept-language:en-US,en;q=0.9",
        "HEADER=authority:api.jcpapi.com",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467032499374&vn1=4.16.9&ec=utf-8&pi=Product%3ABeautees%20Short-Sleeve%20Screen%20Print%20Tee%20with%20Print%20Vest%20and%20Faux%20Suede%20Scarf%20-%20Girls%207-16(pp5007570110)&cg=Search%20Results&sr=1&rnd=1467034778360&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fbeautees-short-sleeve-screen-print-tee-with-print-vest-and-faux-suede-scarf-girls-7-16%2Fprod.jump%3FppId%3Dpp5007570110%26N%3D510%26Ntt%3Dshirts", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;90024642_reset;mmapi.store.p.0;mmapi.store.s.0;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT", END_INLINE,
            "URL=http://www88.jcpenney.com/cm?tid=5&ci=90024642&vn2=e4.0&st=1467032499374&vn1=4.16.9&ec=utf-8&pi=Product%3ABeautees%20Short-Sleeve%20Screen%20Print%20Tee%20with%20Print%20Vest%20and%20Faux%20Suede%20Scarf%20-%20Girls%207-16(pp5007570110)&pr=3722091&pm=Product%3ABeautees%20Short-Sleeve%20Screen%20Print%20Tee%20with%20Print%20Vest%20and%20Faux%20Suede%20Scarf%20-%20Girls%207-16&cg=Search%20Results&pc=N&rnd=1467034206239&pr_a21=shirts&pr_a24=BEAUTEES&pr_a25=pp5007570110&pr_a32=US&pr_a33=USD&ul=http%3A%2F%2Fm.jcpenney.com%2Fbeautees-short-sleeve-screen-print-tee-with-print-vest-and-faux-suede-scarf-girls-7-16%2Fprod.jump%3FppId%3Dpp5007570110%26N%3D510%26Ntt%3Dshirts", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;90024642_reset;mmapi.store.p.0;mmapi.store.s.0;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0525201617103637M?$product_pdp$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0525201617103626M?$product_pdp$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/js/perfect-scrollbar.min.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0525201617103647S.jpg?$swatch_large$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0525201617103642S.jpg?$swatch_large$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://apps.nexus.bazaarvoice.com/JCPenney/1573-en_us/bv.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/1573-en_us/pp5007570110/reviews.djs?format=embeddedhtml", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/static/1573-en_us/bazaarvoice.css", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://ajax.googleapis.com/ajax/libs/jquery/1.6.3/jquery.min.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/module/1573-en_us/cmn/1573redes/display.pkg.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/module/1573-en_us/rr/1573redes/display.pkg.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://widget.criteo.com/event?a=11251&v=4.0.0&p0=e%3Dexd%26site_type%3Dm&p1=e%3Dvp%26p%3D%2522pp5007570110%2522&p2=e%3Ddis%26a%3D%255B11251%252C11251%255D&adce=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=uid", END_INLINE,
            "URL=http://www.google-analytics.com/plugins/ua/ec.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/974303325/?random=1467032965816&cv=8&fst=1467032965816&num=1&fmt=3&guid=ON&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_his=6&u_tz=330&u_java=true&u_nplug=8&u_nmime=53&data=ecomm_prodid%3Dpp5007570110%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&frm=0&url=http%3A//m.jcpenney.com/beautees-short-sleeve-screen-print-tee-with-print-vest-and-faux-suede-scarf-girls-7-16/prod.jump%3FppId%3Dpp5007570110%26N%3D510%26Ntt%3Dshirts&tiba=Beautees%20Short-Sleeve%20Screen%20Print%20Tee%20with%20Print%20Vest%20and%20Faux%20Suede%20Scarf%20-%20Girls%207-16%20-%20JCPen&async=1", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=id;IDE", "REDIRECT=YES", "LOCATION=https://www.google.com/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/beautees-short-sleeve-screen-print-tee-with-print-vest-and-faux-suede-scarf-girls-7-16/prod.jump%3FppId%3Dpp5007570110%26N%3D510%26Ntt%3Dshirts&data=ecomm_prodid%3Dpp5007570110%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&random=3292773216", END_INLINE,
            "URL=http://www.google-analytics.com/collect?v=1&_v=j44&a=1983272905&t=pageview&_s=5&dl=http%3A%2F%2Fm.jcpenney.com%2F&ul=en-us&de=UTF-8&dt=Beautees%20Short-Sleeve%20Screen%20Print%20Tee%20with%20Print%20Vest%20and%20Faux%20Suede%20Scarf%20-%20Girls%207-16%20-%20JCPenney&sd=24-bit&sr=1366x768&vp=784x464&je=1&_u=SGAAgEIJ~&jid=&cid=1047313294.1467032525&tid=UA-43509801-1&pa=detail&pr1nm=Beautees%20Short-Sleeve%20Screen%20Print%20Tee%20with%20Print%20Vest%20and%20Faux%20Suede%20Scarf%20-%20Girls%207-16&pr1ca=Division%20undefined%2FEntity%20undefined%2FSubdivision%20undefined&z=1231998732", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://www.google.com/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/beautees-short-sleeve-screen-print-tee-with-print-vest-and-faux-suede-scarf-girls-7-16/prod.jump%3FppId%3Dpp5007570110%26N%3D510%26Ntt%3Dshirts&data=ecomm_prodid%3Dpp5007570110%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&random=3292773216", "HEADER=Accept-Language:en-US,en;q=0.8", "REDIRECT=YES", "LOCATION=https://www.google.co.in/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/beautees-short-sleeve-screen-print-tee-with-print-vest-and-faux-suede-scarf-girls-7-16/prod.jump%3FppId%3Dpp5007570110%26N%3D510%26Ntt%3Dshirts&data=ecomm_prodid%3Dpp5007570110%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&random=3292773216&ipr=y", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=1563570357241998&ev=ViewContent&cd[content_type]=product&cd[content_ids]=%5B%22790277%22%5D&cd[product_catalog_id]=1012187682206761&cd[criteo_audience_3_0]=B3&cd[external_id]=86060b9c-bfbe-46a8-9ad1-56233d4e0312&cd[application_id]=423936147658676", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://dis.us.criteo.com/dis/dis.aspx?p=11251&cb=25983854708&ref=&sc_r=1366x768&sc_d=24&site_type=m", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=uid", END_INLINE,
            "URL=https://www.google.co.in/ads/user-lists/974303325/?fmt=3&num=1&cv=8&frm=0&url=http%3A//m.jcpenney.com/beautees-short-sleeve-screen-print-tee-with-print-vest-and-faux-suede-scarf-girls-7-16/prod.jump%3FppId%3Dpp5007570110%26N%3D510%26Ntt%3Dshirts&data=ecomm_prodid%3Dpp5007570110%3Becomm_pagetype%3Dproduct%3Becomm_totalvalue%3DNaN&random=3292773216&ipr=y", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://analytics-static.ugc.bazaarvoice.com/prod/static/3/bv-analytics.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/1573-en_us/crossdomain.htm?format=embedded#origin=http%3A%2F%2Fm.jcpenney.com", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://ums.adtechus.com/mapuser?providerid=1019;userid=86060b9c-bfbe-46a8-9ad1-56233d4e0312", "HEADER=Accept-Language:en-US,en;q=0.8", "REDIRECT=YES", "LOCATION=http://ums.adtechus.com/mapuser?providerid=1019;cfp=1;rndc=1467032968;userid=86060b9c-bfbe-46a8-9ad1-56233d4e0312", END_INLINE,
            "URL=http://pixel.rubiconproject.com/tap.php?v=5421&nid=2054&put=86060b9c-bfbe-46a8-9ad1-56233d4e0312&expires=30", "HEADER=Accept-Language:en-US,en;q=0.8", "REDIRECT=YES", "LOCATION=/tap.php?cookie_redirect=1&v=5421&nid=2054&put=86060b9c-bfbe-46a8-9ad1-56233d4e0312&expires=30", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/static/1573-en_us/translucent.gif", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/static/1573-en_us/filteringBusy.gif", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/static/1573-en_us/link-facebook.gif", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/static/1573-en_us/link-digg.gif", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/static/1573-en_us/link-delicious.gif", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://analytics-static.ugc.bazaarvoice.com/prod/static/3/bv-analytics.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s3.amazonaws.com/bv-gallery-prod/gallery/jcpenney/prod/loader.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://jcpenney.ugc.bazaarvoice.com/static/1573-en_us/r_0_ispacer.gif?_=0", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://network.bazaarvoice.com/sid.gif?_=961gst", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://pixel.rubiconproject.com/tap.php?cookie_redirect=1&v=5421&nid=2054&put=86060b9c-bfbe-46a8-9ad1-56233d4e0312&expires=30", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=c", END_INLINE,
            "URL=http://ums.adtechus.com/mapuser?providerid=1019;cfp=1;rndc=1467032968;userid=86060b9c-bfbe-46a8-9ad1-56233d4e0312", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=CfP", END_INLINE,
            "URL=http://static.curations.bazaarvoice.com/gallery/jcpenney/prod/2016-06-23T16.41.27.920Z/styles/main.css", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://static.curations.bazaarvoice.com/gallery/jcpenney/prod/2016-06-23T16.41.27.920Z/scripts/main.min.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("MB_API_PDP_urgency_GET", NS_AUTO_STATUS);
    
    char buff1[64] = "", buff2[64] = "";
	if(strcmp(ns_eval_string("{ProductOfferingSP}"),"")){      //Condition to Check ProductOfferingSP if available
    snprintf(buff1,64,"%s",ns_eval_string("{ProductOfferingSP}"));
	ns_save_string(buff1, "ProductOfferingDP"); 
    }
    else if(strcmp(ns_eval_string("{ProductOfferingSP1}"),"")){
    snprintf(buff2,64,"%s",ns_eval_string("{ProductOfferingSP1}"));
	ns_save_string(buff2, "ProductOfferingDP"); 
    }
    else{
    ns_start_transaction("MOB_NoProductOfferingAvailable");
    ns_end_transaction("MOB_NoProductOfferingAvailable", NS_AUTO_STATUS);
      // ns_exit_session();
    goto AddToBagLabel;
    }
    
//        if(!strcmp(ns_eval_string("{ProductOfferingSP}"),"")){      //Condition to Check ProductOfferingSP if available
//       ns_start_transaction("MOB_NoProductOfferingAvailable");
//       ns_end_transaction("MOB_NoProductOfferingAvailable", NS_AUTO_STATUS);
//      // ns_exit_session();
//      goto AddToBagLabel;
//    }
	ns_web_add_header("jcp_version", "GREEN", 0);
	ns_start_transaction("MB_API_PDP_ProductOffering_OPTIONS");
  	ns_web_url("ProductOffering_1",
        //"URL=https://browse-api.jcpenney.com/v1/product-offerings/{ProductOfferingSP}?stores=",
        "URL=https://browse-api.jcpenney.com/v1/product-offerings/{ProductOfferingDP}?stores=&delivery=STANDARD",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "HEADER=x-requested-with:XMLHttpRequest",
    );
	ns_end_transaction("MB_API_PDP_ProductOffering_OPTIONS", NS_AUTO_STATUS);
	
	ns_web_add_header("jcp_version", "GREEN", 0);
	ns_start_transaction("MB_API_PDP_ProductOffering_GET");
  	ns_web_url("ProductOffering_2",
        //"URL=https://browse-api.jcpenney.com/v1/product-offerings/{ProductOfferingSP}?stores=",
        "URL=https://browse-api.jcpenney.com/v1/product-offerings/{ProductOfferingDP}?stores=&delivery=STANDARD",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "HEADER=x-requested-with:XMLHttpRequest",
    );
	ns_end_transaction("MB_API_PDP_ProductOffering_GET", NS_AUTO_STATUS);
	
	AddToBagLabel:
	SkipPDP:
    ns_page_think_time(0);
    
   
}
