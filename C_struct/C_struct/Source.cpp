#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void course1(void);
void course2(void);
void course3(void);
void course4(void);
void course5(void);
void course6(void);
void course7(void);

void main(void)
{
	course1();
	puts("\n");
	
	course2();
	puts("\n");

	course3();
	printf("\n");

	course4();
	puts("\n");

	course5();
	puts("\n");

	course6();
	puts("\n");

	course7();
	puts("\n");

	system("pause");
}

void course1()
{

	struct Ball
	{
		char color[10];
		double radius;
	}ball3 = { "yellow", 3.0 }, ball4;//�ŧi��Ҫ���k1


	struct Ball ball1 = { "red", 5.0 };
	struct Ball ball2;
	strcpy_s(ball2.color, "green");
	ball2.radius = 10.0;

	printf("ball1:%s,\t%.2f\n", ball1.color, ball1.radius);
	printf("ball2:%s,\t%.2f\n", ball2.color, ball2.radius);

}

void course2()
{
	struct Ball
	{
		char color[10];
		double radius;
	};

	struct Ball balls[] = { { "red", 3.0 },
							{ "green", 5.0 },
							{ "blue", 10.0 } };
	
	
	
	for (int i = 0; i < 3; i++)
	{
		printf("ball%d: %s,\t%.2f\n", i + 1, balls[i].color, balls[i].radius);

	}


	

}

void course3()
{
	struct Ball {
		char color[10];
		double radius;
	};
	typedef struct Ball CBall;//�ϥ�typedef�w�qstructs  PS:typedef����#define �����褣�P

	CBall ball1 = { "red", 0.5 }; //struct Ball => CBall
	printf("ball1:%s,\t%.2f\n", ball1.color, ball1.radius);


}

void course4()
{
	typedef struct {
		char color[10];
		double radius;
	} Ball;//���ŧi�覡�@��������course3

	Ball ball = { "red", 0.5 }; //struct Ball => CBall;
	printf("ball:%s,\t%.2f\n", ball.color, ball.radius);

}

void course5()
{
	typedef struct
	{
		char color[10];
		double radius;
	
	} Ball;

	Ball ball1 = { "red", 99.0 };
	Ball ball2 = ball1; //"="�ƻs������
	ball2.radius = 5.3; //����ball2���|���ball1
	
	
	printf("ball1:%s,\t%.2f\n", ball1.color, ball1.radius);
	printf("ball2:%s,\t%.2f\n", ball2.color, ball2.radius);


}


//===========================course6===================
typedef struct
{
	char color[10];
	double radius;

}course6Ball;

void foo(course6Ball); //�ŧi�@���,�ǤJcourse6Ball�����,���^�ǭ�

void course6()
{
	course6Ball ball = { "red", 5.0 };

	foo(ball);//�Ncourse6Ball����� ball �ǤJ

	printf("ball:%s, %.2f\n", ball.color, ball.radius);
	
}



void foo(course6Ball ball)
{
	ball.radius = 100.0;//�ק�ball�����|,���ѩ�O�ƻs�����ȡA�o�ä��v�Tmain()����ball��Ҥ�������
	
}


//======course7======================
struct S1 
{
	int value1;
	struct  //�bstruct���A�]�i�H�A�ŧistruct
	{
		int value2;
	}S2; //�w�qstruct�ɡA���@�w�n�w�qstruct�W�١A�ӥi�H�����b�w�q���c����
};

void course7()
{
	struct S1 example;
	example.value1 = 1;
	example.S2.value2 = 2;
	
}

