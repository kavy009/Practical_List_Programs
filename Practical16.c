// This Program is prepared by 24CE017 Kavya
#include <stdio.h>
void main()
{
    int seat[5][10], n;
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
         seat[i][j] = 0;
        }
    }
    printf("Enter Number of reserved seats:");
    scanf("%d", &n);


     for(int k=0;k<n;k++)
    {
        printf("Enter the row and seat number for reserved seat %d :\n",k+1);
        scanf("%d %d",&i,&j);

        i--;
        j--;


        if(i>=0 && i<5 && j>=0 && j<10)
    {
            seat[i][j] = 1;
    }
        else
    {
            printf("Invalid input");
            k--;
    }
    }
    for(int m=0;m<5;m++)
    {
        printf("Row %d : ",m+1);


        for(int n=0;n<10;n++)
    {
            if(seat[m][n] == 1)
    {
                printf("X ");
    }

            else
            {
                printf("O ");
            }
    }

        printf("\n");
    }

    printf("\n\n24Ce017_Kavya");



}

