#include "lists.h"

/**
 * print_list -function that prints all the elements of a list_t list.
 * @h: the string
 * Return: Always i (Success)
*/

size_t print_list(const list_t *h)
{
const list_t *cursor = h;
size_t i = 0;

while (cursor != NULL)
{
if (cursor->str != NULL)
printf("[%d] %s\n", cursor->len, cursor->str);
else
printf("[0] (nil)\n");
i++;
cursor = cursor->next;
}

return (i);
}
