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
extern FlowReturn AddToBag();
extern FlowReturn ShoppingBag();
extern FlowReturn PromoCoupon();
extern FlowReturn GoToNextAction();
extern FlowReturn RegisterCheckOut();
// End - List of used flows in the runlogic


void runlogic()
{
    NSDL2_RUNLOGIC(NULL, NULL, "Executing init_script()");

    init_script();

    NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - AuthenticateCustomer");
    {
        UPDATE_USER_FLOW_COUNT(0)

        NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - ShoppingExperience");
        {
            UPDATE_USER_FLOW_COUNT(1)
            int ShoppingExperiencepercent = ns_get_random_number_int(1, 10000);

            NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - ShoppingExperience = %d", ShoppingExperiencepercent);

            if(ShoppingExperiencepercent <= 10000)
            {

                NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - ProductSelection (pct value = 100.0%)");
                {
                    UPDATE_USER_FLOW_COUNT(2)
                    int ProductSelectionpercent = ns_get_random_number_int(1, 10000);

                    NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - ProductSelection = %d", ProductSelectionpercent);

                    if(ProductSelectionpercent <= 10000)
                    {

                        NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - RegularProduct (pct value = 100.0%)");
                        {
                            UPDATE_USER_FLOW_COUNT(3)

                            NSDL2_RUNLOGIC(NULL, NULL, "Executing count block - AddToBagBlock. Min = 4, Max = 4 (pct value = 100.0%)");
                            {
                                UPDATE_USER_FLOW_COUNT(4)
                                int AddToBagBlockCount = ns_get_random_number_int(4, 4);
                                int AddToBagBlockLoop;
                                 for(AddToBagBlockLoop = 1; AddToBagBlockLoop <= AddToBagBlockCount; AddToBagBlockLoop++)
                                {
                                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - AddToBag");
                                    UPDATE_USER_FLOW_COUNT(5)
                                    AddToBag();
                                        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - ShoppingBag");
                                        UPDATE_USER_FLOW_COUNT(12)
                                        ShoppingBag();
                                    }
                                }
                        }
                    }
                }
            }
        }

        NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - PromoSelection");
        {
            UPDATE_USER_FLOW_COUNT(20)
            int PromoSelectionpercent = ns_get_random_number_int(1, 10000);

            NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - PromoSelection = %d", PromoSelectionpercent);

            if(PromoSelectionpercent <= 7500)
            {
                NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - PromoCoupon (pct value = 75.0%)");
                UPDATE_USER_FLOW_COUNT(21)
                PromoCoupon();
            }
            else if(PromoSelectionpercent <= 10000)
            {
                NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - GoToNextAction (pct value = 25.0%)");
                UPDATE_USER_FLOW_COUNT(28)
                GoToNextAction();
            }
        }
        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - RegisterCheckOut");
        UPDATE_USER_FLOW_COUNT(29)
        RegisterCheckOut();
    }

    NSDL2_RUNLOGIC(NULL, NULL, "Executing ns_exit_session()");
    ns_exit_session();
}
