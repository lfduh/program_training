#include <stdio.h>
#include <stdlib.h>

void realloc_pratice();

int main(void)
{

	
	//�t�m�ʺA�O����
	int *ptr = (int*)malloc(sizeof(int));
	

	printf("�Ŷ���m: %X\n", ptr);
	printf("�Ŷ��x�s�ȡG %d \n", *ptr);

	*ptr = 200;

	printf("�Ŷ���m: %X\n", ptr);
	printf("�Ŷ��x�s�ȡG%d\n", *ptr);

	free(ptr);
	
	
	putchar('\n\n');
	//END
		
	/*�ʺA�t�m�}�C,�}�C���e����
	int *mallarr = (int*)malloc(1000 * sizeof(int));
	
	free(mallarr);
	*/
	/*�ʺA�t�m�}�C,�}�C���e��l��0
	int *callarr = (int*)calloc(1000, sizeof(int));
	(......)
	free(callarr);
	*/
	
	//�ʺA�t�m�}�C,��@�@���}�C

	int size = 0;
	
	printf("�п�J�}�C����:");
	scanf_s("%d", &size);
	int *arr = (int*)malloc(size * sizeof(int));

	int i;

	printf("��ܤ�����:\n");
	for (i = 0; i < size; i++)
	{
		printf("arr[%d] = %d\n", i, *(arr + i));

	}

	printf("���w������:\n");
	for (i = 0; i < size; i++)
	{
		printf("arr[%d] = " ,i);
		scanf_s("%d", arr + i);
		
	}

	printf("��ܤ�����:\n");
	for (i = 0; i < size; i++)
	{
		printf("arr[%d] = %d\n", i, *(arr + i));
	}

	free(arr);

	//======��@�G���}�C=====

	int m = 0, 
		n = 0;

	printf("�п�J�G���}�C����(m*n):");
	scanf_s("%d * %d", &m , &n); //����m ,�[�W&

	putchar('\n');
	int *arr2 = (int*)malloc(m * n * sizeof(int));
		
	printf("��ܤ�����:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("arr[%d][%d] = %d", i, j , *(arr + i * n + j));
			putchar('\t');
		}
		putchar('\n');
	}


	printf("���w������:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("arr[%d][%d] = " , i , j);
			scanf_s("%d", arr + i * n + j); //���ӴN�O����m ,���Υ[�W���}"&"
			//putchar('\t');
		}
		//putchar('\n');
	}



	printf("��ܤ�����:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("arr[%d][%d] = %d", i, j, *(arr + i * n + j));
			putchar('\t');
		}
		putchar('\n');
	}

	free(arr2);
	//=========END=========

	
	realloc_pratice();


	system("pause");
	return 0;
	
}



//=======�ϥ�realloc()���s�t�m�O����j�p
void realloc_pratice()
{
	int size = 0;

	printf("�п�J�}�C���סG");
	scanf_s("%d", &size);
	int *arr1 = (int*)malloc(size * sizeof(int));

	int i;

	printf("���w�����ȡG\n");
	for (i = 0; i < size; i++) {
		printf("arr1[%d] = ", i);
		scanf_s("%d", arr1 + i);
	}

	printf("��ܤ����ȡG\n");
	for (i = 0; i < size; i++) {
		printf("arr1[%d] = %d\n", i, *(arr1 + i));
	}
	printf("arr1 address: %d\n", arr1);
	int *arr2 = (int*)realloc(arr1, sizeof(int)* size * 2);

	/*if (!arr2)
	{
		arr1 = arr2;
		free(arr1);
	}*/
	
	printf("��ܤ����ȡG\n");
	for (i = 0; i < size * 2; i++) {
		printf("arr2[%d] = %d\n", i, *(arr2 + i));
	}

	printf("��ܤ����ȡG\n");
	for (i = 0; i < size * 2; i++) {
		printf("arr1[%d] = %d\n", i, *(arr1 + i));
	}

	printf("arr1 address: %d\n", arr1);
	printf("arr2 address: %d\n", arr2);

	free(arr2);


	system("pause");
	
}