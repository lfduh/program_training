#include <stdio.h>
#include <stdlib.h>



int main()
{
	int ageOfStudent;
	double scoreOfStudent;
	char levelOfStudent;

	printf("\n�~��\t�o��\t����\n");
	//printf("%d\t%d\t%d\n", ageOfStudent, scoreOfStudent, levelOfStudent);

	ageOfStudent = 5;
	scoreOfStudent = 80.0;
	levelOfStudent = 'B';

	printf("\n�~��\t�o��\t����\n");
	printf("%d\t %.2f\t %c\n", ageOfStudent, scoreOfStudent, levelOfStudent);

	const double PI = 3.14;
	//PI = 3.14159;

	unsigned int i = 0;
	
	system("pause");
	return 0;
	
}