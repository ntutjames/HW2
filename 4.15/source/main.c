#include<stdio.h>
#include<math.h>

int main(void)
{
	double prin = 5000.0;
	double rate = 0.1;
	double amount;
	int year = 1;
	while (rate < 0.125)
	{
		printf("%4s%21s", "Year", "Amount on deposit");
		printf("   rate = %.3f\n", rate);
		for (year = 1; year <= 15; ++year)
		{
			amount = prin * pow(1.0 + rate, year);
			printf("%4u%21.2f\n", year, amount);
		}
		rate += 0.005;
	}
}