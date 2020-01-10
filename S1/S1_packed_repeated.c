#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

#include "util.c"

void S1_packed_repeated()
{
  ns_start_transaction("double_packed_repeated");
  ns_web_url ("DoubleType",
      "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
      "HEADER=Accept-Language: en-US",
      "HEADER=Content-Type:application/x-protobuf",
      "ReqProtoFile=proto_files/double_packed_repeated.proto",
      "ReqProtoMessageType=Double",
      "BODY=$CAVINCLUDE$=double_packed_repeated.xml"
   );
  ns_end_transaction("double_packed_repeated", 0);


  ns_start_transaction("float_packed_repeated");
  ns_web_url ("floattype",
 	 "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
  	 "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/float_packed_repeated.proto",
	 "ReqProtoMessageType=Float",
	 "BODY=$CAVINCLUDE$=float_packed_repeated.xml"
   );
  ns_end_transaction("float_packed_repeated", 0);

  ns_start_transaction("int32_packed_repeated");
  ns_web_url ("int32type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/int32_packed_repeated.proto",
         "ReqProtoMessageType=Int32",
         "BODY=$CAVINCLUDE$=int32_packed_repeated.xml"
   );
  ns_end_transaction("int32_packed_repeated", 0);

  ns_start_transaction("int64_packed_repeated");
  ns_web_url ("int64type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/int64_packed_repeated.proto",
         "ReqProtoMessageType=Int64",
         "BODY=$CAVINCLUDE$=int64_packed_repeated.xml"
   );
  ns_end_transaction("int64_packed_repeated", 0);

  ns_start_transaction("uint32_packed_repeated");
  ns_web_url ("uint32type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/uint32_packed_repeated.proto",
         "ReqProtoMessageType=UInt32",
         "BODY=$CAVINCLUDE$=uint32_packed_repeated.xml"
   );
  ns_end_transaction("uint32_packed_repeated", 0);

  ns_start_transaction("uint64_packed_repeated");
  ns_web_url ("uint64type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/uint64_packed_repeated.proto",
         "ReqProtoMessageType=UInt64",
         "BODY=$CAVINCLUDE$=uint64_packed_repeated.xml"
   );
  ns_end_transaction("uint64_packed_repeated", 0);

  ns_start_transaction("sint32_packed_repeated");
  ns_web_url ("sint32type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/sint32_packed_repeated.proto",
         "ReqProtoMessageType=SInt32",
         "BODY=$CAVINCLUDE$=sint32_packed_repeated.xml"
   );
  ns_end_transaction("sint32_packed_repeated", 0);
 
  ns_start_transaction("sint64_packed_repeated");
  ns_web_url ("sint64type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/sint64_packed_repeated.proto",
         "ReqProtoMessageType=SInt64",
         "BODY=$CAVINCLUDE$=sint64_packed_repeated.xml"
   );
  ns_end_transaction("sint64_packed_repeated", 0);

  ns_start_transaction("fixed32_packed_repeated");
  ns_web_url ("fixed32_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/fixed32_packed_repeated.proto",
         "ReqProtoMessageType=Fixed32",
         "BODY=$CAVINCLUDE$=fixed32_packed_repeated.xml"
   );
  ns_end_transaction("fixed32_packed_repeated", 0);

 ns_start_transaction("fixed64_packed_repeated");
  ns_web_url ("fixed64_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/fixed64_packed_repeated.proto",
         "ReqProtoMessageType=Fixed64",
         "BODY=$CAVINCLUDE$=fixed64_packed_repeated.xml"
   );
  ns_end_transaction("fixed64_packed_repeated", 0); 

  ns_start_transaction("sfixed32_packed_repeated");
  ns_web_url ("sfixed32_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/sfixed32_packed_repeated.proto",
         "ReqProtoMessageType=SFixed32",
         "BODY=$CAVINCLUDE$=sfixed32_packed_repeated.xml"
   );
  ns_end_transaction("sfixed32_packed_repeated", 0);

  ns_start_transaction("sfixed64_packed_repeated");
  ns_web_url ("sfixed64_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/sfixed64_packed_repeated.proto",
         "ReqProtoMessageType=SFixed64",
         "BODY=$CAVINCLUDE$=sfixed64_packed_repeated.xml"
   );
  ns_end_transaction("sfixed64_packed_repeated", 0);

  ns_start_transaction("bool_packed_repeated");
  ns_web_url ("bool_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/bool_packed_repeated.proto",
         "ReqProtoMessageType=Bool",
         "BODY=$CAVINCLUDE$=bool_packed_repeated.xml"
   );
  ns_end_transaction("bool_packed_repeated", 0);

  ns_start_transaction("string_packed_repeated");
  ns_web_url ("string_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/string_packed_repeated.proto",
         "ReqProtoMessageType=String",
         "BODY=$CAVINCLUDE$=string_packed_repeated.xml"
   );
  ns_end_transaction("string_packed_repeated", 0); 

  ns_start_transaction("bytes_packed_repeated");
  ns_web_url ("bytes_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/bytes_packed_repeated.proto",
         "ReqProtoMessageType=Bytes",
         "BODY=$CAVINCLUDE$=bytes_packed_repeated.xml"
   );
  ns_end_transaction("bytes_packed_repeated", 0);
}
