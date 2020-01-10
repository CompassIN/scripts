/*-----------------------------------------------------------------------------
    Name: init_script
    Recorded By: Anjali
    Date of recording: 05/18/2016 03:31:48
    Flow details:
    Build details: 4.1.4 (build# 40)
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
