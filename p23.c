#include<stdio.h>

void salary(int);
void main()
{
    int n;
    printf("Enter the total number of months: ");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("Invalid Input.Please enter correct number");
    }

    else
    {
        salary(n);
    }
}

void salary(int a)
{
    int s1,s2,next,i;
   printf("Please enter the salary of First 2 months: ");
   scanf("%d \t %d",&s1,&s2);
    printf("%d \t %d",s1,s2);

    for(i=2;i<a;i++)
    {
        next=s1+s2;
        printf("\t%d ",next);
        s1=s2;
        s2=next;

    }
}
