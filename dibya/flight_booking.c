/*-----------------------------------------------------------------------------
    Name: flight_booking
    Recorded By: cavisson
    Date of recording: 06/12/2019 01:10:18
    Flow details:
    Build details: 4.1.14 (build# 126)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flight_booking()
{
    ns_start_transaction("index_html");
    ns_web_url ("index_html",
        "URL=https://redirector.gvt1.com/edgedl/chrome/dict/en-us-8-0.bdic",
        "PreSnapshot=webpage_1560324506430.png",
        "Snapshot=webpage_1560324534268.png",
        INLINE_URLS,
            "URL=https://r5---sn-ci5gup-qxa6.gvt1.com/edgedl/chrome/dict/en-us-8-0.bdic?cms_redirect=yes&mip=182.71.119.213&mm=28&mn=sn-ci5gup-qxa6&ms=nvh&mt=1560324178&mv=u&pl=24&shardbypass=yes", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/index.html", "HEADER=Accept-Language:en-us", "HEADER=Upgrade-Insecure-Requests:1", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("index_html", NS_AUTO_STATUS);
    ns_page_think_time(30.502);

    //Page Auto splitted for 
    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=http://10.10.30.2:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=amlansamlan&password=fyhehhcxcb&login.x=59&login.y=16&login=Login&JSFormSubmit=off",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1560324560755.png",
        "Snapshot=webpage_1560324572120.png"
    );

    ns_end_transaction("login", NS_AUTO_STATUS);
    ns_page_think_time(0.146);

    //Page Auto splitted for Image Link 'Login' Clicked by User
    ns_start_transaction("banner_animated_gif");
    ns_web_url ("banner_animated_gif",
        "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1560324561002.png",
        "Snapshot=webpage_1560324564788.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("banner_animated_gif", NS_AUTO_STATUS);
    ns_page_think_time(15.774);

    ns_start_transaction("reservation");
    ns_web_url ("reservation",
        "URL=http://10.10.30.2:81/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1560324587162.png",
        "Snapshot=webpage_1560324630822.png"
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);
    ns_page_think_time(0.284);

    //Page Auto splitted for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("banner_animated_gif_2");
    ns_web_url ("banner_animated_gif_2",
        "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1560324587490.png",
        "Snapshot=webpage_1560324591194.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("query");
    ns_web_url ("query",
        "URL=https://clients1.google.com/tbproxy/af/query?client=Chromium",
        "METHOD=POST",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/proto",
        "PreSnapshot=NA",
        "Snapshot=NA",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/query_main_url_1_1560325218793.body",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/images/continue.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("query", NS_AUTO_STATUS);
    ns_page_think_time(31.537);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight");
    ns_web_url ("findflight",
        "URL=http://10.10.30.2:81/cgi-bin/findflight?depart=Acapulco&departDate=06-13-2019&arrive=Acapulco&returnDate=06-14-2019&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=54&findFlights.y=14&findFlights=Submit",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1560324635436.png",
        "Snapshot=webpage_1560324669979.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/continue.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/startover.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(440.117);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_2");
    ns_web_url ("findflight_2",
        "URL=http://10.10.30.2:81/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-13-2019&hidden_outboundFlight_button1=001%7C0%7C06-13-2019&hidden_outboundFlight_button2=002%7C0%7C06-13-2019&hidden_outboundFlight_button3=003%7C0%7C06-13-2019&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=96&reserveFlights.y=9",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1560325104542.png",
        "Snapshot=webpage_1560325127613.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("findflight_2", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("query_2");
    ns_web_url ("query_2",
        "URL=https://clients1.google.com/tbproxy/af/query?client=Chromium",
        "METHOD=POST",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/proto",
        "PreSnapshot=NA",
        "Snapshot=NA",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/query_2_main_url_1_1560325218849.body",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/startover.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("query_2", NS_AUTO_STATUS);
    ns_page_think_time(14.545);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_3");
    ns_web_url ("findflight_3",
        "URL=http://10.10.30.2:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=hfjyfgjgff&expDate=vdghd&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-13-2019&advanceDiscount=&buyFlights.x=80&buyFlights.y=14&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1560325142130.png",
        "Snapshot=webpage_1560325169069.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/bookanother.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("findflight_3", NS_AUTO_STATUS);
    ns_page_think_time(20.598);

    ns_start_transaction("welcome");
    ns_web_url ("welcome",
        "URL=http://10.10.30.2:81/cgi-bin/welcome",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1560325174198.png",
        "Snapshot=webpage_1560325196944.png"
    );

    ns_end_transaction("welcome", NS_AUTO_STATUS);
    ns_page_think_time(0.044);

    //Page Auto splitted for Image Link 'SignOff Button' Clicked by User
    ns_start_transaction("banner_animated_gif_3");
    ns_web_url ("banner_animated_gif_3",
        "URL=http://10.10.30.2:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1560325174286.png",
        "Snapshot=webpage_1560325181824.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.2:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_3", NS_AUTO_STATUS);
    ns_page_think_time(28.044);

}
