/* #define "symbolic const" use */

/* Using For_LOOP ,Fahrenheit to celcius table for fahreheit = 0,20,40....300.  {formula: C =(5/9) (f-32)} */


#include <stdio.h>
#define lower 0     /* lower limit for table*/
#define upper 300   /* upper limti for table*/
#define step 20     /* step size */

int main()
{
 int fahr;
  
  for(fahr=lower; fahr<=upper; fahr=fahr+step)
  {
        printf("%d,\t%.2f\n",fahr,(5*(fahr-32)/9));
  }
}