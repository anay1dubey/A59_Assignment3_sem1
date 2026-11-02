#include <stdio.h>
int main()
{
    char s1[20],s2[20];
    int i=0,flag=0;
    printf("Enter a string: ");
    fgets(s1,20,stdin);
    printf("Enter a string: ");
    fgets(s2,20,stdin);
    while(s1[i]!='\0' || s2[i]!='\0')
    {
        if(s1[i]>s2[i] || s2[i]>s1[i])
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    {
        printf("Same strings");
    }
    else
    {
        printf("Different strings");
    }
}
