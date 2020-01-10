/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 06/12/2019 01:47:58
    Flow details:
    Build details: 4.1.14 (build# 126)
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
        "URL=http://66.220.31.131:9020/tours/index.html",
        "HEADER=Accept-Language:en-in",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1560326615139.png",
        "Snapshot=webpage_1560326627221.png",
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("index_html", NS_AUTO_STATUS);
    ns_page_think_time(14.575);

    //Page Auto splitted for Image Link 'Login' Clicked by User
    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=http://66.220.31.131:9020/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=gdadddad&password=ddds&login.x=35&login.y=16&login=Login&JSFormSubmit=off",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560326641490.png",
        "Snapshot=webpage_1560326650356.png",
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("login", NS_AUTO_STATUS);
    ns_page_think_time(674.95);

    //Page Auto splitted for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("reservation");
    ns_web_url ("reservation",
        "URL=http://66.220.31.131:9020/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560327320702.png",
        "Snapshot=webpage_1560327329363.png",
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/continue.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("query");
    ns_web_url ("query",
        "URL=https://clients1.google.com/tbproxy/af/query?client=Chromium",
        "METHOD=POST",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/proto",
        "PreSnapshot=NA",
        "Snapshot=NA",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/query_main_url_1_1560327478758.body",
        BODY_END,
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("query", NS_AUTO_STATUS);
    ns_page_think_time(14.095);

    //Page Auto splitted for 
    ns_start_transaction("findflight");
    ns_web_url ("findflight",
        "URL=http://66.220.31.131:9020/cgi-bin/findflight?depart=Acapulco&departDate=06-13-2019&arrive=Acapulco&returnDate=06-14-2019&numPassengers=1&seatPref=Aisle&seatType=Coach&findFlights.x=27&findFlights.y=16&findFlights=Submit",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560327343408.png",
        "Snapshot=webpage_1560327353187.png",
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/startover.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/continue.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(26.595);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_2");
    ns_web_url ("findflight_2",
        "URL=http://66.220.31.131:9020/cgi-bin/findflight?hidden_outboundFlight_button0=000%7C0%7C06-13-2019&outboundFlight=button1&hidden_outboundFlight_button1=001%7C0%7C06-13-2019&hidden_outboundFlight_button2=002%7C0%7C06-13-2019&hidden_outboundFlight_button3=003%7C0%7C06-13-2019&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=Aisle&reserveFlights.x=36&reserveFlights.y=13",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560327379726.png",
        "Snapshot=webpage_1560327388805.png",
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/startover.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("findflight_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("query_2");
    ns_web_url ("query_2",
        "URL=https://clients1.google.com/tbproxy/af/query?client=Chromium",
        "METHOD=POST",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/proto",
        "PreSnapshot=NA",
        "Snapshot=NA",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/query_2_main_url_1_1560327478852.body",
        BODY_END,
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("query_2", NS_AUTO_STATUS);
    ns_page_think_time(6.79);

    ns_start_transaction("reservation_2");
    ns_web_url ("reservation_2",
        "URL=http://66.220.31.131:9020/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560327395460.png",
        "Snapshot=webpage_1560327404012.png"
    );

    ns_end_transaction("reservation_2", NS_AUTO_STATUS);
    ns_page_think_time(0.047);

    //Page Auto splitted for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("banner_animated_gif");
    ns_web_url ("banner_animated_gif",
        "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560327395800.png",
        "Snapshot=webpage_1560327399184.png",
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/continue.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("banner_animated_gif", NS_AUTO_STATUS);
    ns_page_think_time(6.191);

    //Page Auto splitted for 
    ns_start_transaction("findflight_3");
    ns_web_url ("findflight_3",
        "URL=http://66.220.31.131:9020/cgi-bin/findflight?depart=Acapulco&departDate=06-13-2019&arrive=Acapulco&returnDate=06-14-2019&numPassengers=1&seatPref=Aisle&seatType=Coach&findFlights.x=85&findFlights.y=16&findFlights=Submit",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560327410156.png",
        "Snapshot=webpage_1560327419479.png",
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/continue.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/startover.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("findflight_3", NS_AUTO_STATUS);
    ns_page_think_time(7.647);

    //Page Auto splitted for 
    ns_start_transaction("findflight_4");
    ns_web_url ("findflight_4",
        "URL=http://66.220.31.131:9020/cgi-bin/findflight?hidden_outboundFlight_button0=000%7C0%7C06-13-2019&outboundFlight=button1&hidden_outboundFlight_button1=001%7C0%7C06-13-2019&hidden_outboundFlight_button2=002%7C0%7C06-13-2019&hidden_outboundFlight_button3=003%7C0%7C06-13-2019&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=Aisle&reserveFlights.x=61&reserveFlights.y=9",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560327427132.png",
        "Snapshot=webpage_1560327436716.png",
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/startover.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("findflight_4", NS_AUTO_STATUS);
    ns_page_think_time(16.115);

    //Page Auto splitted for 
    ns_start_transaction("findflight_5");
    ns_web_url ("findflight_5",
        "URL=http://66.220.31.131:9020/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=145448&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=Aisle&outboundFlight=001%7C0%7C06-13-2019&advanceDiscount=&buyFlights.x=77&buyFlights.y=12&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560327451254.png",
        "Snapshot=webpage_1560327459885.png"
    );

    ns_end_transaction("findflight_5", NS_AUTO_STATUS);
    ns_page_think_time(0.047);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("banner_animated_gif_2");
    ns_web_url ("banner_animated_gif_2",
        "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560327451574.png",
        "Snapshot=webpage_1560327455454.png",
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/bookanother.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_2", NS_AUTO_STATUS);
    ns_page_think_time(17.15);

}
