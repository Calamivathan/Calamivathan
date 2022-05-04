#include<stdio.h>
void main()
{
    char name[4];
       name[4]='r';
    printf("enter ur name= ");
    scanf("%s",&name);
 
    printf("\n your name is = %s",name);
    printf("\n your name is = %c",name[4]);
}