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
	printf("%c%c%c%c%c\n", *str, *(str + 1), *(str + 2), *(str + 3), *(str + 4)); //hello ,指標字串可是為一連續字元
	printf("%c%c%c%c%c\n", str[0], str[1], str[2], str[3], str[4]); //hello ,指標字串可是為一連續字元
	
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
	printf("%s\t%X\n", str, add); //只可用str ,不可用*str //%s為string 

	str = "world";
	add = str;
	printf("%s\t\%X\n", str, add);
	 

}

void course3()
{	//使用指標陣列，可以更方便的處理字串陣列
	char *str[] = { "professor", "teacher",	"student", "etc." };
	int i;
	for (i = 0; i < 4; i++) 
	{
		puts(str[i]);
	}
	
}

void course4()
{	//str中的每個元素都是字元指標，也各自指向一個字串常數在字元指標中
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
	下面兩個宣告的作用雖然類似，但其實意義不同：
		char *str1[] = { "professor", "Justin", "etc." };
	char str2[3][10] = { "professor", "Justin", "etc." };

	第一個宣告是使用指標陣列，每一個指標元素指向一個字串常數，
	只要另外指定字串常數給某個指標，該指標指向的記憶體位址就不同了，
	而第二個宣告則是配置連 續的3x10的字元陣列空間，字串是直接儲存在這個空間，
	每個字串的位址是固定的，而使用的空間也是固定的（也就是含空字元會是10個字元）
	*/
}