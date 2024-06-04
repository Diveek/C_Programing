/* conditional experession can we written with ternary operator (?:) */

#include <stdio.h>
#include <conio.h>
int main()      /* program to check bigger number*/
{
    int num1,num2;
    
    printf("Enter a integer number 1:\n");
    scanf("%d",&num1);
    printf("Enter a integer number 2:\n");
    scanf("%d",&num2);

    

    printf("Bigger Number is: %d", (num1 > num2)? num1 : num2);

    return 0;

}