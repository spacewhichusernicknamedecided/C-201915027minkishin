#include <stdio.h>

int main(void)
{
	int line[5];
	int i;

	printf("5개의 정수를 입력하세요 : ");

	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &line[i]);
	}

	printf("짝수 :");
	for (i = 0; i < 5;i++)
	{
		if (line[i] % 2 == 0)
		printf("%2d", line[i]);
	}
	printf("\n");
	printf("홀수 :");
	for (i = 0; i < 5;i++)
	{
		if (line[i] % 2 == 1)
			printf("%2d", line[i]);
	}

	return 0;
}