#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

#include "util.c"

void S1_flow()
{
  ns_advance_param("S1v1");
  char *ptr = "Dyn_index_html";

  ns_start_transaction("echo");
  ns_web_url ("EchoService",
      "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
      "HEADER=Accept-Language: en-US",
      "HEADER=Content-Type:application/x-protobuf",
      "ReqProtoFile=proto_files/schema_without_enum.proto",
      "ReqProtoMessageType=Address",
      "RespProtoFile=proto_files/schema_without_enum.proto",
      "RespProtoMessageType=Address",
      "BODY=$CAVINCLUDE$=document.xml"
   );
  ns_end_transaction("echo", 0);
}
