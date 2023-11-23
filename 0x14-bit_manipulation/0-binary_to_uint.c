#include"main.h"

#include <stdlib.h>

int _putchar(char c);

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to the binary string.
 * Return: converted num, or 0 if there is invalid character in string.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;

if (b == NULL)
return (0);

while (*b)
{
if (*b != '0' && *b != '1')
return (0);

result = (result << 1) | (*b - '0');
b++;
}

return (result);
}
