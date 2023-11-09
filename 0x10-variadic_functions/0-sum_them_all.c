#include "variadic_function.h"
#include <stdarg.h>

/**
 * sun_them_all - returns the sum of all its parameters
 * @n: sum of parameters
 * Return: Success 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum, i;
	va_list numbers;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	sum = 0;
	i = n;
	while (i--)
		sum += va_arg(numbers, int);
	va_end(numbers);

	return (sum);
}
