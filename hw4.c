#include <stdio.h>
int solve(int num)
{
	if (num < 2)
	{
		if (num % 2 == 0)
			printf("0");
		else printf("1");
		return;
	}
	else
	{
		solve(num/2);
		if (num % 2 == 0)
			printf("0");
		else printf("1");
	}
}

int main(void)
{
	int num=20;
	printf("please enter a number : %d\n", num);
	printf("%d", solve(num));
	return 0;
}