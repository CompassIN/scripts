/*-----------------------------------------------------------------------------
    Name: TrendingList
    Recorded By: anjali
    Date of recording: 04/28/2017 01:24:16
    Flow details:
    Build details: 4.1.6 (build# 56)
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void TrendingList()
{
	ns_web_add_auto_header("Origin", "https://www.jcpenney.com", 0);
	
	ns_start_transaction("COM_CAM_TrendingList");
    ns_web_url ("TrendingListPage",
        "URL=https://account-api.jcpenney.com/v5/accounts/saved-items/trending-list",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/css/dotcom_global_cssBundle.css?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;LegacyIdentifier;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/dotcom_dotcom_cssBundle.css?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;LegacyIdentifier;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/checkout-lowresolution.css?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;LegacyIdentifier;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bundleJS/dotcom_global_jsBundle.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;LegacyIdentifier;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bundleJS/dotcom_dotcom_jsBundle.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;LegacyIdentifier;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/Bootstrap.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/cam/js/lib/jquery.form.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;LegacyIdentifier;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/cam/js/common_validations.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;LegacyIdentifier;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/cam/js/captcha.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;LegacyIdentifier;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bundleJS/dotcom_signInHeader_common_jsBundle.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;LegacyIdentifier;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bumperSiteLists.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;LegacyIdentifier;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/cam/js/lib/jquery.ba-postmessage.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;LegacyIdentifier;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/localStoreSearch.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;LegacyIdentifier;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.dotdotdot.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;LegacyIdentifier;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/underscore-min-1.4.2.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;LegacyIdentifier;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/typeahead.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;LegacyIdentifier;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bundleJS/dotcom_footer_global_jsBundle.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;LegacyIdentifier;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/cam/js/lib/eluminate.js?v=2017.5.1.0.7.0", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;LegacyIdentifier;DPIdentifier;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/logo.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://www.jcpenney.com/cam/images/spacer.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://www.jcpenney.com/cam/images/icon-express-checkout.svg", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://www.jcpenney.com/cam/images/list.svg", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://www.jcpenney.com/cam/images/icon-mobile.svg", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://www.jcpenney.com/cam/images/icon-coupon-rewards.svg", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://www.jcpenney.com/cam/images/coupon-fill.svg", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://www.jcpenney.com/cam/images/creditcard-top-banner.png", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/jcp_ad_choices.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;mbox;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://cdn.tt.omtrdc.net/cdn/target.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/serverComponent.php?r=59111.69718145397&ClientID=730&PageID=https%3A%2F%2Fwww.jcpenney.com%2Fcam%2Fjsp%2Fprofile%2Fsecure%2Flogin.jsp%3FisfromMyAccount%3Dtrue", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/88a70c01f7a0933a76e260c827fb3606.js?conditionId0=324309", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/5ab2c810e1acfb7862f287a7a83ac96a.js?conditionId0=335512", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/0f5a676ae1e8054f19c40224b4a93570.js?conditionId0=422808", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/6bba424f9de60b1dabf2c2f8fc07377e.js?conditionId0=335308", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/1167cee93f5d8b8e0d7246bf5796a826.js?conditionId0=460821", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/917c49a2004d2d8ef510e0d6f92ed48d.js?conditionId0=346182", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/cam/images/flags/US.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;DPIdentifier;LegacyIdentifier;mbox", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/prod/code/41f82563a6c9143f9988199e47778234.js?conditionId0=443201", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/sprites.png", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;DPIdentifier;LegacyIdentifier;mbox", END_INLINE,
            "URL=https://testlibs.coremetrics.com/configs/90024642.js", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=https://www88.jcpenney.com/cookie-id.js?fn=eluminate7981", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;CoreID6;TestSess3;90024642_login;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;90024642_reset;_ga;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_gat;_4c_;DPInstance;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;mbox;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://www88.jcpenney.com/cm?ci=90024642&st=1493359865855&vn1=4.14.30&ec=utf-8&vn2=e4.0&pi=Login&rf=http%3A%2F%2Fwww.jcpenney.com%2F&ul=https%3A%2F%2Fwww.jcpenney.com%2Fcam%2Fjsp%2Fprofile%2Fsecure%2Flogin.jsp%3FisfromMyAccount%3Dtrue&tid=1&cg=JCP%7CCommunity&rnd=1493362422651", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;CoreID6;TestSess3;90024642_login;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;90024642_reset;_ga;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;_gat;_4c_;DPInstance;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;mbox;DPIdentifier;LegacyIdentifier", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/loading.gif", "HEADER=Accept-Language:en-us", "COOKIE=DPJSESSIONID;DPSessionTimeOutInterval;userLatLong;DPUserTracking;AKJCP;cmTPSet;marketing;TLTSID;__gads;AMCVS_CEEB350F5746CDE97F000101%40AdobeOrg;AMCV_CEEB350F5746CDE97F000101%40AdobeOrg;shipToCurrencyCode;shipToCountry;c17;v53;s_cc;_ga;s_ptc;_uetsid;RES_TRACKINGID;ResonanceSegment;RES_SESSIONID;CavSF;_gat;s_sq;_4c_;CavNVC;DPInstance;DPCluster;DPLastAccessedTime;InternationalItemTotal;ItemTotal;ItemCount;DPOrder;DP_USER_FAVCOUNT;DP_SFL_PPIDS;DP_USER_AUTH_STATUS;mbox;DPIdentifier;LegacyIdentifier", END_INLINE
    );
    ns_end_transaction("COM_CAM_TrendingList", NS_AUTO_STATUS);
    ns_page_think_time(0);
	
	//printf("\n**********TrendingListCount = [%s]***********",ns_eval_string("{TrendingListCountSP}"));

}
