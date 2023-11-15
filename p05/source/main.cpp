#include<stdio.h>
#include<stdlib.h>

int main(void)
{

	int n[10] = {60,70,56,80,99,97,98,55,44,33};
	int i;
	printf("%s%13s\n", "Element", "Value");
	for (i = 0; i < 10; i++)
	{
		printf("%7d%13d\n", i, n[i]);
	}
	system("pause");
	return 0;
}
