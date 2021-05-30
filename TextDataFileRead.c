#include <stdio.h>
int main()
{
	int i, ch;
	char str[30];
	FILE * fp = fopen("simple.txt","rt");
	
	if(fp == NULL)
	{
		puts("파일 읽기 실패!");
		return -1;
	}
	
	for(i=0; i<2; i++)
	{
		ch = fgetc(fp);
		printf("%c \n", ch);
	}
	
	for(i=0; i<2; i++)
	{
		fgets(str,sizeof(str),fp);
		printf("%s \n", str);
	}
	
	return 0;
}