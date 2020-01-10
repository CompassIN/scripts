/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 04/05/2019 04:10:14
    Flow details:
    Build details: 4.1.14 (build# 32)
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
        "URL=http://10.10.30.16/",
        "HEADER=Accept-Language:en-us",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1554460721692.png",
        "Snapshot=webpage_1554460724728.png",
        INLINE_URLS,
            "URL=http://10.10.30.16/static/css/bootstrap.min2.css", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/css/rametto.css", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/css/srikhand.css", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/css/style.css", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/css/radiocheck.css", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/js/jquery.min.js", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/js/bootstrap.min.js", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/js/notify.min.js", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/js/notify.js", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/js/own.js", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/js/buildcert.js", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/js/arrow28.js", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/icon/cavisson-netstorm.png", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/image/new.jpg", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/image/new1.png", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/image/cloud2.jpg", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/image/cloud1.jpg", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/image/cert.jpg", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/icon/fb.png", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/icon/linkedin.png", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/icon/tw.png", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/icon/g+.png", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/fonts/glyphicons-halflings-regular.woff2", "HEADER=Origin:http://10.10.30.16", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/icon/arrow.png", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE
    );

    ns_end_transaction("index", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("query");
    ns_web_url ("query",
        "URL=https://clients1.google.com/tbproxy/af/query?client=Chromium",
        "METHOD=POST",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:text/proto",
        "PreSnapshot=NA",
        "Snapshot=NA",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/query_main_url_1_1554460814768.body",
        BODY_END
    );

    ns_end_transaction("query", NS_AUTO_STATUS);
    ns_page_think_time(5.847);

    //Page Auto splitted for Link 'A' Clicked by User
    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=http://10.10.30.16/account/login",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=session",
        "PreSnapshot=webpage_1554460730687.png",
        "Snapshot=webpage_1554460732789.png",
        INLINE_URLS,
            "URL=http://10.10.30.16/static/css/bootstrap.min2.css", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/css/rametto.css", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/css/srikhand.css", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/css/style.css", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/css/radiocheck.css", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/account/static/js/jquery.min.js", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/account/static/js/bootstrap.min.js", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/account/static/js/notify.min.js", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/account/static/js/notify.js", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE
    );

    ns_end_transaction("login", NS_AUTO_STATUS);
    ns_page_think_time(11.711);

    //Page Auto splitted for Button '' Clicked by User
    ns_start_transaction("home");
    ns_web_url ("home",
        "URL=http://10.10.30.16/account/signin",
        "METHOD=POST",
        "HEADER=Origin:http://10.10.30.16",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "COOKIE=session",
        "REDIRECT=YES",
        "LOCATION=http://10.10.30.16/build/home",
        "PreSnapshot=webpage_1554460744111.png",
        "Snapshot=webpage_1554460749535.png",
        BODY_BEGIN,
            "uname=cavisson&password=cavisson",
        BODY_END,
        INLINE_URLS,
            "URL=http://10.10.30.16/build/home", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/css/bootstrap.min2.css", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/css/rametto.css", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/css/srikhand.css", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/css/style.css", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/static/css/radiocheck.css", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/build/static/js/jquery.min.js", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/build/static/js/bootstrap.min.js", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/build/static/js/notify.min.js", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=http://10.10.30.16/build/static/js/notify.js", "HEADER=Accept-Language:en-us", "COOKIE=session", END_INLINE,
            "URL=https://fonts.gstatic.com/s/shrikhand/v3/a8IbNovtLWfR7T7bMJwrA4KR.woff2", "HEADER=Origin:http://10.10.30.16", "HEADER=Accept-Language:en-us", END_INLINE
    );

    ns_end_transaction("home", NS_AUTO_STATUS);
    ns_page_think_time(19.495);

}
