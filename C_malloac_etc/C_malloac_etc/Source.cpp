#include <stdio.h>
#include <stdlib.h>

void main()
{
	void *vptr = malloc(sizeof(int));
	int *iptr = (int*)vptr;


	printf("�Ŷ���m: %X , %X\n", vptr, iptr);
	printf("�Ŷ��x�s��: %d\n", *iptr);

	*iptr = 200;

	printf("�Ŷ���m: %X , %X\n", vptr, iptr);
	printf("�Ŷ��x�s��: %d\n", *iptr);

	free(iptr);
	//free(vptr);
	//=========�ʺA�}�C==========

	//void *arr = malloc(1000 * sizeof(int));
	void *arr = calloc(1000, sizeof(int));
	
	free(arr);
	//====�}�C�ʺA�t�m====
	int size = 0;
	
	printf("�п�J�}�C����:");
	scanf("%d", &size);
	int *arr = malloc(size * sizeof(int));

	int i;

	printf

	system("pause");
}