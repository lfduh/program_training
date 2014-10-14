#include <stdio.h>
#include <stdlib.h>


void doublepoint();

int main()
{

	int p = 10;
	int *ptr = &p;

	printf("p的值:%d\n", p);
	printf("p的記憶體位置:%X\n", &p);
	printf("*ptr參照的值:%d\n", *ptr);

	printf("ptr儲存的位置值:%X\n", ptr);
	printf("ptr的記憶體位置:%X\n", &ptr);

	doublepoint();
	system("pause");
	return 0;
}

void doublepoint()
{
	int p = 10;
	int *ptr1 = &p;
	int **ptr2 = &ptr1;
	
	printf("p的值: %d\n", p);
	printf("p的記憶體位置: %X\n", &p);

	printf("*ptr1 = %d\n", *ptr1);
	printf("ptr1 = %X\n", ptr1);
	printf("ptr1的記憶體位置:%X\n", &ptr1);

	printf("**ptr2 = %d\n", **ptr2);
	printf("*ptr2 = %X\n", *ptr2);
	printf("ptr2 = %X\n\n", ptr2);

	puts("整理(誰儲存了誰?):");
	printf("&p = %X \t ptr1 = %X\n", &p, ptr1);
	printf("&ptr1 = %X \t ptr2 = %X\n", &ptr1, ptr2);
	


}

