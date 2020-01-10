/*-----------------------------------------------------------------------------
    Name: qjkedhoQ
    Recorded By: cavisson
    Date of recording: 06/13/2019 04:21:49
    Flow details:
    Build details: 4.1.14 (build# 31)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void qjkedhoQ()
{
    ns_start_transaction("index");
    ns_web_url ("index",
        "URL=http://10.10.30.8/tours/inedx.html",
        "HEADER=Accept-Language:en-us",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1560423095666.png",
        "Snapshot=webpage_1560423100313.png",
        INLINE_URLS,
            "URL=http://chromewebdata/", END_INLINE
    );

    ns_end_transaction("index", NS_AUTO_STATUS);
    ns_page_think_time(0);

}
