#include "main.h"

/**
 * print_alphabet -  prints alphabets in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');

}
