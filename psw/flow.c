/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 12/21/2018 01:06:26
    Flow details:
    Build details: 4.1.12 (build# 141)
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
        "PreSnapshot=webpage_1545377448121.png",
        "Snapshot=webpage_1545377448564.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("index_html", NS_AUTO_STATUS);
    ns_page_think_time(18.749);

    //Page Auto splitted for 
    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=http://10.10.30.7:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=parvinder&password=parvinder&login.x=42&login.y=10&login=Login&JSFormSubmit=off",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377467149.png",
        "Snapshot=webpage_1545377472724.png"
    );

    ns_end_transaction("login", NS_AUTO_STATUS);
    ns_page_think_time(0.068);

    //Page Auto splitted for Image Link 'Login' Clicked by User
    ns_start_transaction("banner_animated_gif");
    ns_web_url ("banner_animated_gif",
        "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377470299.png",
        "Snapshot=webpage_1545377471320.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("banner_animated_gif", NS_AUTO_STATUS);
    ns_page_think_time(6.484);

    ns_start_transaction("reservation");
    ns_web_url ("reservation",
        "URL=http://10.10.30.7:81/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377477807.png",
        "Snapshot=webpage_1545377478191.png"
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);
    ns_page_think_time(0.069);

    //Page Auto splitted for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("banner_animated_gif_2");
    ns_web_url ("banner_animated_gif_2",
        "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377477944.png",
        "Snapshot=webpage_1545377478026.png",
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
    ns_page_think_time(17.247);

    //Page Auto splitted for 
    ns_start_transaction("findflight");
    ns_web_url ("findflight",
        "URL=http://10.10.30.7:81/cgi-bin/findflight?depart=Frankfurt&departDate=12-22-2018&arrive=New+York&returnDate=12-23-2018&numPassengers=10&seatPref=Window&seatType=First&findFlights.x=66&findFlights.y=15&findFlights=Submit",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377495421.png",
        "Snapshot=webpage_1545377497558.png"
    );

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(0.009);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("banner_animated_gif_3");
    ns_web_url ("banner_animated_gif_3",
        "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377495472.png",
        "Snapshot=webpage_1545377495639.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/continue.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/startover.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_3", NS_AUTO_STATUS);
    ns_page_think_time(4.768);

    //Page Auto splitted for 
    ns_start_transaction("findflight_2");
    ns_web_url ("findflight_2",
        "URL=http://10.10.30.7:81/cgi-bin/findflight?hidden_outboundFlight_button0=130%7C1920%7C12-22-2018&outboundFlight=button1&hidden_outboundFlight_button1=131%7C1746%7C12-22-2018&hidden_outboundFlight_button2=132%7C1833%7C12-22-2018&hidden_outboundFlight_button3=133%7C1571%7C12-22-2018&numPassengers=10&advanceDiscount=&seatType=First&seatPref=Window&reserveFlights.x=54&reserveFlights.y=9",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377501177.png",
        "Snapshot=webpage_1545377501602.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/startover.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("findflight_2", NS_AUTO_STATUS);
    ns_page_think_time(19.628);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("index");
    ns_web_url ("index",
        "URL=http://10.10.30.7:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&pass2=&pass3=&pass4=&pass5=&pass6=&pass7=&pass8=&pass9=&pass10=&creditCard=&expDate=&oldCCOption=&numPassengers=10&seatType=First&seatPref=Window&outboundFlight=131%7C1746%7C12-22-2018&advanceDiscount=&buyFlights.x=89&buyFlights.y=5&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377521240.png",
        "Snapshot=webpage_1545377593392.png",
        INLINE_URLS,
           // "URL=http://chromewebdata/", END_INLINE
    );

    ns_end_transaction("index", NS_AUTO_STATUS);
    ns_page_think_time(167.071);

    //Page Auto splitted for 
    ns_start_transaction("findflight_3");
    ns_web_url ("findflight_3",
        "URL=http://10.10.30.7:81/cgi-bin/findflight?hidden_outboundFlight_button0=130%7C1920%7C12-22-2018&outboundFlight=button1&hidden_outboundFlight_button1=131%7C1746%7C12-22-2018&hidden_outboundFlight_button2=132%7C1833%7C12-22-2018&hidden_outboundFlight_button3=133%7C1571%7C12-22-2018&numPassengers=10&advanceDiscount=&seatType=First&seatPref=Window&reserveFlights.x=54&reserveFlights.y=9",
        "HEADER=Accept-Language:en-us",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1545377609833.png",
        "Snapshot=webpage_1545377612325.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/startover.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("findflight_3", NS_AUTO_STATUS);
    ns_page_think_time(5.134);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_4");
    ns_web_url ("findflight_4",
        "URL=http://10.10.30.7:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&pass2=&pass3=&pass4=&pass5=&pass6=&pass7=&pass8=&pass9=&pass10=&creditCard=&expDate=&oldCCOption=&numPassengers=10&seatType=First&seatPref=Window&outboundFlight=131%7C1746%7C12-22-2018&advanceDiscount=&buyFlights.x=85&buyFlights.y=19&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377617433.png",
        "Snapshot=webpage_1545377617644.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/bookanother.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("findflight_4", NS_AUTO_STATUS);
    ns_page_think_time(5.048);

    ns_start_transaction("reservation_2");
    ns_web_url ("reservation_2",
        "URL=http://10.10.30.7:81/cgi-bin/reservation?BookAnother.x=140&BookAnother.y=16",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377622650.png",
        "Snapshot=webpage_1545377622905.png"
    );

    ns_end_transaction("reservation_2", NS_AUTO_STATUS);
    ns_page_think_time(0.02);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("banner_animated_gif_4");
    ns_web_url ("banner_animated_gif_4",
        "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377622690.png",
        "Snapshot=webpage_1545377622770.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/continue.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_4", NS_AUTO_STATUS);
    ns_page_think_time(124.009);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_5");
    ns_web_url ("findflight_5",
        "URL=http://10.10.30.7:81/cgi-bin/findflight?depart=San+Francisco&departDate=12-22-2018&arrive=Portland&returnDate=12-23-2018&numPassengers=1&seatPref=Aisle&seatType=First&findFlights.x=85&findFlights.y=18&findFlights=Submit",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377746895.png",
        "Snapshot=webpage_1545377747145.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/continue.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/startover.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("findflight_5", NS_AUTO_STATUS);
    ns_page_think_time(5.863);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_6");
    ns_web_url ("findflight_6",
        "URL=http://10.10.30.7:81/cgi-bin/findflight?hidden_outboundFlight_button0=650%7C3460%7C12-22-2018&hidden_outboundFlight_button1=651%7C3146%7C12-22-2018&hidden_outboundFlight_button2=652%7C3303%7C12-22-2018&outboundFlight=button3&hidden_outboundFlight_button3=653%7C2831%7C12-22-2018&numPassengers=1&advanceDiscount=&seatType=First&seatPref=Aisle&reserveFlights.x=56&reserveFlights.y=12",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377752993.png",
        "Snapshot=webpage_1545377753343.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/startover.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("findflight_6", NS_AUTO_STATUS);
/*
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
            "{"method":"spelling.check","apiVersion":"v2","params":{"text":"Tiger","language":"en","originCountry":"USA","key":"dummytoken"}}",
        BODY_END
    );

    ns_end_transaction("rpc", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("rpc_2");
    ns_web_url ("rpc_2",
        "URL=https://www.googleapis.com/rpc",
        "METHOD=POST",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:application/json",
        "PreSnapshot=NA",
        "Snapshot=NA",
        BODY_BEGIN,
            "{"method":"spelling.check","apiVersion":"v2","params":{"text":"Tiger ","language":"en","originCountry":"USA","key":"dummytoken"}}",
        BODY_END
    );

    ns_end_transaction("rpc_2", NS_AUTO_STATUS);
    ns_page_think_time(4.864);
*/
    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_7");
    ns_web_url ("findflight_7",
        "URL=http://10.10.30.7:81/cgi-bin/findflight?firstName=Tiger+shroff&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=First&seatPref=Aisle&outboundFlight=653%7C2831%7C12-22-2018&advanceDiscount=&buyFlights.x=64&buyFlights.y=6&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377761157.png",
        "Snapshot=webpage_1545377761433.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/bookanother.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("findflight_7", NS_AUTO_STATUS);
    ns_page_think_time(1.893);

    ns_start_transaction("reservation_3");
    ns_web_url ("reservation_3",
        "URL=http://10.10.30.7:81/cgi-bin/reservation?BookAnother.x=50&BookAnother.y=20",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377763287.png",
        "Snapshot=webpage_1545377763577.png"
    );

    ns_end_transaction("reservation_3", NS_AUTO_STATUS);
    ns_page_think_time(0.017);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("banner_animated_gif_5");
    ns_web_url ("banner_animated_gif_5",
        "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377763320.png",
        "Snapshot=webpage_1545377763375.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/continue.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_5", NS_AUTO_STATUS);
    ns_page_think_time(2.331);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_8");
    ns_web_url ("findflight_8",
        "URL=http://10.10.30.7:81/cgi-bin/findflight?depart=Acapulco&departDate=12-22-2018&arrive=Acapulco&returnDate=12-23-2018&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=51&findFlights.y=17&findFlights=Submit",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377765893.png",
        "Snapshot=webpage_1545377766133.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/startover.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/continue.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("findflight_8", NS_AUTO_STATUS);
    ns_page_think_time(1.982);

    ns_start_transaction("findflight_9");
    ns_web_url ("findflight_9",
        "URL=http://10.10.30.7:81/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C12-22-2018&hidden_outboundFlight_button1=001%7C0%7C12-22-2018&hidden_outboundFlight_button2=002%7C0%7C12-22-2018&hidden_outboundFlight_button3=003%7C0%7C12-22-2018&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=73&reserveFlights.y=9",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377768102.png",
        "Snapshot=webpage_1545377768504.png"
    );

    ns_end_transaction("findflight_9", NS_AUTO_STATUS);
    ns_page_think_time(0.025);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("banner_animated_gif_6");
    ns_web_url ("banner_animated_gif_6",
        "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377768117.png",
        "Snapshot=webpage_1545377768165.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/startover.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_6", NS_AUTO_STATUS);
    ns_page_think_time(2.258);

    ns_start_transaction("findflight_10");
    ns_web_url ("findflight_10",
        "URL=http://10.10.30.7:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C12-22-2018&advanceDiscount=&buyFlights.x=85&buyFlights.y=11&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377770693.png",
        "Snapshot=webpage_1545377770946.png"
    );

    ns_end_transaction("findflight_10", NS_AUTO_STATUS);
    ns_page_think_time(0.018);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("banner_animated_gif_7");
    ns_web_url ("banner_animated_gif_7",
        "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377770741.png",
        "Snapshot=webpage_1545377770786.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/bookanother.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_7", NS_AUTO_STATUS);
    ns_page_think_time(6.274);

    ns_start_transaction("welcome");
    ns_web_url ("welcome",
        "URL=http://10.10.30.7:81/cgi-bin/welcome",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377777185.png",
        "Snapshot=webpage_1545377777387.png"
    );

    ns_end_transaction("welcome", NS_AUTO_STATUS);
    ns_page_think_time(0.07);

    //Page Auto splitted for Image Link 'SignOff Button' Clicked by User
    ns_start_transaction("banner_animated_gif_8");
    ns_web_url ("banner_animated_gif_8",
        "URL=http://10.10.30.7:81/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1545377777275.png",
        "Snapshot=webpage_1545377777319.png",
        INLINE_URLS,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", END_INLINE,
            "URL=http://10.10.30.7:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("banner_animated_gif_8", NS_AUTO_STATUS);
    ns_page_think_time(6.835);

}
