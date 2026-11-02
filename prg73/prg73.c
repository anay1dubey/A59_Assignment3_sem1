#include <stdio.h>
int main()
{
    char s1[20],s2[20];
    int i=0;
    printf("enter a string: ");
    fgets(s1,20,stdin);
    while(s1[i]!='\0')
    {
        s2[i]=s1[i];
        i++;
    }
    s2[i+1]='\0';
    printf("Copied string: ");
    puts(s2);
}
