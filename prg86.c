#include <stdio.h>
int main()
{
    char name[30];
    int i=0;
    printf("Enter a string: ");
    fgets(name,30,stdin);
    while(name[i]!='\n')
    {
        printf("Ascii: %d Letter: %c \n",name[i],name[i]);
        i++;
    }
}