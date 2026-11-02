#include <stdio.h>
int main()
{
    char s[20], ch;
    printf("Enter a string: ");
    fgets(s,20,stdin);
    printf("Enter charecter to search: ");
    scanf(" %c",&ch);
    int i=0,f=0;
    while(s[i]!='\0')
    {
        if(s[i]==ch)
        {
            printf("found");
            f++;
            break;
        }
        i++;
    }
    if(f==0)
    {
        printf("Not found");
    }
}
