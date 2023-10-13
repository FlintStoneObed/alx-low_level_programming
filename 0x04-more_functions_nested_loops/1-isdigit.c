#include "main.h"

/**
 * main - checks for a digit 0 through 9
 * @c: char to be checked
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
