/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 03/13/2019 12:21:43
    Flow details:
    Build details: 4.1.14 (build# 8)
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
        "url=http://10.10.30.110:81/tours/index.html",
        "browserurl=http://10.10.30.110:81/tours/index.html",
        "action=Home",
        "title=Mercury Tours",
        "Snapshots=webpage_1552459852024.png");
    ns_end_transaction("index_html", NS_AUTO_STATUS);

    ns_page_think_time(16.528);



    ns_start_transaction("index_html_2");
    ns_edit_field("index_html_2",
        "url=http://10.10.30.110:81/tours/index.html",
        "action=change",
        attributes=["name=username","type=text"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(2) > td > input[type=\"text\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "value=sdhk",
        "Snapshots=webpage_1552459868543.png");
    ns_end_transaction("index_html_2", NS_AUTO_STATUS);

    ns_page_think_time(-1552459868.543);



    ns_start_transaction("index_html_3");
    ns_edit_field("index_html_3",
        "url=http://10.10.30.110:81/tours/index.html",
        "action=change",
        attributes=["name=password","type=password"],
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[4]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "value=",
        "Snapshots=webpage_1552459877600.png");
    ns_end_transaction("index_html_3", NS_AUTO_STATUS);

    ns_page_think_time(1552459878.37);



    ns_start_transaction("index_html_4");
    ns_edit_field("index_html_4",
        "url=http://10.10.30.110:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=a&password=a&login.x=0&login.y=0&login=Login&JSFormSubmit=off",
        "action=change",
        attributes=["name=username","type=text"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(2) > td > input[type=\"text\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "value=a",
        "Snapshots=webpage_1552459878370.png");
    ns_end_transaction("index_html_4", NS_AUTO_STATUS);

    ns_page_think_time(1.572);



    ns_start_transaction("login");
    ns_edit_field("login",
        "url=http://10.10.30.110:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=a&password=a&login.x=0&login.y=0&login=Login&JSFormSubmit=off",
        "action=change",
        attributes=["name=password","type=password"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(4) > td > input[type=\"password\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[4]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "value=a",
        "Snapshots=webpage_1552459879942.png");
    ns_end_transaction("login", NS_AUTO_STATUS);

    ns_page_think_time(0.115);



    ns_start_transaction("login_2");
    ns_link("login_2",
        "url=http://10.10.30.110:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=a&password=a&login.x=0&login.y=0&login=Login&JSFormSubmit=off",
        "action=click",
        attributes=["border=0","src=Merc10-dev/images/login.gif","name=login","alt=Login","width=95","type=image","value=Login","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(5) > td > input[type=\"image\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[5]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1552459880057.png");
    ns_end_transaction("login_2", NS_AUTO_STATUS);

    ns_page_think_time(1.272);



    ns_start_transaction("login_3");
    ns_key_event("login_3",
        "url=http://10.10.30.110:81/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=a&password=a&login.x=0&login.y=0&login=Login&JSFormSubmit=off",
        "type=PASSWORD",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[4]/TD[1]/INPUT[1]",
        "action=click",
        attributes=["name=password","type=password"],
        "tagName=INPUT",
        "value=13",
        "Snapshots=webpage_1552459881329.png");
    ns_end_transaction("login_3", NS_AUTO_STATUS);

    ns_page_think_time(1.073);



    ns_start_transaction("reservation");
    ns_link("reservation",
        "url=http://10.10.30.110:81/cgi-bin/findflight?depart=Acapulco&departDate=03-14-2019&arrive=Acapulco&returnDate=03-15-2019&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=52&findFlights.y=12&findFlights=Submit",
        "type=IMAGE_LINK",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/flights.gif","width=95","alt=Search Flights Button","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > center > table > tbody > tr:nth-child(1) > td > a > img",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/A[1]/IMG[1]",
        "tagName=IMG",
        "Snapshots=webpage_1552459882402.png");
    ns_end_transaction("reservation", NS_AUTO_STATUS);

    ns_page_think_time(4.784);



    ns_start_transaction("findflight");
    ns_link("findflight",
        "url=http://10.10.30.110:81/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C03-14-2019&hidden_outboundFlight_button1=001%7C0%7C03-14-2019&hidden_outboundFlight_button2=002%7C0%7C03-14-2019&hidden_outboundFlight_button3=003%7C0%7C03-14-2019&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=80&reserveFlights.y=6",
        "action=click",
        attributes=["border=0","src=/tours/images/continue.gif","name=findFlights","type=IMAGE","value=Submit"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > table > tbody > tr:nth-child(7) > td > input[type=\"IMAGE\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/TABLE[1]/TBODY[1]/TR[7]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1552459887186.png");
    ns_end_transaction("findflight", NS_AUTO_STATUS);

    ns_page_think_time(2.795);



    ns_start_transaction("findflight_2");
    ns_link("findflight_2",
        "url=http://10.10.30.110:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C03-14-2019&advanceDiscount=&buyFlights.x=87&buyFlights.y=3&.cgifields=saveCC",
        "action=click",
        attributes=["border=0","src=/tours/images/continue.gif","name=reserveFlights","type=image"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > center > center > table > tbody > tr > td:nth-child(1) > input[type=\"image\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1552459889981.png");
    ns_end_transaction("findflight_2", NS_AUTO_STATUS);

    ns_page_think_time(4.956);



    ns_start_transaction("findflight_3");
    ns_link("findflight_3",
        "url=http://10.10.30.110:81/cgi-bin/welcome",
        "action=click",
        attributes=["border=0","src=/tours/images/purchaseflight.gif","name=buyFlights","type=image"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td:nth-child(1) > blockquote > form > input[type=\"image\"]:nth-child(7)",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/BLOCKQUOTE[1]/FORM[1]/INPUT[6]",
        "tagName=INPUT",
        "Snapshots=webpage_1552459894937.png");
    ns_end_transaction("findflight_3", NS_AUTO_STATUS);

    ns_page_think_time(3.126);



/*    ns_start_transaction("welcome");
    ns_link("welcome",
        "url=null",
        "type=IMAGE_LINK",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/signoff.gif","width=95","alt=SignOff Button","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > center > table > tbody > tr:nth-child(3) > td > a > img",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[3]/TD[1]/A[1]/IMG[1]",
        "tagName=IMG",
        "Snapshots=webpage_1552459898063.png");
    ns_end_transaction("welcome", NS_AUTO_STATUS);

    ns_page_think_time(5.153);

*/
}
