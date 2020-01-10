/*-----------------------------------------------------------------------------
    Name:Browse
    Recorded By: anjali
    Date of recording: 06/27/2016 02:50:18
    Flow details:
    Build details: 4.1.4 (build# 43)
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
#include "Util.c"

void Browse()
{

   // ns_add_cookie_val_ex("SVCVER", NULL, NULL, "latest");
	char CategoryUrlbuff1[256] = "", Categorybuff1[128] = "", GalleryNamebuff1[128] = "", GalleryNamebuff[128] = "";
   
  
   ns_start_transaction("MOB_Department");    
   ns_web_url ("DepartmentPage",
        "URL=https://m.jcpenney.com/d/{DepartmentNameFP}",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/images/flyout_arrow.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;_gat;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;shipToCurrencyCode;shipToCountry;mbox;DPUserSession;_ga;c17;v53;s_cc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;_br_uid_2;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;fsr.s;DPIdentifier;LegacyIdentifier;s_sq;c23;_4c_", "REDIRECT=YES", "LOCATION=http://akamai.mathtag.com/event/img?akam_state=1&no_log&mt_nsync&mm_bnc&relay=http%3A%2F%2Fak-sync.datasvc.mediamath.com%2Ffcgi.insight-drp%3Furl%3D-%26referer%3Drelaytest%26ip_address%3D127.0.0.1%26cpcode%3D52202%26akid%3D3ye5pF63Cm1V2kWd0yFT3Mxca261tpFE5iao9Y03LAdT1R_XDhuY6eA%26blob-id%3D7%26blob%3D%5BMM_UUID%5D%5Cr%5Cn&rurl=4-ERe3zDAKcvDHlFo%2fysl6AWanbyL%2faXqMjA7FR1d0iq0E5oMACbW6Zu+9ROwDI6tTV0lKgi7Kw6l6CnckmeFpcJ7Mz68QlKxuWJ+FqxM9PzWXspW8UAqJu+GJjxeMELfdNaJZcphDPAc587qnZrq51fYBoHkOqPT3SITZfFCwLSElVCnJY2bKhAHYbHed8OnImqoAwwePBB1IUzJNJJncUD22Akn7NMuA%2f6asPJ9HKld6ZGXCdf5nCXDR8%2f0ZDmWv1HZj9m9FE5RJSspGlmy1eJgmIz2IXh63ltt9mLjpZd+5r9jhSWi7OX%2fC18aeEttR1rOd3jeR+F4wyqk5xdc7xkC8kpTgc%2fVQ5dyQTLegwOHhh7Q80oySzCjPNQ1xtn%2fAgC%2fhUo5JSHXzx0uWRFtXKh+vapAmf1wXs96hIa3+wBGRvVNr+7oZu0qmy2kzcS1b7+3YCev6EsKkdjZ4OId745aDZY7v%2fpGZ0GQdyj%2fZyjR4uw0uhTDOuZmzv0dNCTjUxFSz%2f%2fl%2f00z7WfhoTcS8O%2fkVvOQXS4xu9W2upGvv2wcZ50cWlF3N530jCwpk3kZHzS2cDUB1vFDFsPYE8NkxzlP909KvfpQ66tOqxeeLKYrL8rlrnzZvEIJBQ+CXxgsF&V=3-VeZ+D9ia51nJvxQ38JFazXGphx084d%2f3mKsi8IZQZsOahpDX5Qimew%3d%3d", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/loading.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;_gat;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;shipToCurrencyCode;shipToCountry;DPUserSession;_ga;c17;v53;s_cc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;_br_uid_2;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;fsr.s;s_sq;c23;_4c_;mbox;DPIdentifier", END_INLINE
    );
    ns_end_transaction("MOB_Department", NS_AUTO_STATUS);
     

    
    if(!((strcmp((ns_eval_string("{YodaCategoryUrlSP}")),"")))){
    	ns_start_transaction("MOB_Department_CSR");
    	ns_end_transaction("MOB_Department_CSR", NS_AUTO_STATUS);
    
     ns_start_transaction("MB_Department_Aggregatepages_OPTIONS");
      ns_web_url ("MB_API_Browse_Aggregatepages1",
        "URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/d/{DepartmentNameFP}",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1416316862915.png",
        "Snapshot=webpage_1416316882585.png",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
    );
	ns_end_transaction("MB_Department_Aggregatepages_OPTIONS", NS_AUTO_STATUS);
     
    ns_start_transaction("MB_Department_Aggregatepages_GET");
      ns_web_url ("MB_API_departments",
        "URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/d/{DepartmentNameFP}",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
    );
	ns_end_transaction("MB_Department_Aggregatepages_GET", NS_AUTO_STATUS);

	snprintf(CategoryUrlbuff1,256,"%s",ns_eval_string("{YodaCategoryUrlSP1}"));
	ns_save_string(CategoryUrlbuff1, "YodaCategoryUrlDP");

	snprintf(Categorybuff1,128,"%s",ns_eval_string("{YodaCategorySP1}"));
	ns_save_string(Categorybuff1, "YodaCategoryDP");

	snprintf(GalleryNamebuff1,128,"%s",ns_eval_string("{YodagalleryNameSP1}"));
	ns_save_string(GalleryNamebuff1, "YodagalleryNameDP");
  }
  else{
	char src_buff[512] = "", dest_buf[512] = "";
   int length = 0;
   snprintf(src_buff,512, "%s", ns_eval_string("{YodaCategoryUrlSP}"));
   length = strlen(src_buff);
  // printf("src_buff = %s , length = %d \n\n",  src_buff, length);
   if (length > 0)
      memset(dest_buf, 0, 512);
     replace(src_buff, dest_buf, length);
   ns_save_string(dest_buf, "YodaCategoryUrlDP");

   char src_buff1[512] = "", dest_buf1[512] = "";
   int length1 = 0;
   snprintf(src_buff1,512, "%s", ns_eval_string("{YodaCategorySP}"));
   length1 = strlen(src_buff1);
  // printf("src_buff = %s , length = %d \n\n",  src_buff, length);
   if (length1 > 0)
      memset(dest_buf1, 0, 512);
     replace(src_buff1, dest_buf1, length1);
   ns_save_string(dest_buf1, "YodaCategoryDP");

   	snprintf(GalleryNamebuff,128,"%s",ns_eval_string("{YodagalleryNameSP}"));
	ns_save_string(GalleryNamebuff, "YodagalleryNameDP");
  	
    }
 
    ns_start_transaction("MB_Department_SiteWidePromo_GET");    	
        ns_web_url ("Deptsitepromo",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/d/{DepartmentNameFP}",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/jsp/search/suggest.jsp?term=GE%20dray", "HEADER=X-Requested-With:XMLHttpRequest", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;SyndicateSiteRedirectHost;DPSessionTimeOutInterval;cmTPSet;previousUrlCookie;x-apm-brtm-geo;DP_USER_FAVCOUNT;rr_rcs;x-apm-brtm-bt-p;x-apm-brtm-bt-pv;x-apm-brtm-bt-url;WMRUMC;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;lastReferredSource;firstVisitedDate;referredSources;__gads;x-apm-brtm-response-bt-id", "PreSnapshot=webpage_1449828292249.png", "Snapshot=webpage_1449828292890.png", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/jsp/search/suggest.jsp?term=GE%20drayer", "HEADER=X-Requested-With:XMLHttpRequest", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;SyndicateSiteRedirectHost;DPSessionTimeOutInterval;cmTPSet;previousUrlCookie;x-apm-brtm-geo;DP_USER_FAVCOUNT;rr_rcs;x-apm-brtm-bt-p;x-apm-brtm-bt-pv;x-apm-brtm-bt-url;WMRUMC;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;lastReferredSource;firstVisitedDate;referredSources;__gads;x-apm-brtm-response-bt-id", "PreSnapshot=webpage_1449828292890.png", "Snapshot=webpage_1449828294131.png",             END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/jsp/search/suggest.jsp?term=GE%20dr", "HEADER=X-Requested-With:XMLHttpRequest", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;SyndicateSiteRedirectHost;DPSessionTimeOutInterval;cmTPSet;previousUrlCookie;x-apm-brtm-geo;DP_USER_FAVCOUNT;rr_rcs;x-apm-brtm-bt-p;x-apm-brtm-bt-pv;x-apm-brtm-bt-url;WMRUMC;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;lastReferredSource;firstVisitedDate;referredSources;__gads;x-apm-brtm-response-bt-id", "PreSnapshot=webpage_1449828294131.png", "Snapshot=webpage_1449828295287.png", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/jsp/search/suggest.jsp?term=GE%20dryer", "HEADER=X-Requested-With:XMLHttpRequest", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=x-apm-brtm-response-bt-page;DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;SyndicateSiteRedirectHost;DPSessionTimeOutInterval;cmTPSet;previousUrlCookie;x-apm-brtm-geo;rr_rcs;x-apm-brtm-bt-p;x-apm-brtm-bt-pv;x-apm-brtm-bt-url;WMRUMC;__gads;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;lastReferredSource;firstVisitedDate;referredSources;DP_USER_FAVCOUNT;x-apm-brtm-response-bt;x-apm-brtm-response-bt-id", "PreSnapshot=webpage_1449828297481.png", "Snapshot=webpage_1449828297767.png",             END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/jsp/search/suggest.jsp?term=GE%20dr", END_INLINE
    );
    ns_end_transaction("MB_Department_SiteWidePromo_GET", NS_AUTO_STATUS);  
    

//    ns_start_transaction("MOB_Department_ProductSummaries_GET");
//    ns_web_url ("MB_API_Department_FilterContent",
//        "URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-summaries-aggregator?ppId={RootPPIDFP}",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//    );
//    ns_end_transaction("MOB_Department_ProductSummaries_GET", NS_AUTO_STATUS);   
    ns_page_think_time(0);  


    ns_remove_cookie("yoda-home", NULL, NULL, 0);
    // Select Dresses category
     

 

   if((!strcmp(ns_eval_string("{YodaCategoryUrlSP}"),""))&& (!strcmp(ns_eval_string("{YodaCategoryUrlSP1}"),""))){
        ns_start_transaction("MOB_NoCategoryAvailable");
		ns_end_transaction("MOB_NoCategoryAvailable",NS_AUTO_STATUS);
		ns_exit_session();
      } 
      
 
     
 //  ns_add_cookie_val_ex("SVCVER", NULL, NULL, "latest"); 
    ns_start_transaction("MOB_Category");    
    ns_web_url ("MB_API_Browse_categories",
        "URL=https://m.jcpenney.com/g{YodaCategoryUrlDP}",
        //"URL=https://m.jcpenney.com/g{YodaCategoryUrlDP}&debug=noSSR",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "HEADER=Upgrade-Insecure-Requests:1",
        INLINE_URLS,
            "URL=http://m.jcpenney.com/b/assets/css/gallery.css?v=20160621140636", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau", END_INLINE,
            "URL=http://m.jcpenney.com/b/2.jcp.min.20160621140613.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau", END_INLINE,
            "URL=http://m.jcpenney.com/b/3.jcp.min.20160621140613.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau", END_INLINE,
            "URL=http://m.jcpenney.com/b/4.jcp.min.20160621140613.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau", END_INLINE,
            "URL=http://m.jcpenney.com/b/GalleryPage/gallery.html?v=20160621140636", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau", END_INLINE,
            "URL=http://m.jcpenney.com/b/components/JCPSortAndFilter/JCPSortAndFilter.html?v=20160621140636", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau", END_INLINE,
            "URL=http://m.jcpenney.com/b/5.jcp.min.20160621140613.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;_IFR_jcpenney.com_fsr.a", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/img/top_icon.png", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;_IFR_jcpenney.com_fsr.a", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/img/arrow_down.svg", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;_IFR_jcpenney.com_fsr.a", END_INLINE
    );
    ns_end_transaction("MOB_Category", NS_AUTO_STATUS);
    
   
   	if(!((strcmp((ns_eval_string("{YodaCategoryDP}")),"")))){
    	ns_start_transaction("MOB_NoCategoryIdAvailable");
    	ns_end_transaction("MOB_NoCategoryIdAvailable", NS_AUTO_STATUS);
    	ns_exit_session();
        }
 
      ns_start_transaction("MB_Category_searchserviceOrganic_OPTIONS");
      ns_web_url ("MB_API_Category_searchservice_organi1c",
      	//"URL=https://search-api.jcpenney.com/v1/search-service/g/women/N-bwo3xZ1z0jyfmZ1z0k3ygZ1z0jychZ1z0jqwk?productGridView=&responseType=organic",
        //"URL=https://search-api.jcpenney.com/v1/search-service/g{GalleryNameDP}?productGridView=&responseType=organic",
        "URL=https://search-api.jcpenney.com/v1/search-service/g{YodagalleryNameDP}?productGridView=medium&{YodaCategoryDP}&responseType=organic",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1416316862915.png",
        "Snapshot=webpage_1416316882585.png",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
    );
	ns_end_transaction("MB_Category_searchserviceOrganic_OPTIONS", NS_AUTO_STATUS);
        
      ns_start_transaction("MB_Category_searchserviceOrganic_GET");
      ns_web_url ("MB_API_Category_searchservice_organic",
      	//"URL=https://search-api.jcpenney.com/v1/search-service/g/women/N-bwo3xZ1z0jyfmZ1z0k3ygZ1z0jychZ1z0jqwk?productGridView=&responseType=organic",
        //"URL=https://search-api.jcpenney.com/v1/search-service/g{GalleryNameDP}?productGridView=&responseType=organic",
        "URL=https://search-api.jcpenney.com/v1/search-service/g{YodagalleryNameDP}?productGridView=medium&{YodaCategoryDP}&responseType=organic",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1416316862915.png",
        "Snapshot=webpage_1416316882585.png",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
    );
	ns_end_transaction("MB_Category_searchserviceOrganic_GET", NS_AUTO_STATUS);
        

//	if(!((strcmp((ns_eval_string("{CheckCSRSP}")),"0")))){
//    	ns_start_transaction("MOB_Yoda_Category_CSR");
//    	ns_end_transaction("MOB_Yoda_Category_CSR", NS_AUTO_STATUS);
    	
    	
    	if(((strcmp((ns_eval_string("{CheckCSRSP}")),"")))){
    	ns_start_transaction("MOB_Category_CSR");
    	ns_end_transaction("MOB_Category_CSR", NS_AUTO_STATUS);
    	
    	
      ns_start_transaction("MB_Category_searchservice_GET");
      ns_web_url ("MB_API_Category_searchservice",
        //"URL=https://search-api.jcpenney.com/v1/search-service/{YodaCategoryUrlDP}?UsrSeg=aupg1c",
        //"URL=https://search-api.jcpenney.com/v1/search-service/g{YodaCategoryUrlDP}?responseType=content",
       // "URL=https://search-api.jcpenney.com/v1/search-service/g{YodagalleryNameDP}?responseType=content&{YodaCategoryDP}",
        "URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/g{YodaCategoryUrlDP}",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1416316862915.png",
        "Snapshot=webpage_1416316882585.png",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
    );
	ns_end_transaction("MB_Category_searchservice_GET", NS_AUTO_STATUS);
	
     }
   
//    ns_start_transaction("MB_Category_searchserviceOrganic_GET");
//        ns_web_url ("MB_API_Category_searchserviceOrganic",
//            //"URL=https://search-api.jcpenney.com/v1/search-service/g/shirt?productGridView=medium&responseType=organic",
//            "URL=https://search-api.jcpenney.com/v1/search-service/g{YodaCategoryUrlDP}?productGridView=medium&responseType=organic",
//            "HEADER=Accept-Language:en-us,en;q=0.5",
//            INLINE_URLS,
//            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
//            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
//        );
//	ns_end_transaction("MB_Category_searchserviceOrganic_GET", NS_AUTO_STATUS);
    
    ns_start_transaction("MB_API_Category_SiteWidePromo_GET");
    ns_web_url ("MB_API_Browse_categories2",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/g{YodagalleryNameDP}",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;_IFR_jcpenney.com_fsr.a;fsr.s;mmapi.store.p.0;mmapi.store.s.0",
        "PreSnapshot=webpage_1467019105460.png",
        "Snapshot=webpage_1467019108905.png",
        INLINE_URLS,
            "URL=http://m.jcpenney.com/b/assets/css/gallery.css?v=20160621140636", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau", END_INLINE,
            "URL=http://m.jcpenney.com/b/2.jcp.min.20160621140613.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau", END_INLINE,
            "URL=http://m.jcpenney.com/b/3.jcp.min.20160621140613.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau", END_INLINE,
            "URL=http://m.jcpenney.com/b/4.jcp.min.20160621140613.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau", END_INLINE,
            "URL=http://m.jcpenney.com/b/GalleryPage/gallery.html?v=20160621140636", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau", END_INLINE,
            "URL=http://m.jcpenney.com/b/components/JCPSortAndFilter/JCPSortAndFilter.html?v=20160621140636", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau", END_INLINE,
            "URL=http://m.jcpenney.com/b/5.jcp.min.20160621140613.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;_IFR_jcpenney.com_fsr.a", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/img/top_icon.png", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;_IFR_jcpenney.com_fsr.a", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/img/arrow_down.svg", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;clientTestPool1;DPJSESSIONID;DPUserTracking;DPSessionTimeOutInterval;rr_rcs;cmTPSet;marketing;TLTSID;_ga;_gat;CavSID;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;_IFR_jcpenney.com_fsr.a", END_INLINE
    );
    ns_end_transaction("MB_API_Category_SiteWidePromo_GET", NS_AUTO_STATUS);
   
//    ns_start_transaction("MOB_Category_ProductSummaries_GET");
//        ns_web_url ("MB_API_Category_FilterContent",
//        "URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-summaries-aggregator?ppId={RootPPIDFP}",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//    );
//    ns_end_transaction("MOB_Category_ProductSummaries_GET", NS_AUTO_STATUS);         
    ns_page_think_time(0);
    

    // If available product is 1 no need to go for Refinement/Sort , control will be set to ProductPage..
    if(!((strcmp((ns_eval_string("{ProductCountSP}")),"0")))){
    	ns_start_transaction("MOB_NoProductOncategoryPage");
    	ns_end_transaction("MOB_NoProductOncategoryPage", NS_AUTO_STATUS);
    	//goto ProductLabel;
    	ns_exit_session();
    }
    ns_page_think_time(0);


}
