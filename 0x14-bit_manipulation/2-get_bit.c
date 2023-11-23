#include "main.h"

/**
 * get_bit - Returns value of a bit at given index.
 * @n: The number containing bit
 * @index: Index of bit to retrieve, start from 0.
 * Return: The value of bit at specified index, or -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{

if (index >= (sizeof(unsigned long int) * 8))
return (-1);

return ((n >> index) & 1);
}
