/* strlen function: return length of string.*/

#include <stdio.h>
#define SIZE 100
int main()
{
    char str[SIZE]="Diveek Kumar";
    printf("%d",str[2]);
    printf("String length is %d",strlenn(str));

    return 0;

}
int strlenn(char s[])
{
    int i=0;

    while(s[i])
    {
        if(s[i] != '\0')
            i++;
        return i;
    }
}

