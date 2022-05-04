#include <stdio.h>
void main()
{
int n;
printf("enter the number of students=");
scanf("%d",&n);
struct student
{
char name[9];
int age;
} stud[n];
int i;
for(i=0;i<n;i++)
{
printf("\nenter the name of student ",i);
scanf("%s",&stud[i].name);
printf("\nenter age of student ");
scanf("%d",&stud[i].age);
}
for(i=0;i<n;i++)
{
printf("\nenter the name of student=%s",stud[i].name);
printf("\nenter age of student =%d",stud[i].age);
}
}