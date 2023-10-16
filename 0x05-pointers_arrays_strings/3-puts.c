#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: string to print
 *
 * Return: Success
 */

void _puts(char *str)
{
	while (*str != '\10')
	{
		_putchar(str++);
	}
		_putchar('\n');
}
