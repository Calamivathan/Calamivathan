#include<stdio.h>
int main()
{
    int x=4184814;
    int *ptr;
    ptr=&x;
    printf("value of(*ptr) x=%d",*ptr);
    printf("\naddress of(&x) x=%x",&x);
    printf("\naddress of(*ptr) ptr=%x",*ptr);
    printf("\naddress of(&ptr) ptr=%x",&ptr);
    printf("\naddress of(*(&ptr)) ptr=%x",*(&ptr));
    printf("\naddress of(*(&x)) ptr=%x",*(&x));
}