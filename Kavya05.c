// This Program is prepared by 24CE017 Kavya
#include <stdio.h>
void main()
{
    int a,b,ch;
    printf("Enter the value of First Number:");
    scanf("%d",&a);
    printf("Enter the value of Second Number:");
    scanf("%d",&b);
    printf("Enter 1 for Addition");
    printf("\nEnter 2 for Subtraction");
    printf("\nEnter 3 for Multipilcation");
    printf("\nEnter 4 for Division/");
    printf("\nEnter Your Choice:");
    scanf("%d",&ch);


    switch(ch)
    {
        case 1 : printf("\n Addition of given two numbers is %d ",a+b);
        break;

        case 2 : printf("\n Subtraction of given two numbers is %d ",a-b);
        break;

        case 3 : printf("\n Multiplication of given two numbers is %d ",a*b);
        break;

        case 4 : printf("\n Division of given two numbers is %d ",a/b );
        break;

        default: printf("\n Invalid Input");
        break;


    }

    printf("\n\n24Ce017_Kavya");






}


