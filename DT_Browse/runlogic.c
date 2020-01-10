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
extern FlowReturn Home();
extern FlowReturn Browse();
extern FlowReturn Refinement();
extern FlowReturn Pagination();
extern FlowReturn Sorting();
extern FlowReturn GoToNextAction();
extern FlowReturn PDP();
// End - List of used flows in the runlogic


void runlogic()
{
    NSDL2_RUNLOGIC(NULL, NULL, "Executing init_script()");

    init_script();

    NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - JCPenneyDotcom");
    {
        UPDATE_USER_FLOW_COUNT(0)
        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Home");
        UPDATE_USER_FLOW_COUNT(1)
        Home();
        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Browse");
        UPDATE_USER_FLOW_COUNT(4)
        Browse();

        NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - FilterBlock");
        {
            UPDATE_USER_FLOW_COUNT(12)
            int FilterBlockpercent = ns_get_random_number_int(1, 10000);

            NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - FilterBlock = %d", FilterBlockpercent);

            if(FilterBlockpercent <= 1700)
            {
                NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Refinement (pct value = 17.0%)");
                UPDATE_USER_FLOW_COUNT(13)
                Refinement();
            }
            else if(FilterBlockpercent <= 6000)
            {
                NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Pagination (pct value = 43.0%)");
                UPDATE_USER_FLOW_COUNT(18)
                Pagination();
            }
            else if(FilterBlockpercent <= 7700)
            {
                NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Sorting (pct value = 17.0%)");
                UPDATE_USER_FLOW_COUNT(23)
                Sorting();
            }
            else if(FilterBlockpercent <= 10000)
            {
                NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - GoToNextAction (pct value = 23.0%)");
                UPDATE_USER_FLOW_COUNT(28)
                GoToNextAction();
            }
        }
        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - PDP");
        UPDATE_USER_FLOW_COUNT(29)
        PDP();
    }

    NSDL2_RUNLOGIC(NULL, NULL, "Executing ns_exit_session()");
    ns_exit_session();
}
