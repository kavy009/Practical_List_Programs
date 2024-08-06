#include <stdio.h>
void main()
{
    int d ,total=0;

    for(d=1;d<=100;d++)
    {
        if(d%2==0)
        {
            total=total+200;


        }
    }
       printf("Total cost for even days is %d",total);
}
