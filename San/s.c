/*-----------------------------------------------------------------------------
    Name: s
    Recorded By: cavisson
    Date of recording: 06/12/2019 01:58:51
    Flow details:
    Build details: 4.1.14 (build# 126)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void s()
{
    ns_start_transaction("index_html_2");
    ns_web_url ("index_html_2",
        "URL=http://66.220.31.131:9020/tours/index.html",
        "HEADER=Accept-Language:en-in",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1560328117225.png",
        "Snapshot=webpage_1560328127615.png",
        INLINE_URLS,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-in", END_INLINE,
            "URL=http://66.220.31.131:9020/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-in", END_INLINE
    );

    ns_end_transaction("index_html_2", NS_AUTO_STATUS);
    ns_page_think_time(650.366);

}
