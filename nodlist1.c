#include "shell.h"

/**
 * list_len - ddetermines length of list
 * @h: pointer to ffirst nnodee
 *
 * Return: size of listtt
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

