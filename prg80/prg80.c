#include <stdio.h>
int main()
{
    char s[20];
    printf("Enter a string: ");
    fgets(s,20,stdin);
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>=97 && s[i]<=122)
        {
            s[i]-=32;
        }
        i++;
    }
    printf("New string: ");
    fputs(s,stdout);
}
