#include <stdio.h>
#include <stdlib.h>

union StateMachine //union �@���u��s��@�Ӧ���
{
	char character;
	int number;
	char *str;
	double exp;
};


void main()
{

	union StateMachine machine;

	machine.number = 4;
	printf("sizeof: %d\n", sizeof(int));
	printf("sizeof: %d\n", sizeof(machine));//��double������
	printf("number: %d\n", machine.number);







	system("pause");
}