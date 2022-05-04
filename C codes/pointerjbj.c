#include<stdio.h>
int main()
{
    int i=3,*j,**k,k;
    j = &x;
    k = &*j;
    printf("value of(*j) i=%d",*j);
}