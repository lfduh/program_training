#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void course1();
void course2();

int main()
{
	course1();
	course2();
	
	system("pause");

	return 0;
}


void course1()
{
	char *num = "46885";
	printf("ASCII : %d\n", *num); //4��ASCII
	printf("point location : %X\n", num);
	printf("atoi(�নint) : %d , %d\n", atoi(num), sizeof(atoi(num)));

	printf("atol(�নlong) : %d , %d\n", atol(num) , sizeof(atol(num)));
		
	printf("atof(�নdouble) : %f , %d\n", atof(num), sizeof(atof(num)));//%d�u���X���(int , long)�B�I�ƥ���%f
}

void course2()
{
	int num = 0;
	char latter = 'A';

	printf("%d\n", isalnum(num));//�O�_���r���μƦr
	printf("%d\n", isalnum(latter));

	printf("%d\n", isalpha(num));//�O�_���r��
	printf("%d\n", isalpha(latter));

	printf("%d\n", iscntrl(num));//�O�_������r��
	printf("%d\n", iscntrl(latter));

	printf("%d\n", isdigit(num));//�O�_���Ʀr
	printf("%d\n", isdigit(latter));

	printf("%d\n", islower(num));//�O�_���p�g�r��
	printf("%d\n", islower(latter));

	printf("%d\n", isprint(num));//�O�_���C�L�r��
	printf("%d\n", isprint(latter));

	printf("%d\n", ispunct(num));//�O�_�����I�Ÿ�
	printf("%d\n", ispunct(latter));

	printf("%d\n", isspace(num));//�O�_���ť�
	printf("%d\n", isspace(latter));

	printf("%d\n", isupper(num));//�O�_���j�g�r��
	printf("%d\n", isupper(latter));

	printf("%d\n", isxdigit(num));//�O�_��16�i��Ʀr
	printf("%d\n", isxdigit(latter));

	printf("%c\n", tolower('A')); //��p�g
	
	printf("%c\n", toupper('a')); //��j�g

}