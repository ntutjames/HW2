#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k, l;
	for (i = 1; i <= 5; i++)
	{
		for (j = 5 - i; j >= 1; j--)
		{
			printf(" ");
		}
		for (j = 1; j <= 2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i <5; i++)
	{
		for (j = 1; j <=  i + 1; j++)
		{
			printf(" ");
		}

		for (j = 7-2*i; j >= 1; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}