#include <stdio.h>
struct stud
{
char name[40];
int roll;
float marks;
}s[4];
void main()
{
int i;
  for(i=0;i<4;i++)
  {
  s[i].roll=i+1;
  printf("Roll No. = %d\n",s[i].roll);
  printf("Enter Name = ");
  gets(s[i].name);
  printf("Enter Marks = ");
  scanf("%f",&s[i].marks);
  getchar();
  printf("\n");
  }
printf("Your Input:\n");
  for(i=0;i<4;++i)
  {
  printf("Student %d :\n",i+1);
  printf("Roll No. = %d\nName = %s\nMarks = %.2f\n\n",s[i].roll,s[i].name,s[i].marks);
  }
    return 0;
}
