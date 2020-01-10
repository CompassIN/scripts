/*-----------------------------------------------------------------------------
    Name:Home
    Recorded By: anjali
    Date of recording: 06/27/2016 06:10:41
    Flow details:
    Build details: 4.1.4 (build# 43)
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
void Home()
{

	ns_advance_param("CloudEnvFP");
//    char DPClusterbuff1[64 + 1]="";
 //   snprintf(DPClusterbuff1,64,"%s",ns_eval_string("{CookieFP}"));
  //  ns_add_cookie_val_ex("DPCluster", NULL, NULL, DPClusterbuff1);

	char cloudEnv[64 + 1]="";
	snprintf(cloudEnv,64,"%s",ns_eval_string("{CloudEnvFP}"));
    ns_web_add_auto_header("X-JCPCloud-Origin", cloudEnv, 0);


	ns_add_cookie_val_ex("yoda-home", NULL, NULL, "iris"); 
 
	ns_start_transaction("MOB_HomePage");
    ns_web_url ("HomePage",
        "URL=https://m.jcpenney.com/",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "PreSnapshot=webpage_1467031191918.png",
        "Snapshot=webpage_1467031197807.png",
        INLINE_URLS,
            "URL=http://m.jcpenney.com/b/assets/css/jcp.css?v=20160621140633", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=clientTestPool1;akaau;BNSOrigin;BNSPrevPercentage", END_INLINE,
            "URL=http://d2zah9y47r7bi2.cloudfront.net/releases/current/tracker.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://service.maxymiser.net/cdn/jcpenny/js/mmcore.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/img/spinner-inline.gif", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=clientTestPool1;akaau;BNSOrigin;BNSPrevPercentage", END_INLINE,
            "URL=http://m.jcpenney.com/b/lib/lib.min.js?v=20160621140633", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=clientTestPool1;akaau;BNSOrigin;BNSPrevPercentage", END_INLINE,
            "URL=http://m.jcpenney.com/b/assets/js/jcpredirectrules.js?v=20160621140633", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=clientTestPool1;akaau;BNSOrigin;BNSPrevPercentage", END_INLINE,
            "URL=http://m.jcpenney.com/b/vendor.bundle.js?v=20160621140633", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=clientTestPool1;akaau;BNSOrigin;BNSPrevPercentage", END_INLINE,
            "URL=http://m.jcpenney.com/b/jcp.min.20160621140613.js?v=20160621140633", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=clientTestPool1;akaau;BNSOrigin;BNSPrevPercentage", END_INLINE,
            "URL=http://service.maxymiser.net/cdn/jcpenny/js/mmcore_old.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://service.maxymiser.net/cg/v5us/?fv=dmn%3Djcpenney.com%3Bref%3D%3Burl%3Dhttp%253A%252F%252Fm.jcpenney.com%252F%3Bscrw%3D1366%3Bscrh%3D768%3Bclrd%3D24%3Bcok%3D1&lver=1.4&jsncl=mmRequestCallbacks%5B1%5D&ri=1&jsver=5.13.1", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://service.maxymiser.net/platform/us/api/mmpackage-1.8.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=https://usage.trackjs.com/usage.gif?token=081f63e814534625a4cbb8a490dc4971&correlationId=0309cfe6-720c-4829-ad13-6be45ca47c4d&application=jcpprod&x=e5f8e923-a39f-4f12-b33a-b919216a117d&", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://nexus.ensighten.com/jcpenney/Bootstrap.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE
    );
    ns_end_transaction("MOB_HomePage", NS_AUTO_STATUS);
  
//    if(!strcmp(ns_eval_string("{CloudSP}"),"")){      //Condition to Check cloudEnv
//      ns_start_transaction("NoCloudletSet");
//      ns_end_transaction("NoCloudletSet", NS_AUTO_STATUS);          
//     } 
//	else
//	{
//	ns_start_transaction("{CloudSP}");
//    ns_end_transaction("{CloudSP}", NS_AUTO_STATUS); 
//	}  

    ns_start_transaction("MB_API_Home_SiteWidePromo_GET");
    ns_web_url ("API_Home_sitepromo",
        "URL=https://content-api.jcpenney.com/content-aggregator/shared-components/zones/SiteWidePromo/home",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0;clientTestPool1;akaau",
        "PreSnapshot=webpage_1467031199481.png",
        "Snapshot=webpage_1467031200277.png",
        INLINE_URLS,
            "URL=http://libs.coremetrics.com/configs/90024642.js", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://m.jcpenney.com/v2.1/products/ens6004030003?fields=prices,images,rating,id,manufacturerAdvertisedPrice,marketingLabel,isNew,name,isPreOrder", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=BNSOrigin;BNSPrevPercentage;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0;clientTestPool1;cmTPSet;akaau;rr_rcs", "PreSnapshot=webpage_1467031203361.png", "Snapshot=webpage_1467031203411.png", END_INLINE
    );
    ns_end_transaction("MB_API_Home_SiteWidePromo_GET", NS_AUTO_STATUS);

     
//    ns_start_transaction("MOB_Home_ProductSummaries_GET");
//    ns_web_url ("API_Home_FilterContent",
//        "URL=https://browse-api.jcpenney.com/browse-aggregator/v1/product-summaries-aggregator?ppId={RootPPIDFP}",
//        "HEADER=Accept-Language:en-US,en;q=0.8",
//    );
//    ns_end_transaction("MOB_Home_ProductSummaries_GET", NS_AUTO_STATUS);
    ns_page_think_time(0);
     

}
