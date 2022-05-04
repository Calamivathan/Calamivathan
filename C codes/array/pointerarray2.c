#include<stdio.h>
void main()
    {
        int arr[]={1,2,3},*pt,i;
        pt=arr;
        for(i=0;i<=4;i++)
        {
            printf("\npointer=%u",pt);
            pt++;
        }
        
    }