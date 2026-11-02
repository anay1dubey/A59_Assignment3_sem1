#include <stdio.h>
int oddoreven(int num)
{
    if(num%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    oddoreven(n);
}