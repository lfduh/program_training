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


void course1()//strlen()�r�����
{
	char input[80];
	char *in = "AABBCCD";

	size_t length; //size_t �� unsigned int

	puts("��J�r��");
	gets_s(input);
	length = strlen(input);
	printf("input����: %u\n",length);
	printf("AABBCCD����:%u\n", strlen(in));

}

void course2() //strcpy()�r��ƻs
{
	char input[80];
	char tmp[80];

	puts("�п�J�r��...");
	gets_s(input);

	strcpy_s(tmp, input);
	printf("�ƻs��Ӧr��G%s\n", tmp); //%s ��string
		
	memset(tmp, '\0', sizeof(tmp));// ���]�Ҧ��r�����Ŧr�� memset(�O����W��,��J��,����)
	
	strncpy_s(tmp, input, 4);
	printf("�ƻs�����r��G%s\n", tmp);

	


}

void course3() // strcat()�r��걵 , strncat()�����r��걵
{
	char str1[80] = "xyz";
	char str2[] = "abc";

	printf("�걵�e:%s\n", str1);

	strcat_s(str1, str2);
	
	printf("�걵��:%s\n", str1);

	strncat_s(str1, str2, 2);

	printf("�걵��G%s\n", str1);





}