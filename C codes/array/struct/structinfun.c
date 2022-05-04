#include<stdio.h>
// void display(struct emp);
struct emp
{
    char name[30];
    int age, sal;
} e1;
void main()
{
    printf("Enter Your Name : ");
    gets(e1.name);
    display(e1);     
}
void display(struct emp e1)
{
    printf("Your Name is %s", e1.name);
}