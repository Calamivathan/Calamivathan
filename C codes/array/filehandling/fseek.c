#include <stdio.h>
void main()
{
 FILE *fp;
 fp= fopen("file input.txt", "a+");
 fputs("Hello World", fp);
 fseek(fp, 6,SEEK_end);
 fputs("India", fp);
 fclose(fp);
}