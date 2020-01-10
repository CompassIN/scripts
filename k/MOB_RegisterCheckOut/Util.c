/*-----------------------------------------------------------------------------
    Name: Util
    Written By: Anjali
    Modification History:
-----------------------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"




static void get_RegOrderdetail()
{
   int ODLoopCount = ns_get_int_val("ODItemCountSP");
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
        snprintf(ProductIdbuf,64,"{ODProductIDSP_%d}", (i + 1));
        snprintf(ProductIdbuf2,64,"%s",ns_eval_string(ProductIdbuf));
        snprintf(buf,256,"ItemId:%s;ProdcutId:%s",ItemIdbuf2,ProductIdbuf2);
        strcat(Orderdetail,buf);
   }
     snprintf(orderno,128,"%s",ns_eval_string("{OrderNoSP}"));
     snprintf(itemcount,32,"%s",ns_eval_string("{ODItemCountSP}"));
     snprintf(OrderDetail,1024,"[OrderID:%s];[ItemCount:%s];[ItemDetail:%s]",orderno,itemcount,Orderdetail);
     ns_save_data_eval("/home/netstorm/work/data/JCPenney/OrderDetail/Mobile_RegOrderNo.txt", NS_APPEND_FILE, OrderDetail);
}

static void get_gift_wrapId()
{

    int  i = 0;
    int  WrapItemIdCount = 0;
    char WrapId[256 + 1]="";
    //char *StatusType;
    char WrapStatus[256 + 1]="";
    char WrapBlock[256 + 1]="";
    char *WrapBlock1;
    WrapItemIdCount = ns_get_int_val("WrapItemBlockSP_count");
    for(i = 0; i < WrapItemIdCount; i++){
    snprintf(WrapBlock,256,"{WrapItemBlockSP_%d}", (i + 1));
    WrapBlock1 = ns_eval_string(WrapBlock);
    ns_save_searched_string(NS_ARG_IS_BUF, WrapBlock1,  NS_ARG_IS_BUF, WrapStatus, "\"giftWrappable\":", ",", NS_ORD_ANY, NS_FROM_START, NS_SAVE_COMPLETE);

     if((!(strcmp(WrapStatus, "true")))){ // To Check whether it is wrappable or not
        ns_save_searched_string(NS_ARG_IS_BUF, WrapBlock1,  NS_ARG_IS_BUF, WrapId, "i", "\"", 1, NS_FROM_START, NS_SAVE_COMPLETE);
        ns_save_string(WrapId, "WrapIdDP");
        break; // We found the WrapId .. no need to continue looping..
     }

  }
}

static void get_YodaRegOrderdetail()
{
   int YodaODLoopCount = ns_get_int_val("YodaODItemCountSP");
   int i;
//   char ItemIdbuf[64 + 1]="";
//   char ItemIdbuf2[64 + 1]="";
   char Orderdetail[128 + 1]="";
   char ProductIdbuf[64 + 1]="";
   char ProductIdbuf2[64 + 1]="";
   //char PPId[128 + 1]="";
   char buf[256 + 1]="";
   char orderno[128 + 1]="";
   char itemcount[32 + 1]="";
   char OrderDetail[1024 + 1]="";
   memset(Orderdetail, 0, 128);
   for(i=0; i<YodaODLoopCount; i++)
      {
//        snprintf(ItemIdbuf,64,"{YodaODItemIDSP_%d}", (i + 1));
//        snprintf(ItemIdbuf2,64,"%s",ns_eval_string(ItemIdbuf));
        snprintf(ProductIdbuf,64,"{YodaODProductIDSP_%d}", (i + 1));
        snprintf(ProductIdbuf2,64,"%s",ns_eval_string(ProductIdbuf));
        snprintf(buf,256,"ProdcutId:%s",ProductIdbuf2);
        strcat(Orderdetail,buf);
   }
     snprintf(orderno,128,"%s",ns_eval_string("{YodaOrderNoSP}"));
     snprintf(itemcount,32,"%s",ns_eval_string("{YodaODItemCountSP}"));
     snprintf(OrderDetail,1024,"[OrderID:%s];[ItemCount:%s];[ItemDetail:%s]",orderno,itemcount,Orderdetail);
     ns_save_data_eval("/home/netstorm/work/data/JCPenney/OrderDetail/Mobile_RegOrderNo.txt", NS_APPEND_FILE, OrderDetail);
}




