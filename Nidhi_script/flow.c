/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 10/05/2018 11:59:47
    Flow details:
    Build details: 4.1.12 (build# 42)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{

    ns_start_transaction("P1");
    ns_browser("P1",
        "url=http://10.10.30.7:81/cgi-bin/welcome",
        "browserurl=http://10.10.30.7:81/cgi-bin/welcome",
        "action=Home",
        "title=Mercury Tours",
        "Snapshots=webpage_1538720847088.png");
    ns_end_transaction("P1", NS_AUTO_STATUS);

    ns_page_think_time(6.223);



    ns_start_transaction("P2");
    ns_link("P2",
        "url=http://10.10.30.7:81/cgi-bin/reservation",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/login.gif","name=login","alt=Login","width=95","type=image","value=Login","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(5) > td > input[type=\"image\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[5]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1538720853283.png");
    ns_end_transaction("P2", NS_AUTO_STATUS);

    ns_page_think_time(9.248);



    ns_start_transaction("P3");
    ns_link("P3",
        "url=http://10.10.30.7:81/cgi-bin/findflight?depart=Acapulco&departDate=10-06-2018&arrive=Acapulco&returnDate=10-07-2018&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=81&findFlights.y=15&findFlights=Submit",
        "type=IMAGE_LINK",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/flights.gif","width=95","alt=Search Flights Button","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > center > table > tbody > tr:nth-child(1) > td > a > img",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/A[1]/IMG[1]",
        "tagName=IMG",
        "Snapshots=webpage_1538720862531.png");
    ns_end_transaction("P3", NS_AUTO_STATUS);

    ns_page_think_time(3.832);



    ns_start_transaction("P4");
    ns_link("P4",
        "url=http://10.10.30.7:81/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C10-06-2018&hidden_outboundFlight_button1=001%7C0%7C10-06-2018&hidden_outboundFlight_button2=002%7C0%7C10-06-2018&hidden_outboundFlight_button3=003%7C0%7C10-06-2018&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=105&reserveFlights.y=6",
        "action=click",
        attributes=["border=0","src=/tours/images/continue.gif","name=findFlights","type=IMAGE","value=Submit"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > table > tbody > tr:nth-child(7) > td > input[type=\"IMAGE\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/TABLE[1]/TBODY[1]/TR[7]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1538720866363.png");
    ns_end_transaction("P4", NS_AUTO_STATUS);

    ns_page_think_time(4.268);



    ns_start_transaction("P5");
    ns_link("P5",
        "url=http://10.10.30.7:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C10-06-2018&advanceDiscount=&buyFlights.x=79&buyFlights.y=19&.cgifields=saveCC",
        "action=click",
        attributes=["border=0","src=/tours/images/continue.gif","name=reserveFlights","type=image"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > center > center > table > tbody > tr > td:nth-child(1) > input[type=\"image\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1538720870632.png");
    ns_end_transaction("P5", NS_AUTO_STATUS);

    ns_page_think_time(5.251);



    ns_start_transaction("P6");
    ns_link("P6",
        "url=http://10.10.30.7:81/cgi-bin/welcome",
        "action=click",
        attributes=["border=0","src=/tours/images/purchaseflight.gif","name=buyFlights","type=image"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td:nth-child(1) > blockquote > form > input[type=\"image\"]:nth-child(7)",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/BLOCKQUOTE[1]/FORM[1]/INPUT[6]",
        "tagName=INPUT",
        "Snapshots=webpage_1538720875883.png");
    ns_end_transaction("P6", NS_AUTO_STATUS);

    ns_page_think_time(22.915);



    ns_start_transaction("welcome_3");
    ns_link("welcome_3",
        "url=http://10.10.30.7:81/cgi-bin/welcome",
        "type=IMAGE_LINK",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/signoff.gif","width=95","alt=SignOff Button","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > center > table > tbody > tr:nth-child(3) > td > a > img",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[3]/TD[1]/A[1]/IMG[1]",
        "tagName=IMG",
        "Snapshots=webpage_1538720898798.png");
    ns_end_transaction("welcome_3", NS_AUTO_STATUS);

    ns_page_think_time(88.468);


}
