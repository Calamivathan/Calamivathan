#include<stdio.h>
void main()
{
    int c;
    FILE *fp;

    printf("enter words and press '*' to exit *\n");
    fp=fopen("file input.txt","w");
    fflush(stdin);
    // c=getchar();
    while(c!='?')     
    {
        c=getchar();
        putc(c,fp);
    }
    fclose(fp);
}