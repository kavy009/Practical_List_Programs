#include <stdio.h>
void main()
{
    int num[25],i,odd=0,even=0,pos=0,neg=0;
    printf("Enter the 25 Numbers:");

    for(i=0;i<25;i++)
    {
        scanf("%d",&num[i]);

    }
    for(i=0;i<25;i++);
    {
        printf("%d",num[i]);
    }

    for(i=0;i<25;i++)
    {
        if(num[i]>0)
        {

            pos++;

        }
        else if(num[i]<0)
        {

            neg++;
        }
        }
        for(i=0;i<25;i++)
        {
            if(num[i]%2==0)
            {
                even++;
            }
            else if(num[i]%2!=0)
            {
                odd++;
            }

        }
        printf("\nNumber of Positve number is %d",pos);
        printf("\nNumber of Negative number is %d",neg);
        printf("\nNumber of Even number is %d",even);
        printf("\nNumber of Odd number is %d",odd);




    }





