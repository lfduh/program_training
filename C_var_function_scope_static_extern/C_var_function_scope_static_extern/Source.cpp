#include <stdio.h>
#include <stdlib.h>

int GlobalVar; //生命週期始於程式開始之時，終止於程式結束之時
static int staVar; //加上static , 一但生成，就一直存在記憶體，即使函式執行完畢，變數也不會消失，值到程式結束
					//在一個原始程式文件中宣告全域static變數，還表示其可以存取的範圍僅限於該原始程式文件之中

static void some();//static函式表示，其可以呼叫的範圍限於該原始碼文件之中

extern double someVar; //ext外部宣告 ,宣告後須去其他地方找值 ,不能值接指定值

void count(void);

void main()
{
	int Localvar; //生命週期始於函式開始之時，終止於函式結束之時

	while (1)
	{
		int LocalVar = 0;//可視範圍大的變數與可視範圍小的變數發生同名狀況時，可視範圍小的變數會暫時覆蓋可視範圍大的變數
		static int staVar2; //加上static , 一但生成，就一直存在記憶體，即使函式執行完畢，變數也不會消失

	}

	int i;
	for (i = 0; i < 10; i++) {
		count();
	}




}

void count(void)
//雖然變數c是在count()函式中宣告的，但是函式結束後，變數仍然存在，它會直到程式執行結束時才消失，雖然變數一直存在，但由於它是被宣告在函式之 中，所以函式之外仍無法存取static變數。
{
	static int c = 1;
	printf("%d\n", c);
	c++;


}