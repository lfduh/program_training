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

void course1() //strcmp()�r�����j�p , strncmp()������w�r���ƥجO�_�ۦP
{
	char *password = "123456";
	char input[7];
	char *input2 = "12345";
	char *input3 = "123456";
	char *input4 = "1234567";
	
	printf("�п�J�K�X:");
	gets_s(input);
	
	if (strcmp(password, input) == 0) //�ۦP��0 ,str1 > str2 �Ǧ^�j��0 , str1 < str2 �Ǧ^�p��0
	{
		printf("�K�X���T\n");
	}
	else
	{
		printf("�K�X���~\n");
	}

	printf("%d,%d,%d\n", strcmp(password, input2), strcmp(password, input3), strcmp(password, input4));
	printf("%d\n", strncmp(password, input ,3));

	

}

void course2() //strstr(�Q�j�M�r�� , �Q�j�M�r��) �j�M�r���m,�S�j���NULL  , ���j��Ǧ�m
{
	char source[80];
	char search[80];
	char *loc;

	printf("��J�r��:");
	gets_s(source);

	printf("�j�M�l�r��:");
	gets_s(search);

	loc = strstr(source, search);
	if (loc == NULL)
	{
		printf("�䤣��\n");
		
	}
	else
	{
		printf("�b���ަ�m %d �B���l�r��\n", loc - source);
		printf("�O�����m: %X , %X\n", loc, &source);
	}

	
}

void course3() //strspn() ����r��,��X�}�l���P���a��
			   //strcspn()�禡�h�O��X�@�Ӧr�ꤤ�P�t�@�Ӧr�����r���Ĥ@���ǰt�����ަ�m�A�Y�L�h�Ǧ^�r�����
{
	char str1[80];
	char str2[80];
	size_t loc;

	printf("��J�r��:");
	gets_s(str1);

	printf("�j�M�l�r��:");
	gets_s(str2);

	loc = strspn(str1, str2);

	if (loc == strlen(str1))
	{
		printf("�����ǰt,loc = %u\n", loc);
	}
	else
	{
		printf("�q%d�}�l���ǰt\n", loc);

	}

}

void course4() //strchr()�j�M�r�ꤤ���r�� ,�X�r�ꤤ�����w�r���Ĥ@���X�{�A
			   //�Y���h�Ǧ^�Ӧr�������СA�_�h�Ǧ^NULL ,strrchr()���ϦV�j�M
{
	char str1[80];
	char str2[80];
	size_t loc;

	printf("��J�r��:");
	gets_s(str1);

	printf("��J�l�r��:");
	gets_s(str2);

	loc = strcspn(str1, str2);

	if (loc == strlen(str1))
	{
		printf("�S������r���ǰt\n");
	}
	else
	{
		printf("���ަ�m%d�B�ǰt��r��\n", loc);
	}
}
