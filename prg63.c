#include <stdio.h>
int swap(int *V1,int *V2)
{
    int V3;
    V3=*V1;
    *V1=*V2;
    *V2=V3;
}

int main()
{
    int var1, var2;
    printf("Enter x,y: ");
    scanf("%d, %d",&var1,&var2);
    printf("Before swap x: %d, y: %d \n",var1,var2);
    swap(&var1,&var2);
    printf("After swap x: %d, y: %d",var1,var2);
}