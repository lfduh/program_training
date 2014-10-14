#include <stdio.h>
#include <stdlib.h>

//call by name , call by value , call by ref ,call by address

int increment(int); //call by velue ,�ǤJ�� ,�^�ǭ�
int increment2(int *); //call by address ,�ǤJ��m,�^�ǭ�

int* creatArray(int); //�ŧi���Ш禡 ,int *p;//�ŧi�s���Ъ��Ŷ�p ,�ǤJ�� ,�^�ǪŶ���m
void deleteArray(int *); //�ŧi�@�禡�ǤJ���� //�ǤJ���Ц�m ,���^��

void main()
{
	int x = 10;

	//==========Course1===========
	printf("%d\n", increment(x));
	printf("%d\n", x);//�W�����ǻ��u�ǻ�x���� ,�쥻��x�����v�T

	//==========Course2===========
	printf("%d\n", increment2(&x)); //�̲׶Ǧ^ x + 1
	printf("%d\n", x);//�H�W�ǻ��ǻ��F�O�����m ,�쥻��X�@�ֳQ�ק�

	//==========Course3===========�ʺA���Ͱ}�C
	
	int m = 0;
	printf("�}�C�j�p:");
	scanf_s("%d", &m);//��J�}�C�j�p
	
	int *arr = creatArray(m); //�Nm(�}�C�j�p)�ǤJ��� , �æ^�ǰ}�C��l��m
	
	for (int i = 0; i < m; i++)//�}�C�Ҧ������Ji
	{
		arr[i] = i;
	}

	for (int i = 0; i < m; i++)//�L�X�}�C�Ҧ����
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	deleteArray(arr);//����O����
	//======END==================
	
	system("pause");
}

int increment(int n)
{
	n = n + 1;
	return n;
	
}


int increment2(int *n)
{
	*n = *n + 1;
	return *n; //�^�Ǧs�bn��m���� ( n+1 )

}

int* creatArray(int m)
{
	int *a = (int*)malloc(m * sizeof(int)); //�t�mm��int�Ŷ� ,�`�N�p�G�z���O�ϥ�malloc()�Ӱt�m�A�h�b�ƨ禡���ҫŧi���ܼưO����A�b�禡���浲���᳣�|�۰ʮ���
	
	for (int i = 0; i < m; i++)//�Ŷ�����0
	{
		a[i] = 0;
	}
	return a;
	
}

void deleteArray(int *arr)
{
	free(arr);
}
