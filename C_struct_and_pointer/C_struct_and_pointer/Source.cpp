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

void show(struct Ball *ball); //�ǤJball��Ҫ����� ,���^�ǭ�


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
	struct Ball *ptr = &ball1; //�ŧistruct���СA�H�Φp��ϥ�&��struct��Ҩ���}��

	printf("ball: %s\t%.2f\n", ptr->color, ptr->radius);//�ϥ�struct�����ШӦs���䦨���A�h�����ϥ�->�B��l



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
	//����Ҧ�����m
	struct Ball course3ball = { "red", 4.0 };
	struct Ball *ptr = &course3ball;
	printf("%X\n", &course3ball.color); //���G����Ҧ�����m
	//�]�i�@�H�U���
	printf("%X\n", &(course3ball.color)); //���G�]�O��Ҧ�����m
	//�ϥ�struct���Ъ����p
	printf("%X\n", &ptr->color);
	printf("%X\n", &(ptr->color));
	//�H�W���G�ҬۦP

}

//================course4===================�ϥ� �� �����СA�� structs ��Ҿ֦��i�ާ@���禡


struct course4Ball
{
	char *color;
	double radius;
	double (*volumn)(struct course4Ball*);//�禡���� , �bstruct�̨ϥ�function ,������method������
	//volumn(struct course4Ball*);
	
};

double volumn(struct course4Ball *vthis)
{
	double r = vthis -> radius;//����this���欰
	return r * r * 3.14;
}

void initBall(struct course4Ball *ball, char *color, double radius)
{
	ball-> volumn = volumn; //�s���禡
	ball->color = color;
	ball->radius = radius;
}

void course4()
{
	struct course4Ball ball6;
	initBall(&ball6, "red", 5.0);
	printf("ball ��Ҫ���n: %.2f\n", ball6.volumn(&ball6));


}