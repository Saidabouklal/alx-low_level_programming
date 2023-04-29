#include "lists.h"
#include <string.h>

/**
 * add_node_end -function that add new node.
 * @str: the string
 * @head: the head
 * Return: Always i (Success)
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *st;
	int lent = 0;
	list_t *tmp;
	list_t *new = (list_t *) malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	st = strdup(str);

	if (st == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[lent])
		lent++;

	new->str = st;
	new->len = lent;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
return (*head);
}
