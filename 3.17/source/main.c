#include<stdio.h>
#include<stdlib.h>
int main()
{
	float  bb, ch, cre, lim;
	int ac;
	
	while (1)
	{
		
	        printf("enter account number\n");
			scanf_s("%d", &ac);
			if (ac != -1)
		{
			printf("enter beginning balance\n");
			scanf_s("%f", &bb);
			printf("enter charges\n");
			scanf_s("%f", &ch);
			printf("enter credits\n");
			scanf_s("%f", &cre);
			printf("enter credit limit\n");
			scanf_s("%f", &lim);
			printf("account: %d\n", ac);
			printf("credit limit: %f\n", lim);
			printf("balance: %f\n", bb + ch - cre);
			if ((bb + ch - cre) > lim)
			{
				printf("credit limit exceeded\n");
			}
			else
			{
				printf("credit limit not exceeded\n");
			}
		}
		else
		{
			break;
		}
		
	} 
}