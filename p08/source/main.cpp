#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main(void)
{

	int s[SIZE] = {11,12,13,14,15,16,17,18,19,9};
	int i;
	int j;
	printf("%s%13s%17s\n", "Element", "Value","Histogram");
	for (i = 0; i < SIZE; i++)
	{
		printf("%7d%13d", i, s[i]);
		for (j = 1; j <= s[i]; j++)
		{
			printf("%c",'*');
		}
		printf("\n");
	}
	

	system("pause");
	return 0;
}
