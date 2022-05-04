#include<stdio.h>
void main()
{
float s1,s2,s3,s4,s5;
clrscr();
printf("Enter marks of 5 subjects below:\n");
scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
printf("Percentage : %.2f %",(s1+s2+s3+s4+s5)/5);
getch();
}
