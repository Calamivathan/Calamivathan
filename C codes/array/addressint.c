#include<stdio.h>
void main()
{
    int i,j;
    int aalu[5];
    i = sizeof(aalu[0]);
    printf("size of int =%d bytes",i);
    printf("\naddress of index 0=%p",&aalu[0]);
    printf("\naddress of index 0=%p",&aalu[1]);
    printf("\naddress of index 0=%p",&aalu[2]);
    printf("\naddress of index 0=%p",&aalu[3]);
    printf("\naddress of index 0=%p",&aalu[4]);
    j = sizeof(aalu);
    printf("\nsize of whole array of 5 elements =%d bytes",j);
}