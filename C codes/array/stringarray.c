#include<stdio.h>
void main()
{
    char name[4];
    int i;
    printf("enter ur name= ");
    gets(name);
    printf("your name is = %s",name);
    for(i=0;i<4;i++)
    {
    printf("your name is = %s",name[i]);
    }
}