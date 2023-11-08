#include "function_pointers.h"

/**
 * array_iterator - prints the elements in an array of integers
 * @array: the array to iterate
 * @size: the size of the array
 * @action: pointer to print regular
 * Return: Success 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
