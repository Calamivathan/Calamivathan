#include<stdio.h>
void main()
{
    int i,sum=0,n;
    float avg;
    printf("number of students=");
    scanf("%d",&n);
    int aalu[n];
    for(i=0;i<n;i++)
    {
        printf("\nenter the marks of student%d=",i+1);
        scanf("%d",&aalu[i]);
    }
    printf("--------------------------------------------------------------------------------------------------------\n");
    for(i=0;i<n;i++)
   {
    sum+=aalu[i];
    printf("    student%d=%d",i+1,aalu[i]);
    }
    avg=(float)sum/(float)n;
    printf("\naverage=%.3f",avg);
}