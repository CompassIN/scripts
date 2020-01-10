/*-----------------------------------------------------------------------------
    Name: GetSearchPredictions
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
void GetSearchPredictions()
{  

//	  char DPClusterbuff1[64 + 1]="";
 //     snprintf(DPClusterbuff1,64,"%s",ns_eval_string("{CookieFP}"));
 //     ns_add_cookie_val_ex("DPCluster", NULL, NULL, DPClusterbuff1);
          
	   
    ns_start_transaction("MOB_PredictionsPage");
    ns_web_url ("MB_API_Search_terms_1",
       "URL=https://search-api.jcpenney.com/v1/search-service-autosuggest/predictivesearch?q={PredictiveKeywordFP}&channel=mobile&v=2&shipToCountry=US",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://m.jcpenney.com/b/assets/css/gallery.css?v=20160621140636", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0;clientTestPool1;cmTPSet;marketing;TLTSID;CavSID;CavLTS;CavPI;CavSF;_ga;_gat;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;fsr.s;_IFR_jcpenney.com_fsr.a;recentSearchData", END_INLINE,
            "URL=http://m.jcpenney.com/b/2.jcp.min.20160621140613.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0;clientTestPool1;cmTPSet;marketing;TLTSID;CavSID;CavLTS;CavPI;CavSF;_ga;_gat;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;fsr.s;_IFR_jcpenney.com_fsr.a;recentSearchData", END_INLINE,
            "URL=http://m.jcpenney.com/b/3.jcp.min.20160621140613.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0;clientTestPool1;cmTPSet;marketing;TLTSID;CavSID;CavLTS;CavPI;CavSF;_ga;_gat;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;fsr.s;_IFR_jcpenney.com_fsr.a;recentSearchData", END_INLINE,
            "URL=http://m.jcpenney.com/b/4.jcp.min.20160621140613.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0;clientTestPool1;cmTPSet;marketing;TLTSID;CavSID;CavLTS;CavPI;CavSF;_ga;_gat;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;fsr.s;_IFR_jcpenney.com_fsr.a;recentSearchData", END_INLINE,
            "URL=http://m.jcpenney.com/b/GalleryPage/gallery.html?v=20160621140636", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0;clientTestPool1;cmTPSet;marketing;TLTSID;CavSID;CavLTS;CavPI;CavSF;_ga;_gat;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;fsr.s;_IFR_jcpenney.com_fsr.a;recentSearchData", END_INLINE,
            "URL=http://m.jcpenney.com/b/components/JCPSortAndFilter/JCPSortAndFilter.html?v=20160621140636", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0;clientTestPool1;cmTPSet;marketing;TLTSID;CavSID;CavLTS;CavPI;CavSF;_ga;_gat;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;fsr.s;_IFR_jcpenney.com_fsr.a;recentSearchData", END_INLINE,
            "URL=http://m.jcpenney.com/b/5.jcp.min.20160621140613.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0;clientTestPool1;cmTPSet;marketing;TLTSID;CavSID;CavLTS;CavPI;CavSF;_ga;_gat;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;recentSearchData;fsr.s;_IFR_jcpenney.com_fsr.a", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/img/top_icon.png", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0;cmTPSet;marketing;TLTSID;CavSID;CavLTS;CavPI;CavSF;_ga;_gat;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;recentSearchData;fsr.s;_IFR_jcpenney.com_fsr.a;clientTestPool1", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/img/arrow_down.svg", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0;cmTPSet;marketing;TLTSID;CavSID;CavLTS;CavPI;CavSF;_ga;_gat;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;recentSearchData;fsr.s;_IFR_jcpenney.com_fsr.a;clientTestPool1", END_INLINE,
            "URL=http://www.google.com/adsense/search/ads.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("MOB_PredictionsPage", NS_AUTO_STATUS);
    ns_page_think_time(0);

}


