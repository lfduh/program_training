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
	}ball3 = { "yellow", 3.0 }, ball4;//宣告實例的方法1


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
	typedef struct Ball CBall;//使用typedef定義structs  PS:typedef類似#define 但本質不同

	CBall ball1 = { "red", 0.5 }; //struct Ball => CBall
	printf("ball1:%s,\t%.2f\n", ball1.color, ball1.radius);


}

void course4()
{
	typedef struct {
		char color[10];
		double radius;
	} Ball;//此宣告方式作用類似於course3

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
	Ball ball2 = ball1; //"="複製成員值
	ball2.radius = 5.3; //改變ball2不會改到ball1
	
	
	printf("ball1:%s,\t%.2f\n", ball1.color, ball1.radius);
	printf("ball2:%s,\t%.2f\n", ball2.color, ball2.radius);


}


//===========================course6===================
typedef struct
{
	char color[10];
	double radius;

}course6Ball;

void foo(course6Ball); //宣告一函數,傳入course6Ball的實例,不回傳值

void course6()
{
	course6Ball ball = { "red", 5.0 };

	foo(ball);//將course6Ball的實例 ball 傳入

	printf("ball:%s, %.2f\n", ball.color, ball.radius);
	
}



void foo(course6Ball ball)
{
	ball.radius = 100.0;//修改ball的直徑,但由於是複製成員值，這並不影響main()當中的ball實例之成員值
	
}


//======course7======================
struct S1 
{
	int value1;
	struct  //在struct中，也可以再宣告struct
	{
		int value2;
	}S2; //定義struct時，不一定要定義struct名稱，而可以直接在定義結構之後
};

void course7()
{
	struct S1 example;
	example.value1 = 1;
	example.S2.value2 = 2;
	
}

