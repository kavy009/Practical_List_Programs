#include<stdio.h>

void main()
{
    int marks[10];
    int *p=marks;

    int distinction=0,firstclass=0,pass=0,fail=0;

    printf("Enter the marks of 10 students \n");

    for(int i=0;i<10;i++)
    {
        printf("Student %d: ",i+1);
        scanf("%d",p);
        p++;

    }
    p=marks;

    for(int i=0;i<10;i++)
    {
        if(*p>=70)
        {
            distinction++;
        }
        else if (*p>=60)
        {
            firstclass++;

        }
        else if(*p>=40)
        {
            pass++;
        }

        else
        {
            fail++;
        }
        p++;
    }



    printf("\nResults\n");

    printf("DISTINCTION %d\n",distinction);
    printf("FIRST CLASS %d\n",firstclass);
    printf("PASS %d\n",pass);
    printf("FAIL %d\n",fail);


}
