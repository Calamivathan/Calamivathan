#include<stdio.h>
void main()
{
float r,b,h,l,br;
clrscr();
printf("Enter Radius of the Circle = ");
scanf("%f",&r);
printf("Circumfrence = %.2f\n",2*3.14*r);
printf("Area = %.2f",3.14*r*r);
printf("\n\nEnter Base and Height of the Traingle:\n");
scanf("%f%f",&b,&h);
printf("Area = %.2f",0.5*b*h);
printf("\n\nEnter Length and Breadth of the Rectangle:\n");
scanf("%f%f",&l,&br);
printf("Area = %.2f",l*br);
getch();
}
