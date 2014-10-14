#include <stdio.h>
#include <stdlib.h>

void realloc_pratice();

int main(void)
{

	
	//配置動態記憶體
	int *ptr = (int*)malloc(sizeof(int));
	

	printf("空間位置: %X\n", ptr);
	printf("空間儲存值： %d \n", *ptr);

	*ptr = 200;

	printf("空間位置: %X\n", ptr);
	printf("空間儲存值：%d\n", *ptr);

	free(ptr);
	
	
	putchar('\n\n');
	//END
		
	/*動態配置陣列,陣列內容未知
	int *mallarr = (int*)malloc(1000 * sizeof(int));
	
	free(mallarr);
	*/
	/*動態配置陣列,陣列內容初始為0
	int *callarr = (int*)calloc(1000, sizeof(int));
	(......)
	free(callarr);
	*/
	
	//動態配置陣列,實作一維陣列

	int size = 0;
	
	printf("請輸入陣列長度:");
	scanf_s("%d", &size);
	int *arr = (int*)malloc(size * sizeof(int));

	int i;

	printf("顯示元素值:\n");
	for (i = 0; i < size; i++)
	{
		printf("arr[%d] = %d\n", i, *(arr + i));

	}

	printf("指定元素值:\n");
	for (i = 0; i < size; i++)
	{
		printf("arr[%d] = " ,i);
		scanf_s("%d", arr + i);
		
	}

	printf("顯示元素值:\n");
	for (i = 0; i < size; i++)
	{
		printf("arr[%d] = %d\n", i, *(arr + i));
	}

	free(arr);

	//======實作二維陣列=====

	int m = 0, 
		n = 0;

	printf("請輸入二維陣列長度(m*n):");
	scanf_s("%d * %d", &m , &n); //指位置 ,加上&

	putchar('\n');
	int *arr2 = (int*)malloc(m * n * sizeof(int));
		
	printf("顯示元素值:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("arr[%d][%d] = %d", i, j , *(arr + i * n + j));
			putchar('\t');
		}
		putchar('\n');
	}


	printf("指定元素值:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("arr[%d][%d] = " , i , j);
			scanf_s("%d", arr + i * n + j); //本來就是指位置 ,不用加上取址"&"
			//putchar('\t');
		}
		//putchar('\n');
	}



	printf("顯示元素值:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("arr[%d][%d] = %d", i, j, *(arr + i * n + j));
			putchar('\t');
		}
		putchar('\n');
	}

	free(arr2);
	//=========END=========

	
	realloc_pratice();


	system("pause");
	return 0;
	
}



//=======使用realloc()重新配置記憶體大小
void realloc_pratice()
{
	int size = 0;

	printf("請輸入陣列長度：");
	scanf_s("%d", &size);
	int *arr1 = (int*)malloc(size * sizeof(int));

	int i;

	printf("指定元素值：\n");
	for (i = 0; i < size; i++) {
		printf("arr1[%d] = ", i);
		scanf_s("%d", arr1 + i);
	}

	printf("顯示元素值：\n");
	for (i = 0; i < size; i++) {
		printf("arr1[%d] = %d\n", i, *(arr1 + i));
	}
	printf("arr1 address: %d\n", arr1);
	int *arr2 = (int*)realloc(arr1, sizeof(int)* size * 2);

	/*if (!arr2)
	{
		arr1 = arr2;
		free(arr1);
	}*/
	
	printf("顯示元素值：\n");
	for (i = 0; i < size * 2; i++) {
		printf("arr2[%d] = %d\n", i, *(arr2 + i));
	}

	printf("顯示元素值：\n");
	for (i = 0; i < size * 2; i++) {
		printf("arr1[%d] = %d\n", i, *(arr1 + i));
	}

	printf("arr1 address: %d\n", arr1);
	printf("arr2 address: %d\n", arr2);

	free(arr2);


	system("pause");
	
}