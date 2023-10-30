#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to initialize with
 * Return: pointer to array, null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *char_array;

	if (size <= 0)
		return (NUL);

	char_array = (char *) malloc(size);

	if (char_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(char_array + i) = c;
	*(char_array + 1) = '\0';

	return (char_array);
}
