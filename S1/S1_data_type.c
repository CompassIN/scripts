#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

#include "util.c"

void S1_data_type()
{
  ns_start_transaction("All_wire_type");
  ns_web_url ("All_wire_type",
      "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
      "HEADER=Accept-Language: en-US",
      "HEADER=Content-Type:application/x-protobuf",
      "ReqProtoFile=proto_files/All_wire_type.proto",
      "ReqProtoMessageType=DataType",
      "BODY=$CAVINCLUDE$=All_wire_type.xml"
   );
  ns_end_transaction("All_wire_type", 0);


  ns_start_transaction("All_wire_type_multiple_time");
  ns_web_url ("All_wire_type_multiple_time",
 	 "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
  	 "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/All_wire_type_multiple_time.proto",
	 "ReqProtoMessageType=DataType",
	 "BODY=$CAVINCLUDE$=All_wire_type_multiple_time.xml"
   );
  ns_end_transaction("All_wire_type_multiple_time", 0);

  ns_start_transaction("All_wire_type_nested");
  ns_web_url ("All_wire_type_nested",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/All_wire_type_nested.proto",
         "ReqProtoMessageType=DataType",
         "BODY=$CAVINCLUDE$=All_wire_type_nested.xml"
   );
  ns_end_transaction("All_wire_type_nested", 0);

  ns_start_transaction("All_wire_type_repeated");
  ns_web_url ("All_wire_type_repeated",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/All_wire_type_repeated.proto",
         "ReqProtoMessageType=DataType",
         "BODY=$CAVINCLUDE$=All_wire_type_repeated.xml"
   );
  ns_end_transaction("All_wire_type_repeated", 0);

  ns_start_transaction("All_wire_type_packed_repeated");
  ns_web_url ("All_wire_type_packed_repeated",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/All_wire_type_packed_repeated.proto",
         "ReqProtoMessageType=DataType",
         "BODY=$CAVINCLUDE$=All_wire_type_packed_repeated.xml"
   );
  ns_end_transaction("All_wire_type_packed_repeated", 0);
}
