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
    char cloudEnv[64 + 1]="";
	snprintf(cloudEnv,64,"%s",ns_eval_string("{CloudEnvFP}"));
    ns_web_add_auto_header("X-JCPCloud-Origin", cloudEnv, 0);
    
}
