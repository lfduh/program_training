#include <stdio.h>
#include <stdlib.h>


void doublepoint();

int main()
{

	int p = 10;
	int *ptr = &p;

	printf("p����:%d\n", p);
	printf("p���O�����m:%X\n", &p);
	printf("*ptr�ѷӪ���:%d\n", *ptr);

	printf("ptr�x�s����m��:%X\n", ptr);
	printf("ptr���O�����m:%X\n", &ptr);

	doublepoint();
	system("pause");
	return 0;
}

void doublepoint()
{
	int p = 10;
	int *ptr1 = &p;
	int **ptr2 = &ptr1;
	
	printf("p����: %d\n", p);
	printf("p���O�����m: %X\n", &p);

	printf("*ptr1 = %d\n", *ptr1);
	printf("ptr1 = %X\n", ptr1);
	printf("ptr1���O�����m:%X\n", &ptr1);

	printf("**ptr2 = %d\n", **ptr2);
	printf("*ptr2 = %X\n", *ptr2);
	printf("ptr2 = %X\n\n", ptr2);

	puts("��z(���x�s�F��?):");
	printf("&p = %X \t ptr1 = %X\n", &p, ptr1);
	printf("&ptr1 = %X \t ptr2 = %X\n", &ptr1, ptr2);
	


}

