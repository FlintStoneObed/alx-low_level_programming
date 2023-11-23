#include "main.h"

/**
 * clear_bit - Sets the value of bit to 0 at given index
 * @n: Pointer to number
 * @index: Staring from 0, of the bit to clear
 * Return: 1 on success or -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n = *n & ~(1UL << index);
return (1);
}
