/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 10/07/2019 07:38:38
    Flow details:
    Build details: 4.1.15 (build# 85)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{

    ns_start_transaction("welcome");
    ns_browser("welcome",
        "url=http://10.10.30.7:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=&password=&login.x=53&login.y=15&login=Login&JSFormSubmit=off",
        "browserurl=http://10.10.30.7:81/cgi-bin/welcome",
        "action=Home",
        "title=Mercury Tours",
        "Snapshots=webpage_1570457287350.png");
    ns_end_transaction("welcome", NS_AUTO_STATUS);

    ns_page_think_time(4.941);



    ns_start_transaction("login");
    ns_link("login",
        "url=http://10.10.30.7:81/cgi-bin/reservation",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/login.gif","name=login","alt=Login","width=95","type=image","value=Login","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(5) > td > input[type=\"image\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[5]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1570457292291.png");
    ns_end_transaction("login", NS_AUTO_STATUS);

    ns_page_think_time(3.666);



    ns_start_transaction("reservation");
    ns_link("reservation",
        "url=http://10.10.30.7:81/cgi-bin/findflight?depart=Acapulco&departDate=10-08-2019&arrive=Acapulco&returnDate=10-09-2019&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=65&findFlights.y=15&findFlights=Submit",
        "type=IMAGE_LINK",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/flights.gif","width=95","alt=Search Flights Button","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > center > table > tbody > tr:nth-child(1) > td > a > img",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/A[1]/IMG[1]",
        "tagName=IMG",
        "Snapshots=webpage_1570457295956.png");
    ns_end_transaction("reservation", NS_AUTO_STATUS);

    ns_page_think_time(1.704);



    ns_start_transaction("findflight");
    ns_link("findflight",
        "url=http://10.10.30.7:81/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C10-08-2019&hidden_outboundFlight_button1=001%7C0%7C10-08-2019&hidden_outboundFlight_button2=002%7C0%7C10-08-2019&hidden_outboundFlight_button3=003%7C0%7C10-08-2019&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=88&reserveFlights.y=12",
        "action=click",
        attributes=["border=0","src=/tours/images/continue.gif","name=findFlights","type=IMAGE","value=Submit"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > table > tbody > tr:nth-child(7) > td > input[type=\"IMAGE\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/TABLE[1]/TBODY[1]/TR[7]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1570457297660.png");
    ns_end_transaction("findflight", NS_AUTO_STATUS);

    ns_page_think_time(4.336);



    ns_start_transaction("findflight_2");
    ns_link("findflight_2",
        "url=http://10.10.30.7:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C10-08-2019&advanceDiscount=&buyFlights.x=67&buyFlights.y=12&.cgifields=saveCC",
        "action=click",
        attributes=["border=0","src=/tours/images/continue.gif","name=reserveFlights","type=image"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > center > center > table > tbody > tr > td:nth-child(1) > input[type=\"image\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1570457301996.png");
    ns_end_transaction("findflight_2", NS_AUTO_STATUS);

    ns_page_think_time(4.433);



    ns_start_transaction("findflight_3");
    ns_link("findflight_3",
        "url=http://10.10.30.7:81/cgi-bin/welcome",
        "action=click",
        attributes=["border=0","src=/tours/images/purchaseflight.gif","name=buyFlights","type=image"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td:nth-child(1) > blockquote > form > input[type=\"image\"]:nth-child(7)",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/BLOCKQUOTE[1]/FORM[1]/INPUT[6]",
        "tagName=INPUT",
        "Snapshots=webpage_1570457306430.png");
    ns_end_transaction("findflight_3", NS_AUTO_STATUS);

    ns_page_think_time(4.653);



    ns_start_transaction("welcome_2");
    ns_link("welcome_2",
        "url=http://10.10.30.7:81/cgi-bin/welcome",
        "type=IMAGE_LINK",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/signoff.gif","width=95","alt=SignOff Button","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > center > table > tbody > tr:nth-child(3) > td > a > img",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[3]/TD[1]/A[1]/IMG[1]",
        "tagName=IMG",
        "Snapshots=webpage_1570457311082.png");
    ns_end_transaction("welcome_2", NS_AUTO_STATUS);

    ns_page_think_time(7.152);


}
