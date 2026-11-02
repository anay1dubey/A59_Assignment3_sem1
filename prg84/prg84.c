#include <stdio.h>
int main()
{
    char n[20],r[20];
    int i=0,j=0,f=0;
    printf("Enter a string to check for pallendrome: ");
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
    for(i=0;i<j;i++)
    {
        if(n[i]!=r[i])
        {
            f++;
            break;
        }
    }
    if(f==0){printf("Pallendrome");}
    else{printf("Not Pallendrome");}
}
