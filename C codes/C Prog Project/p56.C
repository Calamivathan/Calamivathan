#include<stdio.h>
struct employee{
char name[40],Adr[30],Dept[40];
int empid,age,salary;
}emp[10];
int main(){
int i;
// clrscr();
for(i=0;i<10;i++){
    printf("employee number %d\n",i+1);
    // scanf("%d%s%d%s%s%d",&emp[i].empid,emp[i].name,&emp[i].age,emp[i].Adr,emp[i].Dept,&emp[i].salary);
    printf("enter employee Name= ");
    fflush(stdin);
    gets(emp[i].name);
    printf("enter employee id= ");
    scanf("%d",&emp[i].empid);
    printf("enter employee Age= ");
    scanf("%d",&emp[i].age);
    fflush(stdin);
    printf("enter employee Address= ");
    gets(emp[i].Adr);
    printf("enter employee Department= ");
    gets(emp[i].Dept);
    fflush(stdin);
    printf("enter employee Salary= ");
    scanf("%d",&emp[i].salary);
}
int id;
printf("\n Enter id to display details");
scanf("%d",&id);
    for(i=0;i<10;i++){
    if(id==emp[i].empid)          {
    printf("\n%d\n%s\n%d\n%s\n%s\n%d",emp[i].empid,emp[i].name,emp[i].age,emp[i].Adr,emp[i].Dept,emp[i].salary);
  }
}
    // getch();
}
