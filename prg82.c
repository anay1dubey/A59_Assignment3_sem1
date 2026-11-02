#include <stdio.h>
int main()
{
    char s[50];
    printf("Enter a string: ");
    fgets(s,50,stdin);
    int i=0,j=0,w=1;
    while(s[i]!='\n')
    {
        i++;
    }
    printf("Total charecters: %d \n",i);
    for(j=0;j<i;j++)
    {
        if(s[j]==' ')
        {
            w++;
        }
    }
    printf("Total words: %d",w);
}