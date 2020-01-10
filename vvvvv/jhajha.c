/*-----------------------------------------------------------------------------
    Name: jhajha
    Recorded By: cavisson
    Date of recording: 06/12/2019 01:32:31
    Flow details:
    Build details: 4.1.14 (build# 126)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void jhajha()
{
    ns_start_transaction("index_html");
    ns_web_url ("index_html",
        "URL=https://r3---sn-qxa7snee.gvt1.com/edgedl/chrome/dict/en-us-8-0.bdic?cms_redirect=yes&mip=61.12.67.22&mm=28&mn=sn-qxa7snee&ms=nvh&mt=1560325902&mv=m&pl=24&shardbypass=yes",
        "PreSnapshot=webpage_1560326037922.png",
        "Snapshot=webpage_1560326112814.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/index.html", "HEADER=Accept-Language:en-in", "HEADER=Upgrade-Insecure-Requests:1", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("index_html", NS_AUTO_STATUS);
    ns_page_think_time(23.287);

    //Page Auto splitted for Image Link 'Login' Clicked by User
    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=http://10.10.30.2:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=cavisson&password=cavisson&login.x=0&login.y=0&login=Login&JSFormSubmit=off",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560326123612.png",
        "Snapshot=webpage_1560326135031.png",
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
    ns_page_think_time(2.445);

    ns_start_transaction("reservation");
    ns_web_url ("reservation",
        "URL=http://10.10.30.2:81/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560326137441.png",
        "Snapshot=webpage_1560326190458.png"
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);
    ns_page_think_time(0.006);

    //Page Auto splitted for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("banner_animated_gif");
    ns_web_url ("banner_animated_gif",
        "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560326137483.png",
        "Snapshot=webpage_1560326160220.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/continue.gif", "HEADER=Accept-Language:en-in", END_INLINE
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
            "$CAVINCLUDE_NOPARAM$=http_request_body/query_main_url_1_1560326551139.body",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("query", NS_AUTO_STATUS);
    ns_page_think_time(4.526);

    ns_start_transaction("findflight");
    ns_web_url ("findflight",
        "URL=http://10.10.30.2:81/cgi-bin/findflight?depart=Acapulco&departDate=06-13-2019&arrive=Acapulco&returnDate=06-14-2019&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=73&findFlights.y=13&findFlights=Submit",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560326194953.png",
        "Snapshot=webpage_1560326254467.png"
    );

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(0.016);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("banner_animated_gif_2");
    ns_web_url ("banner_animated_gif_2",
        "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560326195056.png",
        "Snapshot=webpage_1560326254436.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/continue.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/startover.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_2", NS_AUTO_STATUS);
    ns_page_think_time(61.186);

    ns_start_transaction("findflight_2");
    ns_web_url ("findflight_2",
        "URL=http://10.10.30.2:81/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-13-2019&hidden_outboundFlight_button1=001%7C0%7C06-13-2019&hidden_outboundFlight_button2=002%7C0%7C06-13-2019&hidden_outboundFlight_button3=003%7C0%7C06-13-2019&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=74&reserveFlights.y=12",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560326272632.png",
        "Snapshot=webpage_1560326320713.png"
    );

    ns_end_transaction("findflight_2", NS_AUTO_STATUS);
    ns_page_think_time(0.062);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("banner_animated_gif_3");
    ns_web_url ("banner_animated_gif_3",
        "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560326272710.png",
        "Snapshot=webpage_1560326288624.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/startover.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_3", NS_AUTO_STATUS);

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
            "$CAVINCLUDE_NOPARAM$=http_request_body/query_2_main_url_1_1560326551180.body",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("query_2", NS_AUTO_STATUS);
    ns_page_think_time(32.008);

    ns_start_transaction("findflight_3");
    ns_web_url ("findflight_3",
        "URL=http://10.10.30.2:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-13-2019&advanceDiscount=&buyFlights.x=68&buyFlights.y=19&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560326326904.png",
        "Snapshot=webpage_1560326362392.png"
    );

    ns_end_transaction("findflight_3", NS_AUTO_STATUS);
    ns_page_think_time(0.015);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("banner_animated_gif_4");
    ns_web_url ("banner_animated_gif_4",
        "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560326326904.png",
        "Snapshot=webpage_1560326355245.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/bookanother.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_4", NS_AUTO_STATUS);
    ns_page_think_time(47.867);

    ns_start_transaction("welcome");
    ns_web_url ("welcome",
        "URL=http://10.10.30.2:81/cgi-bin/welcome",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560326410142.png",
        "Snapshot=webpage_1560326431985.png"
    );

    ns_end_transaction("welcome", NS_AUTO_STATUS);
    ns_page_think_time(0.064);

    //Page Auto splitted for Image Link 'SignOff Button' Clicked by User
    ns_start_transaction("banner_animated_gif_5");
    ns_web_url ("banner_animated_gif_5",
        "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-in",
        "PreSnapshot=webpage_1560326410254.png",
        "Snapshot=webpage_1560326431289.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_5", NS_AUTO_STATUS);
    ns_page_think_time(135.142);

}
