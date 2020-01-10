/*-----------------------------------------------------------------------------
    Name: Util
    Written By: Anjali
    Modification History:
-----------------------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
#define YES 1
#define NO 0



static void Fill_PGP_SaveForLater()
{
	char buf[64 + 1]="";
	snprintf(buf,64,"favoriteppId=%s", ns_eval_string("{SFL_PPidSP}"));
	ns_set_form_body("PGPSaveForLaterFormBlockSP","PGP_SaveForLaterDP",1,1,buf);
}

static void Fill_PDP_SaveForLater()
{
	char buf[64 + 1]="";
	snprintf(buf,64,"favoriteppId=%s", ns_eval_string("{SFL_PDP_PPidSP}"));
	ns_set_form_body("PDPSaveForLaterFormBlockSP","PDP_SaveForLaterDP",1,1,buf);
}

void replace(char *url, char *buff, int length) {
   int i = 0, j = 0;

   for(i=0;i<length;i++){
     if(url[i]=='\\' && url[i+1]=='u' && url[i+2]=='0' && url[i+3]=='0' && url[i+4]=='2' && url[i+5]=='F'){
       buff[j] = '/';
       i=i+5;
     }
     else
       buff[j] = url[i];

     j++;
   }
   //printf("Str is %s", buff);
}

