#include <stdio.h>
/* Fahrenheit to celcius table for fahreheit = 0,20,40....300.  {formula: C =(5/9) (f-32)} */

int main()
{
    float fahr,cel;
    int lower,upper,step;
    lower=0;
    upper=300;
    step=20;
    fahr=lower;

    while (fahr <= upper)
    {
        cel= (5 * (fahr-32)/9);
        printf("%.2f\t%.2f\n",fahr,cel);
        fahr=fahr+step;
    }
    
}