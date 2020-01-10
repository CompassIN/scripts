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
extern FlowReturn SaveForLater();
extern FlowReturn Abandonment();
extern FlowReturn PromoCoupon();
extern FlowReturn GoToNextAction();
extern FlowReturn GuestCheckOut();
// End - List of used flows in the runlogic


void runlogic()
{
    NSDL2_RUNLOGIC(NULL, NULL, "Executing init_script()");

    init_script();

    NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - AnonymousCustomer");
    {
        UPDATE_USER_FLOW_COUNT(0)

        NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - ShoppingExperience");
        {
            UPDATE_USER_FLOW_COUNT(1)
            int ShoppingExperiencepercent = ns_get_random_number_int(1, 10000);

            NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - ShoppingExperience = %d", ShoppingExperiencepercent);

            if(ShoppingExperiencepercent <= 5000)
            {

                NSDL2_RUNLOGIC(NULL, NULL, "Executing dowhile block - AddToCartBock. NS Variable = ProductLoop:0:> (pct value = 50.0%)");
                {
                    UPDATE_USER_FLOW_COUNT(2)

                    NSDL2_RUNLOGIC(NULL, NULL, "NS Variable value for block - AddToCartBock = %d", ns_get_int_val("ProductLoop"));
                    do
                    {
                        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - AddToBag");
                        UPDATE_USER_FLOW_COUNT(3)
                        AddToBag();
                            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - ShoppingBag");
                            UPDATE_USER_FLOW_COUNT(10)
                            ShoppingBag();
                        }while(ns_get_int_val("ProductLoop") > 0);

                    }
            }
            else if(ShoppingExperiencepercent <= 10000)
            {

                NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - SaveForLaterBlock (pct value = 50.0%)");
                {
                    UPDATE_USER_FLOW_COUNT(18)
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - AddToBag");
                    UPDATE_USER_FLOW_COUNT(19)
                    AddToBag();
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - ShoppingBag");
                    UPDATE_USER_FLOW_COUNT(26)
                    ShoppingBag();
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - SaveForLater");
                    UPDATE_USER_FLOW_COUNT(34)
                    SaveForLater();
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Abandonment");
                    UPDATE_USER_FLOW_COUNT(41)
                    Abandonment();
                }
            }
        }

        NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - PromoSelection");
        {
            UPDATE_USER_FLOW_COUNT(42)
            int PromoSelectionpercent = ns_get_random_number_int(1, 10000);

            NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - PromoSelection = %d", PromoSelectionpercent);

            if(PromoSelectionpercent <= 7500)
            {
                NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - PromoCoupon (pct value = 75.0%)");
                UPDATE_USER_FLOW_COUNT(43)
                PromoCoupon();
            }
            else if(PromoSelectionpercent <= 10000)
            {
                NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - GoToNextAction (pct value = 25.0%)");
                UPDATE_USER_FLOW_COUNT(50)
                GoToNextAction();
            }
        }
        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - GuestCheckOut");
        UPDATE_USER_FLOW_COUNT(51)
        GuestCheckOut();
    }

    NSDL2_RUNLOGIC(NULL, NULL, "Executing ns_exit_session()");
    ns_exit_session();
}
