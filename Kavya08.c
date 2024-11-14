// This Program is prepared by 24CE017 Kavya
#include <stdio.h>

 void main()
 {
     int marks;
     printf("Enter Your Marks:");
     scanf("%d",&marks);

     (marks>=90 && marks<=100) ? printf("Your Grade is A"):
     (marks>=80 && marks<90) ? printf("Your Grade is B"):
     (marks>=70 && marks<80) ? printf("Your Grade is C"):
     (marks>=60 && marks<70) ? printf("Your Grade is D"):
     (marks>=50 && marks<60) ? printf("Your Grade is F"):
         printf("Sorry you are Failed");
         printf("\n\n24Ce017_Kavya");



 }
