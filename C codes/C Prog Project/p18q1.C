#include<stdio.h>
union book{
char name[30];
int id;
float price;
}b1;
void main()
{
clrscr();
printf("Enter Book Name : ");
gets(b1.name);
printf("Book Name : %s\n\n",b1.name);
printf("Enter Book ID : ");
scanf("%d",&b1.id);
printf("Book ID : %d\n\n",b1.id);
printf("Enter Book Price : ");
scanf("%f",&b1.price);
printf("Book Price : %.2f",b1.price);
getch();
}
