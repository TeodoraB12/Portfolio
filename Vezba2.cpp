//kodot go vrakja vremeto na procesorot koe programta go potrosila
#include <stdio.h>      /* printf */
#include <time.h>      //vremenska biblioteka    /* clock_t, clock, CLOCKS_PER_SEC */
#include <math.h>   //matematicka biblioteka    /* sqrt */

int frequency_of_primes (int n) { //funkcija od celobrojna promenliva
  int i,j;              //definiranje na promenlivite i i j.
  int freq=n-1;         
  for (i=2; i<=n; ++i) for (j=sqrt(i);j>1;--j) if (i%j==0) {--freq; break;}
  return freq;          //vrednost od povikuvanje na funkcijata
}

int main ()
{
  clock_t t;
  int f;      //definiranje na promenliva
  t = clock();
  printf ("Calculating...\n");      //pecatenje 
  f = frequency_of_primes (99999);
  printf ("The number of primes lower than 100,000 is: %d\n",f);        //pecatenje
  t = clock() - t;          //vrednost vratena od clock 
  printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);  //pecatenje vo sekundi 
  return 0;
}
//Ovaa programa pravi sporedba so vrednosta vratena od povikuvanjeto na funkcijata i vrednosta vratena od casovnikot(clock) i toa vo sekundi 
//za da se presmeta vistinskoto vreme
