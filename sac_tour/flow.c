/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: sachin
    Date of recording: 02/26/2019 12:01:29
    Flow details:
    Build details: 4.1.13 (build# 37)
    Modification History:
-----------------------------------------------------------------------------*/
/* TR1036  TR1037*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("home_html");
    ns_web_url ("home_html",
        "URL=http://10.10.30.111:81/tours/index.html",
        "HEADER=Accept-Language:en-us",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1551162655978.png",
        "Snapshot=webpage_1551162657471.png",
        INLINE_URLS,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("home_html", NS_AUTO_STATUS);
    ns_page_think_time(6.987);

    //Page Auto splitted for Image Link 'Login' Clicked by User
    ns_start_transaction("home");
    ns_web_url ("home",
        "URL=http://10.10.30.111:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username={tour}&password={password}&login.x=0&login.y=0&login=Login&JSFormSubmit=off",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1551162664430.png",
        "Snapshot=webpage_1551162665538.png",
        INLINE_URLS,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("home", NS_AUTO_STATUS);
    ns_page_think_time(1.806);

    //Page Auto splitted for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("booking");
    ns_web_url ("booking",
        "URL=http://10.10.30.111:81/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1{tour}",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1551162667332.png",
        "Snapshot=webpage_1551162667895.png",
        INLINE_URLS,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/continue.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("booking", NS_AUTO_STATUS);
    ns_page_think_time(2.817);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("searchflight");
    ns_web_url ("searchflight",
        "URL=http://10.10.30.111:81/cgi-bin/findflight?depart=Acapulco&departDate=02-27-2019&arrive=Acapulco&returnDate=02-28-2019&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=49&findFlights.y=9&findFlights=Submit",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1551162670727.png",
        "Snapshot=webpage_1551162671397.png",
        INLINE_URLS,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/continue.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/startover.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("searchflight", NS_AUTO_STATUS);
    ns_page_think_time(3.066);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("searchfligh_1");
    ns_web_url ("searchfligh_1",
        "URL=http://10.10.30.111:81/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C02-27-2019&hidden_outboundFlight_button1=001%7C0%7C02-27-2019&hidden_outboundFlight_button2=002%7C0%7C02-27-2019&hidden_outboundFlight_button3=003%7C0%7C02-27-2019&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=65&reserveFlights.y=19",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1551162674446.png",
        "Snapshot=webpage_1551162675436.png",
        INLINE_URLS,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/startover.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("searchfligh_1", NS_AUTO_STATUS);
    ns_page_think_time(3.436);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("searchfligh_2");
    ns_web_url ("searchfligh_2",
        "URL=http://10.10.30.111:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C02-27-2019&advanceDiscount=&buyFlights.x=78&buyFlights.y=19&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1551162678677.png",
        "Snapshot=webpage_1551162679305.png",
        INLINE_URLS,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/bookanother.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("searchfligh_2", NS_AUTO_STATUS);
    ns_page_think_time(4.299);

    //Page Auto splitted for Image Link 'SignOff Button' Clicked by User
    ns_start_transaction("welcome");
    ns_web_url ("welcome",
        "URL=http://10.10.30.111:81/cgi-bin/welcome",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1551162683597.png",
        "Snapshot=webpage_1551162684004.png",
        INLINE_URLS,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.111:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("welcome", NS_AUTO_STATUS);
    ns_page_think_time(35.523);

}
