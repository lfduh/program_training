#include <stdio.h>
#include <stdlib.h>

int GlobalVar; //�ͩR�g���l��{���}�l���ɡA�פ��{����������
static int staVar; //�[�Wstatic , �@���ͦ��A�N�@���s�b�O����A�Y�Ϩ禡���槹���A�ܼƤ]���|�����A�Ȩ�{������
					//�b�@�ӭ�l�{����󤤫ŧi����static�ܼơA�٪�ܨ�i�H�s�����d��ȭ���ӭ�l�{����󤧤�

static void some();//static�禡��ܡA��i�H�I�s���d�򭭩�ӭ�l�X��󤧤�

extern double someVar; //ext�~���ŧi ,�ŧi�ᶷ�h��L�a���� ,����ȱ����w��

void count(void);

void main()
{
	int Localvar; //�ͩR�g���l��禡�}�l���ɡA�פ��禡��������

	while (1)
	{
		int LocalVar = 0;//�i���d��j���ܼƻP�i���d��p���ܼƵo�ͦP�W���p�ɡA�i���d��p���ܼƷ|�Ȯ��л\�i���d��j���ܼ�
		static int staVar2; //�[�Wstatic , �@���ͦ��A�N�@���s�b�O����A�Y�Ϩ禡���槹���A�ܼƤ]���|����

	}

	int i;
	for (i = 0; i < 10; i++) {
		count();
	}




}

void count(void)
//���M�ܼ�c�O�bcount()�禡���ŧi���A���O�禡������A�ܼƤ��M�s�b�A���|����{�����浲���ɤ~�����A���M�ܼƤ@���s�b�A���ѩ󥦬O�Q�ŧi�b�禡�� ���A�ҥH�禡���~���L�k�s��static�ܼơC
{
	static int c = 1;
	printf("%d\n", c);
	c++;


}