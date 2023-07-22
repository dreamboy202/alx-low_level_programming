#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 1000; num++)
	{
		int ones = num % 10;
		int tens = (num / 10) % 10;
		int hundreds = (num / 100) % 10;

		if (hundreds < tens && tens < ones)
		{
			putchar(hundreds + '0');
			putchar(tens + '0');
			putchar(ones + '0');

			if (num < 789) /* To print ',' and ' ' for all combinations except 789 */
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
