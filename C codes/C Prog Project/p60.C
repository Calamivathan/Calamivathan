#include <stdio.h>
#include <string.h>
void main()
{
	char Str[1000];
	int len;
    clrscr();
	printf("Enter the String: ");
	gets(Str);
    len=strlen(Str);
	printf("Length of Str is %d",len);
	getch();
}
