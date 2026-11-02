#include <stdio.h>
int fib(int n)
{
    int e1=0,e2=1,e3;
    int i;
    printf("%d \n",e1);
    printf("%d \n",e2);
    for(i=3;i<=n;i++)
    {
        e3 = e1 + e2;
        printf("%d \n",e3);
        e1=e2;
        e2=e3;
    }
    return 0;
}

int main()
{
    int i;
    printf("Enter elements to print: ");
    scanf("%d",&i);
    fib(i);
}
