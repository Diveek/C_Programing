/*Basic Calculator Using SWITCH CASE.*/

#include <stdio.h>
int main()
{
    int ch;
    int num1,num2, result;
    printf("Enter Your Choice:\n1:\tAddition\n2:\tSubstraction\n3:\tMultiplication\n4:\tDivision\n");
    scanf("%d",&ch);
   

    switch(ch)
    {
        case 1:     printf("For Addition:\t ");
                    printf("Enter 1st integer number:\n");
                    scanf("%d",&num1);
                    printf("Enter 2nd integer number:\n");
                    scanf("%d",&num2);
                    result=num1+num2;
                    printf("\nAddition:\t%5d",result);
                    break;
        case 2:     printf("For Substraction:\t ");
                    printf("Enter 1st integer number:\n");
                    scanf("%d",&num1);
                    printf("Enter 2nd integer number:\n");
                    scanf("%d",&num2);
                     result=num1-num2;
                    printf("\nSubstraction:\t%5d",result);
                    break;
        case 3:     printf("For Multiplication:\t ");
                    printf("Enter 1st integer number:\n");
                    scanf("%d",&num1);
                    printf("Enter 2nd integer number:\n");
                    scanf("%d",&num2);
        
                    result=num1*num2;
                    printf("\nMultiplication:\t%5d",result);
                    break;
        case 4:     printf("For Division:\t ");
                    printf("Enter 1st integer number:\n");
                    scanf("%d",&num1);
                    printf("Enter 2nd integer number:\n");
                    scanf("%d",&num2);
                    result=num1/num2;
                    printf("\nDivision:\t%5d",result);
                    break;
        default: printf("\nPlease Enter a vaild choice..!");
                    break;
    }
    return 0;
}