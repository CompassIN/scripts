/*-----------------------------------------------------------------------------
    Name: PDP
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
//#include "Util.c"
void PDP()
{	
	int SimilarItem = ns_get_random_number_int(1, 50);
	    if(SimilarItem <= 10){
               ns_set_int_val("ProductCompareDP",2); }     // 2 items in product compare call
         else if (SimilarItem <= 30){
                ns_set_int_val("ProductCompareDP",3);}     // 3 items in product compare call
	    else {
		        ns_set_int_val("ProductCompareDP",4);} 	  // 4 items in product compare call

	   printf("\n************ProductCompareDP=[%s]***************\n",ns_eval_string("{ProductCompareDP}"));

    char src_buff[512] = "", dest_buf[512] = "";
    int length = 0;
   snprintf(src_buff,512, "%s", ns_eval_string("{YodaProductUrlSP}"));
   length = strlen(src_buff);
  // printf("src_buff = %s , length = %d \n\n",  src_buff, length);
   if (length > 0)
      memset(dest_buf, 0, 512);
     replace(src_buff, dest_buf, length);
   ns_save_string(dest_buf, "YodaProductUrlDP");
   
        // Check to see if any product is available after sort/Filter....
     if(!strcmp(ns_eval_string("{YodaProductUrlSP}"),"")){      
    	ns_start_transaction("COM_BrowsePDPNoProductFound");
		ns_end_transaction("COM_BrowsePDPNoProductFound",NS_AUTO_STATUS);
    	ns_exit_session();
     }
    
    ns_start_transaction("COM_Browse_ProductDetailPage");
    ns_web_url ("DT_API_Browse_products",
        "URL=https://www.jcpenney.com{YodaProductUrlDP}", 
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/stafford-travel-easy-care-broadcloth-dress-shirt/prod.jump?ppId=pp5003521148&catId=cat100240025&deptId=dept20000014&urlState=/g/dress-shirts-mens-shirts/N-bwo3yD1nohp5Z1z0pezw&sort=BS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/dotcom_global_cssBundle.css?v=2017.1.0.0.51.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;LegacyIdentifier;DPRRSESSIONID;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/dotcom_dotcom_cssBundle.css?v=2017.1.0.0.51.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;LegacyIdentifier;DPRRSESSIONID;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/checkout-lowresolution.css?v=2017.1.0.0.51.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;LegacyIdentifier;DPRRSESSIONID;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bundleJS/dotcom_global_jsBundle.js?v=2017.1.0.0.51.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;LegacyIdentifier;DPRRSESSIONID;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bundleJS/dotcom_dotcom_jsBundle.js?v=2017.1.0.0.51.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;LegacyIdentifier;DPRRSESSIONID;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/Bootstrap.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/moment_c.min.js", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;LegacyIdentifier;DPRRSESSIONID;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bundleJS/dotcom_pdp.js?v=2017.1.0.0.51.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://edge1.certona.net/cd/c50f7c7c/jcpenney.com/scripts/resonance.js?v=2017.1.0.0.51.0", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/browseGraphical.js?v=2017.1.0.0.51.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/bp-select-pickup-store.css?v=2017.1.0.0.51.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bundleJS/dotcom_signInHeader_common_jsBundle.js?v=2017.1.0.0.51.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bundleJS/dotcom_search_global_jsBundle.js?v=2017.1.0.0.51.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.dotdotdot.js?v=2017.1.0.0.51.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/underscore-min-1.4.2.js?v=2017.1.0.0.51.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/typeahead.js?v=2017.1.0.0.51.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://s7ondemand4.scene7.com/s7sdk/2.5/js/s7sdk/utils/Utils.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/config_s7viewers_HTML5.js?v=2017.1.0.0.51.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/create_s7viewer_HTML5.js?v=2017.1.0.0.51.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/DP0206201317014857M.tif?hei=380&amp;wid=380&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/googleads/afsh.js", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/logo.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/location-icon.svg", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom//images/dept20000018_mt00009_68900009.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/Popup_heart.png", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/blankheart.png", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;mbox;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://cdn.tt.omtrdc.net/cdn/target.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/serverComponent.php?r=62828.67049304341&ClientID=730&PageID=http%3A%2F%2Fwww.jcpenney.com%2Fstafford-travel-easy-care-broadcloth-dress-shirt%2Fprod.jump%3FppId%3Dpp5003521148%26catId%3Dcat100240025%26deptId%3Ddept20000014%26urlState%3D%2Fg%2Fdress-shirts-mens-shirts%2FN-bwo3yD1nohp5Z1z0pezw%26sort%3DBS", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/spacer.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;mbox;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/3617a24f12d0b19ee98af949012256e9.js?conditionId0=324309", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/fef846cd955eee8a4477155bc69a5855.js?conditionId0=433054", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/1357650746501c860ea7bf04fa9254ec.js?conditionId0=433537", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/7fba05481fe33e898c6fea089e3200d7.js?conditionId0=335512", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/1774dd8f0710310ad3aceefc63af8a5c.js?conditionId0=422808", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/6bba424f9de60b1dabf2c2f8fc07377e.js?conditionId0=335308", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/f4f05ad89db19e4d18c1a4f96e52c6cf.js?conditionId0=368155", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/8e9f401e112f938602fcf2cc26452770.js?conditionId0=332484", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/917c49a2004d2d8ef510e0d6f92ed48d.js?conditionId0=346182", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/0900631B81CF057ES?wid=26&hei=26&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/0900631B81CE5A20S?wid=26&hei=26&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/0900631B81CE5A52S?wid=26&hei=26&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/0900631B81CE5A1FS?wid=26&hei=26&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/search_button_gray.png", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;pageTemplate;userLatLong;DPUserTracking;cmTPSet;AKJCP;certonaPromotions-bopis;TLTSID;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;CavSID;shipToCurrencyCode;shipToCountry;DPUserSession;storeDetails;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;c17;v53;s_cc;_ga;LPCKEY-58507821;LPVID;LPSID-58507821;CavSF;CavLTS;CavPI;pn;JSESSIONID;dimOrder;_br_uid_2;fsr.s;s_sq;_4c_;DPInstance;DPRRSESSIONID;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;mbox;DPIdentifier", END_INLINE,
            "URL=https://edge1.certona.net/cd/ea6aeb05/promotions/scripts/promotions.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/0900631B81CF05C8S?wid=26&hei=26&op_usm=.4,.8,0,0&resmode=sharp2", "HEADER=Accept-Language:en-us", END_INLINE
    );
   ns_end_transaction("COM_Browse_ProductDetailPage", NS_AUTO_STATUS);

    char s_buff[512] = "", d_buf[512] = "";
    int len = 0;
   snprintf(s_buff,512, "%s", ns_eval_string("{UrlStateSP}"));
   len = strlen(s_buff);
   if (len > 0)
      memset(d_buf, 0, 512);
     replace(s_buff, d_buf, len);
   ns_save_string(d_buf, "UrlStateDP");
   
 
   if(!strcmp(ns_eval_string("{YodaProductIdSP}"),""))
    {
    	//printf("**********************Client Side Rendering**********************");
    	ns_start_transaction("COM_PDP_CSR"); 
    	ns_end_transaction("COM_PDP_CSR", NS_AUTO_STATUS); 
    	goto ProductAggregator;
    }
    else
    {
    	//printf("**********************Server Side Rendering**********************");
    	ns_start_transaction("COM_PDP_SSR"); 
    	ns_end_transaction("COM_PDP_SSR", NS_AUTO_STATUS); 
    	goto FreeShippingContent;    	
    }
   ProductAggregator:
   ns_start_transaction("DT_API_Browse_PDP_RegionProdAggregator_GET");  
   ns_web_url("DT_API_Browse_PDP_ProductAggregartor",
        //"URL=https://browse-api.jcpenney.com/v1/product-aggregator/ppr5007249108?regionId=high",
        //"URL=https://browse-api.jcpenney.com/v1/product-aggregator/{YodaCatProductIdSP}?regionId=high",
        "URL=https://browse-api.jcpenney.com/v2/product-aggregator/{YodaCatProductIdSP}?regionId=high",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "HEADER=x-requested-with:XMLHttpRequest",
    );
	ns_end_transaction("DT_API_Browse_PDP_RegionProdAggregator_GET", NS_AUTO_STATUS);
 	
 	FreeShippingContent:

   ns_start_transaction("DT_API_Browse_PDP_sharedcomponents_OPTIONS");  
   ns_web_url("DT_API_Browse_PDP_sharedcomponents1",
        //"URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/s1/p/liz-claiborne-mini-tuxedo-satchel/pp5007660463",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/s1{ProductDetailSP}",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.5",
    );
	ns_end_transaction("DT_API_Browse_PDP_sharedcomponents_OPTIONS", NS_AUTO_STATUS); 
	   	    	 
   ns_start_transaction("DT_API_Browse_PDP_sharedcomponents_GET");  
   ns_web_url("DT_API_Browse_PDP_freeshippingcontent",
        //"URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/s1/pdp?pTmplType=&ppid=pp5006480540",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/s1{ProductDetailSP}",
        "HEADER=Accept-Language:en-us,en;q=0.5",
    );
	ns_end_transaction("DT_API_Browse_PDP_sharedcomponents_GET", NS_AUTO_STATUS); 
	

	if(!strcmp(ns_eval_string("{WebIdSP}"),"")){      //Condition to Check ProductOfferingSP if available
       ns_start_transaction("COM_Browse_NoWebIdAvailable");
       ns_end_transaction("COM_Browse_NoWebIdAvailable", NS_AUTO_STATUS);
       goto NextRequest;
    }
	ns_start_transaction("DT_API_Browse_productspecifications_OPTIONS");
      ns_web_url ("API_Browse_specifications1",
        "URL=https://browse-api.jcpenney.com/v3/product-specifications/{WebIdSP}",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1416316862915.png",
        "Snapshot=webpage_1416316882585.png",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
    );
	ns_end_transaction("DT_API_Browse_productspecifications_OPTIONS", NS_AUTO_STATUS);

  
    ns_start_transaction("DT_API_Browse_productspecifications_GET");
    ns_web_url ("DT_API_Browse_productspecifications",
        "URL=https://browse-api.jcpenney.com/v3/product-specifications/{WebIdSP}",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://m.jcpenney.com/b/assets/img/unavailable-color.png", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/img/arrow_up.svg", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;cmTPSet;marketing;TLTSID;CavSID;_ga;_gat;DPUserTracking;DPSessionTimeOutInterval;recentSearchData;clientTestPool1;DPJSESSIONID;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;DP_USER_FAVCOUNT;akaau;CavSF;CavLTS;CavPI;mmapi.store.p.0;mmapi.store.s.0;fsr.s;_IFR_jcpenney.com_fsr.a", END_INLINE
    );
    ns_end_transaction("DT_API_Browse_productspecifications_GET", NS_AUTO_STATUS);
    
    NextRequest:
	
	 ns_start_transaction("DT_API_Browse_BreadCrumb_GET");
     ns_web_url ("DT_API_Browse_BreadCrumb",
        //"URL=https://search-api.jcpenney.com/v1/j/breadcrumb?ppId=pp5007660463&type=product&version=true&productGridView=medium&urlState=%2Fg%2Fpurses-accessories%2Fview-all-handbags-wallets%3Fcm_re%3DZH-_-IM-_-DEPT-WOMENS-_-S2-10-_-HANDBAGS%26id%3Dcat100250002",
        "URL=https://search-api.jcpenney.com/v1/j/breadcrumb?ppId={YodaProductIdSP}&type=product&version=true&productGridView=medium&urlState={UrlStateDP}",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1416316862915.png",
        "Snapshot=webpage_1416316882585.png",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
    );
	ns_end_transaction("DT_API_Browse_BreadCrumb_GET", NS_AUTO_STATUS);
             
    ns_start_transaction("DT_API_Browse_ProductAggregator_OPTIONS");
      ns_web_url ("DT_API_Browse_inventory1",
        "URL=https://browse-api.jcpenney.com/v2/product-aggregator/{YodaProductIdSP}/additional-details?deliveryAvailabilityCheckRequired=false",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1416316862915.png",
        "Snapshot=webpage_1416316882585.png",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
    );
	ns_end_transaction("DT_API_Browse_ProductAggregator_OPTIONS", NS_AUTO_STATUS);
    
	ns_start_transaction("DT_API_Browse_ProductAggregator_GET");
  	ns_web_url("DT_API_Browse_inventory",
       "URL=https://browse-api.jcpenney.com/v2/product-aggregator/{YodaProductIdSP}/additional-details?deliveryAvailabilityCheckRequired=false",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "HEADER=x-requested-with:XMLHttpRequest",
    );
	ns_end_transaction("DT_API_Browse_ProductAggregator_GET", NS_AUTO_STATUS);

	ns_start_transaction("DT_Browse_PDP_ProductCompare_OPTIONS");
    ns_web_url ("DT_API_Browse_ProductCompare1",
        "URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-compare?ppId={$CAVREPEAT_BLOCK_START,sep(,),Value(ProductCompareDP)}{ProductCompareSP}{$CAVREPEAT_BLOCK_END}",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/jsp/browse/pp/rrPriceData.jsp?ppIds=ens6004510101,ens6004510109,ens6004770080,pp5002260106,pp5004201371", "HEADER=Accept-Language:en-us,en;q=0.5", "HEADER=x-requested-with:XMLHttpRequest", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;", "PreSnapshot=webpage_1416316884323.png", "Snapshot=webpage_1416316971362.png",             END_INLINE,
            "URL=https://192.208.179.137/nv/JCPenney/cav_nv.js", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/jsp/cart/shoppingBagPreview.jsp", "METHOD=POST", "HEADER=Accept-Language:en-us,en;q=0.5", "HEADER=Content-Length:50", "HEADER=x-requested-with:XMLHttpRequest", "HEADER=Content-Type:application/x-www-form-urlencoded; charset=UTF-8", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", "PreSnapshot=webpage_1416316971362.png", "Snapshot=webpage_1416316972424.png", 
            BODY_BEGIN,
                "_dyncharset=UTF-8&_dynSessConf=2420069153869486914",
            BODY_END,
            END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
    );
	ns_end_transaction("DT_Browse_PDP_ProductCompare_OPTIONS", NS_AUTO_STATUS);
			
	ns_start_transaction("DT_Browse_PDP_ProductCompare_GET");
    ns_web_url ("DT_API_Browse_ProductCompare",
        //"URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-compare?ppId={$CAVREPEAT_BLOCK_START,sep(,),Num(5)}{RoorPpIdSP}{$CAVREPEAT_BLOCK_END}",
        "URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-compare?ppId={$CAVREPEAT_BLOCK_START,sep(,),Value(ProductCompareDP)}{ProductCompareSP}{$CAVREPEAT_BLOCK_END}",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/jsp/browse/pp/rrPriceData.jsp?ppIds=ens6004510101,ens6004510109,ens6004770080,pp5002260106,pp5004201371", "HEADER=Accept-Language:en-us,en;q=0.5", "HEADER=x-requested-with:XMLHttpRequest", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;", "PreSnapshot=webpage_1416316884323.png", "Snapshot=webpage_1416316971362.png",             END_INLINE,
            "URL=https://192.208.179.137/nv/JCPenney/cav_nv.js", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/jsp/cart/shoppingBagPreview.jsp", "METHOD=POST", "HEADER=Accept-Language:en-us,en;q=0.5", "HEADER=Content-Length:50", "HEADER=x-requested-with:XMLHttpRequest", "HEADER=Content-Type:application/x-www-form-urlencoded; charset=UTF-8", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", "PreSnapshot=webpage_1416316971362.png", "Snapshot=webpage_1416316972424.png", 
            BODY_BEGIN,
                "_dyncharset=UTF-8&_dynSessConf=2420069153869486914",
            BODY_END,
            END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
    );
	ns_end_transaction("DT_Browse_PDP_ProductCompare_GET", NS_AUTO_STATUS);
	
	ns_start_transaction("DT_API_Browse_PDP_SiteWidePromo_OPTIONS");
    ns_web_url ("DT_API_Browse_SiteWidePromo1",
        //"URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/p/bulwark-flame-resistant-long-sleeve-henley-tee-big-tall/pp5006480540",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo{ProductDetailSP}",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.5",
    );
	ns_end_transaction("DT_API_Browse_PDP_SiteWidePromo_OPTIONS", NS_AUTO_STATUS);
			
	ns_start_transaction("DT_API_Browse_PDP_SiteWidePromo_GET");
    ns_web_url ("DT_API_Browse_SiteWidePromo",
         //"URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/p/bulwark-flame-resistant-long-sleeve-henley-tee-big-tall/pp5006480540",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo{ProductDetailSP}",
        "HEADER=Accept-Language:en-us,en;q=0.5",
    );
	ns_end_transaction("DT_API_Browse_PDP_SiteWidePromo_GET", NS_AUTO_STATUS);
    
    ns_start_transaction("DT_API_Browse_urgency_GET");
    	ns_web_url ("DT_API_Browse_urgency",
        "URL=https://api.jcpapi.com/p/urgency/{YodaProductIdSP}?channel=MWEB",
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
    ns_end_transaction("DT_API_Browse_urgency_GET", NS_AUTO_STATUS); 
    

    char buff2[64] = "";
    char *SKUOfferingValue;
    char AvailableSKUOffering[128 + 1]="";
    int i;
    
	int SKUAvailable = ns_get_int_val("ProductOfferingSP_count");
	//printf("*******SKUOffering Available=[%d]***********",SKUAvailable);
   if (SKUAvailable < 1)
    {
    	//printf("\n----------------------NoOfferingAvailable--------------------\n");
    	ns_start_transaction("COM_Browse_NoSkuOfferingAvailable");
       	ns_end_transaction("COM_Browse_NoSkuOfferingAvailable", NS_AUTO_STATUS);
       	goto SkipNextRequest;
    }  
    else if(SKUAvailable >= 1) 
    {	
   	int a = SKUAvailable;
	if (a > 3)
	{SKUAvailable = 3; }
    	for(i = 1; i <= SKUAvailable; i++)
    	{
      	sprintf(AvailableSKUOffering,"{ProductOfferingSP_%d}", (i)); //To get the index of the Sku
      	//printf("\AvailableSKUOffering is [%s]\n",AvailableSKUOffering);
      	SKUOfferingValue = ns_eval_string(AvailableSKUOffering);
      	//printf("\nStatusType is [%s]\n",SKUOfferingValue);
      	ns_save_string(SKUOfferingValue,"ProductOfferingDP");
  //    	printf("\n**********Value of ProductOfferingDP is [%s]\n",ns_eval_string("{ProductOfferingDP}"));
      	
     if(strcmp(ns_eval_string("{ProductOfferingDP}"),"")){      //Condition to Check ProductOfferingSP if available
    snprintf(src_buff,512, "%s", ns_eval_string("{ProductOfferingDP}"));
    length = strlen(src_buff);
    if (length > 0)
     {
        memset(dest_buf, 0, 512);
        replace1(src_buff, dest_buf, length);
   }
   ns_save_string(dest_buf, "SKUOfferingDP");
  // printf("\n*********SKUOfferingDP=[[[%s]]]**********\n",ns_eval_string("{SKUOfferingDP}"));
   }
	
	ns_start_transaction("DT_API_Browse_SKUOffering_OPTIONS");
  	ns_web_url("ProductOffering_1",
        //"URL=https://browse-api.jcpenney.com/{SKUOfferingDP}?stores=&delivery=STANDARD&subdivision={SubdivisionSP}&occasionName={OccasionNameSP}&deliveryAvailabilityCheckRequired=false",
        "URL=https://browse-api.jcpenney.com/{SKUOfferingDP}?stores=&delivery=STANDARD&subdivision={SubdivisionSP}&deliveryAvailabilityCheckRequired=false",
        "METHOD=OPTIONS",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "HEADER=x-requested-with:XMLHttpRequest",
    );
	ns_end_transaction("DT_API_Browse_SKUOffering_OPTIONS", NS_AUTO_STATUS);

	ns_start_transaction("DT_API_Browse_SKUOffering_GET");
  	ns_web_url("ProductOffering_2",
        "URL=https://browse-api.jcpenney.com/{SKUOfferingDP}?stores=&delivery=STANDARD&subdivision={SubdivisionSP}&deliveryAvailabilityCheckRequired=false",
        "HEADER=x-requested-with:XMLHttpRequest",
    );
	ns_end_transaction("DT_API_Browse_SKUOffering_GET", NS_AUTO_STATUS);
	 }
    	}
	SkipNextRequest:
    
    ns_page_think_time(0);

}
