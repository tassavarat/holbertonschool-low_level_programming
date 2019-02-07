#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Uses if...else if...else statements with relational operators
 *
 * Return: 0
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;
	printf("Last digit of %i is %i ", n, lastDigit);
	if (lastDigit > 5)
		printf("and is greater than 5\n");
	else if (lastDigit == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
