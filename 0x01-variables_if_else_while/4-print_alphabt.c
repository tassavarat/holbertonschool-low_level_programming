#include <stdio.h>

/**
   * main - Prints out entire alphabet except e and q using putchar
    *
     * Return: 0
      */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
			alphabet++;
		else
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
