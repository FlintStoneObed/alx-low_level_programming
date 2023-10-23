#include "main.h"

/**
 * _strchr - locate character in string
 * @s: string
 * @c: char to search
 * Return: A pointer to the matched character or NULL if the character
 * is not found.
 */

char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
