#include <stdio.h>
int main()
{
    char s[20],ch1,ch2;
    int i=0;
    printf("Enter a string: ");
    fgets(s,20,stdin);
    printf("Entered string: ");
    fputs(s,stdout);
    printf("Enter charecter to replace, new charecter: ");
    scanf(" %c, %c",&ch1,&ch2);
    while(s[i]!='\n')
    {
        if(s[i]==ch1)
        {
            s[i]=ch2;
        }
        i++;
    }
    printf("New string: ");
    fputs(s,stdout);
}