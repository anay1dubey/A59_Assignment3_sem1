#include <stdio.h>
int main()
{
    char n[20],r[20];
    int i=0,j=0;
    printf("Enter a string to reverse: ");
    fgets(n,20,stdin);
    while(n[i]!='\n')
    {
        i++;
    }
    i--;
    while(i>=0)
    {
        r[j]=n[i];
        i--;
        j++;
    }
    r[j]='\0';
    printf("Reversed string: ");
    puts(r);
}