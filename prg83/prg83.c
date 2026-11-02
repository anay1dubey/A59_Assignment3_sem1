#include <stdio.h>
int main()
{
    char s[20],temp;
    int i,j,l=0;
    printf("Enter a string: ");
    fgets(s,20,stdin);
    while(s[l]!='\n')
    {l++;}
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if(s[j]>s[j+1])
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    printf("new string: ");
    fputs(s,stdout);
}
