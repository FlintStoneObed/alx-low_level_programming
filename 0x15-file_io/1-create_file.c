#include "main.h"

/**
 * create_file - Creates a function that creates a file.
 * @filename: Name of the file to be created.
 * @text_content: The NULL-terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
int file_descriptor, write_status, close_status;

if (filename == NULL)
return (-1);

file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (file_descriptor == -1)
return (-1);

if (text_content != NULL)
{
write_status = write(file_descriptor,
text_content, sizeof(char) * _strlen(text_content));
if (write_status == -1)
{
close(file_descriptor);
return (-1);
}
}

close_status = close(file_descriptor);
if (close_status == -1)
return (-1);

return (1);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: String to calculate the length of.
 * Return: Length of the string.
 */

size_t _strlen(char *str)
{
size_t len = 0;

while (*str != '\0')
{
len++;
str++;
}

return (len);
}
