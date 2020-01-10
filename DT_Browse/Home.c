/*-----------------------------------------------------------------------------
    Name: Home
    Recorded By: Abhishek
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void Home()
{

	ns_advance_param("CloudEnvFP");

//	char DPClusterbuff1[64 + 1]="";
 //   snprintf(DPClusterbuff1,64,"%s",ns_eval_string("{CookieFP}"));
  //  ns_add_cookie_val_ex("DPCluster", NULL, NULL, DPClusterbuff1);
         
	char cloudEnv[64 + 1]="";
	snprintf(cloudEnv,64,"%s",ns_eval_string("{CloudEnvFP}"));
    ns_web_add_auto_header("X-JCPCloud-Origin", cloudEnv, 0);


	ns_add_cookie_val_ex("yoda-home", NULL, NULL, "iris");
    ns_add_cookie_val_ex("JCPPragView", NULL, NULL, "1");
      
	ns_start_transaction("COM_HomePage");    
    ns_web_url ("HomePage",
        "URL=https://www.jcpenney.com",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/Tocca.min.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.colorbox-min.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/validate.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/namespace.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/tooltip.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/search.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery-jtemplates.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/coremetricsvariables.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.expander.min.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/modal.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/webkit.css?v=R2014_6.0_R2014_6.5.0_B2.0", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/baseline.css?v=R2014_6.0_R2014_6.5.0_B2.0", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/webkit-ext.css?v=R2014_6.0_R2014_6.5.0_B2.0", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/base.css?v=R2014_6.0_R2014_6.5.0_B2.0", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/type-ahead.css?v=R2014_6.0_R2014_6.5.0_B2.0", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/colorbox.css?v=R2014_6.0_R2014_6.5.0_B2.0", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/datePicker.css?v=R2014_6.0_R2014_6.5.0_B2.0", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/css/jquery.jqplot.css?v=R2014_6.0_R2014_6.5.0_B2.0", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/date.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.ba-postmessage.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/autoLogout.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/eluminate.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/bumperSiteLists.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/logo.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/typeahead.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://media.richrelevance.com/rrserver/js/1.0/p13n.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/underscore-min-1.4.2.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/dynamicPriceForRR.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom//images/pg00001_mt00001_23200007.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/nv_bootstrap.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/optin.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.form.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/jcp_ad_choices.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.datePicker.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/highcharts.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/global/debugKeyHandler.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/commonCoreMetrics.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/stage/Bootstrap.js", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/modal_close.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/xgn_pipe_img.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/flags/US.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://nexus.ensighten.com/jcpenney/stage/serverComponent.php?r=6569.549339930796&ClientID=730&PageID=http%3A%2F%2Fwww.jcpenney.com%2Fdotcom%2Findex.jsp", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/Header_Search_Red.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/shopping_bag_icn.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://192.208.179.137/nv/JCPenney/cav_nv.js", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/nv_bootstrap.js", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.form.js?v=R2014_6.0_R2014_6.5.0_B2.0", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/footer_bg.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/social_media_icon_sprite.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/footer_offers_icon.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/jcpCardFooterIcon.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/xgn_pipe_img_footer.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
            "URL=https://testlibs.coremetrics.com/configs/60070811.js", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=https://data.coremetrics.com/cookie-id.js?fn=eluminate3786", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=https://testdata.coremetrics.com/cm?ci=60070811&st=1416316880732&vn1=4.14.30&ec=utf-8&vn2=e4.0&pi=Welcome&ul=http%3A%2F%2Fwww.jcpenney.com%2Fdotcom%2Findex.jsp&tid=6&cg=JCP%7CWelcome&rnd=1416322749384&pc=Y&jv=1.8&je=n&sw=1366&sh=768&pd=24&tz=-5.5", "HEADER=Accept-Language:en-us,en;q=0.5", "REDIRECT=YES", "LOCATION=/cm?ci=60070811&st=1416316880732&vn1=4.14.30&ec=utf-8&vn2=e4.0&pi=Welcome&ul=http%3A%2F%2Fwww.jcpenney.com%2Fdotcom%2Findex.jsp&tid=6&cg=JCP%7CWelcome&rnd=1416322749384&pc=Y&jv=1.8&je=n&sw=1366&sh=768&pd=24&tz=-5.5&cvdone=p", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/modal/loading.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/loading.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/jsp/browse/common/personalization.jsp", "HEADER=Accept-Language:en-us,en;q=0.5", "HEADER=x-requested-with:XMLHttpRequest", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;", "PreSnapshot=webpage_1416316882585.png", "Snapshot=webpage_1416316884323.png",             END_INLINE,
            "URL=https://integration.richrelevance.com/rrserver/p13n_generated.js?a=5387d7af823640a7&ts=1416316882587&pt=%7Chome_page.content1&cts=http%3A%2F%2Fwww.jcpenney.com%3A80%2Fdotcom&ctp=%7C0%3Acmvc%25253DJCP%25257CHomePage%25257CRICHREL&flv=0.0.0&l=1", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=https://testdata.coremetrics.com/cm?ci=60070811&st=1416316880732&vn1=4.14.30&ec=utf-8&vn2=e4.0&pi=Welcome&ul=http%3A%2F%2Fwww.jcpenney.com%2Fdotcom%2Findex.jsp&tid=6&cg=JCP%7CWelcome&rnd=1416322749384&pc=Y&jv=1.8&je=n&sw=1366&sh=768&pd=24&tz=-5.5&cvdone=p", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=CoreID6;TestSess3;", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/DP0703201418121599C?wid=110&hei=110&op_usm=1.5,.8,0,0&resmode=sharp", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/DP0903201418193345C?wid=110&hei=110&op_usm=1.5,.8,0,0&resmode=sharp", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/DP1008201417065943M?wid=110&hei=110&op_usm=1.5,.8,0,0&resmode=sharp", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/DP0829201417135785M?wid=110&hei=110&op_usm=1.5,.8,0,0&resmode=sharp", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=https://s7d9.scene7.com/is/image/JCPenney/0900631B81E2D7C1M?wid=110&hei=110&op_usm=1.5,.8,0,0&resmode=sharp", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=https://jcpenney.ugc.bazaarvoice.com/1573-en_us/4_5/5/rating.gif", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=https://jcpenney.ugc.bazaarvoice.com/1573-en_us/4_6/5/rating.gif", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/jsp/browse/pp/rrPriceData.jsp?ppIds=ens6004510101,ens6004510109,ens6004770080,pp5002260106,pp5004201371", "HEADER=Accept-Language:en-us,en;q=0.5", "HEADER=x-requested-with:XMLHttpRequest", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;", "PreSnapshot=webpage_1416316884323.png", "Snapshot=webpage_1416316971362.png",             END_INLINE,
            "URL=https://192.208.179.137/nv/JCPenney/cav_nv.js", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/jsp/cart/shoppingBagPreview.jsp", "METHOD=POST", "HEADER=Accept-Language:en-us,en;q=0.5", "HEADER=Content-Length:50", "HEADER=x-requested-with:XMLHttpRequest", "HEADER=Content-Type:application/x-www-form-urlencoded; charset=UTF-8", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", "PreSnapshot=webpage_1416316971362.png", "Snapshot=webpage_1416316972424.png", 
            BODY_BEGIN,
                "_dyncharset=UTF-8&_dynSessConf=2420069153869486914",
            BODY_END,
            END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
    );
    ns_end_transaction("COM_HomePage", NS_AUTO_STATUS);	
    
	ns_start_transaction("DT_Home_SiteWidePromo_GET");
    ns_web_url ("Homesitepromo",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/home",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=https://www.jcpenney.com/dotcom/jsp/search/suggest.jsp?term=GE%20dray", "HEADER=X-Requested-With:XMLHttpRequest", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;SyndicateSiteRedirectHost;DPSessionTimeOutInterval;cmTPSet;previousUrlCookie;x-apm-brtm-geo;DP_USER_FAVCOUNT;rr_rcs;x-apm-brtm-bt-p;x-apm-brtm-bt-pv;x-apm-brtm-bt-url;WMRUMC;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;lastReferredSource;firstVisitedDate;referredSources;__gads;x-apm-brtm-response-bt-id", "PreSnapshot=webpage_1449828292249.png", "Snapshot=webpage_1449828292890.png", END_INLINE,
            "URL=https://www.jcpenney.com/dotcom/jsp/search/suggest.jsp?term=GE%20dr", END_INLINE
    );
	ns_end_transaction("DT_Home_SiteWidePromo_GET", NS_AUTO_STATUS);
	

//	ns_start_transaction("DT_Home_ProductSummaries_GET");
//    ns_web_url ("HomePriceData",
//        "URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-summaries-aggregator?ppId={RRPricePPIDFP}",
//        "HEADER=Accept-Language:en-us,en;q=0.5",
//        INLINE_URLS,
//            "URL=https://www.jcpenney.com/dotcom/js/lib/jquery.js?v=R2014_6.0_R2014_6.5.0_B2.0", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;", END_INLINE,
//            "URL=https://www.jcpenney.com/dotcom/jsp/browse/pp/rrPriceData.jsp?ppIds=ens6004510101,ens6004510109,ens6004770080,pp5002260106,pp5004201371", "HEADER=Accept-Language:en-us,en;q=0.5", "HEADER=x-requested-with:XMLHttpRequest", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;", "PreSnapshot=webpage_1416316884323.png", "Snapshot=webpage_1416316971362.png",             END_INLINE,
//            "URL=https://192.208.179.137/nv/JCPenney/cav_nv.js", END_INLINE,
//            "URL=https://www.jcpenney.com/dotcom/jsp/cart/shoppingBagPreview.jsp", "METHOD=POST", "HEADER=Accept-Language:en-us,en;q=0.5", "HEADER=Content-Length:50", "HEADER=x-requested-with:XMLHttpRequest", "HEADER=Content-Type:application/x-www-form-urlencoded; charset=UTF-8", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", "PreSnapshot=webpage_1416316971362.png", "Snapshot=webpage_1416316972424.png", 
//            BODY_BEGIN,
//                "_dyncharset=UTF-8&_dynSessConf=2420069153869486914",
//            BODY_END,
//            END_INLINE,
//            "URL=https://www.jcpenney.com/dotcom/images/button-sprite.gif", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=DPJSESSIONID;shipToCountry;shipToCurrencyCode;DPUserTracking;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPSessionTimeOutInterval;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;cmTPSet;DPRRSESSIONID;rr_rcs;lastReferredSource;firstVisitedDate;", END_INLINE
//    );
//	ns_end_transaction("DT_Home_ProductSummaries_GET", NS_AUTO_STATUS);
	ns_page_think_time(0);

}
