#include <stdio.h>
int main(void)
{
	char sen[50];
	int idx = 0;

	printf("문자열 입력 : ");
	scanf("%s",sen);
	printf("입력받은 문자열 : %s \n", sen);
	
	printf("문자 단위 출력 : ");
	while(sen[idx] != '\0')
	{
		printf("%c",sen[idx]);
		idx++;
	}
	printf("\n");
	
	return 0;
}
