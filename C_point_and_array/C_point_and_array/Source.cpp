#include <stdio.h>
#include <stdlib.h>

void main()
{

	int arr[10] = { 0 };

	printf("arr: \t\t%X\n", arr);
	printf("&arr[0]:\t%X\n", &arr[0]); //arr = &arr[0]

	putchar('\n');

	int *ptr = arr;
	printf("arr + 1: \t%X\n", arr + 1);
	printf("&arr[1]:\t%X\n", &arr[1]); //arr = &arr[0]
	printf("ptr + %d :\t%X\n", 1, ptr + 1);//*ptr = arr

	for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		printf("&arr[%d]: %X\tarr + %d:%X\n",i, &arr[i], i, arr + i);

	}

	int *ptr2 = arr; //*ptr = arr = &arr[0]

	//以指標方式存取資料
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("*(ptr2 + %d): %d\n", i, *(ptr2 + i));//*(ptr +i) = arr + i
	}
	putchar('\n');
	//以陣列方式
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("ptr2[%d] : %d\n", i, ptr2[i]);

	}
	putchar('\n');
	// 以指標方式存取資料 
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("*(arr + %d): %d\n", i, *(arr + i));
	}
	putchar('\n');

	//以陣列方式
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("arr[%d]: %d\n", i, arr[i]);
	}
	putchar('\n');





	system("pause");
}