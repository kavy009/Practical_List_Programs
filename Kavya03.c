// This Program is prepared by 24CE017 Kavya
#include<stdio.h>

void main()

{

     int TotalPopulation=1441981744,man,woman;
     float LiterateMan,LiterateWoman,totalilliterateMan,totalilliterateWoman;

     man=TotalPopulation*0.516;
     woman=TotalPopulation*0.484;

     LiterateMan=0.8095*man;
     LiterateWoman=0.6284*woman;

     totalilliterateMan=man-LiterateMan;
     totalilliterateWoman=woman-LiterateWoman;

    printf("\n Total number of man is %d in bharat population for year 2024.\n",man);
    printf("\n Total number of woman is %d in bharat population for year 2024.\n",woman);

    printf("\n Total Literacy Number of Man is %.0f.\n",LiterateMan);
    printf("\n Total Literacy Number of Woman is %.0f.\n",LiterateWoman);


    printf("\n Total illiterate Number of Man is %0.f\n",totalilliterateMan);
    printf("\n Total illiterate Number of Woman is %0.f\n",totalilliterateWoman);

}
