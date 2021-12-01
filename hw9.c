#include <stdio.h>

typedef struct city
{
	char Name[50];
	char Country[50];
	char Population[50];
}City;

int main(void)
{
	int i;
	City input[3];

	printf("Input three cities :\n");
	for (i = 0;i < 3;i++)
	{
		printf("Name> ");
		scanf_s("%s", input[i].Name, sizeof(input[i].Name));
		printf("Country> ");
		scanf_s("%s", input[i].Country, sizeof(input[i].Country));
		printf("Population>");
		scanf_s("%s", input[i].Population,sizeof(input[i].Population));
	}

	printf("\n");
	printf("Printing the three cities:\n");
	for (i = 0;i < 3;i++)
	{
		printf("%d. %s in %s with a population of %s people\n", i+1, input[i].Name, input[i].Country, input[i].Population);
	}
	return 0;
}