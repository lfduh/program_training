#include <stdlib.h>
#include <stdio.h>


void course1();

int main()
{
	course1();


	system("pause");
	return 0;
}


void course1(int argc, char *argv[]) //arg count , arg value(�r�����Ы��Цr��)
//app hello.c -o -c project.p show "This is a string"
//argc = 7 ( > = 1)
//argv[0]�O"app"
//argv[1]�O"hello.c"
//argv[2]�O"-o"
//argv[3]�O"-c"
//argv[4]�O"project.p"
//argv[5]�O"show"
//argv[6]�O"This is a string"
{	
	for (int i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		puts(arg);
		
		switch (arg[0]) {
		case '-':
			{
			switch (arg[1]) 
			{	// �B�z�ѼơA�]�w����ﶵ�A�Ҧp-o�B-p�B-r���� 
				case 'o':
					// �ﶵo���B�z 
					break;
				case 'p':
					// �ﶵp���B�z 
					break;
				case 'r':
					// �ﶵr���B�z 
					break;
				default:
					// �ﶵ���~�B�z�Ψ䥦�B�z 
			}
		default:
			// ��������\�� 
		}

		

	}
	

}