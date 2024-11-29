#include<stdio.h>

void swap_balance(double *account1,double *account2)

{
    double temp;
    temp=*account1;
    *account1=*account2;
    *account2=temp;

}



void main()
{

    double account_balance1,account_balance2;

    printf("Enter the balance for Account 1: ");
    scanf("%lf",&account_balance1);
    printf("Enter the balance for Account 2: ");
    scanf("%lf",&account_balance2);


    printf("Before Swapping\n");
    printf("Account 1 Balance: $%.2f\n",account_balance1);
    printf("Account 2 Balance: $%.2f\n",account_balance2);


    swap_balance(&account_balance1, &account_balance2);


    printf("After Swapping\n");
    printf("Account 1 Balance: $%.2f\n",account_balance1);
    printf("Account 2 Balance: $%.2f\n",account_balance2);


}
