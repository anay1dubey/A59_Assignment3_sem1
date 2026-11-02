#include <stdio.h>
int armchk(int n)
{
    int nc,a=0,i=0;
    nc=n;
    while(nc>0)
    {
        nc=nc/10;
        i++;
    }
    nc=n;
    int j=0;
    while(nc>0)
    {
        j=nc%10;
        int l,p=1;
        for(l=1;l<=i;l++)
        {
            p=p*j;
        }
        a+=p;
        nc=nc/10;
    }
    if(n==a)
    {
        printf("Number is armstrong");
    }
    else
    {
        printf("Number is not armstrong");
    }
    return 0;
}

int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    armchk(i);
}
