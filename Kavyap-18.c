#include<stdio.h>
#include<string.h>
int main()
{
      char ns[60][15],t[15];
      int n,i,j;
      printf("Enter the number of Students: ");
      scanf("%d",&n);

      for(i=0;i<=n;i++)
      {
          gets(ns[i]);
          }

      for(i=0;i<=n;i++)
      {
        for(j=0;j<=n-1;j++)
        {
           if(strcmp(ns[j],ns[j+1])>0)
          {
           strcpy(t,ns[j]);
           strcpy(ns[j],ns[j+1]);
           strcpy(ns[j+1],t);
           }


        }

      }
      for(i=0;i<=n;i++)
      {
         printf("%s\n",ns[i]);


      }
      return 0;







}
