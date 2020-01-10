/*-----------------------------------------------------------------------------
    Name: Browse
    Recorded By: abhishek
    Date of recording: 02/18/2017 12:56:02
    Flow details:
    Build details: 4.1.6 (build# 53)
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

    ns_start_transaction("COM_Department");
	ns_web_url ("DepartmentPage",
        "URL=https://www.jcpenney.com/d/{DepartmentNameFP}",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/images/flyout_arrow.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;_gat;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;shipToCurrencyCode;shipToCountry;mbox;DPUserSession;_ga;c17;v53;s_cc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;_br_uid_2;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;fsr.s;DPIdentifier;LegacyIdentifier;s_sq;c23;_4c_", "REDIRECT=YES", "LOCATION=http://akamai.mathtag.com/event/img?akam_state=1&no_log&mt_nsync&mm_bnc&relay=http%3A%2F%2Fak-sync.datasvc.mediamath.com%2Ffcgi.insight-drp%3Furl%3D-%26referer%3Drelaytest%26ip_address%3D127.0.0.1%26cpcode%3D52202%26akid%3D3ye5pF63Cm1V2kWd0yFT3Mxca261tpFE5iao9Y03LAdT1R_XDhuY6eA%26blob-id%3D7%26blob%3D%5BMM_UUID%5D%5Cr%5Cn&rurl=4-ERe3zDAKcvDHlFo%2fysl6AWanbyL%2faXqMjA7FR1d0iq0E5oMACbW6Zu+9ROwDI6tTV0lKgi7Kw6l6CnckmeFpcJ7Mz68QlKxuWJ+FqxM9PzWXspW8UAqJu+GJjxeMELfdNaJZcphDPAc587qnZrq51fYBoHkOqPT3SITZfFCwLSElVCnJY2bKhAHYbHed8OnImqoAwwePBB1IUzJNJJncUD22Akn7NMuA%2f6asPJ9HKld6ZGXCdf5nCXDR8%2f0ZDmWv1HZj9m9FE5RJSspGlmy1eJgmIz2IXh63ltt9mLjpZd+5r9jhSWi7OX%2fC18aeEttR1rOd3jeR+F4wyqk5xdc7xkC8kpTgc%2fVQ5dyQTLegwOHhh7Q80oySzCjPNQ1xtn%2fAgC%2fhUo5JSHXzx0uWRFtXKh+vapAmf1wXs96hIa3+wBGRvVNr+7oZu0qmy2kzcS1b7+3YCev6EsKkdjZ4OId745aDZY7v%2fpGZ0GQdyj%2fZyjR4uw0uhTDOuZmzv0dNCTjUxFSz%2f%2fl%2f00z7WfhoTcS8O%2fkVvOQXS4xu9W2upGvv2wcZ50cWlF3N530jCwpk3kZHzS2cDUB1vFDFsPYE8NkxzlP909KvfpQ66tOqxeeLKYrL8rlrnzZvEIJBQ+CXxgsF&V=3-VeZ+D9ia51nJvxQ38JFazXGphx084d%2f3mKsi8IZQZsOahpDX5Qimew%3d%3d", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/modal/loading.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;_gat;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;shipToCurrencyCode;shipToCountry;DPUserSession;_ga;c17;v53;s_cc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;_br_uid_2;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;fsr.s;s_sq;c23;_4c_;mbox;DPIdentifier", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/loading.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;_gat;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;shipToCurrencyCode;shipToCountry;DPUserSession;_ga;c17;v53;s_cc;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;_br_uid_2;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;fsr.s;s_sq;c23;_4c_;mbox;DPIdentifier", END_INLINE
    );
    ns_end_transaction("COM_Department", NS_AUTO_STATUS);


  if(!((strcmp((ns_eval_string("{YodaCategoryUrlSP}")),"")))){
    	ns_start_transaction("COM_Department_CSR");
    	ns_end_transaction("COM_Department_CSR", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_Department_Aggregatepages_OPTIONS");
    ns_web_url ("DT_API_Browse_Aggregatepages1",
        "URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/d/{DepartmentNameFP}",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
    );
	ns_end_transaction("DT_Department_Aggregatepages_OPTIONS", NS_AUTO_STATUS);
          
    ns_start_transaction("DT_Department_Aggregatepages_GET");
    ns_web_url ("DT_API_departments",
        "URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/d/{DepartmentNameFP}",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
    );
	ns_end_transaction("DT_Department_Aggregatepages_GET", NS_AUTO_STATUS);


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

    ns_start_transaction("DT_Department_SiteWidePromo_GET");
    ns_web_url ("Deptsitepromo",
        //"URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/d/men",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/d/{DepartmentNameFP}",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/jsp/search/suggest.jsp?term=GE%20dray", "HEADER=X-Requested-With:XMLHttpRequest", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;SyndicateSiteRedirectHost;DPSessionTimeOutInterval;cmTPSet;previousUrlCookie;x-apm-brtm-geo;DP_USER_FAVCOUNT;rr_rcs;x-apm-brtm-bt-p;x-apm-brtm-bt-pv;x-apm-brtm-bt-url;WMRUMC;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;lastReferredSource;firstVisitedDate;referredSources;__gads;x-apm-brtm-response-bt-id", "PreSnapshot=webpage_1449828292249.png", "Snapshot=webpage_1449828292890.png", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/jsp/search/suggest.jsp?term=GE%20dr", END_INLINE
    );
	ns_end_transaction("DT_Department_SiteWidePromo_GET", NS_AUTO_STATUS);
	 ns_page_think_time(0);
    
  // Category
    

    if((!strcmp(ns_eval_string("{YodaCategoryUrlSP}"),""))&& (!strcmp(ns_eval_string("{YodaCategoryUrlSP1}"),""))){
        ns_start_transaction("COM_NoCategoryAvailable");
		ns_end_transaction("COM_NoCategoryAvailable",NS_AUTO_STATUS);
		ns_exit_session();
      } 



   
  
  	//ns_add_cookie_val_ex("SVCVER", NULL, NULL, "latest");
    ns_remove_cookie("yoda-home", NULL, NULL, 0);
    ns_start_transaction("COM_Category");
    ns_web_url ("CategoryPage",
        "URL=https://www.jcpenney.com/g{YodaCategoryUrlDP}",
        //"URL=https://www.jcpenney.com/g/men/mens-shirts?id=cat100240025&cm_re=ZH-_-IM-_-DEPT-MENS-_-VN-2-_-Shirts",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://gateway.answerscloud.com/code/19.3.0/fs.frame.js?v=btpqjyu", "HEADER=Accept-Language:en-us", "COOKIE=_IFR_jcpenney.com_fsr.a", END_INLINE,
            "URL=https://gateway.answerscloud.com/code/19.3.0/fs.utils.js?v=btpqjyu", "HEADER=Accept-Language:en-us", "COOKIE=_IFR_jcpenney.com_fsr.a", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/expcom/js/bundle/local/jcp-iframeBuster.min.js", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;_gat;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;shipToCurrencyCode;shipToCountry;mbox;DPUserSession;_br_uid_2;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_ga;c17;v53;pn;s_cc;LPCKEY-58507821;DPInstance;DPLastAccessedTime;DPCluster;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;s_sq;c23;_4c_;fsr.s;dimOrder;DPIdentifier;JSESSIONID", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/expcom/css/bundle/jcp-desktop-base.min.css?v=2017.1.0.0.56.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;_gat;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;shipToCurrencyCode;shipToCountry;mbox;DPUserSession;_br_uid_2;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_ga;c17;v53;pn;s_cc;LPCKEY-58507821;DPInstance;DPLastAccessedTime;DPCluster;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;s_sq;c23;_4c_;fsr.s;dimOrder;DPIdentifier;JSESSIONID", END_INLINE,
            "URL=https://ajax.googleapis.com/ajax/libs/jquery/1.9.1/jquery.min.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/expcom/js/bundle/lib.min.js?v=2017.1.0.0.56.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;_gat;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;shipToCurrencyCode;shipToCountry;mbox;DPUserSession;_br_uid_2;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_ga;c17;v53;pn;s_cc;LPCKEY-58507821;DPInstance;DPLastAccessedTime;DPCluster;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;s_sq;c23;_4c_;fsr.s;dimOrder;DPIdentifier;JSESSIONID", END_INLINE,
            "URL=https://maps.googleapis.com/maps/api/js?sensor=false&libraries=geometry,places&ext=.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/expcom/js/bundle/jcp-desktop-base.min.js?v=2017.1.0.0.56.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;_gat;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;shipToCurrencyCode;shipToCountry;mbox;DPUserSession;_br_uid_2;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_ga;c17;v53;pn;s_cc;LPCKEY-58507821;DPInstance;DPLastAccessedTime;DPCluster;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;s_sq;c23;_4c_;fsr.s;dimOrder;DPIdentifier;JSESSIONID", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/Bootstrap.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/expcom/js/bundle/jcp-gallery-bundle.min.js?v=2017.1.0.0.56.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;_gat;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;shipToCurrencyCode;shipToCountry;mbox;DPUserSession;_br_uid_2;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_ga;c17;v53;pn;s_cc;LPCKEY-58507821;DPInstance;DPLastAccessedTime;DPCluster;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;s_sq;c23;_4c_;fsr.s;dimOrder;DPIdentifier;JSESSIONID", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/expcom/js/bundle/local/jcp-track-favorites.min.js?v=2017.1.0.0.56.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;_gat;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;shipToCurrencyCode;shipToCountry;mbox;DPUserSession;_br_uid_2;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_ga;c17;v53;pn;s_cc;LPCKEY-58507821;DPInstance;DPLastAccessedTime;DPCluster;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;s_sq;c23;_4c_;fsr.s;dimOrder;DPIdentifier;JSESSIONID", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/DP0906201617151069M.TIF?wid=115&hei=115&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/expcom/images/logo.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;_gat;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;shipToCurrencyCode;shipToCountry;mbox;DPUserSession;_br_uid_2;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_ga;c17;v53;pn;s_cc;LPCKEY-58507821;DPInstance;DPLastAccessedTime;DPCluster;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;s_sq;c23;_4c_;fsr.s;dimOrder;JSESSIONID;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/dept20000018_mt00009_68900009.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;_gat;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;shipToCurrencyCode;shipToCountry;mbox;DPUserSession;_br_uid_2;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_ga;c17;v53;pn;s_cc;LPCKEY-58507821;DPInstance;DPLastAccessedTime;DPCluster;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;s_sq;c23;_4c_;fsr.s;dimOrder;JSESSIONID;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/DP1029201317111469M.TIF?wid=115&hei=115&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/DP0329201608365818C.TIF?wid=115&hei=115&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/DP0506201417090669M.TIF?wid=115&hei=115&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/DP0624201520422666C.TIF?wid=115&hei=115&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/Guys_Prom_2.15-6.20.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;_gat;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;shipToCurrencyCode;shipToCountry;mbox;DPUserSession;_br_uid_2;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_ga;c17;v53;pn;s_cc;LPCKEY-58507821;DPInstance;DPLastAccessedTime;DPCluster;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;s_sq;c23;_4c_;fsr.s;dimOrder;JSESSIONID;DPIdentifier", END_INLINE,
            "URL=https://s7d1.scene7.com/is/image/JCPenney/DP0725201620331341C.TIF?wid=178&hei=178&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://s7d1.scene7.com/is/image/JCPenney/DP1127201219493592S.jpg?wid=25&hei=25&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://tmscdn.coremetrics.com/tms/90024642/head.js?__t=1487402028768", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://s7d2.scene7.com/is/image/JCPenney/DP1120201218400406S.jpg?wid=25&hei=25&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://s7d3.scene7.com/is/image/JCPenney/DP1127201219493749S.jpg?wid=25&hei=25&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://s7d4.scene7.com/is/image/JCPenney/DP1120201218400506S.jpg?wid=25&hei=25&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://s7d5.scene7.com/is/image/JCPenney/DP1012201617081312S.jpg?wid=25&hei=25&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://s7d6.scene7.com/is/image/JCPenney/DP1127201219493700S.jpg?wid=25&hei=25&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://cdn.tt.omtrdc.net/cdn/target.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://testlibs.coremetrics.com/configs/90024642.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/expcom/css/fonts/fontello.woff", "HEADER=Origin:http://www.jcpenney.com", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;_gat;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;shipToCurrencyCode;shipToCountry;DPUserSession;_br_uid_2;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_ga;c17;v53;pn;s_cc;LPCKEY-58507821;DPInstance;DPLastAccessedTime;DPCluster;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;s_sq;c23;_4c_;fsr.s;dimOrder;JSESSIONID;DPIdentifier;LegacyIdentifier;mbox", END_INLINE,
            "URL=https://www88.jcpenney.com/cookie-id.js?fn=eluminate2092", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;AKJCP;CoreID6;TestSess3;90024642_login;TLTSID;_gat;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;shipToCurrencyCode;shipToCountry;DPUserSession;_br_uid_2;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_ga;LPCKEY-58507821;DPInstance;DPLastAccessedTime;DPCluster;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;LPVID;LPSID-58507821;_4c_;fsr.s;90024642_reset;DPIdentifier;LegacyIdentifier;mbox", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/expcom/images/search-button.png", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;_gat;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;shipToCurrencyCode;shipToCountry;DPUserSession;_br_uid_2;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_ga;c17;v53;pn;s_cc;LPCKEY-58507821;DPInstance;DPLastAccessedTime;DPCluster;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;s_sq;c23;_4c_;fsr.s;dimOrder;JSESSIONID;DPIdentifier;mbox", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/serverComponent.php?r=463207751.20412105&ClientID=730&PageID=http%3A%2F%2Fwww.jcpenney.com%2Fg%2Fmens-shirts%2FN-bwo3yD1nohp5", "HEADER=Accept-Language:en-us", END_INLINE
    );
    ns_end_transaction("COM_Category", NS_AUTO_STATUS);	
      

    ns_start_transaction("DT_Category_searchserviceOrganic_OPTIONS");
  	ns_web_url("CategoryOrganicPage1",
        //"URL=https://search-api.jcpenney.com/v1/search-service/g/men/mens-shirts?productGridView=medium&cm_re=ZH-_-IM-_-DEPT-MENS-_-VN-2-_-Shirts&id=cat100240025&responseType=organic"
	   "URL=https://search-api.jcpenney.com/v1/search-service/g{YodagalleryNameDP}?productGridView=medium&{YodaCategoryDP}&responseType=organic",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "HEADER=x-requested-with:XMLHttpRequest",
   );
   ns_end_transaction("DT_Category_searchserviceOrganic_OPTIONS", NS_AUTO_STATUS);
	 
    ns_start_transaction("DT_Category_searchserviceOrganic_GET");
  	ns_web_url("CategoryOrganicPage",
      // "URL=https://search-api.jcpenney.com/v1/search-service/g/men/mens-shirts?productGridView=medium&cm_re=ZH-_-IM-_-DEPT-MENS-_-VN-2-_-Shirts&id=cat100240025&responseType=organic"
        "URL=https://search-api.jcpenney.com/v1/search-service/g{YodagalleryNameDP}?productGridView=medium&{YodaCategoryDP}&responseType=organic",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "HEADER=x-requested-with:XMLHttpRequest",
   );
   ns_end_transaction("DT_Category_searchserviceOrganic_GET", NS_AUTO_STATUS);
	 
    
     if(((strcmp((ns_eval_string("{CheckCSRSP}")),"")))){
    	ns_start_transaction("COM_Category_CSR");
    	ns_end_transaction("COM_Category_CSR", NS_AUTO_STATUS);
    
     
        ns_start_transaction("DT_Category_searchservice_GET");
        ns_web_url ("API_Category_searchservice",
       //"URL=https://search-api.jcpenney.com/v1/search-service/g/men/mens-shirts?responseType=content&cm_re=ZH-_-IM-_-DEPT-MENS-_-VN-2-_-Shirts&id=cat100240025",
		//"URL=https://search-api.jcpenney.com/v1/search-service/g{YodagalleryNameDP}?responseType=content&{YodaCategoryDP}",
		//"URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/g/men/mens-shirts?id=cat100240025&cm_re=ZH-_-IM-_-DEPT-MENS-_-VN-2-_-Shirts",
		"URL=https://content-api.jcpenney.com/content-aggregator/aggregate-pages/g{YodaCategoryUrlDP}",
            "HEADER=Accept-Language:en-us,en;q=0.5",
            INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
        );
	    ns_end_transaction("DT_Category_searchservice_GET", NS_AUTO_STATUS);
	    
     }
	  
   	ns_start_transaction("DT_Category_SiteWidePromo_GET");
  	ns_web_url("CategoryPage2",
        //"URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/g/men/mens-suits-sport-coats",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/g{YodagalleryNameDP}",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "HEADER=x-requested-with:XMLHttpRequest",
    );
	ns_end_transaction("DT_Category_SiteWidePromo_GET", NS_AUTO_STATUS);
     ns_page_think_time(0);
  
       // If available product is 1 no need to go for Refinement/Sort , control will be set to ProductPage..
    if(!((strcmp((ns_eval_string("{ProductCountSP}")),"0")))){
    	ns_start_transaction("COM_NoProductOncategoryPage");
    	ns_end_transaction("COM_NoProductOncategoryPage", NS_AUTO_STATUS);
    	//goto ProductLabel;
    	ns_exit_session();
       }

}

