#include<stdio.h>
struct student
{
char name[30],course[30];
long roll_no;
}st[2];
void main()
{
int i;
clrscr();
  for(i=0;i<2;i++)
  {
  fflush(stdin);
  printf("\nStudent %d:\nName     = ",i+1);
  gets(st[i].name);
  printf("Course   = ");
  gets(st[i].course);
  printf("Roll No. = ");
  scanf("%ld",&st[i].roll_no);
  }

printf("\nYour Input:\n");
  for(i=0;i<2;i++)
  {
  printf("\nStudent %d :\nName     = %s\nCourse   = %s\nRoll No. = %ld\n\n",i+1,st[i].name,st[i].course,st[i].roll_no);
  }
getch();
}
