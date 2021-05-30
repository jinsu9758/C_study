#include <stdio.h>
int main()
{
	int arr[3]={11, 22, 33};
	int * ptr = arr;
	printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));
	
	printf("%d ", *ptr); ptr++;    // 주소 값에서 4바이트 증가 시키는거임
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); printf("\n");
	
	return 0;
}