/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 06/12/2019 12:57:40
    Flow details:
    Build details: 4.1.14 (build# 31)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("index_htm");
    ns_web_url ("index_htm",
        "URL=https://r5---sn-ci5gup-qxa6.gvt1.com/edgedl/chrome/dict/en-us-8-0.bdic?cms_redirect=yes&mip=182.71.119.213&mm=28&mn=sn-ci5gup-qxa6&ms=nvh&mt=1560324178&mv=u&pl=24&shardbypass=yes",
        "PreSnapshot=webpage_1560324446973.png",
        "Snapshot=webpage_1560324448721.png",
        INLINE_URLS,
            "URL=http://10.10.30.2:81/tours/index.htm", "HEADER=Accept-Language:en-in", "HEADER=Upgrade-Insecure-Requests:1", END_INLINE
    );

    ns_end_transaction("index_htm", NS_AUTO_STATUS);
    ns_page_think_time(17.483);

}
