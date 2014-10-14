#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> //使用不定長度引數必須

//======不確定會傳入幾個參數======
/*
不定長度引數使用幾個識別字來建立不定長度引數：

va_list
一個特殊的型態（type），在va_start、 va_arg與va_end三個巨 集（macro）時當作參數使用。
va_start
啟始不定長度引數的巨集。
va_arg
讀取不定長度引數的巨集。
va_end
終止不定長度引數的巨集。
*/

void course1(int, ...);

void main()
{
	double x = 1.1, y = 2.1, z = 3.9;
	double a = 0.1, b = 0.2, c = 0.3;

	puts("三個參數");
	course1(3, x, y, z);

	puts("六個參數");
	course1(6, x, y, z, a, b, c);


	system("pause");
}

void course1(int count, ...)
{
	double tmp;

	va_list num_list; //宣告指標 ,指向串列
	va_start(num_list, count); //初始化指標 ,指向開頭

	
	for (int i  = 0; i < count; i++)
	{
		printf("%.1f\n", va_arg(num_list, double)); //取得指標內資料

	}

	va_end(num_list); //清除指標 ,設為NULL
}