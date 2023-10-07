#include<stdio.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens;
	int ones;
	int t2;
	int o2;

	for (tens = '0'; tens <= 9; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (t2 = tens; t2 <= '9'; t2++)
			{
				for (o2 = ones + 1; o2 <= '9'; o2++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(t2);
					putchar(o2);

					if (!((tens == '9' && ones == '8') && (t2 == '9' && o2 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				o2 = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
