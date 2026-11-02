#include <stdio.h>
int palcheck(int i)
{
    int temp,rem,rev=0;
    temp=i;
    printf("%d",temp);
    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }
    if(rev==i)
    {
        printf("number is pallendrome");
    }
    else
    {
        printf("number is not pallendrome");
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    palcheck(n);
}
