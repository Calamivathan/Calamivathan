#include<stdio.h>
void main()
{
    int i;
    int aalu[5];
    for(i=0;i<5;i++)
    {
        printf("\nenter the value of index%d=",i);
        scanf("%d",&aalu[i]);
    }
    printf("------------------------------------------");
    for(i=4;i>=0;i--)
    {
        printf("\nvalue of index%d in reverse=%d",i,aalu[i]);
    }
}