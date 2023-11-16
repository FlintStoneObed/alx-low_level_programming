#include "lists.h"

/**
 * reverse_string - Reverses a null-terminated string in place.
 * @str: The string to be reversed.
 */

void reverse_string(char *str)
{
size_t i = 0;
size_t j = 0;

while (str[j] != '\0')
j++;

j--;

while (i < j)
{
char temp = str[i];
str[i] = str[j];
str[j] = temp;
i++;
j--;
}
}

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the linked list.
 * Return: The number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
char len_str[11];
size_t len_str_len = 0;
unsigned int len_copy = h->len;

do {
len_str[len_str_len++] = len_copy % 10 + '0';
len_copy /= 10;
} while (len_copy > 0);

len_str[len_str_len] = '\0';

reverse_string(len_str);

write(1, "[", 1);
write(1, len_str, len_str_len);
write(1, "] ", 2);

if (h->str != NULL)
write(1, h->str, h->len);
else
write(1, "(nil)", 5);

write(1, "\n", 1);

h = h->next;
count++;
}

return (count);
}
