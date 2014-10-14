#include <stdio.h>
#include <stdlib.h>

void course1();

void main()
{
	void (*funpoint)() = 0; //回傳值 , *指標名稱 , 參數   PS:void function();(指回傳值為整數)
	funpoint = course1; //指定指標為course1的位置
	
	course1();
	funpoint();

	printf("address of course1: %X\naddress of funpoint: %X\n", (int)course1, (int)funpoint);

	system("pause");
}

void course1()
{

	puts("function point");


}