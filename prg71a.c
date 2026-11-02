#include <stdio.h>

int strcount(char s[50])
{
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i-1;
}

int main()
{
    char c[50];
    printf("Enter a string: ");
    fgets(c,50,stdin);
    printf("Lenght of string: %d",strcount(c));
}