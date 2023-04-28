#include "lists.h"

/**
 * list_len -function that returns the number of elements in a linked list.
 * @h: the string
 * Return: Always i (Success)
*/

size_t list_len(const list_t *h)
{
const list_t *cursor = h;
size_t i = 0;

while (cursor != NULL)
{
i++;
cursor = cursor->next;
}

return (i);
}
