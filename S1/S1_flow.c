#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

#include "util.c"

void S1_flow()
{
  char ptr1[128];
  char ptr2[128];
  char ptr3[128];
  //char ptr4[128];
  //char ptr5[128];

  char buffer[1024 + 1];
  //ns_save_string("10", "DecIndex");

  //ns_advance_param("param2");
  ns_advance_param("S1v1");
  //printf("%s", ns_eval_string("{S1v1}");
  char *ptr = "Dyn_index_html";
  //ns_start_transaction(ptr);

  //ns_page_think_time(30);
  ns_start_transaction("echo");
  ns_web_url ("EchoService",
      //"URL=http://127.0.0.1:81/tours/index.html?S1v1={S1v1}&S1v2={S1v2}&S1v3={S1v3}",
      //"URL=http://127.0.0.1:81/tours/index.html?name={S1v4}&pass={S1v5}",
      //"URL=http://127.0.0.1:81/tours/index.html",
      //"URL=http://172.24.2.217:81/url_service/url_test.xml?RespSameAsReq=Y",
      "URL=http://10.10.70.2:9099/url_service/url_test.xml?RespSameAsReq=Y",
      //"URL=http://10.10.70.8:9007/search",
      //"URL=http://10.10.70.8:9007/tours/index.html",
      "HEADER=Accept-Language: en-US",
      "HEADER=Content-Type:application/x-protobuf",
      //"ReqProtoFile=proto_files/schema.proto",
      //"ReqProtoFile=proto_files/simple.proto",
      //"RespProtoFile=proto_files/schema.proto",
      "RespProtoFile=proto_files/schema.proto",
      "ReqProtoFile=proto_files/schema.proto",
      //"ReqProtoFile=/home/cavisson/work/scripts/protobuf/protobuf/S1/proto_files/schema.proto",
      //"ReqProtoMessageType=DataType",
      "ReqProtoMessageType=Address",
      "RespProtoMessageType=Address",
      //"HEADER=Index: {index_param}",
      //"HEADER=File Param (S1v1_data_file): S1v1 = {S1v1}, S1v2 = {S1v2}, S1v3 = {S1v3}",
      //"Body = Body:(S1v1_data_file): S1v1 = {S1v1}, S1v2 = {S1v2}",
      //"Body = Body:(S1v1_data_file): S1v1 = {S1v1}, S1v2 = {S1v2}, S1v3 = {S1v3}"
      //BODY_BEGIN, 
      //"\"MANISH\"",
      //BODY_END,
      //"BODY=$CAVINCLUDE$=document_without_enum.xml"
      /*INLINE_URLS,
        "URL=http://172.24.2.217:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language: en-US", 
        "HEADER=Content-Type:application/x-protobuf",
        "ReqProtoFile=proto_files/schema_without_enum.proto",
        "ReqProtoMessageType=Address",
        //"BODY=$CAVINCLUDE$=document_without_enum.xml"
      END_INLINE,*/
      //"BODY={$CAVREPEAT_BLOCK_START,sep($$),Num(1)}<Address> <Recipient>Manish Mishra</Recipient> </Address>{$CAVREPEAT_BLOCK_END}"
      //"BODY=$CAVINCLUDE$=document.xml"
      //BODY_BEGIN, 
      //"paraeterised body = {S1v1}",
      //BODY_END,
      //"BODY={$CAVREPEAT_BLOCK_START,sep($$),Num(5)}This is cavrepeat block{$CAVREPEAT_BLOCK_END}"
      "BODY=$CAVINCLUDE$=document.xml"
   );
  ns_end_transaction("echo", 0);

  //sprintf(buffer, "%s,%s,%s", ns_eval_string("{search}"), ns_eval_string("{search1}"), ns_eval_string("{search2}"));

  //printf("Search Param = %s", ns_eval_string("{search1}"));

  return;

  //ns_end_transaction(ptr, NS_AUTO_STATUS);

  ns_page_think_time(5);

  //ns_advance_param("S1v1");
  //ns_advance_param("S1v4");
  //strcpy(ptr4, ns_eval_string("{S1v4}"));
  //strcpy(ptr5, ns_eval_string("{S1v5}"));

  
  //S1v1_data_file
  strcpy(ptr1, ns_eval_string("{S1v1}"));
  strcpy(ptr2, ns_eval_string("{S1v2}"));
  strcpy(ptr3, ns_eval_string("{S1v3}"));
  //strcpy(ptr4, ns_eval_string("{S1v4}"));
  //strcpy(ptr5, ns_eval_string("{S1v5}"));

  fprintf(stderr, "%s|Page1: Fparam(S1v1) values: \t(NVM, VUser, Sess) = (%d, %d, %d) -> "
                                    "S1v1 = [%s], S1v2 = [%s], S1v3 = [%s]\n", 
                                     get_cur_date_time(), ns_get_nvmid(), ns_get_userid(), ns_get_sessid(), ptr1, ptr2, ptr3);  

  /*fprintf(stderr, "%s|Page1: Fparam(S1v4) values: \t(NVM, VUser, Sess) = (%d, %d, %d) -> "
                                    "S1v4 = [%s], S1v5 = [%s]\n", 
                                     get_cur_date_time(), ns_get_nvmid(), ns_get_userid(), ns_get_sessid(), ptr4, ptr5);*/ 

  /*printf("Page1: Fparam(S1v1) values: \tNVM = %d, Vuser Id = %d, Sess Ins = %d, "
                                    "S1v1 = [%s], S1v2 = [%s], S1v3 = [%s]\n", 
                                     ns_get_nvmid(), ns_get_userid(), ns_get_sessid(), ptr1, ptr2, ptr3); */ 

  /*
  fprintf(stderr, "%s|Page1: Fparam(S1v4) values: \t(NVM, Vuser, Sess) = (%d, %d, %d) -> "
                                    "S1v4 = [%s], S1v5 = [%s]\n", 
                                     get_cur_date_time(), ns_get_nvmid(), ns_get_userid(), ns_get_sessid(), ptr4, ptr5); 

  fprintf(stderr, "The value of index variable is : %s\n", ns_eval_string("{index_param}"));
  */
return;
/*
  ns_page_think_time(5);

    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=http://127.0.0.1:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=netstorm&password=netstorm&JSFormSubmit=off&login.x=52&login.y=10",
        "HEADER=Accept-Language: en-US",
        "HEADER=Header: (S1v1_data_file): S1v1 = {S1v1}, S1v2 = {S1v2}, S1v3 = {S1v3}",
        //"HEADER=Header: (S1v1_data_file): S1v1 = {S1v1}",
        INLINE_URLS,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language: en-US", END_INLINE
    );
   ns_end_transaction("login", 0);

  //ns_advance_param("S1v1");
  strcpy(ptr1, ns_eval_string("{S1v1}"));
  strcpy(ptr2, ns_eval_string("{S1v2}"));
  strcpy(ptr3, ns_eval_string("{S1v3}"));

  printf("Page2: Fparam(S1v1) values: \tNVM = %d, Vuser Id = %d, Sess Ins = %d, "
                                    "S1v1 = [%s], S1v2 = [%s], S1v3 = [%s]\n", 
                                     ns_get_nvmid(), ns_get_userid(), ns_get_sessid(), ptr1, ptr2, ptr3); 
  ns_advance_param("S1v1");
  strcpy(ptr1, ns_eval_string("{S1v1}"));
  strcpy(ptr2, ns_eval_string("{S1v2}"));
  strcpy(ptr3, ns_eval_string("{S1v3}"));

  printf("Advnc: Fparam(S1v1) values: \tNVM = %d, Vuser Id = %d, Sess Ins = %d, "
                                    "S1v1 = [%s], S1v2 = [%s], S1v3 = [%s]\n", 
                                     ns_get_nvmid(), ns_get_userid(), ns_get_sessid(), ptr1, ptr2, ptr3); 
*/
}
