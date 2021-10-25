#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int work;
	float hw, mw, pw;
	printf("enter number(manager->1;hourly worker->2;mission worker->3;pieceworker->4;end->5)\n");
	scanf_s("%d", &work);
	while (work != 5)
	{
		switch (work)
		{
		case 1:

			printf("Your salary is $1000\n");
			break;
		case 2:

			printf(" how long for work:");
			scanf_s("%f", &hw);
			if (hw <= 40)
			{
				printf("Your salary is $%.2f\n", hw * 5);
			}
			else
			{
				hw = hw - 40;
				hw = hw * 5 * 1.5 + 40 * 5;
				printf("Your salary is $%.2f\n", hw);
			}
			break;

		case 3:

			printf(" sale:");
			scanf_s("%f", &mw);
			mw = 250 + mw * 0.057;
			printf("Your salary is $%.2f\n", mw);
			break;

		case 4:

			printf(" how many you make:");
			scanf_s("%f", &pw);
			pw = pw * 0.5;
			printf("Your salary is $%.2f\n", pw);
			break;

		default:

			printf("error\n");
			break;
		}
		printf("enter number(manager->1;hourly worker->2;mission worker->3;pieceworker->4;end->5)\n");
		scanf_s("%d", &work);
	}
}