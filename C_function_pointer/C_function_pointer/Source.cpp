#include <stdio.h>
#include <stdlib.h>

void course1();

void main()
{
	void (*funpoint)() = 0; //�^�ǭ� , *���ЦW�� , �Ѽ�   PS:void function();(���^�ǭȬ����)
	funpoint = course1; //���w���Ь�course1����m
	
	course1();
	funpoint();

	printf("address of course1: %X\naddress of funpoint: %X\n", (int)course1, (int)funpoint);

	system("pause");
}

void course1()
{

	puts("function point");


}