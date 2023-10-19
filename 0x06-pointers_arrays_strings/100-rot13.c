#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @x: the string to encode
 * Return: x
 */

char *rot13(char *x)
{
	int i, j;

	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVQXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; x[i] != '\0'; i++)
		for (j = 0; a[j] != '\0'; j++)
			if (x[i] == a[j])
			{
				x[i] = b[j];
				break;
			}
	return (x);
}
