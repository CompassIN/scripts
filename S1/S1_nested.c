#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

#include "util.c"

void S1_nested()
{
  ns_start_transaction("double_nested");
  ns_web_url ("DoubleType",
      "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
      "HEADER=Accept-Language: en-US",
      "HEADER=Content-Type:application/x-protobuf",
      "ReqProtoFile=proto_files/double_nested.proto",
      "ReqProtoMessageType=Double",
      "BODY=$CAVINCLUDE$=double_nested.xml"
   );
  ns_end_transaction("double_nested", 0);


  ns_start_transaction("float_nested");
  ns_web_url ("floattype",
 	 "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
  	 "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/float_nested.proto",
	 "ReqProtoMessageType=Float",
	 "BODY=$CAVINCLUDE$=float_nested.xml"
   );
  ns_end_transaction("float_nested", 0);

  ns_start_transaction("int32_nested");
  ns_web_url ("int32type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/int32_nested.proto",
         "ReqProtoMessageType=Int32",
         "BODY=$CAVINCLUDE$=int32_nested.xml"
   );
  ns_end_transaction("int32_nested", 0);

  ns_start_transaction("int64_nested");
  ns_web_url ("int64type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/int64_nested.proto",
         "ReqProtoMessageType=Int64",
         "BODY=$CAVINCLUDE$=int64_nested.xml"
   );
  ns_end_transaction("int64_nested", 0);

  ns_start_transaction("uint32_nested");
  ns_web_url ("uint32type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/uint32_nested.proto",
         "ReqProtoMessageType=UInt32",
         "BODY=$CAVINCLUDE$=uint32_nested.xml"
   );
  ns_end_transaction("uint32_nested", 0);

  ns_start_transaction("uint64_nested");
  ns_web_url ("uint64type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/uint64_nested.proto",
         "ReqProtoMessageType=UInt64",
         "BODY=$CAVINCLUDE$=uint64_nested.xml"
   );
  ns_end_transaction("uint64_nested", 0);

  ns_start_transaction("sint32_nested");
  ns_web_url ("sint32type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/sint32_nested.proto",
         "ReqProtoMessageType=SInt32",
         "BODY=$CAVINCLUDE$=sint32_nested.xml"
   );
  ns_end_transaction("sint32_nested", 0);
 
  ns_start_transaction("sint64_nested");
  ns_web_url ("sint64type",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/sint64_nested.proto",
         "ReqProtoMessageType=SInt64",
         "BODY=$CAVINCLUDE$=sint64_nested.xml"
   );
  ns_end_transaction("sint64_nested", 0);

  ns_start_transaction("fixed32_nested");
  ns_web_url ("fixed32_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/fixed32_nested.proto",
         "ReqProtoMessageType=Fixed32",
         "BODY=$CAVINCLUDE$=fixed32_nested.xml"
   );
  ns_end_transaction("fixed32_nested", 0);

 ns_start_transaction("fixed64_nested");
  ns_web_url ("fixed64_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/fixed64_nested.proto",
         "ReqProtoMessageType=Fixed64",
         "BODY=$CAVINCLUDE$=fixed64_nested.xml"
   );
  ns_end_transaction("fixed64_nested", 0); 

  ns_start_transaction("sfixed32_nested");
  ns_web_url ("sfixed32_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/sfixed32_nested.proto",
         "ReqProtoMessageType=SFixed32",
         "BODY=$CAVINCLUDE$=sfixed32_nested.xml"
   );
  ns_end_transaction("sfixed32_nested", 0);

  ns_start_transaction("sfixed64_nested");
  ns_web_url ("sfixed64_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/sfixed64_nested.proto",
         "ReqProtoMessageType=SFixed64",
         "BODY=$CAVINCLUDE$=sfixed64_nested.xml"
   );
  ns_end_transaction("sfixed64_nested", 0);

  ns_start_transaction("bool_nested");
  ns_web_url ("bool_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/bool_nested.proto",
         "ReqProtoMessageType=Bool",
         "BODY=$CAVINCLUDE$=bool_nested.xml"
   );
  ns_end_transaction("bool_nested", 0);

  ns_start_transaction("string_nested");
  ns_web_url ("string_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/string_nested.proto",
         "ReqProtoMessageType=String",
         "BODY=$CAVINCLUDE$=string_nested.xml"
   );
  ns_end_transaction("string_nested", 0); 

  ns_start_transaction("bytes_nested");
  ns_web_url ("bytes_data",
         "URL=http://10.10.70.8:9007/url_service/url_test.xml?RespSameAsReq=Y",
         "HEADER=Accept-Language: en-US",
         "HEADER=Content-Type:application/x-protobuf",
         "ReqProtoFile=proto_files/bytes_nested.proto",
         "ReqProtoMessageType=Bytes",
         "BODY=$CAVINCLUDE$=bytes_nested.xml"
   );
  ns_end_transaction("bytes_nested", 0);
}
