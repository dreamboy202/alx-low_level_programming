#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 100)
	{
		int ones = num % 10;
		int tens = (num / 10) % 10;

		if (tens < ones)
		{
			putchar(tens + '0');
			putchar(ones + '0');

			if (num < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		num++;
	}

	putchar('\n');
	return (0);
}
