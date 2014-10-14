#include <stdio.h>
#include <stdlib.h>


int gcd(int, int);

void main()
{
	int m = 0;
	int n = 0;

	printf("¿é¤J¨â¼Æ(num1 num2):");
	scanf_s("%d %d", &m, &n);

	printf("GCD: %d\n", gcd(m, n));

	system("pause");
}

int gcd(int m, int n)
{
	if (n == 0)
	{
		return m;

	}

	else
	{
		return gcd(n, m % n);
	}

	
}