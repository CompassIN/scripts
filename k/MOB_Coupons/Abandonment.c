/*-----------------------------------------------------------------------------
    Name: SearchCoupon_New
    Recorded By: Kalyani
    Date of recording: 05/26/2016 07:05:55
    Flow details:
    Build details: 4.1.4 (build# 40)
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
void Abandonment()
{
    ns_start_transaction("MOB_CouponAbandonment");
    ns_end_transaction("MOB_CouponAbandonment", NS_AUTO_STATUS);

  	ns_exit_session();   
	
}
