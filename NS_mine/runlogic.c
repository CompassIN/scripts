#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

extern int init_script();
extern int exit_script();

typedef void FlowReturn;

extern FlowReturn Action();

void runlogic()
{
	NSDL2_RUNLOGIC(NULL, NULL, "Executing init_script()");

	init_script();

	NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - Block1");
	{
		NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Action");
		Action();

	}
	NSDL2_RUNLOGIC(NULL, NULL, "Executing ns_exit_session()");
	ns_exit_session();
}
