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
	printf("ASCII : %d\n", *num); //4的ASCII
	printf("point location : %X\n", num);
	printf("atoi(轉成int) : %d , %d\n", atoi(num), sizeof(atoi(num)));

	printf("atol(轉成long) : %d , %d\n", atol(num) , sizeof(atol(num)));
		
	printf("atof(轉成double) : %f , %d\n", atof(num), sizeof(atof(num)));//%d只能輸出整數(int , long)浮點數必用%f
}

void course2()
{
	int num = 0;
	char latter = 'A';

	printf("%d\n", isalnum(num));//是否為字母或數字
	printf("%d\n", isalnum(latter));

	printf("%d\n", isalpha(num));//是否為字母
	printf("%d\n", isalpha(latter));

	printf("%d\n", iscntrl(num));//是否為控制字元
	printf("%d\n", iscntrl(latter));

	printf("%d\n", isdigit(num));//是否為數字
	printf("%d\n", isdigit(latter));

	printf("%d\n", islower(num));//是否為小寫字母
	printf("%d\n", islower(latter));

	printf("%d\n", isprint(num));//是否為列印字元
	printf("%d\n", isprint(latter));

	printf("%d\n", ispunct(num));//是否為標點符號
	printf("%d\n", ispunct(latter));

	printf("%d\n", isspace(num));//是否為空白
	printf("%d\n", isspace(latter));

	printf("%d\n", isupper(num));//是否為大寫字母
	printf("%d\n", isupper(latter));

	printf("%d\n", isxdigit(num));//是否為16進位數字
	printf("%d\n", isxdigit(latter));

	printf("%c\n", tolower('A')); //轉小寫
	
	printf("%c\n", toupper('a')); //轉大寫

}