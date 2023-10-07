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
	int only_huns;

	for (only_huns = '0'; only_huns <= '9'; only_huns++)
	{
		for (only_tens = (only_huns + 1); only_tens <= '9'; only_tens++)
		{
			for (only_ones = (only_tens + 1); only_ones <= '9'; only_ones++)
			{
				putchar(only_huns);
				putchar(only_tens);
				putchar(only_ones);

				if (only_huns != '7' || only_tens != '8' || only_ones != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
