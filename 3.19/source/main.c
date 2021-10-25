#include<stdio.h>
#include<stdlib.h>
int main()
{
	float prin, inter, rate, days;
	
	while(1)
	{	printf("enter loan principal\n");
		scanf_s("%f", &prin);
		if ( prin != -1)
		{
			printf("enter interest rate\n");
			scanf_s("%f", &rate);
			printf("enter term of the loan in days\n");
			scanf_s("%f", &days);
			inter = (prin*rate*days) / 365;
			printf("the interest charge is:%f", inter);
			printf("\n");
			printf("\n");
		}
		else 
		{
			break;
		}
	} 
}