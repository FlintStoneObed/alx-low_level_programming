#include<stdio.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int only_ones;
	int only_tens;

	for (only_tens = '0'; only_tens < '9'; only_tens++)
	{
		for (only_ones = (only_tens + 1); only_ones <= '9'; only_ones++)
		{
			putchar(only_tens);
			putchar(only_ones);

			if (only_tens != '8' || only_ones != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
