#include <stdio.h>
#include <stdlib.h>

union StateMachine //union 一次只能存放一個成員
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
	printf("sizeof: %d\n", sizeof(machine));//取double的長度
	printf("number: %d\n", machine.number);







	system("pause");
}