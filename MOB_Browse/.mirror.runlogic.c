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
extern FlowReturn Sorting();
extern FlowReturn Pagination();
extern FlowReturn GoToNextAction();
extern FlowReturn PDP();
// End - List of used flows in the runlogic


void runlogic()
{
    NSDL2_RUNLOGIC(NULL, NULL, "Executing init_script()");

    init_script();

    NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - WebMobile");
    {
        UPDATE_USER_FLOW_COUNT(0)
        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Home");
        UPDATE_USER_FLOW_COUNT(1)
        Home();

        NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - CategoryBlock");
        {
            UPDATE_USER_FLOW_COUNT(4)
            int CategoryBlockpercent = ns_get_random_number_int(1, 10000);

            NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - CategoryBlock = %d", CategoryBlockpercent);

            if(CategoryBlockpercent <= 10000)
            {

                NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - WithYodaBlock (pct value = 100.0%)");
                {
                    UPDATE_USER_FLOW_COUNT(5)
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Browse");
                    UPDATE_USER_FLOW_COUNT(6)
                    Browse();

                    NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - Yodafilter (pct value = 100.0%)");
                    {
                        UPDATE_USER_FLOW_COUNT(14)
                        int Yodafilterpercent = ns_get_random_number_int(1, 10000);

                        NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - Yodafilter = %d", Yodafilterpercent);

                        if(Yodafilterpercent <= 1700)
                        {
                            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Refinement (pct value = 17.0%)");
                            UPDATE_USER_FLOW_COUNT(15)
                            Refinement();
                        }
                        else if(Yodafilterpercent <= 3400)
                        {
                            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Sorting (pct value = 17.0%)");
                            UPDATE_USER_FLOW_COUNT(21)
                            Sorting();
                        }
                        else if(Yodafilterpercent <= 6800)
                        {
                            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Pagination (pct value = 34.0%)");
                            UPDATE_USER_FLOW_COUNT(27)
                            Pagination();
                        }
                        else if(Yodafilterpercent <= 10000)
                        {
                            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - GoToNextAction (pct value = 32.0%)");
                            UPDATE_USER_FLOW_COUNT(33)
                            GoToNextAction();
                        }
                    }
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - PDP");
                    UPDATE_USER_FLOW_COUNT(34)
                    PDP();
                }
            }
        }
    }

    NSDL2_RUNLOGIC(NULL, NULL, "Executing ns_exit_session()");
    ns_exit_session();
}
