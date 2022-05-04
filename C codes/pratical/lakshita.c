#include<stdio.h>
int j=4;
void main()
{
    extern int j;
    j=j*3;
    printf("j=%d",j);
    fun();
    printf("\nj=%d",j);
}
int fun()
{
    j=j*j;
}