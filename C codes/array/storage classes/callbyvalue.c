#include<stdio.h>
void display(int);
void main()
{
int i=7,I;
i=i+3;
printf ("\n value of i in main() before calling display=%d",i);
display(i);
printf ("\n value of i in main() after calling display=%d",I);
}
void display(int k)
{
int K;
K=k+3;
printf ("\n value of I in display()= %d",K);
}