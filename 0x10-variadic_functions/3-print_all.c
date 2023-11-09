#include "variadic_functions.h"
#define is_fmt(c) (c == 'c' || c == 'i' || c == 's' || c == 'f')

/**
 * print_all - Greatest printer of all time
 * @format: list of argument types passed to funct
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str, *tmp_fmt;

	va_start(args, format);

	/* get a writable version of the format */
	tmp_fmt = (char *)format;

	while (tmp_fmt && *tmp_fmt != '\0')
	{
		switch (*tmp_fmt)
		{
		case 'c':
			putchar(va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)"; /* write (nil) if string is NULL */
			printf("%s", str);
			break;
		default:
			++tmp_fmt;
			continue; /* invalid format mark - discard move on */
		}
		/* add separator */
		if (is_fmt(*tmp_fmt) && *(tmp_fmt + 1) != '\0')
			printf(", ");

		++tmp_fmt; /* check the next format mark */
	}

	putchar('\n');
	va_end(args);
}
