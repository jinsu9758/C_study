#include <stdio.h>
int main()
{
	int * ptr1 = 0x0010;
	double * ptr2 = 0x0010;
	
	printf("%p %p \n", ptr1+1, ptr1+2);   //4증가, 8증가
	printf("%p %p \n", ptr2+1, ptr2+2);   // 8증가 16증가
	
	printf("%p %p \n", ptr1, ptr2);   
	ptr1++;
	ptr2++;
	
	printf("%p %p \n", ptr1, ptr2);
	return 0;
}