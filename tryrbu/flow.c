/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 01/09/2019 11:43:54
    Flow details:
    Build details: 4.1.13 (build# 34)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{

    ns_start_transaction("index_html");
    ns_browser("index_html",
        "url=http://10.10.30.73:81/tours/index.html",
        "browserurl=http://10.10.30.73:81/tours/index.html",
        "action=Home",
        "title=Mercury Tours",
        "Snapshots=webpage_1547057611317.png");
    ns_end_transaction("index_html", NS_AUTO_STATUS);

    ns_page_think_time(2.141);



    ns_start_transaction("index_html_2");
    ns_link("index_html_2",
        "url=http://10.10.30.73:81/tours/index.html",
        "type=ELEMENT",
        "action=click",
        attributes=[],
        "tagName=TD",
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(1) > td",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]",
        "Snapshot=webpage_1547057613455.png");
    ns_end_transaction("index_html_2", NS_AUTO_STATUS);

    ns_page_think_time(1.935);



    ns_start_transaction("index_html_3");
    ns_edit_field("index_html_3",
        "url=http://10.10.30.73:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=cavisson&password=cavisson&login.x=0&login.y=0&login=Login&JSFormSubmit=off",
        "action=change",
        attributes=["name=username","type=text"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(2) > td > input[type=\"text\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "value=cavisson",
        "Snapshots=webpage_1547057615390.png");
    ns_end_transaction("index_html_3", NS_AUTO_STATUS);

    ns_page_think_time(1.522);



    ns_start_transaction("login");
    ns_edit_field("login",
        "url=http://10.10.30.73:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=cavisson&password=cavisson&login.x=0&login.y=0&login=Login&JSFormSubmit=off",
        "action=change",
        attributes=["name=password","type=password"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(4) > td > input[type=\"password\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[4]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "value=cavisson",
        "Snapshots=webpage_1547057616912.png");
    ns_end_transaction("login", NS_AUTO_STATUS);

    ns_page_think_time(0.16);



    ns_start_transaction("login_2");
    ns_link("login_2",
        "url=http://10.10.30.73:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=cavisson&password=cavisson&login.x=0&login.y=0&login=Login&JSFormSubmit=off",
        "action=click",
        attributes=["border=0","src=Merc10-dev/images/login.gif","name=login","alt=Login","width=95","type=image","value=Login","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(5) > td > input[type=\"image\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[5]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1547057617072.png");
    ns_end_transaction("login_2", NS_AUTO_STATUS);

    ns_page_think_time(0.914);



    ns_start_transaction("login_3");
    ns_key_event("login_3",
        "url=http://10.10.30.73:81/cgi-bin/reservation",
        "type=PASSWORD",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[4]/TD[1]/INPUT[1]",
        "action=click",
        attributes=["name=password","type=password"],
        "tagName=INPUT",
        "value=13",
        "Snapshots=webpage_1547057617986.png");
    ns_end_transaction("login_3", NS_AUTO_STATUS);

    ns_page_think_time(0.599);



    ns_start_transaction("reservation");
    ns_link("reservation",
        "url=http://10.10.30.73:81/cgi-bin/reservation",
        "type=IMAGE_LINK",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/flights.gif","width=95","alt=Search Flights Button","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > center > table > tbody > tr:nth-child(1) > td > a > img",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/A[1]/IMG[1]",
        "tagName=IMG",
        "Snapshots=webpage_1547057618585.png");
    ns_end_transaction("reservation", NS_AUTO_STATUS);

    ns_page_think_time(1.33);



    ns_start_transaction("reservation_2");
    ns_link("reservation_2",
        "url=http://10.10.30.73:81/cgi-bin/findflight?depart=Acapulco&departDate=01-10-2019&arrive=Acapulco&returnDate=01-11-2019&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=43&findFlights.y=13&findFlights=Submit",
        "type=IMAGE_LINK",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/flights.gif","width=95","alt=Search Flights Button","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > center > table > tbody > tr:nth-child(1) > td > a > img",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/A[1]/IMG[1]",
        "tagName=IMG",
        "Snapshots=webpage_1547057619916.png");
    ns_end_transaction("reservation_2", NS_AUTO_STATUS);

    ns_page_think_time(2.596);



    ns_start_transaction("findflight");
    ns_link("findflight",
        "url=http://10.10.30.73:81/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C01-10-2019&hidden_outboundFlight_button1=001%7C0%7C01-10-2019&hidden_outboundFlight_button2=002%7C0%7C01-10-2019&hidden_outboundFlight_button3=003%7C0%7C01-10-2019&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=80&reserveFlights.y=13",
        "action=click",
        attributes=["border=0","src=/tours/images/continue.gif","name=findFlights","type=IMAGE","value=Submit"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > table > tbody > tr:nth-child(7) > td > input[type=\"IMAGE\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/TABLE[1]/TBODY[1]/TR[7]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1547057622511.png");
    ns_end_transaction("findflight", NS_AUTO_STATUS);

    ns_page_think_time(3.08);



    ns_start_transaction("findflight_2");
    ns_link("findflight_2",
        "url=http://10.10.30.73:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C01-10-2019&advanceDiscount=&buyFlights.x=53&buyFlights.y=10&.cgifields=saveCC",
        "action=click",
        attributes=["border=0","src=/tours/images/continue.gif","name=reserveFlights","type=image"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > center > center > table > tbody > tr > td:nth-child(1) > input[type=\"image\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1547057625591.png");
    ns_end_transaction("findflight_2", NS_AUTO_STATUS);

    ns_page_think_time(2.376);



    ns_start_transaction("findflight_3");
    ns_link("findflight_3",
        "url=http://10.10.30.73:81/cgi-bin/welcome",
        "action=click",
        attributes=["border=0","src=/tours/images/purchaseflight.gif","name=buyFlights","type=image"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td:nth-child(1) > blockquote > form > input[type=\"image\"]:nth-child(7)",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/BLOCKQUOTE[1]/FORM[1]/INPUT[6]",
        "tagName=INPUT",
        "Snapshots=webpage_1547057627967.png");
    ns_end_transaction("findflight_3", NS_AUTO_STATUS);

    ns_page_think_time(2.896);



    ns_start_transaction("welcome");
    ns_link("welcome",
        "url=http://10.10.30.73:81/cgi-bin/welcome",
        "type=IMAGE_LINK",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/signoff.gif","width=95","alt=SignOff Button","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > center > table > tbody > tr:nth-child(3) > td > a > img",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[3]/TD[1]/A[1]/IMG[1]",
        "tagName=IMG",
        "Snapshots=webpage_1547057630863.png");
    ns_end_transaction("welcome", NS_AUTO_STATUS);

    ns_page_think_time(3.248);


}
