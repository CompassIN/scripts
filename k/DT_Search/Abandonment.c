/*-----------------------------------------------------------------------------
    Name: Abandonment
    Recorded By: anjali
    Flow details:
    Modification History:  
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
void Abandonment()
{
   
    ns_start_transaction("VUsersAbandonment");
    ns_end_transaction("VUsersAbandonment", NS_AUTO_STATUS);
    

  	ns_exit_session();    		
}
