#include <stdio.h>
#include <stdlib.h>
#include "math.h"


/*
int myPow2(int num)
{
	return num*num;
}

int myPow(int n, int p)
{
	int r = 1;
	int i;
	for (i = 0; i < p; i++) {
		r *= n;
	}

	return r;
}
===以上宣告於math.h====
*/

void main(void)
{
	int num = 0;
	int power = 0;

	printf("輸入數值: ");
	scanf_s("%d", &num);

	printf("輸入次方: ");
	scanf_s("%d", &power);

	printf("%d平方: %d\n", num, myPow2(num));
	printf("%d的%d次方: %d\n", num,power, myPow(num,power));

	system("pause");


}