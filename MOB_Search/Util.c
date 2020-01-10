/*-----------------------------------------------------------------------------
    Name: Util
    Written By: Anjali
    Modification History:
-----------------------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"


   
void replace(char *url, char *buff, int length) {
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