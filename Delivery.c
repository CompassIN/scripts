Delivery()
{
	web_set_sockets_option("SSL_VERSION","TLS1.2");
	web_add_header("X-IBM-Client-Id", "e93e9f78-4d66-4503-9e56-29c5ad44a290");
	web_add_header("x-lowes-originating-server-hostname","EDC_Kafka_Phase2");
	web_add_header("X-lowes-uuid", "234567");
	web_add_header("X-IBM-Client-Secret", "H3qJ4vK0lF1gN6lV8pW8iU5rR1dU0bP2vS5jC0sA3dX5pR7dA7");
	web_add_header("content-type", "application/json");
	
	randNum1 = rand()%1 +60;
	lr_save_datetime("%Y-%m-%d", DATE_NOW + ONE_DAY*randNum1, "randenddate"); // window for placing the delivery date
	
	web_reg_find("Search=All",
		"SaveCount=T12",
		"Text/IC=Successfully created EDC delivery",
			LAST);
		
   

	ncount= atoi(lr_eval_string("{c_appointmentid_count}"));
	
	if(ncount !=0)
    {
    rNum = rand() % ncount;
    }
    if(rNum!=0)
    {
     sprintf(c_appointmentidnew, "{c_appointmentid_%d}", rNum);
    sprintf(c_appointstartnew,"{c_appointstart_%d}",rNum);
    sprintf(c_appointstartdatenew,"{c_appointstartdate_%d}",rNum);
    sprintf(c_appointendnew,"{c_appointend_%d}",rNum);
     sprintf(c_taskdurnew, "{c_taskdur_%d}", rNum);
    sprintf(c_traveldurnew,"{c_traveldur_%d}",rNum);
    sprintf(c_custlocdurnew,"{c_custlocdur_%d}",rNum);
    
     lr_save_string(lr_eval_string(c_appointmentidnew),"c_appointmentidrandom");
     lr_save_string(lr_eval_string(c_appointstartnew),"c_appointstartrandom");
      lr_save_string(lr_eval_string(c_appointstartdatenew),"c_appointstartdaterandom");
      lr_save_string(lr_eval_string(c_appointendnew),"c_appointendrandom");
      lr_save_string(lr_eval_string(c_taskdurnew),"c_taskdurrandom");
     lr_save_string(lr_eval_string(c_traveldurnew),"c_traveldurrandom");
      lr_save_string(lr_eval_string(c_custlocdurnew),"c_custlocdurrandom");
   lr_start_transaction("EDP_API_T01_Delivery");
   
  

	addDynaTraceHeader("NA=EDP_API_T01_Delivery;PC=Delivery");	
	
	web_custom_request("web_custom_request",
		"URL={purl}/edcdelsrv/orders/{porderid}/deliveries",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Snapshot=t3.inf",
		"Body={\r\n"
		"  \"order_id\": \"{porderid}\",\r\n"
		"  \"delivery_id\": \"{pdeliveryid}\",\r\n"
		"  \"delivery_task_type\": \"Delivery\",\r\n"
		"  \"delivery_instructions\": [\r\n"
		"    {\r\n"
		"      \"sequence_no\": 0,\r\n"
		"      \"instruction_text\": \"string\",\r\n"
		"      \"instruction_type\": \"string\"\r\n"
		"    }\r\n"
		"  ],\r\n"
		"  \"special_attributes\": {\r\n"
		"    \"haul_away_flag\": true,\r\n"
		"    \"commercial_or_customer\": \"P\"\r\n"
		"  },\r\n"
		"  \"status\": \"Created\",\r\n"
		"  \"fulfill_loc\": \"{pstoreid}\",\r\n"
		"  \"source_channel\": \"Manual\",\r\n"
		"  \"appointment\": {\r\n"
		"    \"appointment_id\": \"{c_appointmentidrandom}\",\r\n"
		"    \"appointment_window_begin\": \"{pstartdate}T08:00:00-05:00\",\r\n"
		"    \"appointment_window_end\": \"{randenddate}T08:00:00-05:00\",\r\n"
		"    \"resource_type\": \"{presourcetype}\"\r\n"
		"  },\r\n"
		"  \"customer_details\": {\r\n"
		"    \"business_name\": \"string\",\r\n"
		"    \"name\": \"string\",\r\n"
		"    \"phone_number\": \"string\",\r\n"
		"    \"email\": \"string\",\r\n"
		"    \"preferred_contact_method\": \"Phone\",\r\n"
		"    \"address\": {\r\n"
		"      \"addr_line_1\": \"{paddressline}\",\r\n"
		"      \"addr_line_2\": \"\",\r\n"
		"      \"city\": \"{pcity}\",\r\n"
		"      \"state\": \"{pstate}\",\r\n"
		"      \"zipcode\": \"{pzipcode}\",\r\n"
		"      \"country\": \"US\"\r\n"
		"    }\r\n"
		"  },\r\n"
		"  \"items\": [\r\n"
		"    {\r\n"
		"      \"item_number\": \"1451\",\r\n"
		"      \"model_number\": \"SuperDuperFridge100\",\r\n"
		"      \"item_description\": \"string\",\r\n"
		"      \"item_category\": \"Microwave\",\r\n"
		"      \"weight\": 10.5,\r\n"
		"      \"quantity\": 1.5,\r\n"
		"      \"length\": 10.5,\r\n"
		"      \"width\": 10.5,\r\n"
		"      \"height\": 10.5,\r\n"
		"      \"action\": \"Create\"\r\n"
		"    }\r\n"
		"  ]\r\n"
		"}\r\n",
		LAST);
		
      if(atoi(lr_eval_string("{T12}"))>0)
				{
     	   	
     	      	
     	       
				lr_end_transaction("EDP_API_T01_Delivery",LR_PASS);
				}
				else
				{
					
				lr_output_message("There are no slots available for Store: %s, for start date %s, and End Date %s",lr_eval_string("{pstoreid}"), lr_eval_string("{pstartdate}"),  lr_eval_string("") );
				lr_end_transaction("EDP_API_T01_Delivery",LR_FAIL);
				}
				
}
			
	return 0;
}
