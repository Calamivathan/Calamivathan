#include <stdio.h>
union stud{
char name[40],course[30];
int roll;
}s[2];
void main(){
int i;
  for(i=0;i<2;i++){
  printf("Student %d\n",i+1);
  printf("Enter Student Name : ");
  gets(s[i].name);
  printf("Student Name : %s\n\n",s[i].name);
  printf("Enter Roll No. : ");
  scanf("%d",&s[i].roll);
  printf("Roll No. : %d\n\n",s[i].roll);
  getchar();
  printf("Enter Course : ");
  gets(s[i].course);
  printf("Course : %s",s[i].course);
  printf("\n\n");
  }
    return 0;
}
