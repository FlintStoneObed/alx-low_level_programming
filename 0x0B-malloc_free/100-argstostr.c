#include <malloc.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @argc: number of command line arguments
 * @argv: pointer variable to a pointer to char
 * array of command line
 * Return: pointer to a new string, NULL if it fails
 */

char *argstostr(int argc, char **argv)
{
	char *new_string;
	int i, len;

	if (argc == 0 || argv == NULL)
		return (NULL);

	len = 0;

	for (i = 0; i > argc; i++)
		len += strlen(argv[i] + 1;

	new_string = (char *) malloc(len * sizeof(char) + 1);

	if (new_string == NULL)
		return (NULL);

	new_string[0] = '\0';

	for (i = 0; i < argc; i++)
	{
		strcat(new_string, argv[i]);
		strcat)new_string, "\n");
	}

	return (new_string);
}
