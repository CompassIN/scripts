#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

#include "util.c"

void S1_multiple()
{
  ns_start_transaction("double_multiple");
  ns_web_url ("DoubleType",
      "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
      "HEADER=Accept-Language: en-US",
      "HEADER=Content-Type:application/x-protobuf",
      "ReqProtoFile=proto_files/double_multiple.proto",
      "ReqProtoMessageType=Double",
      "BODY=$CAVINCLUDE$=double_multiple.xml"
   );
  ns_end_transaction("double_multiple", 0);


  ns_start_transaction("float_multiple");
  ns_web_url ("floattype",
 	 "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
  	 "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/float_multiple.proto",
	 "ReqProtoMessageType=Float",
	 "BODY=$CAVINCLUDE$=float_multiple.xml"
   );
  ns_end_transaction("float_multiple", 0);

  ns_start_transaction("int32_multiple");
  ns_web_url ("int32type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/int32_multiple.proto",
         "ReqProtoMessageType=Int32",
         "BODY=$CAVINCLUDE$=int32_multiple.xml"
   );
  ns_end_transaction("int32_multiple", 0);

  ns_start_transaction("int64_multiple");
  ns_web_url ("int64type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/int64_multiple.proto",
         "ReqProtoMessageType=Int64",
         "BODY=$CAVINCLUDE$=int64_multiple.xml"
   );
  ns_end_transaction("int64_multiple", 0);

  ns_start_transaction("uint32_multiple");
  ns_web_url ("uint32type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/uint32_multiple.proto",
         "ReqProtoMessageType=UInt32",
         "BODY=$CAVINCLUDE$=uint32_multiple.xml"
   );
  ns_end_transaction("uint32_multiple", 0);

  ns_start_transaction("uint64_multiple");
  ns_web_url ("uint64type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/uint64_multiple.proto",
         "ReqProtoMessageType=UInt64",
         "BODY=$CAVINCLUDE$=uint64_multiple.xml"
   );
  ns_end_transaction("uint64_multiple", 0);

  ns_start_transaction("sint32_multiple");
  ns_web_url ("sint32type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/sint32_multiple.proto",
         "ReqProtoMessageType=SInt32",
         "BODY=$CAVINCLUDE$=sint32_multiple.xml"
   );
  ns_end_transaction("sint32_multiple", 0);
 
  ns_start_transaction("sint64_multiple");
  ns_web_url ("sint64type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/sint64_multiple.proto",
         "ReqProtoMessageType=SInt64",
         "BODY=$CAVINCLUDE$=sint64_multiple.xml"
   );
  ns_end_transaction("sint64_multiple", 0);

  ns_start_transaction("fixed32_multiple");
  ns_web_url ("fixed32_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/fixed32_multiple.proto",
         "ReqProtoMessageType=Fixed32",
         "BODY=$CAVINCLUDE$=fixed32_multiple.xml"
   );
  ns_end_transaction("fixed32_multiple", 0);

 ns_start_transaction("fixed64_multiple");
  ns_web_url ("fixed64_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/fixed64_multiple.proto",
         "ReqProtoMessageType=Fixed64",
         "BODY=$CAVINCLUDE$=fixed64_multiple.xml"
   );
  ns_end_transaction("fixed64_multiple", 0); 

  ns_start_transaction("sfixed32_multiple");
  ns_web_url ("sfixed32_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/sfixed32_multiple.proto",
         "ReqProtoMessageType=SFixed32",
         "BODY=$CAVINCLUDE$=sfixed32_multiple.xml"
   );
  ns_end_transaction("sfixed32_multiple", 0);

  ns_start_transaction("sfixed64_multiple");
  ns_web_url ("sfixed64_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/sfixed64_multiple.proto",
         "ReqProtoMessageType=SFixed64",
         "BODY=$CAVINCLUDE$=sfixed64_multiple.xml"
   );
  ns_end_transaction("sfixed64_multiple", 0);

  ns_start_transaction("bool_multiple");
  ns_web_url ("bool_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/bool_multiple.proto",
         "ReqProtoMessageType=Bool",
         "BODY=$CAVINCLUDE$=bool_multiple.xml"
   );
  ns_end_transaction("bool_multiple", 0);

  ns_start_transaction("string_multiple");
  ns_web_url ("string_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/string_multiple.proto",
         "ReqProtoMessageType=String",
         "BODY=$CAVINCLUDE$=string_multiple.xml"
   );
  ns_end_transaction("string_multiple", 0); 

  ns_start_transaction("bytes_multiple");
  ns_web_url ("bytes_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/bytes_multiple.proto",
         "ReqProtoMessageType=Bytes",
         "BODY=$CAVINCLUDE$=bytes_multiple.xml"
   );
  ns_end_transaction("bytes_multiple", 0);
}
