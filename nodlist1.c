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
/**
 * list_to_strings - reeturns array of strings of list->str
 * @head: pointer to first nodee
 *
 * Return: array of stringss
 */
char **list_to_strings(list_t *head)
{
	list_t *node = head;
	size_t i = list_len(head), j;
	char **strs;
	char *str;
if (!head || !i)
return (NULL);
strs = malloc(sizeof(char *) * (i + 1));
if (!strs)
	return (NULL);
for (i = 0; node; node = node->next, i++)
{
str = malloc(_strlen(node->str) + 1);
if (!str)
{
	for (j = 0; j < i; j++)
	free(strs[j]);
	free(strs);
	return (NULL);
	}
str = _strcpy(str, node->str);
	strs[i] = str;
}
strs[i] = NULL;
return (strs);
}

