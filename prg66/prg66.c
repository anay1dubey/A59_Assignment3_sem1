#include <stdio.h>
int comb(int n, int r)
{
    int nf=1,rf=1,jf=1,j=n-r,result;
    while(n>0)
    {
        nf*=n;
        n--;
    }
    while(r>0)
    {
        rf*=r;
        r--;
    }
    while(j>0)
    {
        jf*=j;
        j--;
    }
    result=nf/(jf*rf);
    return result;
}

int main()
{
    int n,r;
    printf("Enter n,r: ");
    scanf("%d,%d",&n,&r);
    printf("nCr= %d",comb(n,r));
}
