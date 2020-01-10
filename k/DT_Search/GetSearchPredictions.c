/*-----------------------------------------------------------------------------
    Name:GetSearchPredictions
    Recorded By: Deepanshu
    Date of recording: 11/18/2014 01:59:44
    Flow details:
    Build details: 4.0.0 (build# 34)
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
void GetSearchPredictions()
{

//	 char DPClusterbuff1[64 + 1]="";
 //    snprintf(DPClusterbuff1,64,"%s",ns_eval_string("{CookieFP}"));
  //   ns_add_cookie_val_ex("DPCluster", NULL, NULL, DPClusterbuff1);
          

	 ns_add_cookie_val_ex("JCPPragView", NULL, NULL, "1");

    ns_start_transaction("COM_PredictionsPage");
    ns_web_url ("PredictiveSearchPage",
      // "URL=https://search-api.jcpenney.com/v1/search-service-autosuggest/predictivesearch?DPC=L1&q={PredictiveKeywordDP}&shipToCountry=US&responseGroup=products&callback=PredictiveSearchService&_=1504880308434",
        "URL=https://search-api.jcpenney.com/v1/search-service-autosuggest/predictivesearch?q={PredictiveKeywordFP}&channel=desktop&v=2&responseGroup=products&shipToCountry=US",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "HEADER=x-requested-with:XMLHttpRequest",
        INLINE_URLS,
            "URL=https://testdata.coremetrics.com/cm?tid=10&ci=60070811&st=1416299067293&vn1=4.14.30&ec=utf-8&pi=Welcome&ti=1416299121861&fo=Welcome_logoutForm%3A0%3BWelcome_categoryIdForm%3A1%3BWelcome_bagContents%3A2%3BWelcome_keywordSearch%3A3%3BWelcome_%2Fdotcom%2Fjsp%2Fglobal%2F%3A4%3B&ac=3%3AS&hr=%2Fdotcom%2Fjsp%2Fsearch%2FsearchSubmit.jsp&fi=3%3A4%3AsearchTerm%3B&ul=http%3A%2F%2Fwww.jcpenney.com", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=CoreID6;TestSess3;60070811_login;60070811_reset;", END_INLINE
    );
    ns_end_transaction("COM_PredictionsPage", NS_AUTO_STATUS); 
    ns_page_think_time(0);

}


