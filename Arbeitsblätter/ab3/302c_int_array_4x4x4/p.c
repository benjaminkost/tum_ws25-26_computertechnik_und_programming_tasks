#include <stdio.h>

int main()
{
	int a[4][4][4];

	long addressOfFirstRow = 0x16d5e2c88;
	printf("&a[0][0][0]: %p\n", &a[0][0][0]); // 0x16d5e2c88
	long addressOfSecondRow = 0x16d5e2c88 + 4*sizeof(int); // 0x16d5e2c88 + 4*4(Byte) = 0x16d5e2c98
	printf("&a[0][1][0]: %p\n", &a[0][1][0]);
	long addressOfThirdRow = addressOfSecondRow + 4*sizeof(int); // 0x16d5e2c98 + 4*4*4(Byte) = 0x16d5e2cc8
	printf("&a[1][0][0]: %p\n", &a[1][0][0]);


}