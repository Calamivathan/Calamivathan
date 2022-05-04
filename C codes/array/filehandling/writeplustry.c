#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char c=' ';
    fopen("writeplustry.txt","w+");
    if(fp==NULL)
    {
        printf("can not open file");
    }
    printf("pls start typing now to stop hit enter : ");
    while(c!=10)
    {
        c=getchar();
        fputc(c,fp);
    }
    rewind(fp);
    printf("\n Contents read :");
    while(!feof(fp))
    printf("%c",getc(fp));
    fcloseall;
}