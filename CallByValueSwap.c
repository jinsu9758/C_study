#include <stdio.h>
//포인터를 사용하면 간결하고 효율적인 표현과 처리가 가능하고 더 빠른 기계어 코드를 생성할 수 있으며, //또한 자료 구조와 함수의 쉬운 접근이 가능하다. 또한 포인터를 사용하지 않았을 때 코드로 표현할 수 
//없는 경우가 생길 수 있다.

void Swap(int n1, int n2)
{
	int temp=n1;
	n1=n2;
	n2=temp;
	printf("n1, n2 : %d %d \n", n1, n2);
}
int main()
{
	int num1=10;
	int num2=20;
	printf("num1 num2 : %d %d \n", num1, num2);
	
	Swap(num1, num2);
	printf("num1 num2 : %d %d \n", num1, num2);
	return 0;
}