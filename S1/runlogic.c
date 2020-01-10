#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"


extern int init_script();
extern int exit_script();

typedef void FlowReturn;

// Note: Following extern declaration is used to find the list of used flows. Do not delete/edit it
// Start - List of used flows in the runlogic
extern FlowReturn S1_flow();
//extern FlowReturn S1_data_type();
//extern FlowReturn hpd_tours();
// End - List of used flows in the runlogic

void runlogic()
{
    NSDL2_RUNLOGIC(NULL, NULL, "Executing init_script()");
    
    init_script();
    NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - Block1");
    {
        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - hpd_tours");
        S1_flow();
	 //S1_data_type();
        //hpd_tours();
    }
    NSDL2_RUNLOGIC(NULL, NULL, "Executing ns_exit_session()");
    ns_exit_session();
}
