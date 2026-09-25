#include<stdio.h>
struct Book{
char title[50];
char author[50];
float price;
int pages;

};
int main()
{
    struct Book books[5];
    int maxIndex=0;
    for(int i=0;i<5;i++)
    {
        printf("\nBook %d Details:\n",i+1);
    printf("Title:");
    scanf("%s",books[i].title);
    printf("Author:");
    scanf("%s",books[i].author);
    printf("Price:");
    scanf("%f",&books[i].price);
    printf("pages:");
    scanf("%d",&books[i].pages);
    if(books[i].price>books[maxIndex].price)
    {
        maxIndex=i;
    }
    }
    printf("\n Most Expensive Book \n");
    printf("Title:%s\n",books[maxIndex].title);
    printf("Author:%s\n",books[maxIndex].author);
    printf("price:%.2f\n",books[maxIndex].price);
    printf("pages:%d\n",books[maxIndex].pages);
    return 0;
}
