#include<stdio.h>
void main()
{
    int aalu[5];
    int bhalu[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("\nenter the value of array1 index%d= ",i+1);
        scanf("%d",&aalu[i]);
    }
    for(i=0;i<5;i++)
    {
        bhalu[i]=aalu[i];
        printf("\nvalue of array2 in index%d= %d",i+1,bhalu[i]);
    }
    // for(i=0;i<5;i++)
    // {
        
    // }
}