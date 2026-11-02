#include <stdio.h>
#include <string.h>
struct book
{
    char name[10];
    int pages;
    double price;
};

void bookmaker(char n[10], int pa, double pr)
{
    struct book book1;
    strcpy(book1.name,n);
    book1.pages=pa;
    book1.price=pr;
    printf("\nbook name: %s",book1.name);
    printf("pages: %d \n",book1.pages);
    printf("price: %lf",book1.price);
}

int main()
{
    char n[10];
    int pa;
    double pr;
    printf("Enter book name: ");
    fgets(n,10,stdin);
    printf("Enter pages: ");
    scanf("%d",&pa);
    printf("Enter price: ");
    scanf("%lf",&pr);
    bookmaker(n,pa,pr);
}
