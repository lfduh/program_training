#include <stdio.h>
#include <stdlib.h>


int main()
{
	int count = printf("This is a test!\n");
	printf("%d\n", count);

	printf("��ܦr�� %c\n", 'A'); //char
	printf("��ܦr���s�X %d\n", 'A'); //decimal
	printf("��ܦr���s�X %c\n", 65); //char
	printf("��ܤQ�i���� %d\n", 15); //decimal
	printf("��ܤK�i���� %o\n", 15); //octal
	printf("��ܤQ���i���� %X\n", 15); //hex
	printf("��ܤQ���i���� %x\n", 15);
	printf("��ܬ�ǰO�� %E\n", 0.001234);
	printf("��ܬ�ǰO�� %e\n", 0.001234);

	system("pause");
	return 0;

}