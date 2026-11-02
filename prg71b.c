#include <stdio.h>
struct student
{
    int rno;
    char name[20];
    float marks;
};

void disp(struct student d[10])
{
    for(int i=0;i<10;i++)
    {
        if(d[i].marks>500)
        {
            printf("roll no:%d \n",d[i].rno);
            printf("name:");
            puts(d[i].name);
            printf("marks:%f",d[i].marks);
        }
    }
}

int main()
{
    struct student dataset[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter roll no: ");
        scanf("%d",&dataset[i].rno);
        printf("Enter marks: ");
        scanf("%f",&dataset[i].marks);
        printf("Enter name: ");
        getchar();
        fgets(dataset[i].name,20,stdin);
    }

    disp(dataset);
}