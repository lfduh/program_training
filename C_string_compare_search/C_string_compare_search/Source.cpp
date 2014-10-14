#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void course1();
void course2();
void course3();
void course4();

int main()
{
	course1();
	puts("\n");
	course2();
	puts("\n");
	course3();
	puts("\n");
	course4();


	system("pause");
	return 0;
}

void course1() //strcmp()字串比較大小 , strncmp()比較指定字元數目是否相同
{
	char *password = "123456";
	char input[7];
	char *input2 = "12345";
	char *input3 = "123456";
	char *input4 = "1234567";
	
	printf("請輸入密碼:");
	gets_s(input);
	
	if (strcmp(password, input) == 0) //相同為0 ,str1 > str2 傳回大於0 , str1 < str2 傳回小於0
	{
		printf("密碼正確\n");
	}
	else
	{
		printf("密碼錯誤\n");
	}

	printf("%d,%d,%d\n", strcmp(password, input2), strcmp(password, input3), strcmp(password, input4));
	printf("%d\n", strncmp(password, input ,3));

	

}

void course2() //strstr(被搜尋字串 , 想搜尋字串) 搜尋字串位置,沒搜到傳NULL  , 有搜到傳位置
{
	char source[80];
	char search[80];
	char *loc;

	printf("輸入字串:");
	gets_s(source);

	printf("搜尋子字串:");
	gets_s(search);

	loc = strstr(source, search);
	if (loc == NULL)
	{
		printf("找不到\n");
		
	}
	else
	{
		printf("在索引位置 %d 處找到子字串\n", loc - source);
		printf("記憶體位置: %X , %X\n", loc, &source);
	}

	
}

void course3() //strspn() 比較字串,找出開始不同的地方
			   //strcspn()函式則是找出一個字串中與另一個字串任何字元第一次匹配的索引位置，若無則傳回字串長度
{
	char str1[80];
	char str2[80];
	size_t loc;

	printf("輸入字串:");
	gets_s(str1);

	printf("搜尋子字串:");
	gets_s(str2);

	loc = strspn(str1, str2);

	if (loc == strlen(str1))
	{
		printf("完全匹配,loc = %u\n", loc);
	}
	else
	{
		printf("從%d開始不匹配\n", loc);

	}

}

void course4() //strchr()搜尋字串中的字元 ,出字串中的指定字元第一次出現，
			   //若找到則傳回該字元的指標，否則傳回NULL ,strrchr()為反向搜尋
{
	char str1[80];
	char str2[80];
	size_t loc;

	printf("輸入字串:");
	gets_s(str1);

	printf("輸入子字串:");
	gets_s(str2);

	loc = strcspn(str1, str2);

	if (loc == strlen(str1))
	{
		printf("沒有任何字元匹配\n");
	}
	else
	{
		printf("索引位置%d處匹配到字元\n", loc);
	}
}
