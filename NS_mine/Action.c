/*-----------------------------------------------------------------------------
	Name: Action
	Recorded By: Converted via tool
	Date of recording:
	Flow details:
	Build details:
	Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

Action()
{

	ns_web_url("index.html", 
		"URL=http://10.10.30.8/tours/index.html", 
		"HEADER=Content-Type: text/html", 
		"Snapshot=t1.inf", 
		//EXTRARES, 
		);
	web_submit_form("login", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=username", "Value={NewParam}", ENDITEM, 
		"Name=password", "Value=cavisson", ENDITEM, 
		"Name=login.x", "Value=61", ENDITEM, 
		"Name=login.y", "Value=19", ENDITEM, 
		//EXTRARES, 
		);

	web_set_sockets_option("SSL_VERSION", "2&3");

	ns_page_think_time(4);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t3.inf", 
		);

	ns_page_think_time(6);

	web_submit_form("findflight", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Acapulco", ENDITEM, 
		"Name=departDate", "Value=12-21-2019", ENDITEM, 
		"Name=arrive", "Value=Acapulco", ENDITEM, 
		"Name=returnDate", "Value=12-22-2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=78", ENDITEM, 
		"Name=findFlights.y", "Value=11", ENDITEM, 
		);

	web_submit_form("findflight_2", 
		"Snapshot=t5.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=button0", ENDITEM, 
		"Name=reserveFlights.x", "Value=75", ENDITEM, 
		"Name=reserveFlights.y", "Value=13", ENDITEM, 
		);

	web_submit_form("findflight_3", 
		"Snapshot=t6.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Tiger", ENDITEM, 
		"Name=lastName", "Value=Scott", ENDITEM, 
		"Name=address1", "Value=4261 Stevenson Blvd.", ENDITEM, 
		"Name=address2", "Value=Fremont, CA 94538", ENDITEM, 
		"Name=pass1", "Value=Scott Tiger", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		"Name=buyFlights.x", "Value=60", ENDITEM, 
		"Name=buyFlights.y", "Value=15", ENDITEM, 
		);

	ns_page_think_time(6);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t7.inf", 
		);


	return 0;
}
