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