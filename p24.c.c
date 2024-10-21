#include<stdio.h>

struct Book
{
    char title[20];
    char author[20];
    float amount;

};
void bookinfo(struct Book[]);


void main()
{

    struct Book b[3];

    for(int i=0;i<3;i++)
    {
        printf("Enter Book Information %d \n",i+1);
        printf("\nEnter the title of book: \n");
        gets(b[i].title);
        fflush(stdin);
        printf("Enter the author of book: \n");
        gets(b[i].author);
        fflush(stdin);
        printf("Enter the amount of book: \n");
        scanf("%f",&b[i].amount);
        fflush(stdin);

    }
bookinformation(b);
}
       void bookinformation(struct Book b1[])
    {


        for(int i=0;i<3;i++)
        {
            printf("\nInformation for Book %d \n",i+1);
            printf("\nThe title of book is: ");
            puts(b1[i].title);
            printf("\nThe author of book is: ");
            puts(b1[i].author);
            printf("\nThe amount of book is: ");
            printf("%.2f \n",b1[i].amount);
        }

        }



