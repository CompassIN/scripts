/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 06/12/2019 02:02:44
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
        "PreSnapshot=webpage_1560328167346.png",
        "Snapshot=webpage_1560328177580.png",
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("index_html", NS_AUTO_STATUS);
    ns_page_think_time(28.081);

    //Page Auto splitted for Image Link 'Login' Clicked by User
    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=http://66.220.31.131:9020/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=sasgas&password=sass&login.x=47&login.y=5&login=Login&JSFormSubmit=off",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560328205066.png",
        "Snapshot=webpage_1560328212871.png",
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
    ns_page_think_time(7.516);

    ns_start_transaction("reservation");
    ns_web_url ("reservation",
        "URL=http://66.220.31.131:9020/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560328217340.png",
        "Snapshot=webpage_1560328226138.png"
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);
    ns_page_think_time(0.016);

    //Page Auto splitted for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("banner_animated_gif");
    ns_web_url ("banner_animated_gif",
        "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560328217636.png",
        "Snapshot=webpage_1560328222898.png",
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/continue.gif", "HEADER=Accept-Language:en-in", END_INLINE
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
            "$CAVINCLUDE_NOPARAM$=http_request_body/query_main_url_1_1560328364825.body",
        BODY_END,
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("query", NS_AUTO_STATUS);
    ns_page_think_time(10.207);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight");
    ns_web_url ("findflight",
        "URL=http://66.220.31.131:9020/cgi-bin/findflight?depart=Acapulco&departDate=06-13-2019&arrive=Acapulco&returnDate=06-14-2019&numPassengers=1&seatPref=Aisle&seatType=Coach&findFlights.x=55&findFlights.y=12&findFlights=Submit",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560328235111.png",
        "Snapshot=webpage_1560328243570.png",
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

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(34.829);

    ns_start_transaction("findflight_2");
    ns_web_url ("findflight_2",
        "URL=http://66.220.31.131:9020/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-13-2019&hidden_outboundFlight_button1=001%7C0%7C06-13-2019&hidden_outboundFlight_button2=002%7C0%7C06-13-2019&hidden_outboundFlight_button3=003%7C0%7C06-13-2019&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=Aisle&reserveFlights.x=85&reserveFlights.y=8",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560328277837.png",
        "Snapshot=webpage_1560328287290.png"
    );

    ns_end_transaction("findflight_2", NS_AUTO_STATUS);
    ns_page_think_time(0.031);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("banner_animated_gif_2");
    ns_web_url ("banner_animated_gif_2",
        "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560328278083.png",
        "Snapshot=webpage_1560328283187.png",
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/startover.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_2", NS_AUTO_STATUS);

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
            "$CAVINCLUDE_NOPARAM$=http_request_body/query_2_main_url_1_1560328364919.body",
        BODY_END,
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("query_2", NS_AUTO_STATUS);
    ns_page_think_time(7.983);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_3");
    ns_web_url ("findflight_3",
        "URL=http://66.220.31.131:9020/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=dwd&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=Aisle&outboundFlight=000%7C0%7C06-13-2019&advanceDiscount=&buyFlights.x=72&buyFlights.y=13&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560328295186.png",
        "Snapshot=webpage_1560328304209.png",
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/bookanother.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("findflight_3", NS_AUTO_STATUS);
    ns_page_think_time(8.491);

    ns_start_transaction("reservation_2");
    ns_web_url ("reservation_2",
        "URL=http://66.220.31.131:9020/cgi-bin/reservation?BookAnother.x=78&BookAnother.y=19",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560328312561.png",
        "Snapshot=webpage_1560328321668.png"
    );

    ns_end_transaction("reservation_2", NS_AUTO_STATUS);
    ns_page_think_time(0.063);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("banner_animated_gif_3");
    ns_web_url ("banner_animated_gif_3",
        "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560328312908.png",
        "Snapshot=webpage_1560328317947.png",
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/continue.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_3", NS_AUTO_STATUS);
    ns_page_think_time(9.321);

    ns_start_transaction("findflight_4");
    ns_web_url ("findflight_4",
        "URL=http://66.220.31.131:9020/cgi-bin/findflight?depart=Acapulco&departDate=06-13-2019&arrive=Acapulco&returnDate=06-14-2019&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=67&findFlights.y=10&findFlights=Submit",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560328330369.png",
        "Snapshot=webpage_1560328338693.png"
    );

    ns_end_transaction("findflight_4", NS_AUTO_STATUS);
    ns_page_think_time(0.016);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("banner_animated_gif_4");
    ns_web_url ("banner_animated_gif_4",
        "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560328330642.png",
        "Snapshot=webpage_1560328334964.png",
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/continue.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/startover.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_4", NS_AUTO_STATUS);
    ns_page_think_time(24.54);

}
