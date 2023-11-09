#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @seperator: separates numbers
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va-start(numbers, n);
	i = n;

	while (i--)
	{
		printf("%d%s", va_arg(numbers, int),
				(separator && i) ? separator : "");
	}
	putchar('\n');
	va_end(numbers);
}
