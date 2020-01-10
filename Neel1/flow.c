/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: Neelu
    Date of recording: 10/04/2018 03:37:51
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
        "Snapshots=webpage_1538647604312.png");
    ns_end_transaction("welcome", NS_AUTO_STATUS);

    ns_page_think_time(7.379);



    ns_start_transaction("welcome_2");
    ns_edit_field("welcome_2",
        "url=http://10.10.30.7:81/cgi-bin/welcome",
        "action=change",
        attributes=["name=username","type=text"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(2) > td > input[type=\"text\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "value=aaa",
        "Snapshots=webpage_1538647611687.png");
    ns_end_transaction("welcome_2", NS_AUTO_STATUS);

    ns_page_think_time(2.568);



    ns_start_transaction("welcome_3");
    ns_edit_field("welcome_3",
        "url=http://10.10.30.7:81/cgi-bin/welcome",
        "action=change",
        attributes=["name=password","type=password"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(4) > td > input[type=\"password\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[4]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "value=aaa",
        "Snapshots=webpage_1538647614255.png");
    ns_end_transaction("welcome_3", NS_AUTO_STATUS);

    ns_page_think_time(0.128);



    ns_start_transaction("welcome_4");
    ns_link("welcome_4",
        "url=http://10.10.30.7:81/cgi-bin/reservation",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/login.gif","name=login","alt=Login","width=95","type=image","value=Login","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > form > center > table > tbody > tr:nth-child(5) > td > input[type=\"image\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[5]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1538647614383.png");
    ns_end_transaction("welcome_4", NS_AUTO_STATUS);

    ns_page_think_time(6.22);



    ns_start_transaction("reservation");
    ns_link("reservation",
        "url=http://10.10.30.7:81/cgi-bin/reservation",
        "type=IMAGE_LINK",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/flights.gif","width=95","alt=Search Flights Button","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > center > table > tbody > tr:nth-child(1) > td > a > img",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/A[1]/IMG[1]",
        "tagName=IMG",
        "Snapshots=webpage_1538647620603.png");
    ns_end_transaction("reservation", NS_AUTO_STATUS);

    ns_page_think_time(2.128);



    ns_start_transaction("reservation_2");
    ns_list("reservation_2",
        "url=http://10.10.30.7:81/cgi-bin/reservation",
        "type=SELECT",
        "action=change",
        attributes=["name=depart"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > table > tbody > tr:nth-child(1) > td:nth-child(2) > select",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/SELECT[1]",
        "tagName=SELECT",
        "content=London",
        "Snapshots=webpage_1538647622731.png");
    ns_end_transaction("reservation_2", NS_AUTO_STATUS);

    ns_page_think_time(11.204);



    ns_start_transaction("reservation_3");
    ns_edit_field("reservation_3",
        "url=http://10.10.30.7:81/cgi-bin/reservation",
        "action=change",
        attributes=["name=departDate","type=text","value=10-05-2018"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > table > tbody > tr:nth-child(1) > td:nth-child(4) > input[type=\"text\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/TABLE[1]/TBODY[1]/TR[1]/TD[4]/INPUT[1]",
        "tagName=INPUT",
        "value=12-11-2018",
        "Snapshots=webpage_1538647633935.png");
    ns_end_transaction("reservation_3", NS_AUTO_STATUS);

    ns_page_think_time(0.1);



    ns_start_transaction("reservation_4");
    ns_link("reservation_4",
        "url=http://10.10.30.7:81/cgi-bin/reservation",
        "type=ELEMENT",
        "action=click",
        attributes=[],
        "tagName=TD",
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > table > tbody > tr:nth-child(2) > td:nth-child(2)",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/TABLE[1]/TBODY[1]/TR[2]/TD[2]",
        "Snapshot=webpage_1538647634039.png");
    ns_end_transaction("reservation_4", NS_AUTO_STATUS);

    ns_page_think_time(4.534);



    ns_start_transaction("reservation_5");
    ns_list("reservation_5",
        "url=http://10.10.30.7:81/cgi-bin/reservation",
        "type=SELECT",
        "action=change",
        attributes=["name=arrive"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > table > tbody > tr:nth-child(2) > td:nth-child(2) > select",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/TABLE[1]/TBODY[1]/TR[2]/TD[2]/SELECT[1]",
        "tagName=SELECT",
        "content=Frankfurt",
        "Snapshots=webpage_1538647638569.png");
    ns_end_transaction("reservation_5", NS_AUTO_STATUS);

    ns_page_think_time(12.611);



    ns_start_transaction("reservation_6");
    ns_edit_field("reservation_6",
        "url=http://10.10.30.7:81/cgi-bin/reservation",
        "action=change",
        attributes=["name=returnDate","type=text","value=10-06-2018"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > table > tbody > tr:nth-child(2) > td:nth-child(4) > input[type=\"text\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/TABLE[1]/TBODY[1]/TR[2]/TD[4]/INPUT[1]",
        "tagName=INPUT",
        "value=13-11-2018",
        "Snapshots=webpage_1538647651180.png");
    ns_end_transaction("reservation_6", NS_AUTO_STATUS);

    ns_page_think_time(0.159);



    ns_start_transaction("reservation_7");
    ns_check_box("reservation_7",
        "url=http://10.10.30.7:81/cgi-bin/findflight?depart=London&departDate=12-11-2018&arrive=Frankfurt&returnDate=13-11-2018&numPassengers=1&roundtrip=on&seatPref=None&seatType=Coach&findFlights.x=59&findFlights.y=18&findFlights=Submit",
        "action=change",
        attributes=["name=roundtrip","type=checkbox","value=on"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > table > tbody > tr:nth-child(3) > td:nth-child(3) > input[type=\"checkbox\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/TABLE[1]/TBODY[1]/TR[3]/TD[3]/INPUT[1]",
        "tagName=INPUT",
        "value=on",
        "Snapshots=webpage_1538647651339.png");
    ns_end_transaction("reservation_7", NS_AUTO_STATUS);

    ns_page_think_time(1.538647651339E9);



    ns_start_transaction("findflight");
    ns_check_box("findflight",
        "url=http://10.10.30.7:81/cgi-bin/findflight?depart=London&departDate=12-11-2018&arrive=Frankfurt&returnDate=13-11-2018&numPassengers=1&roundtrip=on&seatPref=None&seatType=Coach&findFlights.x=59&findFlights.y=18&findFlights=Submit",
        "action=change",
        attributes=["name=roundtrip","type=checkbox","value=on"],
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/TABLE[1]/TBODY[1]/TR[3]/TD[3]/INPUT[1]",
        "tagName=INPUT",
        "value=on",
        "Snapshots=webpage_1538647653552.png");
    ns_end_transaction("findflight", NS_AUTO_STATUS);

    ns_page_think_time(1.538647653677E9);



    ns_start_transaction("findflight_2");
    ns_link("findflight_2",
        "url=http://10.10.30.7:81/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=210%7C218%7C12-11-2018&hidden_outboundFlight_button1=211%7C199%7C12-11-2018&hidden_outboundFlight_button2=212%7C208%7C12-11-2018&hidden_outboundFlight_button3=213%7C179%7C12-11-2018&returnFlight=button0&hidden_returnFlight_button0=120%7C218%7C13-11-2018i&hidden_returnFlight_button1=121%7C199%7C13-11-2018&hidden_returnFlight_button2=122%7C208%7C13-11-2018&hidden_returnFlight_button3=123%7C179%7C13-11-2018&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=63&reserveFlights.y=16",
        "action=click",
        attributes=["border=0","src=/tours/images/continue.gif","name=findFlights","type=IMAGE","value=Submit"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > table > tbody > tr:nth-child(7) > td > input[type=\"IMAGE\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/TABLE[1]/TBODY[1]/TR[7]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1538647653677.png");
    ns_end_transaction("findflight_2", NS_AUTO_STATUS);

    ns_page_think_time(3.625);



    ns_start_transaction("findflight_3");
    ns_link("findflight_3",
        "url=http://10.10.30.7:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&saveCC=on&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=210%7C218%7C12-11-2018&advanceDiscount=&returnFlight=120%7C218%7C13-11-2018i&JSFormSubmit=off&buyFlights.x=37&buyFlights.y=17&.cgifields=saveCC",
        "action=click",
        attributes=["border=0","src=/tours/images/continue.gif","name=reserveFlights","type=image"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > form > center > center > table > tbody > tr > td:nth-child(1) > input[type=\"image\"]",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/FORM[1]/CENTER[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1538647657302.png");
    ns_end_transaction("findflight_3", NS_AUTO_STATUS);

    ns_page_think_time(4.712);



    ns_start_transaction("findflight_4");
    ns_check_box("findflight_4",
        "url=http://10.10.30.7:81/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&saveCC=on&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=210%7C218%7C12-11-2018&advanceDiscount=&returnFlight=120%7C218%7C13-11-2018i&JSFormSubmit=off&buyFlights.x=37&buyFlights.y=17&.cgifields=saveCC",
        "action=change",
        attributes=["name=saveCC","type=checkbox","value=on"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > blockquote > form > table > tbody > tr:nth-child(9) > td:nth-child(2) > input[type=\"checkbox\"]:nth-child(1)",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/BLOCKQUOTE[1]/FORM[1]/TABLE[1]/TBODY[1]/TR[9]/TD[2]/INPUT[1]",
        "tagName=INPUT",
        "value=on",
        "Snapshots=webpage_1538647662014.png");
    ns_end_transaction("findflight_4", NS_AUTO_STATUS);

    ns_page_think_time(0.164);



    ns_start_transaction("findflight_5");
    ns_link("findflight_5",
        "url=http://10.10.30.7:81/cgi-bin/welcome",
        "action=click",
        attributes=["border=0","src=/tours/images/purchaseflight.gif","name=buyFlights","type=image"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(2) > table > tbody > tr > td > table > tbody > tr > td > blockquote > form > center > table > tbody > tr > td:nth-child(1) > input[type=\"image\"]:nth-child(1)",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[2]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/BLOCKQUOTE[1]/FORM[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/INPUT[1]",
        "tagName=INPUT",
        "Snapshots=webpage_1538647662178.png");
    ns_end_transaction("findflight_5", NS_AUTO_STATUS);

    ns_page_think_time(4.29);



    ns_start_transaction("welcome_5");
    ns_link("welcome_5",
        "url=http://10.10.30.7:81/cgi-bin/welcome",
        "type=IMAGE_LINK",
        "action=click",
        attributes=["border=0","src=/tours/Merc10-dev/images/signoff.gif","width=95","alt=SignOff Button","height=25"],
        "csspath=html > body > table > tbody > tr:nth-child(2) > td > table > tbody > tr > td:nth-child(1) > center > table > tbody > tr:nth-child(3) > td > a > img",
        "xpath=HTML/BODY[1]/TABLE[1]/TBODY[1]/TR[2]/TD[1]/TABLE[1]/TBODY[1]/TR[1]/TD[1]/CENTER[1]/TABLE[1]/TBODY[1]/TR[3]/TD[1]/A[1]/IMG[1]",
        "tagName=IMG",
        "Snapshots=webpage_1538647666468.png");
    ns_end_transaction("welcome_5", NS_AUTO_STATUS);

    ns_page_think_time(4.613);


}
