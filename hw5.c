#include <stdio.h>

int main(void)
{
	int put[5];
	int i;

	printf("5���� ������ �Է��ϼ���:");
	for (i = 0; i < 5; i++)
		scanf("%d", &put[i]);

		
	printf("Ȧ�� ���:");
	for (i = 0; i < 5; i++)
		if (put[i] % 2 == 1)
			printf("%d ", put[i]);
	printf("\n¦�� ���:");
	for (i = 0; i < 5; i++)
		if (put[i] % 2 == 0)
			printf("%d ", put[i]);
	return 0;
}
