#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> //�ϥΤ��w���פ޼ƥ���

//======���T�w�|�ǤJ�X�ӰѼ�======
/*
���w���פ޼ƨϥδX���ѧO�r�ӫإߤ��w���פ޼ơG

va_list
�@�ӯS�����A�]type�^�A�bva_start�B va_arg�Pva_end�T�ӥ� ���]macro�^�ɷ�@�ѼƨϥΡC
va_start
�ҩl���w���פ޼ƪ������C
va_arg
Ū�����w���פ޼ƪ������C
va_end
�פ�w���פ޼ƪ������C
*/

void course1(int, ...);

void main()
{
	double x = 1.1, y = 2.1, z = 3.9;
	double a = 0.1, b = 0.2, c = 0.3;

	puts("�T�ӰѼ�");
	course1(3, x, y, z);

	puts("���ӰѼ�");
	course1(6, x, y, z, a, b, c);


	system("pause");
}

void course1(int count, ...)
{
	double tmp;

	va_list num_list; //�ŧi���� ,���V��C
	va_start(num_list, count); //��l�ƫ��� ,���V�}�Y

	
	for (int i  = 0; i < count; i++)
	{
		printf("%.1f\n", va_arg(num_list, double)); //���o���Ф����

	}

	va_end(num_list); //�M������ ,�]��NULL
}