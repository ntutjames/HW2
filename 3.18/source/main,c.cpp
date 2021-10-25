#include<stdio.h>
#include<stdlib.h>
int main()
{
	float money;
	
	while (1)
	{   printf("enter sales in dollars\n");
	    scanf_s("%f", &money);
		if (int(money) != -1)
		{
			printf("salary is:%f", 0.09*money + 200);
			printf("\n");
			printf("\n");
		}
		else
		{
			break;
		}
	} 

}