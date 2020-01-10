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
extern FlowReturn Pagination();
extern FlowReturn GoToNextAction();
extern FlowReturn Refinement();
extern FlowReturn Sorting();
extern FlowReturn PDP();
// End - List of used flows in the runlogic


void runlogic()
{
    NSDL2_RUNLOGIC(NULL, NULL, "Executing init_script()");

    init_script();

    NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - SearchModule");
    {
        UPDATE_USER_FLOW_COUNT(0)

        NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - PredictiveSearchBlock");
        {
            UPDATE_USER_FLOW_COUNT(1)
            int PredictiveSearchBlockpercent = ns_get_random_number_int(1, 10000);

            NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - PredictiveSearchBlock = %d", PredictiveSearchBlockpercent);

            if(PredictiveSearchBlockpercent <= 4800)
            {

                NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - SearchBlock (pct value = 48.0%)");
                {
                    UPDATE_USER_FLOW_COUNT(2)

                    NSDL2_RUNLOGIC(NULL, NULL, "Executing count block - SearchPrediction. Min = 5, Max = 5 (pct value = 48.0%)");
                    {
                        UPDATE_USER_FLOW_COUNT(3)
                        int SearchPredictionCount = ns_get_random_number_int(5, 5);
                        int SearchPredictionLoop;
                         for(SearchPredictionLoop = 1; SearchPredictionLoop <= SearchPredictionCount; SearchPredictionLoop++)
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

                NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - OrganicSearch (pct value = 52.0%)");
                {
                    UPDATE_USER_FLOW_COUNT(7)
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - SearchByTerm");
                    UPDATE_USER_FLOW_COUNT(8)
                    SearchByTerm();

                    NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - SelectFilter (pct value = 52.0%)");
                    {
                        UPDATE_USER_FLOW_COUNT(16)
                        int SelectFilterpercent = ns_get_random_number_int(1, 10000);

                        NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - SelectFilter = %d", SelectFilterpercent);

                        if(SelectFilterpercent <= 6600)
                        {
                            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Pagination (pct value = 66.0%)");
                            UPDATE_USER_FLOW_COUNT(17)
                            Pagination();
                        }
                        else if(SelectFilterpercent <= 6600)
                        {
                            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - GoToNextAction (pct value = 0.0%)");
                            UPDATE_USER_FLOW_COUNT(22)
                            GoToNextAction();
                        }
                        else if(SelectFilterpercent <= 8300)
                        {

                            NSDL2_RUNLOGIC(NULL, NULL, "Executing count block - Refinement. Min = 2, Max = 2 (pct value = 17.0%)");
                            {
                                UPDATE_USER_FLOW_COUNT(23)
                                int RefinementCount = ns_get_random_number_int(2, 2);
                                int RefinementLoop;
                                 for(RefinementLoop = 1; RefinementLoop <= RefinementCount; RefinementLoop++)
                                {
                                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Refinement");
                                    UPDATE_USER_FLOW_COUNT(24)
                                    Refinement();
                                }
                            }
                        }
                        else if(SelectFilterpercent <= 10000)
                        {

                            NSDL2_RUNLOGIC(NULL, NULL, "Executing count block - SortBy. Min = 2, Max = 2 (pct value = 17.0%)");
                            {
                                UPDATE_USER_FLOW_COUNT(29)
                                int SortByCount = ns_get_random_number_int(2, 2);
                                int SortByLoop;
                                 for(SortByLoop = 1; SortByLoop <= SortByCount; SortByLoop++)
                                {
                                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Sorting");
                                    UPDATE_USER_FLOW_COUNT(30)
                                    Sorting();
                                }
                            }
                        }
                    }
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - PDP");
                    UPDATE_USER_FLOW_COUNT(35)
                    PDP();
                }
            }
        }
    }

    NSDL2_RUNLOGIC(NULL, NULL, "Executing ns_exit_session()");
    ns_exit_session();
}
