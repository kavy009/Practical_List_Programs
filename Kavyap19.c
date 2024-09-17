#include<stdio.h>
int main()
{
   char notes[50],rev_notes[50],temp;
   int length=0,i,j;
   printf("Enter your notes: ");
   gets(notes);
   puts(notes);

   for(i=0;notes[i]!='\0';i++)
{
     length++;


}
printf("\nThe length of notes is :%d ",length);

// reversing notes using copying


for(i=length-1,j=0;i>=0;i--,j++)
{
    rev_notes[j]=notes[i];
}
rev_notes[j]='\0';

printf("\nThe Reverse Notes is ");
puts(rev_notes);

// Reversing in same array

for(i=0,j=length-1;i<length/2;i++,j--)
{
     temp=notes[i];
     notes[i]=notes[j];
     notes[j]=temp;


}
printf("\nThe reverse notes is: ");
puts(notes);




return 0;
}
