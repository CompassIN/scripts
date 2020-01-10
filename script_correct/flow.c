/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 06/21/2018 11:32:49
    Flow details:
    Build details: 4.1.12 (build# 8)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("index_html");
    ns_web_url ("index_html",
        "URL=http://10.10.30.15:8033/tours/index.html",
        "HEADER=Accept-Language:en-us",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1529560905187.png",
        "Snapshot=webpage_1529560911095.png",
        //"HEADER=CookieName=NSNODRGTHGJGUIHHHH#$%^&*(FGHJFGHJ",
        INLINE_URLS,
        
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", END_INLINE
);	
	
    ns_end_transaction("index_html", NS_AUTO_STATUS);
    ns_page_think_time(3.651);
    
  //  printf("\n\n######### searched value is : %s\n\n", ns_eval_string("{test}"));
    
   
    
        ns_start_transaction("login");
     ns_web_url ("login",
        "URL=http://10.10.30.15:8033/tours/index.html",
        "HEADER=Accept-Language:en-us",
        "HEADER=Upgrade-Insecure-Requests:1*********{data_seq}***{data_seq}******",
        "PreSnapshot=webpage_1529560905187.png",
        "Snapshot=webpage_1529560911095.png",
        INLINE_URLS,
        
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", END_INLINE
);	
    ns_end_transaction("login", NS_AUTO_STATUS);

    //Page Auto splitted for Image Link 'Login' Clicked by User

    ns_page_think_time(1.942);

    //printf("\n\n######### checked value is : %s\n\n", ns_eval_string("{test}"));
    

    //Page Auto splitted for Image Link 'Search Flights Button' Clicked by User
   ns_start_transaction("reservation");
    ns_web_url ("reservation",
        "URL=http://10.10.30.15:8033/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1529560919048.png",
        "Snapshot=webpage_1529560924323.png",
        INLINE_URLS,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/images/continue.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);
    ns_page_think_time(3.841);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight");
    ns_web_url ("findflight",
        "URL=http://10.10.30.15:8033/cgi-bin/findflight?depart=Acapulco&departDate={skuStorePrice}&arrive=Acapulco&returnDate=test&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=73&findFlights.y=5&findFlights=Submit",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1529560928077.png",
        "Snapshot=webpage_1529560932597.png",
        INLINE_URLS,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/images/startover.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/images/continue.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(4.556);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_2");
    ns_web_url ("findflight_2",
        "URL=http://10.10.30.15:8033/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-22-2018&hidden_outboundFlight_button1=001%7C0%7C06-22-2018&hidden_outboundFlight_button2=002%7C0%7C06-22-2018&hidden_outboundFlight_button3=003%7C0%7C06-22-2018&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=86&reserveFlights.y=15",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1529560936971.png",
        "Snapshot=webpage_1529560941861.png",
        INLINE_URLS,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/images/startover.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("findflight_2", NS_AUTO_STATUS);
    ns_page_think_time(4.388);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_3");
    ns_web_url ("findflight_3",
        "URL=http://10.10.30.15:8033/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-22-2018&advanceDiscount=&buyFlights.x=91&buyFlights.y=21&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1529560946120.png",
        "Snapshot=webpage_1529560950571.png",
        INLINE_URLS,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/images/bookanother.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("findflight_3", NS_AUTO_STATUS);
    ns_page_think_time(2.809);

    //Page Auto splitted for Image Link 'SignOff Button' Clicked by User
    ns_start_transaction("welcome");
    ns_web_url ("welcome",
        "URL=http://10.10.30.15:8033/cgi-bin/welcome",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1529560953039.png",
        "Snapshot=webpage_1529560956392.png",
        INLINE_URLS,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.15:8033/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("welcome", NS_AUTO_STATUS);
    ns_page_think_time(6.016);

}
