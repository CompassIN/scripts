#include <stdio.h>
#include <time.h>

char *get_cur_date_time()
{ 
  time_t  tloc;
  struct  tm *lt;
  static  char cur_date_time[100];

  (void)time(&tloc);
  if((lt = localtime(&tloc)) == (struct tm *)NULL)
    strcpy(cur_date_time, "Error");
  else
    sprintf(cur_date_time, "%02d/%02d/%02d %02d:%02d:%02d", lt->tm_mon + 1, lt->tm_mday, (1900 + lt->tm_year)%2000, lt->tm_hour, lt->tm_min, lt->tm_sec); 
  return(cur_date_time);
} 
