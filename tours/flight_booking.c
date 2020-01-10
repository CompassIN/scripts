/*-----------------------------------------------------------------------------
    Name: flight_booking
    Recorded By: cavisson
    Date of recording: 06/12/2019 11:31:45
    Flow details:
    Build details: 4.1.14 (build# 31)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flight_booking()
{
    ns_start_transaction("index");
    ns_web_url ("index",
        "URL=http://192.158.1.36:81/tours/index.html",
        "HEADER=Host:192.158.1.36:81",
        "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/56.0.2924.87 Safari/537.36",
        "HEADER=Accept-Encoding:gzip, deflate",
        "HEADER=Accept-Language:en-us",
        "HEADER=Accept:text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1560319227120.png",
        "Snapshot=webpage_1560319250328.png",
        INLINE_URLS,
            "URL=http://chromewebdata/", END_INLINE
    );

    ns_end_transaction("index", NS_AUTO_STATUS);
    ns_page_think_time(67.844);

    ns_start_transaction("index_2");
    ns_web_url ("index_2",
        "URL=http://192.158.1.36:81/tours/index.html",
        "HEADER=Host:192.158.1.36:81",
        "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/56.0.2924.87 Safari/537.36",
        "HEADER=Accept-Encoding:gzip, deflate",
        "HEADER=Accept-Language:en-us",
        "HEADER=Accept:text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1560319277741.png",
        "Snapshot=webpage_1560319298922.png",
        INLINE_URLS,
            "URL=http://chromewebdata/", END_INLINE
    );

    ns_end_transaction("index_2", NS_AUTO_STATUS);
    ns_page_think_time(0);

}
