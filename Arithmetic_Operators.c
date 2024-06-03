/* The Binary Arithmetic operators are:( + , - , * , / )And Modulus operator %       */

#include <stdio.h>          /* program to check leap year*/

int main()
{
    int year;
    year=2024;

    if((year%4==0 && year%100 !=0 )|| (year%400==0))
        printf("%d is a leap year.",year);
    else
        printf("%d is a not leap year.",year);

    return 0;
}