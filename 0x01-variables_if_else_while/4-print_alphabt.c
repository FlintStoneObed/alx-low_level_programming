#include<stdio.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_alph = 'a';

	while (lower_alph <= 'z')
{
	if (lower_alph != 'q' && lower_alph != 'e')
	{
	putchar(lower_alph);
	}
	lower_alph++;
	}
	putchar('\n');

	return (0);
}
