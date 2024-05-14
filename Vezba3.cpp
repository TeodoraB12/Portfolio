//kodot ja presmetuva razlikata vo sekundi pomegju pocetokot i krajot 
#include <stdio.h>      /* printf */
#include <time.h>    //vremenska biblioteka   /* time_t, struct tm, difftime, time, mktime */

int main ()
{
  time_t now;
  struct tm newyear;    //definiranje na struktura
  double seconds; //definiranje na promenliva seconds od tipot double

  time(&now);  //se dobiva tekovnoto vreme isto kako sega (NULL)

  newyear = *localtime(&now);   

  newyear.tm_hour = 0; newyear.tm_min = 0; newyear.tm_sec = 0;      //elementi na strukturata definirana pogore
  newyear.tm_mon = 0;  newyear.tm_mday = 1;         

  seconds = difftime(now,mktime(&newyear));

  printf ("%.f seconds since new year in the current timezone.\n", seconds);    //pecatenje na vremeto

  return 0;
}
