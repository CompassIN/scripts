#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../include/ns_string.h"
#include "script.h"

int init_script() {
        int page = ns_get_replay_page();
        //printf ("Page %d return from %s time (%lu), think_time = %d\n", page, (char*)__FUNCTION__, get_ms_stamp(), ns_get_pg_think_time());
	return (page);
}

int pre_page_index_html(void) {
   return NS_USE_CONFIGURED_THINK_TIME;
}

int check_page_index_html(void) {
        int page = ns_get_replay_page();
        //printf ("Page %d return from %s time (%lu), think_time = %d\n", page, (char*)__FUNCTION__, get_ms_stamp(), ns_get_pg_think_time());
	return (page);
}

int pre_page_login(void) {
   return NS_USE_CONFIGURED_THINK_TIME;
}

int check_page_login(void) {
        int page = ns_get_replay_page();
        //printf ("Page %d return from %s time (%lu), think_time = %d\n", page, (char*)__FUNCTION__, get_ms_stamp(), ns_get_pg_think_time());
	return (page);
}

int pre_page_reservation(void) {
   return NS_USE_CONFIGURED_THINK_TIME;
}

int check_page_reservation(void) {
        int page = ns_get_replay_page();
        //printf ("Page %d return from %s time (%lu), think_time = %d\n", page, (char*)__FUNCTION__, get_ms_stamp(), ns_get_pg_think_time());
	return (page);

}

int pre_page_findflight(void) {
   return NS_USE_CONFIGURED_THINK_TIME;
}

int check_page_findflight(void) {
        int page = ns_get_replay_page();
        //printf ("Page %d return from %s time (%lu), think_time = %d\n", page, (char*)__FUNCTION__, get_ms_stamp(), ns_get_pg_think_time());
	return (page);

}

int pre_page_findflight_2(void) {
   return NS_USE_CONFIGURED_THINK_TIME;
}

int check_page_findflight_2(void) {
        int page = ns_get_replay_page();
        //printf ("Page %d return from %s time (%lu), think_time = %d\n", page, (char*)__FUNCTION__, get_ms_stamp(), ns_get_pg_think_time());
	return (page);

}

int pre_page_findflight_3(void) {
   return NS_USE_CONFIGURED_THINK_TIME;
}

int check_page_findflight_3(void) {
        int page = ns_get_replay_page();
        //printf ("Page %d return from %s time (%lu), think_time = %d\n", page, (char*)__FUNCTION__, get_ms_stamp(), ns_get_pg_think_time());
	return (page);

}

int pre_page_welcome(void) {
   return NS_USE_CONFIGURED_THINK_TIME;
}

int check_page_welcome(void) {
        int page = ns_get_replay_page();
        //printf ("Page %d return from %s time (%lu), think_time = %d\n", page, (char*)__FUNCTION__, get_ms_stamp(), ns_get_pg_think_time());
	return (page);
}

void exit_script() {
	return;
}
