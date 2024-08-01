#include <stdio.h>
void main()
{
    int i,j,num1,num2;
    printf("Enter the size of table vertically: ");
    scanf("%d",&num1);

    printf("Enter the size of table horizontally:");
    scanf("%d",&num2);

    for (i=1;i<=num1;i++)
    {
        for (j=1;j<=num2;j++)
       {


          printf("%5d",i+j);  }

          printf("\n");

    }









}
