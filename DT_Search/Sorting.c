/*-----------------------------------------------------------------------------
    Name:Sorting
    Recorded By: anjali
    Date of recording: 06/27/2016 06:42:06
    Flow details:
    Build details: 4.1.4 (build# 43)
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void Sorting()
{  
	int YodaProductPage = ns_get_int_val("YodaProductPageDP");
	if(YodaProductPage != 1){
		 if (!((strcmp((ns_eval_string("{YodaSortOptionSP}")),"")))){
		      ns_start_transaction("COM_SearchNoSortingAvailable");
		      ns_end_transaction("COM_SearchNoSortingAvailable",NS_AUTO_STATUS);
		      goto PDPLabel;
		}
	
	 int length = 0; 
   // char Sortblckbuffer[5024] = "", src_buf[512] = "", dest_buf[512] = "", Sortblckvariable[128] = "";
    char  src_buff[512] = "", dest_buf[512] = "";

 	 ns_save_searched_string(NS_ARG_IS_PARAM, "YodaSortOptionBlockSP",  NS_ARG_IS_BUF, src_buff, ",{\"apiUrl\":\"", "?", NS_ORD_ANY, NS_FROM_START, NS_SAVE_COMPLETE);
  	
    length = strlen(src_buff);
    if (length > 0)
         {
   	 memset(dest_buf, 0, 512);
     replace(src_buff, dest_buf, length);
   }
         ns_save_string(dest_buf, "YodaSortOptionDP");

	ns_start_transaction("COM_Search_Sort_OPTIONS");
    ns_web_url ("DT_API_Search_sortBy1",
        //"URL=https://search-api.jcpenney.com/v1/search-service/s?responseType=content&mode=1&productGridView=medium&searchTerm={SearchTermEncFP}&sort={YodaSortBySP}",
       "URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/s?searchTerm={SearchTermEncFP}&sort={YodaSortBySP}&productGridView=medium&mode=1&UsrSeg=aupg1c",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467032499374&vn1=4.16.9&ec=utf-8&pi=Search%20Results&cg=Mobile%7CSearch%20Results&se=shirts&sr=960&rnd=1467034518576&pv_a11=1&pv_a12=newarrivals&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26N%3D510%26searchType%3DPredictive%2520Search", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;90024642_reset;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=https://uscollector.tealeaf.ibmcloud.com/collector/collectorPost", "METHOD=OPTIONS", "HEADER=Access-Control-Request-Headers:content-encoding, x-tealeaf, x-tealeaf-messagetypes, content-type, x-tealeaf-saas-appkey, x-tealeaf-saas-tltsid, x-requested-with, x-tealeaftype, x-tealeaf-page-url", "HEADER=Accept-Language:en-US,en;q=0.8", "HEADER=Origin:http://m.jcpenney.com", "HEADER=Access-Control-Request-Method:POST", END_INLINE,
            "URL=https://encrypted-tbn1.gstatic.com/favicon?q=tbn:ANd9GcQSf9UWd0hnBJencNQNLXMB_Ig3D4z0ooO_0_6lwWi8xhQHdj7gWgdxJrtk2W6Dh46guKjrX5ZD", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://encrypted-tbn2.gstatic.com/favicon?q=tbn:ANd9GcSlxWzvY9s7lX5LVg6_Grz46lr5Eus9daxt8MfC-zGXnBj1sTJGGJs6ijNdJgBLggV1TTql2Ww", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://encrypted-tbn3.gstatic.com/favicon?q=tbn:ANd9GcShz7B7_rhGrfhF07xSC37yJZhCbH-HOdhQ7xN7beQvcWLHXIi9EUwVrhKOGOM", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("COM_Search_Sort_OPTIONS", NS_AUTO_STATUS);
			
    ns_start_transaction("COM_Search_Sort_GET");
    ns_web_url ("DT_API_Search_sortBy",
       // "URL=https://search-api.jcpenney.com/v1/search-service/s?responseType=content&mode=1&productGridView=medium&searchTerm={SearchTermEncFP}&sort={YodaSortBySP}",
        "URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/s?searchTerm={SearchTermEncFP}&sort={YodaSortBySP}&productGridView=medium&mode=1&UsrSeg=aupg1c",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467032499374&vn1=4.16.9&ec=utf-8&pi=Search%20Results&cg=Mobile%7CSearch%20Results&se=shirts&sr=960&rnd=1467034518576&pv_a11=1&pv_a12=newarrivals&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26N%3D510%26searchType%3DPredictive%2520Search", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;90024642_reset;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=https://uscollector.tealeaf.ibmcloud.com/collector/collectorPost", "METHOD=OPTIONS", "HEADER=Access-Control-Request-Headers:content-encoding, x-tealeaf, x-tealeaf-messagetypes, content-type, x-tealeaf-saas-appkey, x-tealeaf-saas-tltsid, x-requested-with, x-tealeaftype, x-tealeaf-page-url", "HEADER=Accept-Language:en-US,en;q=0.8", "HEADER=Origin:http://m.jcpenney.com", "HEADER=Access-Control-Request-Method:POST", END_INLINE,
            "URL=https://encrypted-tbn1.gstatic.com/favicon?q=tbn:ANd9GcQSf9UWd0hnBJencNQNLXMB_Ig3D4z0ooO_0_6lwWi8xhQHdj7gWgdxJrtk2W6Dh46guKjrX5ZD", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://encrypted-tbn2.gstatic.com/favicon?q=tbn:ANd9GcSlxWzvY9s7lX5LVg6_Grz46lr5Eus9daxt8MfC-zGXnBj1sTJGGJs6ijNdJgBLggV1TTql2Ww", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://encrypted-tbn3.gstatic.com/favicon?q=tbn:ANd9GcShz7B7_rhGrfhF07xSC37yJZhCbH-HOdhQ7xN7beQvcWLHXIi9EUwVrhKOGOM", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("COM_Search_Sort_GET", NS_AUTO_STATUS);

    ns_start_transaction("DT_API_Search_sortBy_Organic_OPTIONS");
    ns_web_url ("DT_API_Search_sortBy_Organic1",
         "URL=https://search-api.jcpenney.com/v1/search-service/s?productGridView=medium&UsrSeg=aupg1c&mode=1&searchTerm={SearchTermEncFP}&sort={YodaSortBySP}&responseType=organic",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467032499374&vn1=4.16.9&ec=utf-8&pi=Search%20Results&cg=Mobile%7CSearch%20Results&se=shirts&sr=960&rnd=1467034518576&pv_a11=1&pv_a12=newarrivals&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26N%3D510%26searchType%3DPredictive%2520Search", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;90024642_reset;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=https://uscollector.tealeaf.ibmcloud.com/collector/collectorPost", "METHOD=OPTIONS", "HEADER=Access-Control-Request-Headers:content-encoding, x-tealeaf, x-tealeaf-messagetypes, content-type, x-tealeaf-saas-appkey, x-tealeaf-saas-tltsid, x-requested-with, x-tealeaftype, x-tealeaf-page-url", "HEADER=Accept-Language:en-US,en;q=0.8", "HEADER=Origin:http://m.jcpenney.com", "HEADER=Access-Control-Request-Method:POST", END_INLINE,
            "URL=https://encrypted-tbn1.gstatic.com/favicon?q=tbn:ANd9GcQSf9UWd0hnBJencNQNLXMB_Ig3D4z0ooO_0_6lwWi8xhQHdj7gWgdxJrtk2W6Dh46guKjrX5ZD", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://encrypted-tbn2.gstatic.com/favicon?q=tbn:ANd9GcSlxWzvY9s7lX5LVg6_Grz46lr5Eus9daxt8MfC-zGXnBj1sTJGGJs6ijNdJgBLggV1TTql2Ww", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://encrypted-tbn3.gstatic.com/favicon?q=tbn:ANd9GcShz7B7_rhGrfhF07xSC37yJZhCbH-HOdhQ7xN7beQvcWLHXIi9EUwVrhKOGOM", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("DT_API_Search_sortBy_Organic_OPTIONS", NS_AUTO_STATUS);
                        
    ns_start_transaction("DT_API_Search_sortBy_Organic_GET");
    ns_web_url ("DT_API_Search_sortBy_Organic",
        "URL=https://search-api.jcpenney.com/v1/search-service/s?productGridView=medium&UsrSeg=aupg1c&mode=1&searchTerm={SearchTermEncFP}&sort={YodaSortBySP}&responseType=organic",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467032499374&vn1=4.16.9&ec=utf-8&pi=Search%20Results&cg=Mobile%7CSearch%20Results&se=shirts&sr=960&rnd=1467034518576&pv_a11=1&pv_a12=newarrivals&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26N%3D510%26searchType%3DPredictive%2520Search", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;90024642_reset;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=https://uscollector.tealeaf.ibmcloud.com/collector/collectorPost", "METHOD=OPTIONS", "HEADER=Access-Control-Request-Headers:content-encoding, x-tealeaf, x-tealeaf-messagetypes, content-type, x-tealeaf-saas-appkey, x-tealeaf-saas-tltsid, x-requested-with, x-tealeaftype, x-tealeaf-page-url", "HEADER=Accept-Language:en-US,en;q=0.8", "HEADER=Origin:http://m.jcpenney.com", "HEADER=Access-Control-Request-Method:POST", END_INLINE,
            "URL=https://encrypted-tbn1.gstatic.com/favicon?q=tbn:ANd9GcQSf9UWd0hnBJencNQNLXMB_Ig3D4z0ooO_0_6lwWi8xhQHdj7gWgdxJrtk2W6Dh46guKjrX5ZD", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://encrypted-tbn2.gstatic.com/favicon?q=tbn:ANd9GcSlxWzvY9s7lX5LVg6_Grz46lr5Eus9daxt8MfC-zGXnBj1sTJGGJs6ijNdJgBLggV1TTql2Ww", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://encrypted-tbn3.gstatic.com/favicon?q=tbn:ANd9GcShz7B7_rhGrfhF07xSC37yJZhCbH-HOdhQ7xN7beQvcWLHXIi9EUwVrhKOGOM", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("DT_API_Search_sortBy_Organic_GET", NS_AUTO_STATUS);
    
//    ns_start_transaction("DT_API_Search_sortBy_sitepromo_GET");
//    ns_web_url ("DT_API_Search_sortBy_sitepromo",
//        //"URL=https://browse-api.jcpenney.com/v1/j/sitepromo/N-e3?Ntt=MENS%20T%20SHIRT",
//        "URL=https://browse-api.jcpenney.com/v1/j/sitepromo?Ntt={SearchTermEncFP}",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//        INLINE_URLS,
//            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467032499374&vn1=4.16.9&ec=utf-8&pi=Search%20Results&cg=Mobile%7CSearch%20Results&se=shirts&sr=960&rnd=1467034518576&pv_a11=1&pv_a12=newarrivals&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26N%3D510%26searchType%3DPredictive%2520Search", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;90024642_reset;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
//            "URL=https://uscollector.tealeaf.ibmcloud.com/collector/collectorPost", "METHOD=OPTIONS", "HEADER=Access-Control-Request-Headers:content-encoding, x-tealeaf, x-tealeaf-messagetypes, content-type, x-tealeaf-saas-appkey, x-tealeaf-saas-tltsid, x-requested-with, x-tealeaftype, x-tealeaf-page-url", "HEADER=Accept-Language:en-US,en;q=0.8", "HEADER=Origin:http://m.jcpenney.com", "HEADER=Access-Control-Request-Method:POST", END_INLINE,
//            "URL=https://encrypted-tbn1.gstatic.com/favicon?q=tbn:ANd9GcQSf9UWd0hnBJencNQNLXMB_Ig3D4z0ooO_0_6lwWi8xhQHdj7gWgdxJrtk2W6Dh46guKjrX5ZD", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=https://encrypted-tbn2.gstatic.com/favicon?q=tbn:ANd9GcSlxWzvY9s7lX5LVg6_Grz46lr5Eus9daxt8MfC-zGXnBj1sTJGGJs6ijNdJgBLggV1TTql2Ww", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=https://encrypted-tbn3.gstatic.com/favicon?q=tbn:ANd9GcShz7B7_rhGrfhF07xSC37yJZhCbH-HOdhQ7xN7beQvcWLHXIi9EUwVrhKOGOM", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
//    );
//    ns_end_transaction("DT_API_Search_sortBy_sitepromo_GET", NS_AUTO_STATUS);
    PDPLabel:
    ns_page_think_time(0);

}    
}

