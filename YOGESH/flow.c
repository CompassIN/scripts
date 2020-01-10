/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: Yogesh
    Date of recording: 10/04/2018 12:40:45
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

    ns_start_transaction("welcome");
    ns_browser("welcome",
        "url=http://10.10.30.7:81/cgi-bin/welcome",
        "browserurl=http://10.10.30.7:81/cgi-bin/welcome",
        "action=Home",
        "title=Mercury Tours",
        "Snapshots=webpage_1538637003802.png");
    ns_end_transaction("welcome", NS_AUTO_STATUS);

    ns_page_think_time(7.696);



    ns_start_transaction("welcome_2");
    ns_edit_field("welcome_2",
        "url=http://10.10.30.7:81/cgi-bin/welcome",
        "action=change",
        attributes=["name=username","type=text"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(2) > td > input[type=\"text\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "value=yogesh",
        "Snapshots=webpage_1538637011498.png");
    ns_end_transaction("welcome_2", NS_AUTO_STATUS);

    ns_page_think_time(7.626);



    ns_start_transaction("login");
    ns_key_event("login",
        "url=null",
        "type=PASSWORD",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[4]/TD[1]/INPUT[1]",
        "action=click",
        attributes=["name=password","type=password"],
        "tagName=INPUT",
        "value=13",
        "Snapshots=webpage_1538637019124.png");
    ns_end_transaction("login", NS_AUTO_STATUS);

    ns_page_think_time(0.0);



    ns_start_transaction("login_2");
    ns_edit_field("login_2",
        "url=http://10.10.30.7:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=yogesh&password=123&login.x=0&login.y=0&login=Login&JSFormSubmit=off",
        "action=change",
        attributes=["name=password","type=password"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(4) > td > input[type=\"password\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[4]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "value=123",
        "Snapshots=webpage_1538637019124.png");
    ns_end_transaction("login_2", NS_AUTO_STATUS);

    ns_page_think_time(0.164);



    ns_start_transaction("login_3");
    ns_link("login_3",
        "url=http://10.10.30.7:81/cgi-bin/reservation",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/login.gif","name=login","alt=Login","width=95","type=image","value=Login","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(5) > td > input[type=\"image\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[5]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1538637019289.png");
    ns_end_transaction("login_3", NS_AUTO_STATUS);

    ns_page_think_time(2.11);



    ns_start_transaction("reservation");
    ns_link("reservation",
        "url=http://10.10.30.7:81/cgi-bin/findflight?depart=Acapulco&departDate=10-05-2018&arrive=Acapulco&returnDate=10-06-2018&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=43&findFlights.y=14&findFlights=Submit",
        "type=IMAGE_LINK",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/flights.gif","width=95","alt=Search Flights Button","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > center > table > tbody > tr:nth-child(1) > td > a > img",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/A[1]/IMG[1]",
        "tagName=IMG",
        "Snapshots=webpage_1538637021398.png");
    ns_end_transaction("reservation", NS_AUTO_STATUS);

    ns_page_think_time(2.413);



    ns_start_transaction("findflight");
    ns_link("findflight",
        "url=http://10.10.30.7:81/cgi-bin/findflight?depart=Acapulco&departDate=10-05-2018&arrive=Acapulco&returnDate=10-06-2018&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=43&findFlights.y=14&findFlights=Submit",
        "action=click",
        attributes=["border=0","src=/tours/images/continue.gif","name=findFlights","type=IMAGE","value=Submit"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > table > tbody > tr:nth-child(7) > td > input[type=\"IMAGE\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/TABLE[1]/TBODY[1]/TR[7]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1538637023811.png");
    ns_end_transaction("findflight", NS_AUTO_STATUS);

    ns_page_think_time(1.495);



    ns_start_transaction("findflight_2");
    ns_link("findflight_2",
        "url=http://10.10.30.7:81/cgi-bin/findflight?hidden_outboundFlight_button0=000%7C0%7C10-05-2018&hidden_outboundFlight_button1=001%7C0%7C10-05-2018&outboundFlight=button2&hidden_outboundFlight_button2=002%7C0%7C10-05-2018&hidden_outboundFlight_button3=003%7C0%7C10-05-2018&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=79&reserveFlights.y=11",
        "type=ELEMENT",
        "action=click",
        attributes=["align=center"],
        "tagName=TD",
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > center > table > tbody > tr:nth-child(4) > td:nth-child(1)",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[4]/TD[1]",
        "Snapshot=webpage_1538637025306.png");
    ns_end_transaction("findflight_2", NS_AUTO_STATUS);

    ns_page_think_time(1.869);



    ns_start_transaction("findflight_3");
    ns_radio_group("findflight_3",
        "url=http://10.10.30.7:81/cgi-bin/findflight?hidden_outboundFlight_button0=000%7C0%7C10-05-2018&hidden_outboundFlight_button1=001%7C0%7C10-05-2018&outboundFlight=button2&hidden_outboundFlight_button2=002%7C0%7C10-05-2018&hidden_outboundFlight_button3=003%7C0%7C10-05-2018&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=79&reserveFlights.y=11",
        "action=change",
        attributes=["name=outboundFlight","type=radio","value=button2"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > center > table > tbody > tr:nth-child(4) > td:nth-child(1) > input[type=\"radio\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[4]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "value=button2",
        "Snapshots=webpage_1538637027175.png");
    ns_end_transaction("findflight_3", NS_AUTO_STATUS);

    ns_page_think_time(0.17);



    ns_start_transaction("findflight_4");
    ns_link("findflight_4",
        "url=http://10.10.30.7:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&saveCC=on&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=002%7C0%7C10-05-2018&advanceDiscount=&buyFlights.x=86&buyFlights.y=11&.cgifields=saveCC",
        "action=click",
        attributes=["border=0","src=/tours/images/continue.gif","name=reserveFlights","type=image"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > center > center > table > tbody > tr > td:nth-child(1) > input[type=\"image\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1538637027345.png");
    ns_end_transaction("findflight_4", NS_AUTO_STATUS);

    ns_page_think_time(5.294);



    ns_start_transaction("findflight_5");
    ns_check_box("findflight_5",
        "url=http://10.10.30.7:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&saveCC=on&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=002%7C0%7C10-05-2018&advanceDiscount=&buyFlights.x=86&buyFlights.y=11&.cgifields=saveCC",
        "action=change",
        attributes=["name=saveCC","type=checkbox","value=on"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td:nth-child(1) > blockquote > form > table > tbody > tr:nth-child(9) > td:nth-child(2) > input[type=\"checkbox\"]:nth-child(1)",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/BLOCKQUOTE[1]/FORM[1]/TABLE[1]/TBODY[1]/TR[9]/TD[2]/INPUT[1]",
        "tagName=INPUT",
        "value=on",
        "Snapshots=webpage_1538637032639.png");
    ns_end_transaction("findflight_5", NS_AUTO_STATUS);

    ns_page_think_time(0.146);



    ns_start_transaction("findflight_6");
    ns_link("findflight_6",
        "url=http://10.10.30.7:81/cgi-bin/reservation?BookAnother.x=67&BookAnother.y=8",
        "action=click",
        attributes=["border=0","src=/tours/images/purchaseflight.gif","name=buyFlights","type=image"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td:nth-child(1) > blockquote > form > input[type=\"image\"]:nth-child(7)",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/BLOCKQUOTE[1]/FORM[1]/INPUT[6]",
        "tagName=INPUT",
        "Snapshots=webpage_1538637032785.png");
    ns_end_transaction("findflight_6", NS_AUTO_STATUS);

    ns_page_think_time(2.841);



    ns_start_transaction("reservation_2");
    ns_link("reservation_2",
        "url=http://10.10.30.7:81/cgi-bin/home",
        "action=click",
        attributes=["border=0","src=/tours/images/bookanother.gif","name=BookAnother","type=image"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table:nth-child(7) > tbody > tr > td > form > input[type=\"image\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[4]/TBODY[1]/TR[1]/TD[1]/FORM[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1538637035627.png");
    ns_end_transaction("reservation_2", NS_AUTO_STATUS);

    ns_page_think_time(0.408);



    ns_start_transaction("home");
    ns_link("home",
        "url=http://10.10.30.7:81/cgi-bin/welcome",
        "type=IMAGE_LINK",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/home.gif","width=95","alt=Home Button","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > center > table > tbody > tr:nth-child(2) > td > a > img",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/A[1]/IMG[1]",
        "tagName=IMG",
        "Snapshots=webpage_1538637036034.png");
    ns_end_transaction("home", NS_AUTO_STATUS);

    ns_page_think_time(2.657);



    ns_start_transaction("welcome_3");
    ns_link("welcome_3",
        "url=http://10.10.30.7:81/cgi-bin/welcome",
        "type=IMAGE_LINK",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/signoff.gif","width=95","alt=SignOff Button","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > center > table > tbody > tr:nth-child(3) > td > a > img",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[3]/TD[1]/A[1]/IMG[1]",
        "tagName=IMG",
        "Snapshots=webpage_1538637038691.png");
    ns_end_transaction("welcome_3", NS_AUTO_STATUS);

    ns_page_think_time(6.369);


}
