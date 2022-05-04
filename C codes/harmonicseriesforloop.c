#include<stdio.h>
int main()
{
    int i;
    float num,sum=0;
    printf("enter the number of terms=");
    scanf("%f",&num);
    printf("\n");
    for(i=1;i<=num;i++)
    {
        sum=sum+1/(float)i;
        printf("1/%d + ",i);
    }
    printf("\nsum of harmonic series =%f",sum);
}