#include <stdio.h>
#include <string.h>

int con(char ex)
{
	if (ex >= 'A' && ex <= 'Z')
	printf("%c", ex+32);
	else if (ex >= 'a' && ex <= 'z')
	printf("%c", ex-32);
	else
	printf("%c", ex);
}


int main(void)
{
	char a[100];
	int i;

	printf("Input>");
	fgets(a, sizeof(a), stdin);
	int len = strlen(a);

	printf("Output>");
	
	for (i = 0; i < len; i++)
	{
		con(a[i]);
	}


	return 0;
}	

