#include<stdio.h>
void main()
{
int n1=0, n2=1, i, n3,l;
printf("\npls enter the limit");
scanf("%d",&l);
printf("n1=%d\tn2=%d",n1,n2);
for(i=2;i<=l;i++)
	{
	n3=n1+n2;
	n1=n2;
	n2=n3;
	printf("\nn3=%d",n3);
	}
}