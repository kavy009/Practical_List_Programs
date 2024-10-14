#include<stdio.h>

int totalmarks(int[],int);
float average(int[],int);
int max(int[],int);
int min(int[],int);

void main()
{
    int n;
    printf("Enter the number of Students: ");
    scanf("%d",&n);
    printf("Enter the CCP marks of Students: \n");

    int marks[n];
    for(int i=0;i<n;i++)
    {
        printf("Student [%d]= ",i+1);
        scanf("%d",&marks[i]);

    }
    printf("Total marks = %d",totalmarks(marks,n));
    printf("\nMaximum marks = %d",max(marks,n));
    printf("\nMinimum marks = %d",min(marks,n));
    printf("\nAverage marks = %f",average(marks,n));





}
    int totalmarks(int m[],int s)
{
    int sum=0,i;
    for(i=0;i<s;i++)
    {
        sum=sum+m[i];
    }
    return sum;
}
   int max(int m[],int s)
{
    int maximum,i;
    maximum=m[0];
    for(i=0;i<s;i++)
    {
        if(m[i]>maximum)
        {
            maximum=m[i];
        }
    }
    return maximum;

}

 int min(int m[],int s)
{
    int minimum,i;
    minimum=m[0];
    for(i=0;i<s;i++)
    {
        if(m[i]<minimum)
        {
            minimum=m[i];
        }
    }
    return minimum;
}
float average(int m[],int s)
{
    float avg;
     int sum=0,i;
    for(i=0;i<s;i++)
    {
        sum=sum+m[i];
    }
    avg =(float)sum/s;
    return avg;

}


