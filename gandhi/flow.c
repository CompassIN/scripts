/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 10/04/2018 11:52:18
    Flow details:
    Build details: 4.1.12 (build# 43)
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
        "Snapshots=webpage_1538634092777.png");
    ns_end_transaction("welcome", NS_AUTO_STATUS);

    ns_page_think_time(8.121);



    ns_start_transaction("welcome_2");
    ns_edit_field("welcome_2",
        "url=http://10.10.30.7:81/cgi-bin/welcome",
        "action=change",
        attributes=["name=username","type=text"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(2) > td > input[type=\"text\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "value=java",
        "Snapshots=webpage_1538634100888.png");
    ns_end_transaction("welcome_2", NS_AUTO_STATUS);

    ns_page_think_time(3.286);



    ns_start_transaction("login");
    ns_edit_field("login",
        "url=http://10.10.30.7:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=java&password=java&login.x=46&login.y=14&login=Login&JSFormSubmit=off",
        "action=change",
        attributes=["name=password","type=password"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(4) > td > input[type=\"password\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[4]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "value=java",
        "Snapshots=webpage_1538634104163.png");
    ns_end_transaction("login", NS_AUTO_STATUS);

    ns_page_think_time(0.54);



    ns_start_transaction("login_2");
    ns_link("login_2",
        "url=http://10.10.30.7:81/cgi-bin/home",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/login.gif","name=login","alt=Login","width=95","type=image","value=Login","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(5) > td > input[type=\"image\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[5]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1538634104698.png");
    ns_end_transaction("login_2", NS_AUTO_STATUS);

    ns_page_think_time(5.42);



    ns_start_transaction("home");
    ns_link("home",
        "url=http://10.10.30.7:81/cgi-bin/reservation",
        "type=IMAGE_LINK",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/home.gif","width=95","alt=Home Button","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > center > table > tbody > tr:nth-child(2) > td > a > img",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/A[1]/IMG[1]",
        "tagName=IMG",
        "Snapshots=webpage_1538634110118.png");
    ns_end_transaction("home", NS_AUTO_STATUS);

    ns_page_think_time(2.351);



    ns_start_transaction("reservation");
    ns_link("reservation",
        "url=http://10.10.30.7:81/cgi-bin/findflight?depart=Acapulco&departDate=10-05-2018&arrive=Acapulco&returnDate=10-06-2018&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=33&findFlights.y=13&findFlights=Submit",
        "type=IMAGE_LINK",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/flights.gif","width=95","alt=Search Flights Button","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > center > table > tbody > tr:nth-child(1) > td > a > img",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/A[1]/IMG[1]",
        "tagName=IMG",
        "Snapshots=webpage_1538634112469.png");
    ns_end_transaction("reservation", NS_AUTO_STATUS);

    ns_page_think_time(5.282);



    ns_start_transaction("findflight");
    ns_link("findflight",
        "url=http://10.10.30.7:81/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C10-05-2018&hidden_outboundFlight_button1=001%7C0%7C10-05-2018&hidden_outboundFlight_button2=002%7C0%7C10-05-2018&hidden_outboundFlight_button3=003%7C0%7C10-05-2018&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=74&reserveFlights.y=15",
        "action=click",
        attributes=["border=0","src=/tours/images/continue.gif","name=findFlights","type=IMAGE","value=Submit"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > table > tbody > tr:nth-child(7) > td > input[type=\"IMAGE\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/TABLE[1]/TBODY[1]/TR[7]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1538634117756.png");
    ns_end_transaction("findflight", NS_AUTO_STATUS);

    ns_page_think_time(3.584);



    ns_start_transaction("findflight_2");
    ns_link("findflight_2",
        "url=http://10.10.30.7:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C10-05-2018&advanceDiscount=&buyFlights.x=79&buyFlights.y=10&.cgifields=saveCC",
        "action=click",
        attributes=["border=0","src=/tours/images/continue.gif","name=reserveFlights","type=image"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > center > center > table > tbody > tr > td:nth-child(1) > input[type=\"image\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1538634121351.png");
    ns_end_transaction("findflight_2", NS_AUTO_STATUS);

    ns_page_think_time(5.411);



    ns_start_transaction("findflight_3");
    ns_link("findflight_3",
        "url=http://10.10.30.7:81/cgi-bin/welcome",
        "action=click",
        attributes=["border=0","src=/tours/images/purchaseflight.gif","name=buyFlights","type=image"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td:nth-child(1) > blockquote > form > input[type=\"image\"]:nth-child(7)",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/BLOCKQUOTE[1]/FORM[1]/INPUT[6]",
        "tagName=INPUT",
        "Snapshots=webpage_1538634126746.png");
    ns_end_transaction("findflight_3", NS_AUTO_STATUS);

    ns_page_think_time(1.638);



    ns_start_transaction("welcome_3");
    ns_link("welcome_3",
        "url=http://10.10.30.7:81/cgi-bin/welcome",
        "type=IMAGE_LINK",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/signoff.gif","width=95","alt=SignOff Button","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > center > table > tbody > tr:nth-child(3) > td > a > img",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[3]/TD[1]/A[1]/IMG[1]",
        "tagName=IMG",
        "Snapshots=webpage_1538634128384.png");
    ns_end_transaction("welcome_3", NS_AUTO_STATUS);

    ns_page_think_time(10.017);


}
