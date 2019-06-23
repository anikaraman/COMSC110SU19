/* srand example */
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int main ()
{ // the following is to generate a random number between 0 - 99
  // because it is zero based, the remainder of divide by 100 
  printf ("First number: %d\n", rand()%100);
  
  // To seed with the current time, 
  // i.e. time from when UNIX 0 time, 0th second of 1970
  srand (time(NULL)); // seed with what is time now
  printf ("Random number: %d\n", rand()%100);
  // % 100 is to generate 0 - 99 
  srand (1);
  printf ("Again the first number: %d\n", rand()%100);

  return 0;
}