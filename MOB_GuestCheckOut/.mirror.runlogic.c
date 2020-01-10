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
extern FlowReturn RegularPDP();
extern FlowReturn AddToBag();
extern FlowReturn ShoppingBag();
extern FlowReturn SaveForLater();
extern FlowReturn Abandonment();
extern FlowReturn PromoCoupon();
extern FlowReturn GuestCheckOut();
// End - List of used flows in the runlogic


void runlogic()
{
    NSDL2_RUNLOGIC(NULL, NULL, "Executing init_script()");

    init_script();

    NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - AnonymousCustomer");
    {
        UPDATE_USER_FLOW_COUNT(0)
        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - RegularPDP");
        UPDATE_USER_FLOW_COUNT(1)
        RegularPDP();

        NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - ShoppingExperience");
        {
            UPDATE_USER_FLOW_COUNT(11)
            int ShoppingExperiencepercent = ns_get_random_number_int(1, 10000);

            NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - ShoppingExperience = %d", ShoppingExperiencepercent);

            if(ShoppingExperiencepercent <= 5000)
            {

                NSDL2_RUNLOGIC(NULL, NULL, "Executing count block - AddToBagBlock. Min = 5, Max = 5 (pct value = 50.0%)");
                {
                    UPDATE_USER_FLOW_COUNT(12)
                    int AddToBagBlockCount = ns_get_random_number_int(5, 5);
                    int AddToBagBlockLoop;
                     for(AddToBagBlockLoop = 1; AddToBagBlockLoop <= AddToBagBlockCount; AddToBagBlockLoop++)
                    {
                        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - AddToBag");
                        UPDATE_USER_FLOW_COUNT(13)
                        AddToBag();
                            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - ShoppingBag");
                            UPDATE_USER_FLOW_COUNT(20)
                            ShoppingBag();
                        }
                    }
            }
            else if(ShoppingExperiencepercent <= 10000)
            {

                NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - SaveForLaterBlock (pct value = 50.0%)");
                {
                    UPDATE_USER_FLOW_COUNT(27)
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - AddToBag");
                    UPDATE_USER_FLOW_COUNT(28)
                    AddToBag();
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - ShoppingBag");
                    UPDATE_USER_FLOW_COUNT(35)
                    ShoppingBag();
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - SaveForLater");
                    UPDATE_USER_FLOW_COUNT(42)
                    SaveForLater();
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Abandonment");
                    UPDATE_USER_FLOW_COUNT(50)
                    Abandonment();
                }
            }
        }
        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - PromoCoupon");
        UPDATE_USER_FLOW_COUNT(51)
        PromoCoupon();
        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - GuestCheckOut");
        UPDATE_USER_FLOW_COUNT(58)
        GuestCheckOut();
    }

    NSDL2_RUNLOGIC(NULL, NULL, "Executing ns_exit_session()");
    ns_exit_session();
}
