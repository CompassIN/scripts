/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: sandeep
    Date of recording: 02/15/2019 01:35:12
    Flow details:
    Build details: 4.1.13 (build# 36)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("Index_html");
    ns_web_url ("Index_html",
        "URL=http://10.10.30.111:81/tours/index.html",
        "HEADER=Accept-Language:en-in",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1550217854413.png",
        "Snapshot=webpage_1550217857028.png",
        INLINE_URLS,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("Index_html", NS_AUTO_STATUS);
    ns_page_think_time(14.731);

    //Page Auto splitted for Image Link 'Login' Clicked by User
    ns_start_transaction("Login");
    ns_web_url ("Login",
        "URL=http://10.10.30.111:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=sandeep&password=sandeep&login.x=44&login.y=11&login=Login&JSFormSubmit=off",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1550217870998.png",
        "Snapshot=webpage_1550217871657.png",
        INLINE_URLS,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("Login", NS_AUTO_STATUS);
    ns_page_think_time(1.833);

    //Page Auto splitted for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("Resevation");
    ns_web_url ("Resevation",
        "URL=http://10.10.30.111:81/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1550217873485.png",
        "Snapshot=webpage_1550217874117.png",
        INLINE_URLS,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/continue.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("Resevation", NS_AUTO_STATUS);
    ns_page_think_time(10.32);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("Findflight");
    ns_web_url ("Findflight",
        "URL=http://10.10.30.111:81/cgi-bin/findflight?depart=Acapulco&departDate=02-16-2019&arrive=London&returnDate=02-17-2019&numPassengers=1&seatPref=Window&seatType=Coach&findFlights.x=92&findFlights.y=3&findFlights=Submit",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1550217884425.png",
        "Snapshot=webpage_1550217885166.png",
        INLINE_URLS,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/continue.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/startover.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("Findflight", NS_AUTO_STATUS);
    ns_page_think_time(3.735);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("Findflight_2");
    ns_web_url ("Findflight_2",
        "URL=http://10.10.30.111:81/cgi-bin/findflight?hidden_outboundFlight_button0=020%7C466%7C02-16-2019&outboundFlight=button1&hidden_outboundFlight_button1=021%7C424%7C02-16-2019&hidden_outboundFlight_button2=022%7C445%7C02-16-2019&hidden_outboundFlight_button3=023%7C381%7C02-16-2019&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=Window&reserveFlights.x=92&reserveFlights.y=15",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1550217888873.png",
        "Snapshot=webpage_1550217889569.png",
        INLINE_URLS,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/startover.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("Findflight_2", NS_AUTO_STATUS);
    ns_page_think_time(6.121);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("Findflight_3");
    ns_web_url ("Findflight_3",
        "URL=http://10.10.30.111:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=sdv&expDate=5&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=Window&outboundFlight=021%7C424%7C02-16-2019&advanceDiscount=&buyFlights.x=93&buyFlights.y=17&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1550217895659.png",
        "Snapshot=webpage_1550217896259.png",
        INLINE_URLS,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/bookanother.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("Findflight_3", NS_AUTO_STATUS);
    ns_page_think_time(3.255);

    //Page Auto splitted for Image Link 'SignOff Button' Clicked by User
    ns_start_transaction("welcome");
    ns_web_url ("welcome",
        "URL=http://10.10.30.111:81/cgi-bin/welcome",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1550217899430.png",
        "Snapshot=webpage_1550217900145.png",
        INLINE_URLS,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.111:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("welcome", NS_AUTO_STATUS);
    ns_page_think_time(10.335);

}