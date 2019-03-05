#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minumum number of coins to make change
 * @argc: Number of command line arguments
 * @argv: Array containing command line arguments
 *
 * Return: 0 if success, 1 if not
 */
int main(int argc, char *argv[])
{
	int i;
	int cents = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(*(argv + 1));
	if (money < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; ++i)
		{
			if (money / coins[i])
			{
				cents += money / coins[i];
				/*printf("%d = %d / %d\n", cents, money, coins[i]);*/
			}
			if (money % coins[i])
			{
				money %= coins[i];
				/*printf("money = %d\n", money);*/
			}
			if (!(money % coins[i]))
				break;
		}
		printf("%d\n", cents);
	}
	return (0);
}
