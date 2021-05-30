#include <stdio.h>
int main()
{
	FILE * src = fopen("src.txt","rt");
	FILE * dst = fopen("dst.txt","wt");
	char str[30];
	
	if(src == NULL || dst == NULL)
	{
		puts("파일 읽기 실패 !");
		return -1;
	}
	
	while(fgets(str,sizeof(str),src) != NULL)
	{
		fputs(str,dst);
		
	}
	
	if(feof(src)!=0)
	{
		puts("파일 복사 완료");
	}
	else
	{
		puts("파일 복사 실패");
	}
	fclose(src);
	fclose(dst);
	
	return 0;
}