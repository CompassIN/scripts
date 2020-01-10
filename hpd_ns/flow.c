/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 08/14/2019 05:10:37
    Flow details:
    Build details: 4.1.14 (build# 128)
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
        "URL=http://10.10.30.15:9010/tours/index.html",
        "HEADER=Accept-Language:en-in",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1565782657060.png",
        "Snapshot=webpage_1565782660592.png",
        INLINE_URLS,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("index_html", NS_AUTO_STATUS);
    ns_page_think_time(159.922);

    //Page Auto splitted for Image Link 'Login' Clicked by User
    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=http://10.10.30.15:9010/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=king&password=leo&login.x=38&login.y=15&login=Login&JSFormSubmit=off",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1565782819508.png",
        "Snapshot=webpage_1565782820179.png",
        INLINE_URLS,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("login", NS_AUTO_STATUS);
    ns_page_think_time(3.425);

    ns_start_transaction("reservation");
    ns_web_url ("reservation",
        "URL=http://10.10.30.15:9010/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1565782823365.png",
        "Snapshot=webpage_1565782824138.png"
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);
    ns_page_think_time(0.069);

    //Page Auto splitted for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("banner_animated_gif");
    ns_web_url ("banner_animated_gif",
        "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1565782823475.png",
        "Snapshot=webpage_1565782823551.png",
        INLINE_URLS,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/images/continue.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("banner_animated_gif", NS_AUTO_STATUS);

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
            "$CAVINCLUDE_NOPARAM$=http_request_body/query_main_url_1_1565782837876.body",
        BODY_END
    );

    ns_end_transaction("query", NS_AUTO_STATUS);
    ns_page_think_time(1.05);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight");
    ns_web_url ("findflight",
        "URL=http://10.10.30.15:9010/cgi-bin/findflight?depart=Acapulco&departDate=08-15-2019&arrive=Acapulco&returnDate=08-16-2019&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=47&findFlights.y=12&findFlights=Submit",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1565782825963.png",
        "Snapshot=webpage_1565782826495.png",
        INLINE_URLS,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/images/continue.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/images/startover.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(2.633);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_2");
    ns_web_url ("findflight_2",
        "URL=http://10.10.30.15:9010/cgi-bin/findflight?hidden_outboundFlight_button0=000%7C0%7C08-15-2019&outboundFlight=button1&hidden_outboundFlight_button1=001%7C0%7C08-15-2019&hidden_outboundFlight_button2=002%7C0%7C08-15-2019&hidden_outboundFlight_button3=003%7C0%7C08-15-2019&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=65&reserveFlights.y=10",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1565782829121.png",
        "Snapshot=webpage_1565782829658.png",
        INLINE_URLS,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-in", END_INLINE
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
            "$CAVINCLUDE_NOPARAM$=http_request_body/query_2_main_url_1_1565782837982.body",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.30.15:9010/tours/images/startover.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("query_2", NS_AUTO_STATUS);
    ns_page_think_time(3.468);

    ns_start_transaction("welcome");
    ns_web_url ("welcome",
        "URL=http://10.10.30.15:9010/cgi-bin/welcome",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1565782833065.png",
        "Snapshot=webpage_1565782833274.png"
    );

    ns_end_transaction("welcome", NS_AUTO_STATUS);
    ns_page_think_time(0.025);

    //Page Auto splitted for Image Link 'SignOff Button' Clicked by User
    ns_start_transaction("banner_animated_gif_2");
    ns_web_url ("banner_animated_gif_2",
        "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1565782833126.png",
        "Snapshot=webpage_1565782833188.png",
        INLINE_URLS,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.15:9010/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_2", NS_AUTO_STATUS);
    ns_page_think_time(1.812);

}
