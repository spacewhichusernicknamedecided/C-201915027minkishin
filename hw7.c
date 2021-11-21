#include <stdio.h>
#include <math.h>

double pow(double a, double b);
double sqrt(double x);

void D(double * ref,int len)
{
	double sum,ave,sum2;
	int i;
	sum = sum2=0;
	for (i = 0; i < len; i++)
	{
		sum = sum + ref[i];
	}
	ave = sum / len;
	for (i = 0;i < len;i++)
	{
		sum2 += pow(ref[i] - ave, 2);
	}
	printf("%lf", sqrt(sum2/len));
}


int main(void)
{
	double a[5];
	int i;
	printf("Plese enter 5 real number :");
	for (i = 0;i < 5;i++)
	{
		scanf_s("%lf", &a[i]);
	}
	printf("Standard Deviation =  ");
	D(a, sizeof(a) / sizeof(double));
	
	return 0;
}