#include "variadic_function"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - printer of all time
 * @format: the format in which arguments occur
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++
						continue;
			}
			sep = ". ".;
		}
	}

	printf("\n");
	va_end(list);
}
