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
===�H�W�ŧi��math.h====
*/

void main(void)
{
	int num = 0;
	int power = 0;

	printf("��J�ƭ�: ");
	scanf_s("%d", &num);

	printf("��J����: ");
	scanf_s("%d", &power);

	printf("%d����: %d\n", num, myPow2(num));
	printf("%d��%d����: %d\n", num,power, myPow(num,power));

	system("pause");


}