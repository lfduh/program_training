#include <stdio.h>
#include <stdlib.h>
int main() 
{
	//hello world
	printf("Hello! World!\n");
	printf("哈囉！C語言！\n");
	
	//DataType
	printf("型態\t\t大小(bytes)\n");
	printf("short\t\t%d\n", sizeof(short));
	printf("int  \t\t%d\n", sizeof(int));
	printf("long \t\t%d\n", sizeof(long));
	printf("float\t\t%d\n", sizeof(float));
	printf("double\t\t%d\n", sizeof(double));
	printf("long double\t%d\n", sizeof(long double));
	printf("char \t\t%d\n", sizeof(char));

	//字面常量(Literal Constand)
	printf("sizeof(1): \t %d\n", sizeof(1));
	printf("sizeof(1.0):\t %d\n", sizeof(1.0));

	printf("%d\n", 26);
	printf("%d\n", 032);
	printf("%d\n", 0x1A);

	printf("size of 10%d\n",  sizeof(10));
	printf("size of 10L%d\n", sizeof(10L));
	printf("size of 10U%d\n", sizeof(10U));
	
	printf("2e4 = %d\n", 2e4);

	printf("'A' , '1' , \" , \' ,\\");

	printf("\n \t \v \b \r \f \a \\ \' \" ");
	printf("\n");
	char c = '\'';
	printf("單引號字元 %c \n", c);
	printf(" \" \062 個 \x48\x45\x4c\x4c\x4f\x21 \" \n");


	system("pause");
	
	return 0;
}