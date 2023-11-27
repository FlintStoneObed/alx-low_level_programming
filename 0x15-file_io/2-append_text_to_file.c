#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor, write_status, close_status;

if (filename == NULL)
return (-1);

file_descriptor = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
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
 * Return: The length of the string.
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
