/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: netstorm
    Date of recording: 05/23/2017 10:56:34
    Flow details:
    Build details: 4.1.8 (build# 19)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{//int a=2;
char *name1 ="dy";
//   ns_define_transaction("helloo");
  // ns_start_transaction("staticTX");
     ns_start_transaction("hello");

//ns_advance_param("param1");
//ns_advance_param("param5");
//ns_advance_param("param6");

//char *var1=ns_eval_string("{param1}");
//char *var2=ns_eval_string("{param5}");
//char *var3=ns_eval_string("{param6}");

//ns_eval_string
    ns_web_url ("page_1",
      //  "URL=http://www.google.com",
        "URL=http://10.10.30.56:9020/tours/index.html",
        //"URL=http://www.test1.com:9030/tours/index.html",
        "HEADER=Accept-Language:en-us**********{wt_rm}",
        "HEADER=Upgrade-Insecure-Requests:1*******{uname}",
        "PreSnapshot=webpage_1495517169573.png",
        "Snapshot=webpage_1495517170259.png",
     INLINE_URLS,
          "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
           "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE 
    );
    ns_page_think_time(1);



   ns_end_transaction_as("hello", NS_AUTO_STATUS, name1);
//   ns_page_think_time(10.0);
//   ns_end_transaction("staticTX", NS_AUTO_STATUS);
 

   ns_start_transaction("{pm_1}abc{pm1}");
           ns_web_url ("page_2",
        "URL=http://10.10.30.56:9020/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=&password=&login.x=53&login.y=11&login=Login&JSFormSubmit=off",
        //"URL=http://www.test1.com:9030/tours/index.html",
        "HEADER=Upgrade-Insecure-Requests:1******{pm_1}",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1495517172516.png",
        "Snapshot=webpage_1495517172902.png",
        INLINE_URLS,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/images/banner_merctur.jpg", END_INLINE 
    );
    ns_page_think_time(1);
   ns_end_transaction("{pm_1}abc{pm1}", NS_AUTO_STATUS);
  // ns_page_think_time(10.0);

   ns_start_transaction("{pm_2}{pm2}");
   // ns_start_transaction("tx1");
    ns_web_url ("page_3",
        "URL=http://10.10.30.56:9020/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1495517175925.png",
        "Snapshot=webpage_1495517176821.png",
        INLINE_URLS,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/images/continue.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE
    );
    ns_page_think_time(1);
  //  ns_end_transaction("tx1", NS_AUTO_STATUS);
   ns_end_transaction("{pm_2}{pm2}", NS_AUTO_STATUS);

    ns_start_transaction("{pm_3}{pm3}");
    ns_web_url ("page_4",
        "URL=http://10.10.30.56:9020/cgi-bin/findflight?depart=Acapulco&departDate=05-24-2017&arrive=Acapulco&returnDate=05-25-2017&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=60&findFlights.y=5&findFlights=Submit",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1495517178289.png",
        "Snapshot=webpage_1495517178872.png",
        INLINE_URLS,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/images/startover.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/images/continue.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE
    );
    ns_page_think_time(1);
    ns_end_transaction("{pm_3}{pm3}", NS_AUTO_STATUS);

   ns_start_transaction("{pm_4}{pm4}");
   // ns_start_transaction("tx5");
    ns_web_url ("page_5",
        "URL=http://10.10.30.56:9020/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C05-24-2017&hidden_outboundFlight_button1=001%7C0%7C05-24-2017&hidden_outboundFlight_button2=002%7C0%7C05-24-2017&hidden_outboundFlight_button3=003%7C0%7C05-24-2017&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=93&reserveFlights.y=14",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_149551719000697.png",
        "Snapshot=webpage_149551719000228.png",
        INLINE_URLS,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/images/startover.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE
    );
    ns_page_think_time(1);
   ns_end_transaction("{pm_4}{pm4}", NS_AUTO_STATUS);
  //  ns_end_transaction("tx5", NS_AUTO_STATUS);

    ns_start_transaction("{pm_5}{pm5}");
    ns_web_url ("page_6",
        "URL=http://10.10.30.56:9020/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C05-24-2017&advanceDiscount=&buyFlights.x=86&buyFlights.y=11&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1495517184630.png",
        "Snapshot=webpage_1495517185074.png",
        INLINE_URLS,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/images/bookanother.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE
    );
    ns_page_think_time(1);
    ns_end_transaction("{pm_5}{pm5}", NS_AUTO_STATUS);

    ns_start_transaction("{pm_6}{pm6}");
   // ns_start_transaction("tx6");
    ns_web_url ("page_7",
        "URL=http://10.10.30.56:9020/cgi-bin/welcome",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "PreSnapshot=webpage_1495517189337.png",
        "Snapshot=webpage_1495517189550.png",
        INLINE_URLS,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=Name1;Name2", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/Merc10-dev/images/sun_swede.gif", END_INLINE,
            "URL=http://10.10.30.56:9020/tours/images/banner_merctur.jpg", END_INLINE
    );
    ns_page_think_time(1);
  ns_end_transaction("{pm_6}{pm6}", NS_AUTO_STATUS);
  //  ns_end_transaction("tx6", NS_AUTO_STATUS);

  //   char buf1[10], buf2[10];
//     strcpy(buf1,ns_eval_string("{pm_1}"));   

//   char *var = ns_eval_string("{pm_1}");
//   char *var1 = ns_eval_string("{pm_2}");
//   char *var2 = ns_eval_string("{pm_3}");
//   char *var3 = ns_eval_string("{pm_4}");
//   char *var4 = ns_eval_string("{pm_5}");
//   char *var5 = ns_eval_string("{pm_6}");
   
//    printf("\n***%s**",var);
//     printf("\n***%s**",var1); 
//     printf("\n***%s**",var2); 
//     printf("\n***%s**",var3); 
//     printf("\n***%s**",var4); 
//     printf("\n***%s**",var5);
  
}
