#include<stdio.h>
void main()
{
int c;
FILE *fp;
printf("enter words and press * to exit");
fp=fopen("myfile.txt","a");
c=getchar();
while(c!=10)
{
c=getchar();
putc(c,fp);
}
fclose(fp);
}