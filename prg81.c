#include <stdio.h>
int main()
{
    char s[50];
    printf("Enter a string: ");
    fgets(s,50,stdin);
    int i=0,lc=0,uc=0,dc=0,sc=0;
    while(s[i]!='\0')
    {
        if(s[i]>=65 && s[i]<=90)
        {
            uc++;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            lc++;
        }
        else if(s[i]>=48 && s[i]<=57)
        {
            dc++;
        }
        else
        {
            sc++;
        }
        i++;
    }
    printf("Upper case: %d, Lower case: %d, digits: %d, special symbol: %d",uc,lc,dc,sc);
}