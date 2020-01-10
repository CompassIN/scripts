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
extern FlowReturn GetSearchPredictions();
extern FlowReturn Abandonment();
extern FlowReturn SearchByTerm();
extern FlowReturn Refinement();
extern FlowReturn Sorting();
extern FlowReturn GoToNextAction();
extern FlowReturn Pagination();
extern FlowReturn PDP();
// End - List of used flows in the runlogic


void runlogic()
{
    NSDL2_RUNLOGIC(NULL, NULL, "Executing init_script()");

    init_script();

    NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - WebMobile");
    {
        UPDATE_USER_FLOW_COUNT(0)

        NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - PredictiveSearchBlock");
        {
            UPDATE_USER_FLOW_COUNT(1)
            int PredictiveSearchBlockpercent = ns_get_random_number_int(1, 10000);

            NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - PredictiveSearchBlock = %d", PredictiveSearchBlockpercent);

            if(PredictiveSearchBlockpercent <= 2800)
            {

                NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - SearchBlock (pct value = 28.0%)");
                {
                    UPDATE_USER_FLOW_COUNT(2)

                    NSDL2_RUNLOGIC(NULL, NULL, "Executing count block - SearchPredictions. Min = 5, Max = 5 (pct value = 28.0%)");
                    {
                        UPDATE_USER_FLOW_COUNT(3)
                        int SearchPredictionsCount = ns_get_random_number_int(5, 5);
                        int SearchPredictionsLoop;
                         for(SearchPredictionsLoop = 1; SearchPredictionsLoop <= SearchPredictionsCount; SearchPredictionsLoop++)
                        {
                            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - GetSearchPredictions");
                            UPDATE_USER_FLOW_COUNT(4)
                            GetSearchPredictions();
                        }
                    }
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Abandonment");
                    UPDATE_USER_FLOW_COUNT(6)
                    Abandonment();
                }
            }
            else if(PredictiveSearchBlockpercent <= 10000)
            {

                NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - CompleteTermBlock (pct value = 72.0%)");
                {
                    UPDATE_USER_FLOW_COUNT(7)
                    int CompleteTermBlockpercent = ns_get_random_number_int(1, 10000);

                    NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - CompleteTermBlock = %d", CompleteTermBlockpercent);

                    if(CompleteTermBlockpercent <= 10000)
                    {

                        NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - WithYodaBlock (pct value = 100.0%)");
                        {
                            UPDATE_USER_FLOW_COUNT(8)
                            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - SearchByTerm");
                            UPDATE_USER_FLOW_COUNT(9)
                            SearchByTerm();

                            NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - YodafilterBlock (pct value = 100.0%)");
                            {
                                UPDATE_USER_FLOW_COUNT(17)
                                int YodafilterBlockpercent = ns_get_random_number_int(1, 10000);

                                NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - YodafilterBlock = %d", YodafilterBlockpercent);

                                if(YodafilterBlockpercent <= 1700)
                                {

                                    NSDL2_RUNLOGIC(NULL, NULL, "Executing count block - Refinement. Min = 2, Max = 2 (pct value = 17.0%)");
                                    {
                                        UPDATE_USER_FLOW_COUNT(18)
                                        int RefinementCount = ns_get_random_number_int(2, 2);
                                        int RefinementLoop;
                                         for(RefinementLoop = 1; RefinementLoop <= RefinementCount; RefinementLoop++)
                                        {
                                            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Refinement");
                                            UPDATE_USER_FLOW_COUNT(19)
                                            Refinement();
                                        }
                                    }
                                }
                                else if(YodafilterBlockpercent <= 3400)
                                {

                                    NSDL2_RUNLOGIC(NULL, NULL, "Executing count block - SortBy. Min = 2, Max = 2 (pct value = 17.0%)");
                                    {
                                        UPDATE_USER_FLOW_COUNT(24)
                                        int SortByCount = ns_get_random_number_int(2, 2);
                                        int SortByLoop;
                                         for(SortByLoop = 1; SortByLoop <= SortByCount; SortByLoop++)
                                        {
                                            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Sorting");
                                            UPDATE_USER_FLOW_COUNT(25)
                                            Sorting();
                                        }
                                    }
                                }
                                else if(YodafilterBlockpercent <= 6600)
                                {
                                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - GoToNextAction (pct value = 32.0%)");
                                    UPDATE_USER_FLOW_COUNT(30)
                                    GoToNextAction();
                                }
                                else if(YodafilterBlockpercent <= 10000)
                                {
                                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Pagination (pct value = 34.0%)");
                                    UPDATE_USER_FLOW_COUNT(31)
                                    Pagination();
                                }
                            }
                            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - PDP");
                            UPDATE_USER_FLOW_COUNT(35)
                            PDP();
                        }
                    }
                }
            }
        }
    }

    NSDL2_RUNLOGIC(NULL, NULL, "Executing ns_exit_session()");
    ns_exit_session();
}
