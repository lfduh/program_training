#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int var = 10;
	
	printf("變數 var 的值(rvalue) %d\n", var);
	printf("變數 var 的記憶體位置(lvalue) %X\n\n", &var);

	int *iptr = &var;
	
	printf("%X\n", &iptr);
	//=======================================================================
	int ptr = (int)&var;
	printf("%X\n\n", ptr);
	//=======================================================================

	printf("變數 var 的位置: %X\n", &var);
	printf("指標 ptr 指向的位置: %X\n\n", iptr);

	printf("指標 ptr 儲存的值(地址): %X\n", iptr);
	printf("指標 ptr 指向位置儲存的值: %d\n\n", *iptr);
	//=======================================================================
	printf("var = %d\n", var);
	printf("*ptr = %d\n\n", *iptr);

	*iptr = 20; //assign指標位置內的値

	printf("var = %d\n", var); //印出var
	printf("*ptr = %d\n\n", *iptr);//印出指標指定位制
	//=======================================================================
	int *aptr = 0; //指向之位置儲存0 ,表示不指向
	aptr = &var;	//重新指定指標內的値
	printf("%d\n", *aptr); //印出指標

	void *vptr = &var;		//void指標
	int *ctr;
	
	int *btr = (int*)vptr;	//void指標轉int指標
	printf("%d\n", *btr);	//才可印出
	//=======================================================================
	int *testptr = &var; //宣告int指標
	int *test2ptr = 0;	//宣告int指標2
	test2ptr = testptr; //指標對指標
	printf("%d\n", *test2ptr);	//才可印出
	//=======================================================================
	void *testbptr = &var;
	int *testb2ptr = 0;
	int *testb3ptr = (int*)testbptr; //轉int指標

	testb2ptr = testb3ptr; //指標對指標
	printf("%d\n", *testb2ptr);	//才可印出	
	//=======================================================================
	void *testcptr = &var;
	void *testc2ptr = 0;
	testc2ptr = testcptr; //指標複製到指標

	int *testc3ptr = (int*)testc2ptr;
	
	printf("%d\n", testc3ptr);	//才可印出	//印出結果錯誤
	//=======================================================================
	
	
	
	
	
	system("pause");


}