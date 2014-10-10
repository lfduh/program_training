#include <stdio.h>
#include <stdlib.h>

void main()
{
	void *vptr = malloc(sizeof(int));
	int *iptr = (int*)vptr;


	printf("空間位置: %X , %X\n", vptr, iptr);
	printf("空間儲存值: %d\n", *iptr);

	*iptr = 200;

	printf("空間位置: %X , %X\n", vptr, iptr);
	printf("空間儲存值: %d\n", *iptr);

	free(iptr);
	//free(vptr);
	//=========動態陣列==========

	//void *arr = malloc(1000 * sizeof(int));
	void *arr = calloc(1000, sizeof(int));
	
	free(arr);
	//====陣列動態配置====
	int size = 0;
	
	printf("請輸入陣列長度:");
	scanf("%d", &size);
	int *arr = malloc(size * sizeof(int));

	int i;

	printf

	system("pause");
}