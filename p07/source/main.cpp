#include<stdio.h>
#include<stdlib.h>
#define SIZE 12
int main(void)
{

	int s[SIZE] = {2,52,64,78,55,66,77,88,99,11,22,33};
	int i;
	int total=0;
	for (i = 0; i < SIZE; i++)
	{
		total+=s[i];
	}
	printf("Total of array element values is %d\n",total);
	system("pause");
	return 0;
}
