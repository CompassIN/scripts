/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 04/10/2019 10:58:58
    Flow details:
    Build details: 4.1.14 (build# 32)
    Modification History:
-----------------------------------------------------------------------------*/

package com.cavisson.scripts.TestJava;
import pacJnvmApi.NSApi;

public class flow implements NsFlow
{
    public int execute(NSApi nsApi) throws Exception
    {
        int status = 0;

        status = nsApi.ns_start_transaction("index");
        status = nsApi.ns_web_url ("index",
            "URL=http://127.0.0.1/",
            "HEADER=Accept-Language:en-in",
            "HEADER=Upgrade-Insecure-Requests:1",
            "PreSnapshot=webpage_1554874130862.png",
            "Snapshot=webpage_1554874131105.png",
            INLINE_URLS,
                "URL=http://127.0.0.1/icons/ubuntu-logo.png", "HEADER=Accept-Language:en-in", END_INLINE
        );

        status = nsApi.ns_end_transaction("index", NS_AUTO_STATUS);
        status = nsApi.ns_page_think_time(0.076);

        return status;
    }
}
