#include <stdio.h>
void main()
{
    int a,b,ch;
    printf("Enter the value of First Number:");
    scanf("%d",&a);
    printf("Enter the value of Second Number:");
    scanf("%d",&b);
    printf("First Choice is +");
    printf("\nSecond Choice is -");
    printf("\nThird Choice is *");
    printf("\nFourth Choice is /");
    printf("\nEnter Your Choice:");
    scanf("%d",&ch);


    switch(ch)
    {
        case 1 : printf("\n Addition of given two number is %d ",a+b);
        break;

        case 2 : printf("\n Subtraction of given two number is %d ",a-b);
        break;

        case 3 : printf("\n Multiplication of given two number is %d ",a*b);
        break;

        case 4 : printf("\n Division of given two number is %d ",a/b );
        break;

        default: printf("\n Invalid Input");
        break;


    }





}


