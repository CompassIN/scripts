/*-----------------------------------------------------------------------------
    Name:Pagination
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
void Pagination()
{  
	    
	int YodaProductPage = ns_get_int_val("YodaProductPageDP");
	if(YodaProductPage != 1){

	int PaginationCheckVar = ns_get_int_val("YodaPageCountSP");
    if(PaginationCheckVar < 2){
    	ns_start_transaction("MOB_SearchNoPaginationAvailable");
		ns_end_transaction("MOB_SearchNoPaginationAvailable",NS_AUTO_STATUS);
    	goto PaginationLable;
    }

    
    ns_start_transaction("MOB_Search_Pagination");
    ns_web_url ("MB_API_Search_Pagination",
       // "URL=https://search-api.jcpenney.com/v1/search-service/s?responseType=content&page=2&searchTerm={SearchTermEncFP}",
        "URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/s?searchTerm={SearchTermEncFP}&productGridView=medium&mode=1&page=2",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;fsr.s;_IFR_jcpenney.com_fsr.a;mmapi.store.p.0;mmapi.store.s.0",
        "PreSnapshot=webpage_1467032861968.png",
        "Snapshot=webpage_1467032866877.png",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467032499374&vn1=4.16.9&ec=utf-8&pi=Search%20Results&cg=Mobile%7CSearch%20Results&se=shirts&sr=9468&rnd=1467035509989&pv_a5=Gender&pv_a6=girls&pv_a7=Gender&pv_a8=girls&pv_a9=Gender&pv_a10=girls&pv_a12=bestmatch&pv_a21=shirts&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26searchType%3DPredictive%2520Search", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;90024642_reset;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0316201620563226C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0310201620413629C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0425201620581316C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0513201520392916C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://netvision.cavisson.com/test_rum?s=000337146862626668687&op=timing&pi=2&d=1|0|-1|-1|-1|452|-1|-1|-1|-1|-1|-1|-1|-1|2354|2354|119|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26N%3D510%26searchType%3DPredictive%2520Search|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.171%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DhNmTyXybYRoXPVnIjZ0viIe8pc2vEwep%3B%20CavSID%3D000337146862626668687%3B%20_ga%3DGA1.2.1047313294.1467032525%3B%20_gat%3D1%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20recentSearchData%3D%255B%2522shirts%2522%255D%3B%20clientTestPool1%3Drwd%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467032827417%2C%2C%2C%3B%20CavLTS%3D78498426%3B%20CavPI%3D2%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78498426&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("MOB_Search_Pagination", NS_AUTO_STATUS);
    
     ns_start_transaction("MB_API_Search_Pagination_organic_GET");
    	ns_web_url ("MB_API_Search_Pagination_organic",
        "URL=https://search-api.jcpenney.com/v1/search-service/s?productGridView=medium&page=2&searchTerm={SearchTermEncFP}&responseType=organic",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;fsr.s;_IFR_jcpenney.com_fsr.a;mmapi.store.p.0;mmapi.store.s.0",
        "PreSnapshot=webpage_1467032861968.png",
        "Snapshot=webpage_1467032866877.png",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467032499374&vn1=4.16.9&ec=utf-8&pi=Search%20Results&cg=Mobile%7CSearch%20Results&se=shirts&sr=9468&rnd=1467035509989&pv_a5=Gender&pv_a6=girls&pv_a7=Gender&pv_a8=girls&pv_a9=Gender&pv_a10=girls&pv_a12=bestmatch&pv_a21=shirts&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26searchType%3DPredictive%2520Search", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;90024642_reset;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0316201620563226C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0310201620413629C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0425201620581316C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0513201520392916C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://netvision.cavisson.com/test_rum?s=000337146862626668687&op=timing&pi=2&d=1|0|-1|-1|-1|452|-1|-1|-1|-1|-1|-1|-1|-1|2354|2354|119|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26N%3D510%26searchType%3DPredictive%2520Search|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.171%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DhNmTyXybYRoXPVnIjZ0viIe8pc2vEwep%3B%20CavSID%3D000337146862626668687%3B%20_ga%3DGA1.2.1047313294.1467032525%3B%20_gat%3D1%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20recentSearchData%3D%255B%2522shirts%2522%255D%3B%20clientTestPool1%3Drwd%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467032827417%2C%2C%2C%3B%20CavLTS%3D78498426%3B%20CavPI%3D2%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78498426&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("MB_API_Search_Pagination_organic_GET", NS_AUTO_STATUS);

    /*
     ns_start_transaction("MB_API_Search_Pagination_sitepromo_GET");
    ns_web_url ("MB_API_Search_Pagination_sitepromo",
        "URL=https://browse-api.jcpenney.com/v1/j/sitepromo?Ntt={SearchTermEncFP}",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;fsr.s;_IFR_jcpenney.com_fsr.a;mmapi.store.p.0;mmapi.store.s.0",
        "PreSnapshot=webpage_1467032861968.png",
        "Snapshot=webpage_1467032866877.png",
        INLINE_URLS,
            "URL=http://www88.jcpenney.com/cm?tid=1&ci=90024642&vn2=e4.0&st=1467032499374&vn1=4.16.9&ec=utf-8&pi=Search%20Results&cg=Mobile%7CSearch%20Results&se=shirts&sr=9468&rnd=1467035509989&pv_a5=Gender&pv_a6=girls&pv_a7=Gender&pv_a8=girls&pv_a9=Gender&pv_a10=girls&pv_a12=bestmatch&pv_a21=shirts&pv_a23=Google%20Chrome&pv_a38=responsive&ul=http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26searchType%3DPredictive%2520Search", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;CoreID6;TestSess3;90024642_login;marketing;TLTSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;90024642_reset;fsr.s;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0316201620563226C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0310201620413629C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0425201620581316C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://s7d9.scene7.com/is/image/JCPenney/DP0513201520392916C?$gallery$", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://netvision.cavisson.com/test_rum?s=000337146862626668687&op=timing&pi=2&d=1|0|-1|-1|-1|452|-1|-1|-1|-1|-1|-1|-1|-1|2354|2354|119|-1|-1|-1||http%3A%2F%2Fm.jcpenney.com%2Fgallery%2Fsearch%3FNtt%3Dshirts%26N%3D510%26searchType%3DPredictive%2520Search|m.jcpenney.com|BNSOrigin%3DB%3B%20BNSPrevPercentage%3D0%3B%20mmcore.tst%3D0.171%3B%20cmTPSet%3DY%3B%20marketing%3Ddirect%3B%20TLTSID%3DhNmTyXybYRoXPVnIjZ0viIe8pc2vEwep%3B%20CavSID%3D000337146862626668687%3B%20_ga%3DGA1.2.1047313294.1467032525%3B%20_gat%3D1%3B%20DPUserTracking%3Dnull%3B%20DPSessionTimeOutInterval%3D1200000%3B%20recentSearchData%3D%255B%2522shirts%2522%255D%3B%20clientTestPool1%3Drwd%3B%20CavSF%3D0%2C%2C1%3A2%3A100%2C1467032827417%2C%2C%2C%3B%20CavLTS%3D78498426%3B%20CavPI%3D2%3B|0|101|-1|24|24|WINDOWS|MOZILLA%2F5.0%20(WINDOWS%20NT%206.1)%20APPLEWEBKIT%2F537.36%20(KHTML%2C%20LIKE%20GECKO)%20CHROME%2F39.0.2171.71%20SAFARI%2F537.36|en-US|%5Bobject%20PluginArray%5D|Mozilla|0|PC|39.0|7|-1|1|0|-1|-1&lts=78498426&d2=-1|-1|-1|2|100", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("MB_API_Search_Pagination_sitepromo_GET", NS_AUTO_STATUS);
 */  
    PaginationLable:
    ns_page_think_time(0);
    
	}
}

