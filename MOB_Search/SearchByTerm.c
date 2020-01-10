/*-----------------------------------------------------------------------------
    Name:SearchByTerm
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
#include "Util.c"
void SearchByTerm()
{  


    int DoSearch = 0;
    ns_start_transaction("MOB_PredictionsPage");
    ns_web_url ("MB_API_Search_terms_2",
        "URL=https://search-api.jcpenney.com/v1/search-service-autosuggest/predictivesearch?q={SearchTermFP}&channel=mobile&v=2&shipToCountry=US",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0;clientTestPool1;cmTPSet;marketing;TLTSID;CavSID;CavLTS;CavPI;CavSF;_ga;_gat;fsr.s;_IFR_jcpenney.com_fsr.a;DPJSESSIONID;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau",
        "PreSnapshot=webpage_1467032799929.png",
        "Snapshot=webpage_1467032811181.png",
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
    
//    	int OriginCookie = ns_get_random_number_int(1,100);
//        if(OriginCookie <= 85)
//    {}
//    else
//    {
//    	ns_add_cookie_val_ex("SVCVER", NULL, NULL, "false");}
//    	
//    	
//  ns_add_cookie_val_ex("SVCVER", NULL, NULL, "latest");  
      ns_start_transaction("MOB_EnterCompleteTerm");
      if(DoSearch  == 0){
      ns_web_url ("MB_API_Search_CompleteTerm",
        "URL=https://m.jcpenney.com/s?searchTerm={SearchTermFP}",
        //"URL=https://m.jcpenney.com/s/{SearchTermFP}?&debug=noSSR",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;CavLTS;CavPI;CavSF;_ga;_gat;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;recentSearchData;fsr.s;_IFR_jcpenney.com_fsr.a;clientTestPool1;mmapi.store.p.0;mmapi.store.s.0",
        "PreSnapshot=webpage_1467032811844.png",
        "Snapshot=webpage_1467032811900.png"
     );
      }
    else{
    ns_web_url ("MB_API_Search_search",
        //"URL=https://m.jcpenney.com/s/{SearchTermFP}?Ntt={SearchTermFP}",
        "URL=https://m.jcpenney.com/s/{SearchTermFP}?Ntt={SearchTermFP}",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;CavLTS;CavPI;CavSF;_ga;_gat;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;recentSearchData;fsr.s;_IFR_jcpenney.com_fsr.a;clientTestPool1;mmapi.store.p.0;mmapi.store.s.0",
        "PreSnapshot=webpage_1467032811844.png",
        "Snapshot=webpage_1467032811900.png"
    );
    }
   ns_end_transaction("MOB_EnterCompleteTerm", NS_AUTO_STATUS);

   ns_start_transaction("MB_API_Search_searchservice_OPTIONS");
      ns_web_url ("MB_API_Search_searchservice1",
            "URL=https://search-api.jcpenney.com/v1/search-service/s?productGridView=medium&searchTerm={SearchTermEncFP}&responseType=organic",
            "METHOD=OPTIONS",
            "HEADER=Access-Control-Request-Method:GET",
            "HEADER=Accept-Language:en-us,en;q=0.5",
            INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
        );
	ns_end_transaction("MB_API_Search_searchservice_OPTIONS", NS_AUTO_STATUS);
         
   ns_start_transaction("MB_API_Search_searchservice_GET");
      ns_web_url ("MB_API_Search_searchservice",
            "URL=https://search-api.jcpenney.com/v1/search-service/s?productGridView=medium&searchTerm={SearchTermEncFP}&responseType=organic",
            "HEADER=Accept-Language:en-us,en;q=0.5",
            INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
        );
	ns_end_transaction("MB_API_Search_searchservice_GET", NS_AUTO_STATUS);
	
	//printf("\n***********Rendering Param= [%s] *********\n",ns_eval_string("{CheckCSRSP}"));
   
    if((strcmp((ns_eval_string("{CheckCSRSP}")),""))){
    	ns_start_transaction("MOB_EnterCompleteTerm_CSR");
    	ns_end_transaction("MOB_EnterCompleteTerm_CSR", NS_AUTO_STATUS);
    	
       ns_start_transaction("MB_API_Search_responseTypecontent_GET");
        ns_web_url ("MB_Search_responseTypecontent",
            //"URL=https://search-api.jcpenney.com/v1/search-service/s?responseType=content&searchTerm={SearchTermEncFP}",
             "URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/s?searchTerm={SearchTermEncFP}",
            "HEADER=Accept-Language:en-us,en;q=0.5",
            INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
        );
	    ns_end_transaction("MB_API_Search_responseTypecontent_GET", NS_AUTO_STATUS);
	    
     }
   
    
    // If available product is 1 no need to go for Refinement/Sort , control will be set to ProductPage..
    if(!((strcmp((ns_eval_string("{YodaPrdtCountSP}")),"1")))){         //Condition to Check Product Count if it is 1 then it will directly jump to PDPPage
       ns_set_int_val("YodaProductPageDP",1);
       goto ProductLabel;
    }
    
/*  
    ns_start_transaction("MB_API_Search_sitepromo_GET");
    ns_web_url ("MB_API_Search_sitepromo",
        //"URL=https://browse-api.jcpenney.com/v1/j/sitepromo/N-SHEETS?Ntt=QUEEN%20SHEETS",
        "URL=https://browse-api.jcpenney.com/v1/j/sitepromo?Ntt={SearchTermEncFP}",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;CavLTS;CavPI;CavSF;_ga;_gat;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;recentSearchData;fsr.s;_IFR_jcpenney.com_fsr.a;clientTestPool1;mmapi.store.p.0;mmapi.store.s.0",
        "PreSnapshot=webpage_1467032811844.png",
        "Snapshot=webpage_1467032811900.png"
    );
    ns_end_transaction("MB_API_Search_sitepromo_GET", NS_AUTO_STATUS);
*/
    ns_start_transaction("MB_API_Search_SiteWidePromo_OPTIONS");
    ns_web_url ("MB_API_Search_SiteWidePromo1",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/s",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-US,en;q=0.8",
    );
    ns_end_transaction("MB_API_Search_SiteWidePromo_OPTIONS", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_Search_SiteWidePromo_GET");
    ns_web_url ("MB_API_Search_SiteWidePromo",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/s",
        "HEADER=Accept-Language:en-US,en;q=0.8",
    );
    ns_end_transaction("MB_API_Search_SiteWidePromo_GET", NS_AUTO_STATUS);
    
   // If available product is 1 no need to go for Refinement/Sort , control will be set to ProductPage..
    if(!((strcmp((ns_eval_string("{YodaProductCountSP}")),"")))){         //Condition to Check Product Count if it is 0 then it will directly jump to PDPPage
    //goto ProductLabel;
    ns_start_transaction("MOB_Search_NoProductToNavigate");
    ns_end_transaction("MOB_Search_NoProductToNavigate", NS_AUTO_STATUS);
    char searchterm [128 + 1]="";
     snprintf(searchterm,128,"%s",ns_eval_string("{SearchTermFP}"));
     ns_save_data_eval("/home/netstorm/work/data/JCPenney/MOB_BadSearchTerm.txt", NS_APPEND_FILE, searchterm);
    ns_exit_session();
    }
 
	ProductLabel:
    ns_page_think_time(0);
   

}
