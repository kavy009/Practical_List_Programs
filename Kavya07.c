#include <stdio.h>
void main()
{

    int choice;
    int totalcost=0;
    int itemcount=0;

    printf("Welcome to Foodies Restaurant:\n");
    printf("Here is our Menu:\n");
    printf("1.    Burger          ₹150\n");
    printf("2.    Pizza           ₹200\n");
    printf("3.    Pasta           ₹120\n");
    printf("4.    Sandwich        ₹100\n");
    printf("5.    French Fries    ₹80 \n");
    printf("Enter '0' for Finish ordering.");

    while(1) {
            printf("Enter the Number of item you want to order:");
            scanf("%d",&choice);

            switch (choice){
            case 1:
                 totalcost+= 150;
                 itemcount++;
                 printf("Burger added to your order.\n");
                 break;
            case 2:
                 totalcost+=200;
                 itemcount++;
                 printf("Pizza added to your order.\n");
                 break;
            case 3:
                 totalcost+=120;
                 itemcount++;
                 printf("Pasta added to your order.\n");
                 break;
            case 4:
                 totalcost+=100;
                 itemcount++;
                 printf("Sandwich added to your order.\n");
                 break;
            case 5:
                 totalcost+=80;
                 itemcount++;
                 printf("French Fries added to your order.|n");
                 break;
            case 0:
                 printf("Order completed.\n");
                 printf("Total number of items ordered: %d\n",itemcount);
                 printf("Total cost of your order: ₹%d\n",totalcost);
                 return 0;


            default:
                    printf("Invalid choice, please enter a number between 1 and 5 or 0 to finish.\n");
                    break;





            }


    }

}
