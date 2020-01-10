/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 06/12/2019 01:50:06
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
        "URL=http://10.10.30.2/tours/index.html",
        "HEADER=Accept-Language:en-us",
        "HEADER=Upgrade-Insecure-Requests:1",
        "REDIRECT=YES",
        "LOCATION=https://10.10.30.2/tours/index.html",
        "PreSnapshot=webpage_1560327324829.png",
        "Snapshot=webpage_1560327325778.png",
        INLINE_URLS,
            "URL=https://10.10.30.2/tours/index.html", "HEADER=Accept-Language:en-us", "HEADER=Upgrade-Insecure-Requests:1", END_INLINE
    );

    ns_end_transaction("index_html", NS_AUTO_STATUS);
    ns_page_think_time(33.297);

    ns_start_transaction("index");
    ns_web_url ("index",
        "URL=https://10.10.30.2:81/tours/index.html",
        "HEADER=Accept-Language:en-us",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1560327359046.png",
        "Snapshot=webpage_1560327389169.png",
        INLINE_URLS,
            "URL=http://chromewebdata/", END_INLINE,
            "URL=https://10.10.30.2:81/tours/index.html", "HEADER=Accept-Language:en-us", "HEADER=Upgrade-Insecure-Requests:1", END_INLINE
    );

    ns_end_transaction("index", NS_AUTO_STATUS);
    ns_page_think_time(6.145);

    //Page Auto splitted for Button '' Clicked by User
    ns_start_transaction("index_html_2");
    ns_web_url ("index_html_2",
        "URL=http://10.10.30.2:81/tours/index.html",
        "HEADER=Accept-Language:en-us",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1560327399755.png",
        "Snapshot=webpage_1560327399755.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=cavisson&password=cavisson&login.x=0&login.y=0&login=Login&JSFormSubmit=off", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/cgi-bin/reservation", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/continue.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("index_html_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("query");
    ns_web_url ("query",
        "URL=https://clients1.google.com/tbproxy/af/query?client=Chromium",
        "METHOD=POST",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/proto",
        "PreSnapshot=webpage_1560327474049.png",
        "Snapshot=NA",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/query_main_url_1_1560327606470.body",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.30.2:81/cgi-bin/findflight?depart=Acapulco&departDate=06-13-2019&arrive=Acapulco&returnDate=06-14-2019&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=84&findFlights.y=10&findFlights=Submit", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/startover.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/continue.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-13-2019&hidden_outboundFlight_button1=001%7C0%7C06-13-2019&hidden_outboundFlight_button2=002%7C0%7C06-13-2019&hidden_outboundFlight_button3=003%7C0%7C06-13-2019&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=87&reserveFlights.y=18", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/startover.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("query", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("rpc");
    ns_web_url ("rpc",
        "URL=https://www.googleapis.com/rpc",
        "METHOD=POST",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:application/json",
        "PreSnapshot=NA",
        "Snapshot=NA",
        BODY_BEGIN,
            "{"method":"spelling.check","apiVersion":"v2","params":{"text":"Fremont, CA 94538","language":"en","originCountry":"USA","key":"dummytoken"}}",
        BODY_END
    );

    ns_end_transaction("rpc", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("query_2");
    ns_web_url ("query_2",
        "URL=https://clients1.google.com/tbproxy/af/query?client=Chromium",
        "METHOD=POST",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/proto",
        "PreSnapshot=webpage_1560327518992.png",
        "Snapshot=NA",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/query_2_main_url_1_1560327606489.body",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.30.2:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=oudheiudheiufhwif&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-13-2019&advanceDiscount=&buyFlights.x=64&buyFlights.y=6&.cgifields=saveCC", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/bookanother.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/cgi-bin/home", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("query_2", NS_AUTO_STATUS);
    ns_page_think_time(7.631);

}
