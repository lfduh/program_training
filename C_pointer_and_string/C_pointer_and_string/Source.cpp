#include <stdio.h>
#include <stdlib.h>

void course1();
void course2();
void course3();
void course4();
void course5();

int main()
{
	course1();
	course2();
	course3();
	course4();

	system("pause");
	return 0;
}

void course1()
{
	char *str = "hello";
	puts(str); //hello
	printf("%c%c%c%c%c\n", *str, *(str + 1), *(str + 2), *(str + 3), *(str + 4)); //hello ,���Цr��i�O���@�s��r��
	printf("%c%c%c%c%c\n", str[0], str[1], str[2], str[3], str[4]); //hello ,���Цr��i�O���@�s��r��
	
	str = "world"; 
	puts(str); //world
	
	
	char a = { 'a' };
	printf("%c\n",a); //a
	//puts(a);


}

void course2()
{	
	char *str = "hello";
	void *add = 0;

	add = str;
	printf("%s\t%X\n", str, add); //�u�i��str ,���i��*str //%s��string 

	str = "world";
	add = str;
	printf("%s\t\%X\n", str, add);
	 

}

void course3()
{	//�ϥΫ��а}�C�A�i�H���K���B�z�r��}�C
	char *str[] = { "professor", "teacher",	"student", "etc." };
	int i;
	for (i = 0; i < 4; i++) 
	{
		puts(str[i]);
	}
	
}

void course4()
{	//str�����C�Ӥ������O�r�����СA�]�U�۫��V�@�Ӧr��`�Ʀb�r�����Ф�
	char *str[][2] = { "professor", "Justin","teacher", "Momor","student", "Caterpillar" };
	int i;
	for (i = 0; i < 3; i++) 
	{
		printf("%s: %s\n", str[i][0], str[i][1]);
	}

}

void course5()
{

	/*
	�U����ӫŧi���@�����M�����A�����N�q���P�G
		char *str1[] = { "professor", "Justin", "etc." };
	char str2[3][10] = { "professor", "Justin", "etc." };

	�Ĥ@�ӫŧi�O�ϥΫ��а}�C�A�C�@�ӫ��Ф������V�@�Ӧr��`�ơA
	�u�n�t�~���w�r��`�Ƶ��Y�ӫ��СA�ӫ��Ы��V���O�����}�N���P�F�A
	�ӲĤG�ӫŧi�h�O�t�m�s ��3x10���r���}�C�Ŷ��A�r��O�����x�s�b�o�ӪŶ��A
	�C�Ӧr�ꪺ��}�O�T�w���A�ӨϥΪ��Ŷ��]�O�T�w���]�]�N�O�t�Ŧr���|�O10�Ӧr���^
	*/
}