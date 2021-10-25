#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int a, b, c;
	printf("side1  side2  side3\n");
	for (c = 1; c <= 500; c++)
	{
		for (a = 1; a < c; a++)
		{
			for (b = a + 1; b < c; b++)
			{
				if (c*c == a * a + b * b)
				{
					printf("%5d%5d%10d\n", a, b, c);
				}
			}
		}
	}
	return 0;
}