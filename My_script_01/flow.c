/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 06/12/2019 01:43:09
    Flow details:
    Build details: 4.1.14 (build# 126)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("index");
    ns_web_url ("index",
        "URL=https://10.10.30.2:81/tours/index.html",
        "HEADER=Accept-Language:en-us",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1560327115496.png",
        "Snapshot=webpage_1560327146097.png",
        INLINE_URLS,
            "URL=http://chromewebdata/", END_INLINE
    );

    ns_end_transaction("index", NS_AUTO_STATUS);
    ns_page_think_time(43.409);

    ns_start_transaction("index_2");
    ns_web_url ("index_2",
        "URL=https://10.10.30.2:81/tours/index.html",
        "HEADER=Accept-Language:en-us",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1560327154264.png",
        "Snapshot=webpage_1560327184353.png",
        INLINE_URLS,
            "URL=http://chromewebdata/", END_INLINE
    );

    ns_end_transaction("index_2", NS_AUTO_STATUS);
    ns_page_think_time(0);

}
