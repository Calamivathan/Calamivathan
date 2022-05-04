#include <stdio.h>  
int a;   
int main()  
{  
extern int a;

printf("adwadwadwa=%d",a);  a=90;printf("adwadwadwa=%d",a);
}