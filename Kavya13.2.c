#include <stdio.h>
void main()
{
    int i,j,n;

    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }

          printf("\n");
    }

    printf("\nName = Chauhan Kavya");
    printf("\n ID=24TCEE08");



}
