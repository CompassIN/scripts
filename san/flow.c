/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 06/12/2019 01:07:30
    Flow details:
    Build details: 4.1.14 (build# 31)
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
        "URL=http://10.10.30.2:81/tours/index.html",
        "HEADER=Accept-Language:en-in",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1560324911932.png",
        "Snapshot=webpage_1560324927814.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("index_html", NS_AUTO_STATUS);
    ns_page_think_time(10.081);

    //Page Auto splitted for Image Link 'Login' Clicked by User
    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=http://10.10.30.2:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=sandeep&password=sand&login.x=60&login.y=11&login=Login&JSFormSubmit=off",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560324933570.png",
        "Snapshot=webpage_1560324953326.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("login", NS_AUTO_STATUS);
    ns_page_think_time(13.86);

    //Page Auto splitted for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("reservation");
    ns_web_url ("reservation",
        "URL=http://10.10.30.2:81/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560324958987.png",
        "Snapshot=webpage_1560324958987.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("query");
    ns_web_url ("query",
        "URL=https://clients1.google.com/tbproxy/af/query?client=Chromium",
        "METHOD=POST",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/proto",
        "PreSnapshot=webpage_1560324971116.png",
        "Snapshot=NA",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/query_main_url_1_1560325050313.body",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/images/continue.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/cgi-bin/findflight?depart=Acapulco&departDate=06-13-2019&arrive=Acapulco&returnDate=06-14-2019&numPassengers=1&seatPref=Window&seatType=First&findFlights.x=62&findFlights.y=12&findFlights=Submit", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/continue.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/startover.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/cgi-bin/findflight?hidden_outboundFlight_button0=000%7C0%7C06-13-2019&outboundFlight=button1&hidden_outboundFlight_button1=001%7C0%7C06-13-2019&hidden_outboundFlight_button2=002%7C0%7C06-13-2019&hidden_outboundFlight_button3=003%7C0%7C06-13-2019&numPassengers=1&advanceDiscount=&seatType=First&seatPref=Window&reserveFlights.x=104&reserveFlights.y=7", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("query", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("query_2");
    ns_web_url ("query_2",
        "URL=https://clients1.google.com/tbproxy/af/query?client=Chromium",
        "METHOD=POST",
        "HEADER=Accept-Language:en-in",
        "HEADER=Content-Type:text/proto",
        "PreSnapshot=webpage_1560325002097.png",
        "Snapshot=NA",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/query_2_main_url_1_1560325050485.body",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/startover.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=dsds&expDate=&oldCCOption=&numPassengers=1&seatType=First&seatPref=Window&outboundFlight=001%7C0%7C06-13-2019&advanceDiscount=&buyFlights.x=34&buyFlights.y=12&.cgifields=saveCC", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/bookanother.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("query_2", NS_AUTO_STATUS);
    ns_page_think_time(16.459);

    ns_start_transaction("welcome");
    ns_web_url ("welcome",
        "URL=http://10.10.30.2:81/cgi-bin/welcome",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560325022050.png",
        "Snapshot=webpage_1560325049035.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("welcome", NS_AUTO_STATUS);
    ns_page_think_time(4.459);

}
