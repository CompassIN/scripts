/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: Kalyani
    Date of recording: 05/26/2016 06:07:33
    Flow details:
    Build details: 4.1.4 (build# 40)
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
void DirectLink()
{
	ns_advance_param("CloudEnvFP");
	char DPClusterbuff1[64 + 1]="";
    snprintf(DPClusterbuff1,64,"%s",ns_eval_string("{CookieFP}"));
    ns_add_cookie_val_ex("DPCluster", NULL, NULL, DPClusterbuff1);
          

//****************************************************************************************//	
	    char cloudEnv[64 + 1]="";
	    snprintf(cloudEnv,64,"%s",ns_eval_string("{CloudEnvFP}"));
        ns_web_add_auto_header("X-JCPCloud-Origin", cloudEnv, 0);
        
//*****************************************************************************************//	

	
	ns_start_transaction("MOB_Direct_Coupons");
	ns_start_transaction("API_Coupons_GET");
    ns_web_url ("API_DirectLink_ContentMobile",
      //"URL=http://m.jcpenney.com/v4/content/pg40027800029/mobile",
        "URL=https://m.jcpenney.com/m/jcpenney-coupons/N-mpi6e5",
        "HEADER=Accept-Language:en-US,en;q=0.8",
        INLINE_URLS,
            "URL=http://m.jcpenney.com/b/assets/css/couponPage.css?v=20160523170615", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=dpAkamaiOverride;DPUserTracking;SyndicateSiteRedirectHost;DPSessionTimeOutInterval;cmTPSet;TLTSID;CavSID;_gat;DPJSESSIONID;clientTestPool1;_ga;testVersion;rr_rcs;DPOrder;ItemCount;ItemTotal;CavSF;CavLTS;CavPI;fsr.r;_IFR_jcpenney.com_fsr.a;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://m.jcpenney.com/b/6.jcp.min.20160523170552.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=dpAkamaiOverride;DPUserTracking;SyndicateSiteRedirectHost;DPSessionTimeOutInterval;cmTPSet;TLTSID;CavSID;_gat;DPJSESSIONID;clientTestPool1;_ga;testVersion;rr_rcs;DPOrder;ItemCount;ItemTotal;CavSF;CavLTS;CavPI;fsr.r;_IFR_jcpenney.com_fsr.a;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://m.jcpenney.com/b/7.jcp.min.20160523170552.js", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=dpAkamaiOverride;DPUserTracking;SyndicateSiteRedirectHost;DPSessionTimeOutInterval;cmTPSet;TLTSID;CavSID;_gat;DPJSESSIONID;clientTestPool1;_ga;testVersion;rr_rcs;DPOrder;ItemCount;ItemTotal;CavSF;CavLTS;CavPI;fsr.r;_IFR_jcpenney.com_fsr.a;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=http://m.jcpenney.com/b/CouponPage/coupon.html?v=20160523170615", "HEADER=Accept-Language:en-US,en;q=0.8", "COOKIE=dpAkamaiOverride;DPUserTracking;SyndicateSiteRedirectHost;DPSessionTimeOutInterval;cmTPSet;TLTSID;CavSID;_gat;DPJSESSIONID;clientTestPool1;_ga;testVersion;rr_rcs;DPOrder;ItemCount;ItemTotal;CavSF;CavLTS;CavPI;fsr.r;_IFR_jcpenney.com_fsr.a;fsr.s;DPInstance;DPLastAccessedTime;DPCluster;DPIdentifier;DPRRSESSIONID;DP_USER_AUTH_STATUS;DP_SFL_PPIDS;referredSources;DP_USER_FAVCOUNT;mmcore.tst;mmapi.store.p.0;mmapi.store.s.0", END_INLINE,
            "URL=https://usage.trackjs.com/usage.gif?token=081f63e814534625a4cbb8a490dc4971&correlationId=da3a22f1-2994-4a5b-a2da-927a38d87192&application=jcpte2&x=130a46f1-34e6-4cc6-bfce-d98876c99adf&", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://nexus.ensighten.com/jcpenney/stage/serverComponent.php?r=729315302.8003871&ClientID=730&PageID=http%3A%2F%2Fm.jcpenney.com%2Fjsp%2Fbrowse%2Fmarketing%2Fpromotion.jsp%3Fr%3Dtrue%26pageId%3Dpg40027800029%26rwdPath%3D%252F", "HEADER=Accept-Language:en-US,en;q=0.8", END_INLINE,
            "URL=http://wurfl.io/wurfl.js", "HEADER=Accept-Language:en-US,en;q=0.8", "HEADER=If-None-Match:\"87debe6dcbe60a411abaf42d524c2683\"", "COOKIE=_wios;_wiou", END_INLINE
    );
    ns_end_transaction("API_Coupons_GET",NS_AUTO_STATUS);
    
//     if(!strcmp(ns_eval_string("{CloudSP}"),"")){      //Condition to Check cloudEnv
//      ns_start_transaction("NoCloudletSet");
//      ns_end_transaction("NoCloudletSet", NS_AUTO_STATUS);          
//     } 
//	else
//	{
//	ns_start_transaction("{CloudSP}");
//    ns_end_transaction("{CloudSP}", NS_AUTO_STATUS); 
//	}
    
    ns_start_transaction("API_Coupon_sitepromo_GET");
    ns_web_url ("API_DirectLink_ContentCoupons",
      //"URL=http://m.jcpenney.com/v4/content/coupons",
        "URL=https://browse-api.jcpenney.com/v1/j/sitepromo/N-mpi6e5",
        "HEADER=Accept-Language:en-US,en;q=0.8",
    );
    ns_end_transaction("API_Coupon_sitepromo_GET",NS_AUTO_STATUS);
    ns_end_transaction("MOB_Direct_Coupons", NS_AUTO_STATUS);
    ns_page_think_time(0);
    ns_exit_session();
    
}
