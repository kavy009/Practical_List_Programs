
#include<stdio.h>

void main(){

     int gp=1441981744,man,woman;
     float tlrM,tlrW,totalilliterateMan,totalilliterateWoman;

     man=gp*0.516;
     woman=gp*0.484;

     tlrM=0.8095*man;
     tlrW=0.6284*woman;

     totalilliterateMan=man-tlrM;
     totalilliterateWoman=woman-tlrW;

    printf("\n Total number of man is %d in bharat population for year 2024.\n",man);
    printf("\n Total number of woman is %d in bharat population for year 2024.\n",woman);

    printf("\n Total Literacy Number of Man is %.0f.\n",tlrM);
    printf("\n Total Literacy Number of Woman is %.0f.\n",tlrW);


    printf("\n Total illiterate Number of Man is %0.f\n",totalilliterateMan);
    printf("\n Total illiterate Number of Woman is %0.f\n",totalilliterateWoman);






}
