/*-----------------------------------------------------------------------------
    Name: Util
    Written By: Anjali
    Modification History:
-----------------------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"



static void get_Orderdetail()
{
   int ODLoopCount = ns_get_int_val("YodaODItemCountSP");
   int i;
   char ItemIdbuf[64 + 1]="";
   char ItemIdbuf2[64 + 1]="";
   char Orderdetail[128 + 1]="";
   char ProductIdbuf[64 + 1]="";
   char ProductIdbuf2[64 + 1]="";
   //char PPId[128 + 1]="";
   char buf[256 + 1]="";
   char orderno[128 + 1]="";
   char itemcount[32 + 1]="";
   char OrderDetail[1024 + 1]="";
   memset(Orderdetail, 0, 128);
   for(i=0; i<ODLoopCount; i++)
   {
        snprintf(ItemIdbuf,64,"{ODItemIDSP_%d}", (i + 1));
        snprintf(ItemIdbuf2,64,"%s",ns_eval_string(ItemIdbuf));
        snprintf(ProductIdbuf,64,"{YodaODProductIDSP_%d}", (i + 1));
        snprintf(ProductIdbuf2,64,"%s",ns_eval_string(ProductIdbuf));
        snprintf(buf,256,"ItemId:%s;ProdcutId:%s",ItemIdbuf2,ProductIdbuf2);
        strcat(Orderdetail,buf);
   }
     snprintf(orderno,128,"%s",ns_eval_string("{OrderNoSP1}"));
     snprintf(itemcount,32,"%s",ns_eval_string("{YodaODItemCountSP}"));
     snprintf(OrderDetail,1024,"[OrderID:%s];[ItemCount:%s];[ItemDetail:%s]",orderno,itemcount,Orderdetail);
     ns_save_data_eval("/home/netstorm/work/data/JCPenney/OrderDetail/Mobile_GuestOrderNo.txt", NS_APPEND_FILE, OrderDetail);
}



