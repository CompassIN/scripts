/*-----------------------------------------------------------------------------
    Name: Util
    Written By: Anjali
    Modification History:
-----------------------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

static void get_storeid_bopus()
{

    int  i = 0;
    int  BopusEligibleIdCount = 0;
    char Storeid[256 + 1]="";
    char Zipcode[256 + 1]="";
    //char *StatusType;
    char PickUpStatus[256 + 1]="";
    char BOPUSStatusBlock[256 + 1]="";
    char *BOPUSStatusBlock1;
    BopusEligibleIdCount = ns_get_int_val("BOPUSStatusBlockSP_count");
    //printf("***********BopusEligibleIdCount = %d*********\n\n",BopusEligibleIdCount);
    for(i = 0; i < BopusEligibleIdCount; i++){
    snprintf(BOPUSStatusBlock,256,"{BOPUSStatusBlockSP_%d}", (i + 1));
    BOPUSStatusBlock1 = ns_eval_string(BOPUSStatusBlock);
    ns_save_searched_string(NS_ARG_IS_BUF, BOPUSStatusBlock1,  NS_ARG_IS_BUF, PickUpStatus, "\"pickUpStatus\":\"", "\",", NS_ORD_ANY, NS_FROM_START, NS_SAVE_COMPLETE);
     //printf("***********PickUpStatus = %s*********\n\n",PickUpStatus);
     if((!(strcmp(PickUpStatus, "AVAILABLE")))){ // To Check whether it is available to pickup on same day or not 
        ns_save_searched_string(NS_ARG_IS_BUF, BOPUSStatusBlock1,  NS_ARG_IS_BUF, Storeid, "\"id\":\"", "\"", NS_ORD_ANY, NS_FROM_START, NS_SAVE_COMPLETE);
        ns_save_string(Storeid, "StoreIdDP");
       // printf("***********Storeid = %s*********\n\n",Storeid);
        ns_save_searched_string(NS_ARG_IS_BUF, BOPUSStatusBlock1,  NS_ARG_IS_BUF, Zipcode, "\"zip\":\"", "\"", NS_ORD_ANY, NS_FROM_START, NS_SAVE_COMPLETE);
        ns_save_string(Zipcode, "ZipCodeDP");
        //printf("***********Zipcode = %s*********\n\n",Zipcode);
        break; // We found the WrapId .. no need to continue looping..
     }
     
  } 
}

static void StoreInfo()
{
	char StoreIDbuf[64 + 1]="";
	char StoreNamebuf[64 + 1]="";
	char StoreDistbuf[64 + 1]="";
	char StoreDetailsbuf[256 + 1]="";
	snprintf(StoreIDbuf,"%s",ns_eval_string("{StoreNumberSP}"));
	snprintf(StoreNamebuf,"%s",ns_eval_string("{StoreNameSP}"));
	snprintf(StoreDistbuf,"%s",ns_eval_string("{StoreDistanceSP}"));
	snprintf(StoreDetailsbuf,256,"%s|%s|%s|false",StoreIDbuf,StoreNamebuf,StoreDistbuf);
	ns_save_string(StoreDetailsbuf, "StoreDetailsDP");
	//printf("***********StoreDetail = %s*********\n\n",StoreDetailsbuf);
}


