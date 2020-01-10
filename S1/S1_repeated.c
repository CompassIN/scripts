#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

#include "util.c"

void S1_repeated()
{
  ns_start_transaction("double_repeated");
  ns_web_url ("DoubleType",
      "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
      "HEADER=Accept-Language: en-US",
      "HEADER=Content-Type:application/x-protobuf",
      "ReqProtoFile=proto_files/double_repeated.proto",
      "ReqProtoMessageType=Double",
      "BODY=$CAVINCLUDE$=double_repeated.xml"
   );
  ns_end_transaction("double_repeated", 0);


  ns_start_transaction("float_repeated");
  ns_web_url ("floattype",
 	 "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
  	 "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/float_repeated.proto",
	 "ReqProtoMessageType=Float",
	 "BODY=$CAVINCLUDE$=float_repeated.xml"
   );
  ns_end_transaction("float_repeated", 0);

  ns_start_transaction("int32_repeated");
  ns_web_url ("int32type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/int32_repeated.proto",
         "ReqProtoMessageType=Int32",
         "BODY=$CAVINCLUDE$=int32_repeated.xml"
   );
  ns_end_transaction("int32_repeated", 0);

  ns_start_transaction("int64_repeated");
  ns_web_url ("int64type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/int64_repeated.proto",
         "ReqProtoMessageType=Int64",
         "BODY=$CAVINCLUDE$=int64_repeated.xml"
   );
  ns_end_transaction("int64_repeated", 0);

  ns_start_transaction("uint32_repeated");
  ns_web_url ("uint32type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/uint32_repeated.proto",
         "ReqProtoMessageType=UInt32",
         "BODY=$CAVINCLUDE$=uint32_repeated.xml"
   );
  ns_end_transaction("uint32_repeated", 0);

  ns_start_transaction("uint64_repeated");
  ns_web_url ("uint64type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/uint64_repeated.proto",
         "ReqProtoMessageType=UInt64",
         "BODY=$CAVINCLUDE$=uint64_repeated.xml"
   );
  ns_end_transaction("uint64_repeated", 0);

  ns_start_transaction("sint32_repeated");
  ns_web_url ("sint32type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/sint32_repeated.proto",
         "ReqProtoMessageType=SInt32",
         "BODY=$CAVINCLUDE$=sint32_repeated.xml"
   );
  ns_end_transaction("sint32_repeated", 0);
 
  ns_start_transaction("sint64_repeated");
  ns_web_url ("sint64type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/sint64_repeated.proto",
         "ReqProtoMessageType=SInt64",
         "BODY=$CAVINCLUDE$=sint64_repeated.xml"
   );
  ns_end_transaction("sint64_repeated", 0);

  ns_start_transaction("fixed32_repeated");
  ns_web_url ("fixed32_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/fixed32_repeated.proto",
         "ReqProtoMessageType=Fixed32",
         "BODY=$CAVINCLUDE$=fixed32_repeated.xml"
   );
  ns_end_transaction("fixed32_repeated", 0);

 ns_start_transaction("fixed64_repeated");
  ns_web_url ("fixed64_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/fixed64_repeated.proto",
         "ReqProtoMessageType=Fixed64",
         "BODY=$CAVINCLUDE$=fixed64_repeated.xml"
   );
  ns_end_transaction("fixed64_repeated", 0); 

  ns_start_transaction("sfixed32_repeated");
  ns_web_url ("sfixed32_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/sfixed32_repeated.proto",
         "ReqProtoMessageType=SFixed32",
         "BODY=$CAVINCLUDE$=sfixed32_repeated.xml"
   );
  ns_end_transaction("sfixed32_repeated", 0);

  ns_start_transaction("sfixed64_repeated");
  ns_web_url ("sfixed64_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/sfixed64_repeated.proto",
         "ReqProtoMessageType=SFixed64",
         "BODY=$CAVINCLUDE$=sfixed64_repeated.xml"
   );
  ns_end_transaction("sfixed64_repeated", 0);

  ns_start_transaction("bool_repeated");
  ns_web_url ("bool_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/bool_repeated.proto",
         "ReqProtoMessageType=Bool",
         "BODY=$CAVINCLUDE$=bool_repeated.xml"
   );
  ns_end_transaction("bool_repeated", 0);

  ns_start_transaction("string_repeated");
  ns_web_url ("string_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/string_repeated.proto",
         "ReqProtoMessageType=String",
         "BODY=$CAVINCLUDE$=string_repeated.xml"
   );
  ns_end_transaction("string_repeated", 0); 

  ns_start_transaction("bytes_repeated");
  ns_web_url ("bytes_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/bytes_repeated.proto",
         "ReqProtoMessageType=Bytes",
         "BODY=$CAVINCLUDE$=bytes_repeated.xml"
   );
  ns_end_transaction("bytes_repeated", 0);
}
