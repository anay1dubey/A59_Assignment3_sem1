#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j;
    printf("Enter number of students: ");
    scanf("%d",&n);
    getchar();
    char names[n][20], temp[20];
    for(i=0;i<n;i++)
    {
        printf("Enter student name: ");
        fgets(names[i],20,stdin);
    }
    for(i=0;i<n;i++)
    {
        fputs(names[i],stdout);
    }
    printf("After sorting\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(names[j],names[j+1])>0)
            {
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        fputs(names[i],stdout);
    }
}