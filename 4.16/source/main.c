#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k, l;
	for (i = 1; i <=10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i <= 9; i++)
	{
		for (j = 10-i; j >= 1; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 10 - i; j >= 1; j--)
		{
			printf("*");
		}

		printf("\n");
	}
	printf("\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 10 - i; j >= 1; j--)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}