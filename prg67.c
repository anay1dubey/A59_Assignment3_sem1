#include <stdio.h>
int am(int arr[10])
{
    int i,j,temp;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int i;
    int a[10];
    for(i=0;i<10;i++)
    {
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    am(a);
    printf("max number: %d",a[9]);
}