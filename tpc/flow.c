/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 01/15/2019 07:18:23
    Flow details:
    Build details: 4.1.13 (build# 34)
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
        "URL=http://10.10.30.7:81/tours/index.html",
        "HEADER=Accept-Language:en-us",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1547559919284.png",
        "Snapshot=webpage_1547559921243.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("index_html", NS_AUTO_STATUS);
    ns_page_think_time(3.944);

    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=http://10.10.30.7:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=&password=&login.x=75&login.y=16&login=Login&JSFormSubmit=off",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1547559923870.png",
        "Snapshot=webpage_1547559924532.png"
    );

    ns_end_transaction("login", NS_AUTO_STATUS);
    ns_page_think_time(0.033);

    //Page Auto splitted for Image Link 'Login' Clicked by User
    ns_start_transaction("banner_animated_gif");
    ns_web_url ("banner_animated_gif",
        "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1547559924023.png",
        "Snapshot=webpage_1547559924124.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("banner_animated_gif", NS_AUTO_STATUS);
    ns_page_think_time(2.53);

    ns_start_transaction("reservation");
    ns_web_url ("reservation",
        "URL=http://10.10.30.7:81/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1547559926971.png",
        "Snapshot=webpage_1547559927444.png"
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);
    ns_page_think_time(0.051);

    //Page Auto splitted for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("banner_animated_gif_2");
    ns_web_url ("banner_animated_gif_2",
        "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1547559927083.png",
        "Snapshot=webpage_1547559927169.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/continue.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_2", NS_AUTO_STATUS);
    ns_page_think_time(86.847);

    //Page Auto splitted for 
    ns_start_transaction("findflight");
    ns_web_url ("findflight",
        "URL=http://10.10.30.7:81/cgi-bin/findflight?depart=Frankfurt&departDate=01-16-2019&arrive=New+York&returnDate=01-17-2019&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=97&findFlights.y=13&findFlights=Submit",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1547560014258.png",
        "Snapshot=webpage_1547560014698.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/startover.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/continue.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(2.114);

    ns_start_transaction("findflight_2");
    ns_web_url ("findflight_2",
        "URL=http://10.10.30.7:81/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=130%7C548%7C01-16-2019&hidden_outboundFlight_button1=131%7C499%7C01-16-2019&hidden_outboundFlight_button2=132%7C523%7C01-16-2019&hidden_outboundFlight_button3=133%7C449%7C01-16-2019&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=91&reserveFlights.y=16",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1547560016765.png",
        "Snapshot=webpage_1547560017161.png"
    );

    ns_end_transaction("findflight_2", NS_AUTO_STATUS);
    ns_page_think_time(0.055);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("banner_animated_gif_3");
    ns_web_url ("banner_animated_gif_3",
        "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1547560016820.png",
        "Snapshot=webpage_1547560016875.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/startover.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_3", NS_AUTO_STATUS);
    ns_page_think_time(8.386);

    ns_start_transaction("findflight_3");
    ns_web_url ("findflight_3",
        "URL=http://10.10.30.7:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=130%7C548%7C01-16-2019&advanceDiscount=&buyFlights.x=76&buyFlights.y=15&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1547560025530.png",
        "Snapshot=webpage_1547560025952.png"
    );

    ns_end_transaction("findflight_3", NS_AUTO_STATUS);
    ns_page_think_time(0.089);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("banner_animated_gif_4");
    ns_web_url ("banner_animated_gif_4",
        "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1547560025619.png",
        "Snapshot=webpage_1547560025681.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/bookanother.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_4", NS_AUTO_STATUS);
    ns_page_think_time(75.379);

}
