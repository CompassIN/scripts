/*-----------------------------------------------------------------------------
    Name: hpd_tours
    Recorded By: netstorm
    Date of recording: 04/09/2012 07:04:09
    Flow details:
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void hpd_tours()
{
  char ptr1[128];
  char ptr2[128];
  char ptr3[128];

    ns_web_url ("index_html",
        "URL=http://127.0.0.1:81/tours/index.html?S1v1={S1v1}&S1v2={S1v2}&S1v3={S1v3}",
        "HEADER=Accept-Language: en-US",
        INLINE_URLS,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language: en-US", END_INLINE
    );

    ns_page_think_time(0.078);

    strcpy(ptr1, ns_eval_string("{S1v1}"));
    strcpy(ptr2, ns_eval_string("{S1v2}"));
    strcpy(ptr3, ns_eval_string("{S1v3}"));

    printf("File param (S1v1) values: NVM = %d, Vuser Id = %d, Sess Ins = %d, "
                                    "S1v1 = [%s], S1v2 = [%s], S1v3 = [%s]\n", 
                                     ns_get_nvmid(), ns_get_userid(), ns_get_sessid(), ptr1, ptr2, ptr3); 
    ns_web_url ("login",
        "URL=http://127.0.0.1:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=netstorm&password=netstorm&JSFormSubmit=off&login.x=52&login.y=10",
        "HEADER=Accept-Language: en-US",
        INLINE_URLS,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language: en-US", END_INLINE
    );

    ns_page_think_time(0.047);

    ns_web_url ("reservation",
        "URL=http://127.0.0.1:81/cgi-bin/reservation",
        "HEADER=Accept-Language: en-US",
        INLINE_URLS,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/images/continue.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language: en-US", END_INLINE
    );

    ns_page_think_time(0.032);

    ns_web_url ("findflight",
        "URL=http://127.0.0.1:81/cgi-bin/findflight?depart=Acapulco&departDate=04-10-2012&arrive=Acapulco&returnDate=04-11-2012&numPassengers=1&seatPref=Window&seatType=First&findFlights.x=89&findFlights.y=12",
        "HEADER=Accept-Language: en-US",
        INLINE_URLS,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/images/continue.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/images/startover.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language: en-US", END_INLINE
    );

    ns_page_think_time(0.046);

    ns_web_url ("findflight_2",
        "URL=http://127.0.0.1:81/cgi-bin/findflight?hidden_outboundFlight_button0=000%7C0%7C04-10-2012&hidden_outboundFlight_button1=001%7C0%7C04-10-2012&outboundFlight=button2&hidden_outboundFlight_button2=002%7C0%7C04-10-2012&hidden_outboundFlight_button3=003%7C0%7C04-10-2012&numPassengers=1&advanceDiscount=&seatType=First&seatPref=Window&reserveFlights.x=65&reserveFlights.y=17",
        "HEADER=Accept-Language: en-US",
        INLINE_URLS,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/images/splash_creditcard.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/images/purchaseflight.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/images/startover.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language: en-US", END_INLINE
    );

    ns_page_think_time(0.031);

    ns_web_url ("findflight_3",
        "URL=http://127.0.0.1:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=First&seatPref=Window&outboundFlight=002%7C0%7C04-10-2012&advanceDiscount=&.cgifields=saveCC&buyFlights.x=57&buyFlights.y=12",
        "HEADER=Accept-Language: en-US",
        INLINE_URLS,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/images/bookanother.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language: en-US", END_INLINE
    );

    ns_page_think_time(0.094);

    ns_web_url ("welcome",
        "URL=http://127.0.0.1:81/cgi-bin/welcome",
        "HEADER=Accept-Language: en-US",
        INLINE_URLS,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/images/banner_merctur.jpg", "HEADER=Accept-Language: en-US", END_INLINE,
            "URL=http://127.0.0.1:81/tours/vep/images/velocigen.gif", "HEADER=Accept-Language: en-US", END_INLINE
    );

    ns_page_think_time(0.031);

}
