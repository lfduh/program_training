#include <stdio.h>
#include <stdlib.h>

//定義類別成員時，您可以使用int整數定義指定位元個數的成員
struct File
{
	int modified : 1;//使用1位元
	int mode : 2;//使用2位元
	int owner : 3;//使用3位元
	int group : 3;//使用3位元

};


void main(void)
{
	struct File file;
	
	file.modified = 1;
	file.mode = 2;
	file.owner = 3;
	file.group = 3;

	printf("%d\t%d\t%d\t%d\n", file.modified, file.mode, file.owner,file.group );
	printf("%d", sizeof(file));

	system("pause");
}