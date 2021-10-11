#include <stdio.h>
int main(void)
{
	int num=3, x=2, y=num-1;
	printf("Please enter a number: %d \n", num);

	while (1)
	{
		if (x <= y)
		{
			if (num % x == 0)
			{
					printf("It is not a prime number.");
				break;
			}
			else
			{
				x++;
			}
		}
		else
		{
		printf("It is a prime number.");
		break;
		}
	}
return 0;
}

