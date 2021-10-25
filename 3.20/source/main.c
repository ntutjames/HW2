#include<stdio.h>
#include<stdlib.h>
int main()
{
	float hour, rate;
	
	while (1)
	{	
		printf("enter hours of work:\n");
		scanf_s("%f", &hour);
		if (hour == -1)
		{
			break;
		}
		else
		{
			printf("enter houly rate:\n");
			scanf_s("%f", &rate);
			if (hour <= 40)
			{
				printf("salary is:\n%f", hour*rate);
				printf("\n");
				printf("\n");
			}
			else if (hour > 40)
			{
				printf("salary is:\n%f", (40 * rate) + (hour - 40)*(rate*1.5));
				printf("\n");
				printf("\n");
			}
		}

	}
	
}