#include <stdio.h>
int main()
{
    char s1[20],s2[20],s3[40];
    printf("Enter string 1: ");
    fgets(s1,20,stdin);
    printf("Enter string 2: ");
    fgets(s2,20,stdin);
    int i=0,j=0;
    while(s1[i]!='\n')
    {
        s3[j]=s1[i];
        i++;
        j++;
    }
    i=0;
    while(s2[i]!='\n')
    {
        s3[j]=s2[i];
        i++;
        j++;
    }
    s3[j]='\0';
    printf("Concatenated string: ");
    puts(s3);
}
