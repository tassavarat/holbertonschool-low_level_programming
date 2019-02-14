#include <stdio.h>

/**
 * main - Prints sum of even-even valued terms below 4,000,000
 *
 * Return: 0
 */
int main(void)
{
	long x = 2;
	long y = 4;
	int runX = 1;

	printf("%ld, %ld", x, y);
	while (x < 4000000 && y < 4000000)
	{
		if (runX == 1)
		{
			x += y;
			if (x > 4000000)
			{
				printf("test");
				break;
			}
			printf(" %ld", x);
			printf(",");
			runX = 0;
		}
		else
		{
			y += x;
			if (y > 4000000)
			{
				printf("test");
				break;
			}
			printf(" %ld", y);
			printf(",");
			runX = 1;			
		}
	}
	printf("\n");
	return (0);
}
