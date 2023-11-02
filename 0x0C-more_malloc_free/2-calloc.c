#include "main.h"

void *_memset(void *mem_area, int c, unsigned int size);

/**
 * _calloc - allocate dynamic memory
 * @nmemb: number of elements
 * @size: number of bytes to allocate
 *
 * Return: pointer to the allocated memory, NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new_mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new_mem = malloc(nmemb * size);
	if (new_mem == NULL)
		return (NULL);

	_memset(new_mem, 0, nmemb * size);

	return (new_mem);
}

/**
 * _memset - fill memory with constant byte
 * @mem_area: the memory area to set
 * @c: the byte to write
 * @n: the number of bytes to write
 *
 * Return: a pointer to memory area @mem_area
 */

void *_memset(void *mem_area, int c, unsigned int n)
{
	unsigned int i;
	unsigned char *temp_mem_area;

	if (mem_area == NULL || n <= 0)
		return (mem_area);

	temp_mem_area = (unsigned char *) mem_area;

	for (i = 0; i < n; i++)
		temp_mem_area[i] = c;

	return (mem_area);
}
