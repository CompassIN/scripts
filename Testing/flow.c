/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 02/11/2019 01:00:23
    Flow details:
    Build details: 4.1.13 (build# 37)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("welcome");
    ns_web_url ("welcome",
        "URL=http://10.10.30.7:81/cgi-bin/welcome",
        "HEADER=Accept-Language:en-in",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1549869847832.png",
        "Snapshot=webpage_1549869865922.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("welcome", NS_AUTO_STATUS);
    ns_page_think_time(224.086);

    //Page Auto splitted for Image Link 'Login' Clicked by User
    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=http://10.10.30.7:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=&password=&login.x=61&login.y=13&login=Login&JSFormSubmit=off",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1549870088757.png",
        "Snapshot=webpage_1549870089451.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("login", NS_AUTO_STATUS);
    ns_page_think_time(19.574);


    // //abc

    ns_start_transaction("reservation");
    ns_web_url ("reservation",
        "URL=http://10.10.30.7:81/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1549870108978.png",
        "Snapshot=webpage_1549870109699.png"
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);
    ns_page_think_time(0.217);

    //Page Auto splitted for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("banner_animated_gif");
    ns_web_url ("banner_animated_gif",
        "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1549870109249.png",
        "Snapshot=webpage_1549870109367.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/continue.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("banner_animated_gif", NS_AUTO_STATUS);
    ns_page_think_time(16.811);


    // //def

    ns_start_transaction("findflight");
    ns_web_url ("findflight",
        "URL=http://10.10.30.7:81/cgi-bin/findflight?depart=Acapulco&departDate=02-12-2019&arrive=Acapulco&returnDate=02-13-2019&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=68&findFlights.y=16&findFlights=Submit",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1549870126444.png",
        "Snapshot=webpage_1549870127089.png"
    );

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(0.025);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("banner_animated_gif_2");
    ns_web_url ("banner_animated_gif_2",
        "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1549870126506.png",
        "Snapshot=webpage_1549870126783.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/continue.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/startover.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_2", NS_AUTO_STATUS);
    ns_page_think_time(15.914);


    // // ghi

    ns_start_transaction("findflight_2");
    ns_web_url ("findflight_2",
        "URL=http://10.10.30.7:81/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C02-12-2019&hidden_outboundFlight_button1=001%7C0%7C02-12-2019&hidden_outboundFlight_button2=002%7C0%7C02-12-2019&hidden_outboundFlight_button3=003%7C0%7C02-12-2019&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=90&reserveFlights.y=19",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1549870142984.png",
        "Snapshot=webpage_1549870143594.png"
    );

    ns_end_transaction("findflight_2", NS_AUTO_STATUS);
    ns_page_think_time(0.107);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("banner_animated_gif_3");
    ns_web_url ("banner_animated_gif_3",
        "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1549870143061.png",
        "Snapshot=webpage_1549870143111.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/startover.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_3", NS_AUTO_STATUS);
    ns_page_think_time(22.762);


    // //ijk

    ns_start_transaction("findflight_3");
    ns_web_url ("findflight_3",
        "URL=http://10.10.30.7:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C02-12-2019&advanceDiscount=&buyFlights.x=88&buyFlights.y=15&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1549870166292.png",
        "Snapshot=webpage_1549870166913.png"
    );

    ns_end_transaction("findflight_3", NS_AUTO_STATUS);
    ns_page_think_time(0.108);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("banner_animated_gif_4");
    ns_web_url ("banner_animated_gif_4",
        "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1549870166372.png",
        "Snapshot=webpage_1549870166429.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/bookanother.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_4", NS_AUTO_STATUS);
    ns_page_think_time(27.133);


    // //lmn

    ns_start_transaction("welcome_2");
    ns_web_url ("welcome_2",
        "URL=http://10.10.30.7:81/cgi-bin/welcome",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1549870193861.png",
        "Snapshot=webpage_1549870194320.png"
    );

    ns_end_transaction("welcome_2", NS_AUTO_STATUS);
    ns_page_think_time(0.045);

    //Page Auto splitted for Image Link 'SignOff Button' Clicked by User
    ns_start_transaction("banner_animated_gif_5");
    ns_web_url ("banner_animated_gif_5",
        "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1549870193952.png",
        "Snapshot=webpage_1549870194009.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_5", NS_AUTO_STATUS);
    ns_page_think_time(25.373);

}
