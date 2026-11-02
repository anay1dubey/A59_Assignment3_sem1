#include <stdio.h>
struct book
{
    int bookpage;
    char bookname[10];
    float bookprice;
};

void infoprint(struct book *p)
{
    printf("Book name: %s, book pages: %d,book price: %f", p->bookname,p->bookpage,p->bookprice);
}

int main()
{
    struct book book1;
    printf("Enter book name: ");
    fgets(book1.bookname,20,stdin);
    printf("Enter total pages in book: ");
    scanf("%d",&book1.bookpage);
    printf("Enter book price: ");
    scanf("%f",&book1.bookprice);

    struct book *ptr = &book1;
    
    infoprint(ptr);
}
