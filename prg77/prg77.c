#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20],s2[20];
    char s3[20];
    int i=0;
    printf("Enter string 1: ");
    fgets(s1,20,stdin);
    s1[strcspn(s1,"\n")]='\0';
    printf("Enter string 2: ");
    fgets(s2,20,stdin);
    s2[strcspn(s2,"\n")]='\0';
    printf("Length of string1: %d, string2: %d",strlen(s1),strlen(s2));
    strcpy(s3,s1);
    printf("\nCopied string3: ");
    puts(s3);
    printf("\nConcatenated strings: ");
    puts(strcat(s1,s2));
    printf("%d",strcmp(s1,s2));
    printf("\nReversed string1: ");
    puts(strrev(s1));
    printf("\nConcatenated strings: ");
    puts(strcat(s1,s2));
}
