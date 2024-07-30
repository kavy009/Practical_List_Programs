#include <stdio.h>

 void main()
 {
     int number;
     printf("\n Enter your Number to countdown timer :");
     scanf("%d",&number);

     while(number>=0)
     {
         printf("\n %d",number);
         number--;
     }
 }
