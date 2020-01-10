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

static void get_YodaExpOrderdetail()
{
   int YodaODLoopCount = ns_get_int_val("YodaODItemCountSP");
   int i;
   char Orderdetail[128 + 1]="";
   char ProductIdbuf[64 + 1]="";
   char ProductIdbuf2[64 + 1]="";
   char buf[256 + 1]="";
   char orderno[128 + 1]="";
   char itemcount[32 + 1]="";
   char OrderDetail[1024 + 1]="";
   memset(Orderdetail, 0, 128);
   for(i=0; i<YodaODLoopCount; i++)
      {
        snprintf(ProductIdbuf,64,"{YodaODProductIDSP_%d}", (i + 1));
        snprintf(ProductIdbuf2,64,"%s",ns_eval_string(ProductIdbuf));
        snprintf(buf,256,"ProdcutId:%s",ProductIdbuf2);
        strcat(Orderdetail,buf);
   }
     snprintf(orderno,128,"%s",ns_eval_string("{YodaOrderNoSP}"));
     snprintf(itemcount,32,"%s",ns_eval_string("{YodaODItemCountSP}"));
     snprintf(OrderDetail,1024,"[OrderID:%s];[ItemCount:%s];[ItemDetail:%s]",orderno,itemcount,Orderdetail);
     ns_save_data_eval("/home/netstorm/work/data/JCPenney/OrderDetail/Dotcom_ExpSinglePagecheckoutOrderNo.txt", NS_APPEND_FILE, OrderDetail);
}



