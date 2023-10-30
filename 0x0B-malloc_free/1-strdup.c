#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * @str: string to duplicate
 * Return: Pointer to yhr duplicated string, NULL if it fails
 */

char *_strdup(char *str)
{
	char *dup_str;
	int i = 0;

	if (str == NULL)
		return (NULL);

	dup_str = (char *) malloc(strlen(str) + 1);

	if (dup_str == NULL)
		return (NULL);

	while (*(str + i))
	{
		*(dup_str + i) = *(str + i);
		i++;
	}
	*(dup_str + i) = '\0';

	return (dup_str);
}
