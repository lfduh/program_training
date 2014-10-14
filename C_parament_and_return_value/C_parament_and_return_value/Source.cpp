#include <stdio.h>
#include <stdlib.h>

//call by name , call by value , call by ref ,call by address

int increment(int); //call by velue ,傳入值 ,回傳值
int increment2(int *); //call by address ,傳入位置,回傳值

int* creatArray(int); //宣告指標函式 ,int *p;//宣告存指標的空間p ,傳入值 ,回傳空間位置
void deleteArray(int *); //宣告一函式傳入指標 //傳入指標位置 ,不回傳

void main()
{
	int x = 10;

	//==========Course1===========
	printf("%d\n", increment(x));
	printf("%d\n", x);//上面的傳遞只傳遞x的值 ,原本的x不受影響

	//==========Course2===========
	printf("%d\n", increment2(&x)); //最終傳回 x + 1
	printf("%d\n", x);//以上傳遞傳遞了記憶體位置 ,原本的X一併被修改

	//==========Course3===========動態產生陣列
	
	int m = 0;
	printf("陣列大小:");
	scanf_s("%d", &m);//輸入陣列大小
	
	int *arr = creatArray(m); //將m(陣列大小)傳入函數 , 並回傳陣列初始位置
	
	for (int i = 0; i < m; i++)//陣列所有原素塞入i
	{
		arr[i] = i;
	}

	for (int i = 0; i < m; i++)//印出陣列所有原素
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	deleteArray(arr);//釋放記憶體
	//======END==================
	
	system("pause");
}

int increment(int n)
{
	n = n + 1;
	return n;
	
}


int increment2(int *n)
{
	*n = *n + 1;
	return *n; //回傳存在n位置的值 ( n+1 )

}

int* creatArray(int m)
{
	int *a = (int*)malloc(m * sizeof(int)); //配置m個int空間 ,注意如果您不是使用malloc()來配置，則在副函式中所宣告的變數記憶體，在函式執行結束後都會自動消失
	
	for (int i = 0; i < m; i++)//空間內塞0
	{
		a[i] = 0;
	}
	return a;
	
}

void deleteArray(int *arr)
{
	free(arr);
}
