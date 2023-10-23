#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		j + 0;
		while (haystack[i + j] == needle[j] && needle[j])
			j++;

		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
