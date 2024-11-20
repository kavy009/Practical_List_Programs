// This Program is prepared by 24CE017 Kavya
#include <stdio.h>
void main()
{
  int n;
  printf("Enter no. of items.\n");
  scanf("%d",&n);
  int arr[n];


  for(int i=0;i<n;i++)
  {
    printf("Enter price of item %d : ",i+1);
    scanf("%d",&arr[i]);

 }

  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
  {
      if(arr[i]>arr[j])
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }

    }

  }

  printf("\nSorted prices : ");

    for(int i=0;i<n;i++)
  {
    printf("\n%d",arr[i]);
  }
  printf("\n\n24Ce017_Kavya");

}
