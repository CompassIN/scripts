#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
#ifdef ENABLE_RUNLOGIC_PROGRESS
  #define UPDATE_USER_FLOW_COUNT(count) update_user_flow_count(count);
#else
  #define UPDATE_USER_FLOW_COUNT(count)
#endif


extern int init_script();
extern int exit_script();

typedef void FlowReturn;

// Note: Following extern declaration is used to find the list of used flows. Do not delete/edit it
// Start - List of used flows in the runlogic
extern FlowReturn BopusPPid();
extern FlowReturn ShoppingBag();
extern FlowReturn BopusGuestCheckout();
extern FlowReturn BopusRegCheckout();
// End - List of used flows in the runlogic


void runlogic()
{
    NSDL2_RUNLOGIC(NULL, NULL, "Executing init_script()");

    init_script();

    NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - BopusModule");
    {
        UPDATE_USER_FLOW_COUNT(0)

        NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - ShoppingExperience");
        {
            UPDATE_USER_FLOW_COUNT(1)
            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - BopusPPid");
            UPDATE_USER_FLOW_COUNT(2)
            BopusPPid();
            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - ShoppingBag");
            UPDATE_USER_FLOW_COUNT(25)
            ShoppingBag();

            NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - CheckoutBlock");
            {
                UPDATE_USER_FLOW_COUNT(29)
                int CheckoutBlockpercent = ns_get_random_number_int(1, 10000);

                NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - CheckoutBlock = %d", CheckoutBlockpercent);

                if(CheckoutBlockpercent <= 5000)
                {
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - BopusGuestCheckout (pct value = 50.0%)");
                    UPDATE_USER_FLOW_COUNT(30)
                    BopusGuestCheckout();
                }
                else if(CheckoutBlockpercent <= 10000)
                {
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - BopusRegCheckout (pct value = 50.0%)");
                    UPDATE_USER_FLOW_COUNT(59)
                    BopusRegCheckout();
                }
            }
        }
    }

    NSDL2_RUNLOGIC(NULL, NULL, "Executing ns_exit_session()");
    ns_exit_session();
}
