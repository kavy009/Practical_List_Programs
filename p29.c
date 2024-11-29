#include<stdio.h>
void main()
{
    char *a;

    a=(char *)calloc(10,sizeof(char));
    printf("\n Enter the string: ");
    gets(a);
    printf("The string is :");
    puts(a);

    a=(char *)realloc(a,20*sizeof(char));

    printf("Enter the String");
    gets(a);
    printf("The string after reallocation is :");
    puts(a);
    free(a);




}
