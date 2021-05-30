#include <stdio.h>
void change(int *para, int cha_num)
{
	*para = cha_num;
}

int main()
{
	int a=3;
	int b=5;
	change(&a,b);
	printf("%d",a);
}