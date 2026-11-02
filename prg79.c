#include <stdio.h>
int main()
{
    char s[20];
    int i=0,v=0;
    printf("Enter a string: ");
    fgets(s,20,stdin);
    while(s[i]!='\0')
    {
        switch(s[i])
        {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            v++;
            break;
        }
        i++;
    }
    printf("Total vowels: %d",v);
}