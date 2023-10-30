#include "main.h"
#include <string.h>
#define check_null(s) ((s == 0) ? (s = "") : s)

/**
 * str_concat - function that concatenates two strings
 * @s1: str 1
 * @s2: str 2
 * Return: a pointer to a newly allocated space in memeory which
 * contains the contents of @s1 and @s2, NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *new_string;
	unsigned int i, j, len;

	check_null(s1);
	check_null(s2);

	len = strlen(s1) + strlen(s2);

	new_string = (char *) malloc(len + 1);

	if (new_string == NULL)
		return (NULL);

	i = 0;
	while (*(s1 + i))
	{
		*(new_string + i) = *(s1 + i);
		i++;
	}

	j = i;

	i = 0;
	while (*(s2 + i))
	{
		*(new_string + j) = *(s2 + i);
		i++;
		j++;
	}
	*(new_string + j) = '\0';

	return (new_string);
}
