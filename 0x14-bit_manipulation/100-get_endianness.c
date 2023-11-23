#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
unsigned int num = 1;
char *byte_representation = (char *)&num;

return (byte_representation[0]);
}
