#include<stdio.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = '0';
	int alph_af = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (alph_af <= 'f')
	{
		putchar(alph_af);
		alph_af++;
	}

	putchar('\n');
	return (0);
}
