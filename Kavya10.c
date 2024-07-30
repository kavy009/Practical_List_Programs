
#include <stdio.h>

 void main()
 {
     int m=21,p,c;

     printf("\n 21 Matchsticks Puzzle Game\n");
     printf("\n 1. In this puzzle there are 21 Matchsticks.\n");
     printf("\n 2. You and computer will pick up the stick one by one.\n");
     printf("\n 3. Stick can be picked from 1 to 4.\n");
     printf("\n 4. The one who will pick the last stick will loose the game.\n");

     while (1) {

            printf("\n Number of Matchstick left = %d",m);
            printf("\n Pick 1 or 2 or 3 or 4\n");
            scanf("%d",&p);
            if (p>4 || p<1)
                continue;
            m=m-p;
            printf("\n No. of Matchsticks left=%d",m);
            c=5-p;
            printf("\n Out of %d and computer picked up %d",m,c);
            m=m-c;
            if (m==1)
            {
                printf("\n Number of Matchsticks left is %d ",m);
                printf("\n You lost the Game");
                break;
            }




     }



 }
