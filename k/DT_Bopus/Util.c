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



static void GetStoreInfo()
{
	char StoreIDbuf[64 + 1]="";
	char StoreNamebuf[64 + 1]="";
	char StoreDistbuf[64 + 1]="";
	char StoreDetailsbuf[128 + 1]="";
	snprintf(StoreIDbuf, 64,"%s",ns_eval_string("{StoreNumberSP}"));
	snprintf(StoreNamebuf,64,"%s",ns_eval_string("{StoreNameSP}"));
	snprintf(StoreDistbuf,64,"%s",ns_eval_string("{StoreDistanceSP}"));
	snprintf(StoreDetailsbuf,128,"%s|%s|%s|false",StoreIDbuf,StoreNamebuf,StoreDistbuf);
	ns_save_string(StoreDetailsbuf, "StoreDetailsDP");
	
}

void replace(char *url, char *buff, int length) 
{
   int i = 0, j = 0;

   for(i=0;i<length;i++){
     if(url[i]=='\\' && url[i+1]=='u' && url[i+2]=='0' && url[i+3]=='0' && url[i+4]=='2' && url[i+5]=='F'){
       buff[j] = '/';
       i=i+5;
     }
     else if(url[i]==' '){
       buff[j] = '%';
       buff[j+1] = '2';
       buff[j+2] = '0';
       j = j+2;
     }
     else
       buff[j] = url[i];

     j++;
   }
 //  printf("***************Str is %s *******", buff);
} 
