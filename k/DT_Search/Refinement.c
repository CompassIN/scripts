/*-----------------------------------------------------------------------------
    Name:Refinement
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

void Refinement()
{  
	int YodaProductPage = ns_get_int_val("YodaProductPageDP");
	if(YodaProductPage != 1){
	      int MaxNavigatePages = ns_get_int_val("YodaFilterBlockSP_count");
          if (MaxNavigatePages == 0){	
		        ns_start_transaction("COM_SearchNoFilterAvailable");
		        ns_end_transaction("COM_SearchNoFilterAvailable",NS_AUTO_STATUS);
		        goto PDPLabel;
	      }
    int length = 0; 
    char Filterblckbuffer[5024] = "", Filterblckbuffer1[5024] = "", src_buf[512] = "", dest_buf[512] = "", Filterblckvariable[128] = "" , YodaFilterId[28] ="", YodaFacetId[28] = "", ModeType[28] = "", Itemtype[56] = "";

 	int i = ns_get_random_number_int(1, MaxNavigatePages);             // Randomize the filter index 
	
	sprintf(Filterblckvariable,"{YodaFilterBlockSP_%d}", i);                   // To get the Index of  Selected filter block
    snprintf(Filterblckbuffer,5024,"%s",ns_eval_string(Filterblckvariable));              // To get the value at the index
    ns_save_searched_string(NS_ARG_IS_BUF, Filterblckbuffer,  NS_ARG_IS_BUF, src_buf, "rl\":\"", "?", NS_ORD_ANY, NS_FROM_START, NS_SAVE_COMPLETE);
   ns_save_searched_string(NS_ARG_IS_BUF, Filterblckbuffer,  NS_ARG_IS_BUF, Filterblckbuffer1, "apiUrl\":", "}", NS_ORD_ANY, NS_FROM_START, NS_SAVE_COMPLETE);
    
    length = strlen(src_buf);
   
    if (length > 0)
        {
   	 memset(dest_buf, 0, 512);
     replace(src_buf, dest_buf, length);
   }
   else {
   	ns_exit_session();
   }
    ns_save_string(dest_buf, "YodaFilterUrlDP");

   ns_save_searched_string(NS_ARG_IS_BUF, dest_buf, NS_ARG_IS_PARAM, "YodaFilterId", "N-", "?Ntt", NS_ORD_ANY, NS_FROM_START, NS_SAVE_COMPLETE);
   ns_save_searched_string(NS_ARG_IS_BUF, Filterblckbuffer, NS_ARG_IS_PARAM, "YodaFacetId", "\"facetId\":", ",", NS_ORD_ANY, NS_FROM_START, NS_SAVE_COMPLETE);
   ns_save_searched_string(NS_ARG_IS_BUF, Filterblckbuffer, NS_ARG_IS_PARAM, "ModeType", "&mode=", "\",", NS_ORD_ANY, NS_FROM_START, NS_SAVE_COMPLETE); 
	ns_save_searched_string(NS_ARG_IS_BUF, Filterblckbuffer1, NS_ARG_IS_PARAM, "Itemtype", "&", "&productGridView",  1, NS_FROM_START, NS_SAVE_COMPLETE); 
     
    ns_start_transaction("COM_Search_Refinement_OPTIONS");   
    ns_web_url ("DT_API_Search_filters1",
      // "URL=https://search-api.jcpenney.com/v1/search-service/s?responseType=content&activeFacetId={YodaFacetId}&{Itemtype}&mode=1&productGridView=medium&searchTerm={SearchTermEncFP}",
       //"URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/s?searchTerm=shirts&gender=mens&productGridView=medium&mode=1&activeFacetId=6",
       "URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/s?searchTerm={SearchTermEncFP}&{Itemtype}&productGridView=medium&mode=1&activeFacetId={YodaFacetId}&UsrSeg=aupg1c",
       "METHOD=OPTIONS",
       "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467032499374&vn1=4.16.9&ec=utf-8&pi=Search%20Results&cg=Mobile%7CSearch%20Results&se=shirts&sr=9468&rnd=1467035509989&pv_a5=Gender&pv_a6=girls&pv_a7=Gender&pv_a8=girls&pv_a9=Gender&pv_a10=girls&pv_a12=bestmatch&pv_a21=shirts&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26searchType%3DPredictive%2520Search", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;90024642_reset;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0316201620563226C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0310201620413629C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0425201620581316C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0513201520392916C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://netvision.cavisson.com/test_rum?s=000337146862626668687&op=timing&pi=2&d=1|0|-1|-1|-1|452|-1|-1|-1|-1|-1|-1|-1|-1|2354|2354|119|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26N%3D510%26searchType%3DPredictive%2520Search|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.171%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DhNmTyXybYRoXPVnIjZ0viIe8pc2vEwep%3B%20CavSID%3D000337146862626668687%3B%20_ga%3DGA1.2.1047313294.1467032525%3B%20_gat%3D1%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20recentSearchData%3D%255B%2522shirts%2522%255D%3B%20clientTestPool1%3Drwd%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467032827417%2C%2C%2C%3B%20CavLTS%3D78498426%3B%20CavPI%3D2%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78498426&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("COM_Search_Refinement_OPTIONS", NS_AUTO_STATUS);
            
    ns_start_transaction("COM_Search_Refinement_GET");   
    ns_web_url ("DT_API_Search_filters",
       //"URL=https://search-api.jcpenney.com/v1/search-service/s?responseType=content&activeFacetId={YodaFacetId}&{Itemtype}&mode=1&productGridView=medium&searchTerm={SearchTermEncFP}",
       "URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/s?searchTerm={SearchTermEncFP}&{Itemtype}&productGridView=medium&mode=1&activeFacetId={YodaFacetId}&UsrSeg=aupg1c",
       "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467032499374&vn1=4.16.9&ec=utf-8&pi=Search%20Results&cg=Mobile%7CSearch%20Results&se=shirts&sr=9468&rnd=1467035509989&pv_a5=Gender&pv_a6=girls&pv_a7=Gender&pv_a8=girls&pv_a9=Gender&pv_a10=girls&pv_a12=bestmatch&pv_a21=shirts&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26searchType%3DPredictive%2520Search", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;90024642_reset;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0316201620563226C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0310201620413629C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0425201620581316C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0513201520392916C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://netvision.cavisson.com/test_rum?s=000337146862626668687&op=timing&pi=2&d=1|0|-1|-1|-1|452|-1|-1|-1|-1|-1|-1|-1|-1|2354|2354|119|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26N%3D510%26searchType%3DPredictive%2520Search|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.171%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DhNmTyXybYRoXPVnIjZ0viIe8pc2vEwep%3B%20CavSID%3D000337146862626668687%3B%20_ga%3DGA1.2.1047313294.1467032525%3B%20_gat%3D1%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20recentSearchData%3D%255B%2522shirts%2522%255D%3B%20clientTestPool1%3Drwd%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467032827417%2C%2C%2C%3B%20CavLTS%3D78498426%3B%20CavPI%3D2%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78498426&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("COM_Search_Refinement_GET", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_Search_filters_Organic_OPTIONS");   
    ns_web_url ("DT_API_Search_filters_Organic1",
       "URL=https://search-api.jcpenney.com/v1/search-service/s?productGridView=medium&UsrSeg=aupg1c&activeFacetId={YodaFacetId}&{Itemtype}&mode=1&searchTerm={SearchTermEncFP}&responseType=organic",
       "METHOD=OPTIONS",
       "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467032499374&vn1=4.16.9&ec=utf-8&pi=Search%20Results&cg=Mobile%7CSearch%20Results&se=shirts&sr=9468&rnd=1467035509989&pv_a5=Gender&pv_a6=girls&pv_a7=Gender&pv_a8=girls&pv_a9=Gender&pv_a10=girls&pv_a12=bestmatch&pv_a21=shirts&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26searchType%3DPredictive%2520Search", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;90024642_reset;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0316201620563226C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0310201620413629C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0425201620581316C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0513201520392916C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://netvision.cavisson.com/test_rum?s=000337146862626668687&op=timing&pi=2&d=1|0|-1|-1|-1|452|-1|-1|-1|-1|-1|-1|-1|-1|2354|2354|119|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26N%3D510%26searchType%3DPredictive%2520Search|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.171%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DhNmTyXybYRoXPVnIjZ0viIe8pc2vEwep%3B%20CavSID%3D000337146862626668687%3B%20_ga%3DGA1.2.1047313294.1467032525%3B%20_gat%3D1%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20recentSearchData%3D%255B%2522shirts%2522%255D%3B%20clientTestPool1%3Drwd%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467032827417%2C%2C%2C%3B%20CavLTS%3D78498426%3B%20CavPI%3D2%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78498426&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("DT_API_Search_filters_Organic_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_Search_filters_Organic_GET");   
    ns_web_url ("DT_API_Search_filters_Organic",
     "URL=https://search-api.jcpenney.com/v1/search-service/s?productGridView=medium&UsrSeg=aupg1c&activeFacetId={YodaFacetId}&{Itemtype}&mode=1&searchTerm={SearchTermEncFP}&responseType=organic",
       "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467032499374&vn1=4.16.9&ec=utf-8&pi=Search%20Results&cg=Mobile%7CSearch%20Results&se=shirts&sr=9468&rnd=1467035509989&pv_a5=Gender&pv_a6=girls&pv_a7=Gender&pv_a8=girls&pv_a9=Gender&pv_a10=girls&pv_a12=bestmatch&pv_a21=shirts&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26searchType%3DPredictive%2520Search", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;90024642_reset;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0316201620563226C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0310201620413629C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0425201620581316C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0513201520392916C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://netvision.cavisson.com/test_rum?s=000337146862626668687&op=timing&pi=2&d=1|0|-1|-1|-1|452|-1|-1|-1|-1|-1|-1|-1|-1|2354|2354|119|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26N%3D510%26searchType%3DPredictive%2520Search|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.171%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DhNmTyXybYRoXPVnIjZ0viIe8pc2vEwep%3B%20CavSID%3D000337146862626668687%3B%20_ga%3DGA1.2.1047313294.1467032525%3B%20_gat%3D1%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20recentSearchData%3D%255B%2522shirts%2522%255D%3B%20clientTestPool1%3Drwd%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467032827417%2C%2C%2C%3B%20CavLTS%3D78498426%3B%20CavPI%3D2%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78498426&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("DT_API_Search_filters_Organic_GET", NS_AUTO_STATUS);
        
//    ns_start_transaction("DT_API_Search_filters_sitepromo_GET");
//    ns_web_url ("DT_API_Search_filters_sitepromo",
//        "URL=https://browse-api.jcpenney.com/v1/j/sitepromo/N-{YodaFilterId}",
//      //"URL=https://browse-api.jcpenney.com/v1/j/sitepromo/{YodaFilterIdSP}?Ntt={SearchTermEncFP}",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//        INLINE_URLS,
//            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467032499374&vn1=4.16.9&ec=utf-8&pi=Search%20Results&cg=Mobile%7CSearch%20Results&se=shirts&sr=9468&rnd=1467035509989&pv_a5=Gender&pv_a6=girls&pv_a7=Gender&pv_a8=girls&pv_a9=Gender&pv_a10=girls&pv_a12=bestmatch&pv_a21=shirts&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26searchType%3DPredictive%2520Search", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;90024642_reset;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0316201620563226C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0310201620413629C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0425201620581316C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0513201520392916C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
//            "URL=http://netvision.cavisson.com/test_rum?s=000337146862626668687&op=timing&pi=2&d=1|0|-1|-1|-1|452|-1|-1|-1|-1|-1|-1|-1|-1|2354|2354|119|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26N%3D510%26searchType%3DPredictive%2520Search|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.171%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DhNmTyXybYRoXPVnIjZ0viIe8pc2vEwep%3B%20CavSID%3D000337146862626668687%3B%20_ga%3DGA1.2.1047313294.1467032525%3B%20_gat%3D1%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20recentSearchData%3D%255B%2522shirts%2522%255D%3B%20clientTestPool1%3Drwd%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467032827417%2C%2C%2C%3B%20CavLTS%3D78498426%3B%20CavPI%3D2%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78498426&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
//    );
//    ns_end_transaction("DT_API_Search_filters_sitepromo_GET", NS_AUTO_STATUS);

    PDPLabel:
    ns_page_think_time(0);
   
}  
}
