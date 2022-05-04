#include<stdio.h>
void main()
{
int age;
long id,salary;
clrscr();
printf("Enter Employee ID : ");
scanf("%ld",&id);
printf("Enter Age : ");
scanf("%d",&age);
printf("Enter Salary : ");
scanf("%ld",&salary);
printf("\nYour Entered Details:\n");
printf("Employee ID : %ld\nAge : %d yrs\nSalary : %ld",id,age,salary);
getch();
}
