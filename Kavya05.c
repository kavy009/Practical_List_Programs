// This Program is prepared by 24CE017 Kavya
#include <stdio.h>
void main()
{
    int num1,num2;
    char operator;
    printf("Enter the value of First Number:");
    scanf("%d",&num1);
    printf("Enter the value of Second Number:");
    scanf("%d",&num2);
    printf("Enter + for Addition");
    printf("\nEnter - for Subtraction");
    printf("\nEnter * for Multiplication");
    printf("\nEnter / for Division\n");
    printf("\nEnter Your Choice:");
    scanf(" %c", &operator);



    switch (operator) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %d\n", num1 / num2);
            else
                printf("Can't divide by zero.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }


      printf("\n\n24Ce017_Kavya");

    }

