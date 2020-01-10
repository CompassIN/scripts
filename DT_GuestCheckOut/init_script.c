/*-----------------------------------------------------------------------------
    Name: init_script
    Recorded By: Deepanshu
    Date of recording: 11/18/2014 01:46:51
    Flow details:
    Build details: 4.0.0 (build# 34)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

int init_script()
{
    ns_advance_param("CloudEnvFP");
    char DPClusterbuff1[64 + 1]="";
    snprintf(DPClusterbuff1,64,"%s",ns_eval_string("{CookieFP}"));
    ns_add_cookie_val_ex("DPCluster", NULL, NULL, DPClusterbuff1);


//********************************Setting for AWS Env******************************//
        char cloudEnv[64 + 1]="";
        snprintf(cloudEnv,64,"%s",ns_eval_string("{CloudEnvFP}"));
   ns_web_add_auto_header("X-JCPCloud-Origin", cloudEnv, 0);

//**************************************************************************************//

 ns_web_add_auto_header("Origin", "https://www.jcpenney.com", 0);

    ns_add_cookie_val_ex("JCPPragView", NULL, NULL, "1");

    // Control to set the product loop count 
    int CartType = ns_get_random_number_int(1, 100);
    //int CartType = 10;
          if(CartType <= 5){
               ns_set_int_val("ProductLoop",7);         //  5% of users would have 7 item in cart
                ns_set_int_val("ItemDP", 7); }
         else {
                ns_set_int_val("ProductLoop",5);}      // rest of users would have 5 item in cart
	return 0;
}
