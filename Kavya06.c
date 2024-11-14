// This Program is prepared by 24CE017 Kavya
#include <stdio.h>
void main()

{
    float Ramanbungalow=12000000.0,Ramanplot=6000000.0,Ramancar=3000000.0;

    float Sumanapartment=11000000.0,Sumanhotel=8000000.0,Sumancar=8000000.0;

    float Ramantotalwealth=Ramanbungalow+Ramanplot+Ramancar;
    float Sumantotalwealth=Sumanapartment+Sumanhotel+Sumancar;

    if (Ramantotalwealth>Sumantotalwealth)
    { printf("Raman possesses greater wealth than Suman\n");
    }
    else if(Sumantotalwealth>Ramantotalwealth)
    {
        printf("Suman possesses greater wealth than Raman\n");
    }
        else
            {
            printf("Raman and Suman possesses equal wealth");
            }
        printf("\n\n24Ce017_Kavya");
    }


