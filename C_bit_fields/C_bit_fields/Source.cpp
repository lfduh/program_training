#include <stdio.h>
#include <stdlib.h>

//�w�q���O�����ɡA�z�i�H�ϥ�int��Ʃw�q���w�줸�Ӽƪ�����
struct File
{
	int modified : 1;//�ϥ�1�줸
	int mode : 2;//�ϥ�2�줸
	int owner : 3;//�ϥ�3�줸
	int group : 3;//�ϥ�3�줸

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