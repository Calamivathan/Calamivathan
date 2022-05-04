#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
    FILE *fp;
    char c=' ';
    fopen("writeplustry2.txt","w+");
    if(fp==NULL)
    {
        printf("can not open file");
        exit(1);
    }
    printf("pls start typing now to stop hit . : ");
    while(c!='.')
    {
        c=getche();
        fputc(c,fp);
    }
    rewind(fp);
    printf("\n Contents read :");
    while(!feof(fp))
    printf("%c",getc(fp));
}