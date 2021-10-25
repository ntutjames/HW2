#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k,b,l;
	printf("enter breadth:");
	scanf_s("%d", &b);
	printf("enter length:");
	scanf_s("%d", &l);

	for(i=1;i<=b;i++)
	{ 
		printf("+");
	}
	printf("\n");
	for (j = 1; j <= l-2 ; j++)
	{
		printf("+");
		for (k = 1; k <= b-2; k++)
		{
			printf(" ");
		}
		printf("+");
		printf("\n");
	}
	for (i = 1; i <= b; i++)
	{
		printf("+");
	}
	
}