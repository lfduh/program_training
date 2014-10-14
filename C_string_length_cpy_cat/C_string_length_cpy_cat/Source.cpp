#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strlen

void course1();
void course2();
void course3();

int main()
{
	//course1();
	//course2();
	course3();
	
	system("pause");
	return 0;
}


void course1()//strlen()字串長度
{
	char input[80];
	char *in = "AABBCCD";

	size_t length; //size_t 為 unsigned int

	puts("輸入字串");
	gets_s(input);
	length = strlen(input);
	printf("input長度: %u\n",length);
	printf("AABBCCD長度:%u\n", strlen(in));

}

void course2() //strcpy()字串複製
{
	char input[80];
	char tmp[80];

	puts("請輸入字串...");
	gets_s(input);

	strcpy_s(tmp, input);
	printf("複製整個字串：%s\n", tmp); //%s 為string
		
	memset(tmp, '\0', sizeof(tmp));// 重設所有字元為空字元 memset(記憶體名稱,填入值,長度)
	
	strncpy_s(tmp, input, 4);
	printf("複製部份字串：%s\n", tmp);

	


}

void course3() // strcat()字串串接 , strncat()部分字串串接
{
	char str1[80] = "xyz";
	char str2[] = "abc";

	printf("串接前:%s\n", str1);

	strcat_s(str1, str2);
	
	printf("串接後:%s\n", str1);

	strncat_s(str1, str2, 2);

	printf("串接後：%s\n", str1);





}