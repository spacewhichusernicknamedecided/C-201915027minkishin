#include <stdio.h>

int main(void)
{
	double num1 = 3.5253;
	double num2 = 1.609;
	double num3 = num1 / num2;
	printf ("Please enter kilometers : %.4f \n", num1);
	printf("%.1f km is equal to %.1f miles. \n", num1, num3);
	return 0;

}
