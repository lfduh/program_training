#include <stdio.h>
#include <stdlib.h>


int main()
{
	int count = printf("This is a test!\n");
	printf("%d\n", count);

	printf("顯示字元 %c\n", 'A'); //char
	printf("顯示字元編碼 %d\n", 'A'); //decimal
	printf("顯示字元編碼 %c\n", 65); //char
	printf("顯示十進位整數 %d\n", 15); //decimal
	printf("顯示八進位整數 %o\n", 15); //octal
	printf("顯示十六進位整數 %X\n", 15); //hex
	printf("顯示十六進位整數 %x\n", 15);
	printf("顯示科學記號 %E\n", 0.001234);
	printf("顯示科學記號 %e\n", 0.001234);

	system("pause");
	return 0;

}