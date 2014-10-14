#include <stdio.h>
#include <stdlib.h>

void course1(void);
void course2(void);
void course3(void);
void course4(void);

struct Ball
{
	char color[10];
	double radius;

};

void show(struct Ball *ball); //傳入ball實例的指標 ,不回傳值


void main(void)
{
	course1();
	course2();
	course3();
	course4();




	system("pause");
}

void course1()
{
	struct Ball ball1 = { "red", 4.0 };
	struct Ball *ptr = &ball1; //宣告struct指標，以及如何使用&對struct實例取位址值

	printf("ball: %s\t%.2f\n", ptr->color, ptr->radius);//使用struct的指標來存取其成員，則必須使用->運算子



}

//=================course2===================
void course2()
{
	struct Ball course2ball = { "red", 4.0 };
	show(&course2ball);
}

void show(struct Ball *ball)
{
	printf("ball: %s\t%.2f\n", ball->color, ball->radius);

}
//=================course3===================

void course3()
{
	//取實例成員位置
	struct Ball course3ball = { "red", 4.0 };
	struct Ball *ptr = &course3ball;
	printf("%X\n", &course3ball.color); //結果為實例成員位置
	//也可作以下表示
	printf("%X\n", &(course3ball.color)); //結果也是實例成員位置
	//使用struct指標的狀況
	printf("%X\n", &ptr->color);
	printf("%X\n", &(ptr->color));
	//以上結果皆相同

}

//================course4===================使用 函 式指標，讓 structs 實例擁有可操作的函式


struct course4Ball
{
	char *color;
	double radius;
	double (*volumn)(struct course4Ball*);//函式指標 , 在struct裡使用function ,類似於method的概念
	//volumn(struct course4Ball*);
	
};

double volumn(struct course4Ball *vthis)
{
	double r = vthis -> radius;//模擬this的行為
	return r * r * 3.14;
}

void initBall(struct course4Ball *ball, char *color, double radius)
{
	ball-> volumn = volumn; //連結函式
	ball->color = color;
	ball->radius = radius;
}

void course4()
{
	struct course4Ball ball6;
	initBall(&ball6, "red", 5.0);
	printf("ball 實例的體積: %.2f\n", ball6.volumn(&ball6));


}