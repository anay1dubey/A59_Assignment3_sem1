#include <stdio.h>

void vcheck(char ch)
{
    switch(ch)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
        printf("Vowel");
        break;
        default:
        printf("consonant");
    }
}

int main()
{
    char s;
    printf("Enter a charecter: ");
    scanf(" %c",&s);
    vcheck(s);
    return 0;
}
