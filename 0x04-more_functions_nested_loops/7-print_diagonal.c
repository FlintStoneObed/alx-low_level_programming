#include "main.h"

/**
 * print_diagonal - draws a diagonal lines on the terminal
 *
 * @n: number of times the character \ should be printed
 *
 * Return: Void (Success)
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
