#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	int maxPrime, oddNum;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n /= 2;
	}
	for (oddNum = 3; oddNum <= sqrt(n); oddNum += 2)
	{
		while (n % oddNum == 0)
		{
			maxPrime = oddNum;
			n /= oddNum;
		}
	}
	if (n > 2)
		maxPrime = n;
	printf("%i\n", maxPrime);
	return (0);
}
