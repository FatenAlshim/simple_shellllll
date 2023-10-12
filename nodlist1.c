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
/**
 * get_node_index - getss the index of node
 * @head: pointer to list head
 * @node: pointer to node
 *
 * Return: index of node or -1
 */
ssize_t get_node_index(list_t *head, list_t *node)
{
	size_t i = 0;

	while (head)
	{
		if (head == node)
			return (i);
		head = head->next;
		i++;
	}
	return (-1);
}
/**
 * node_starts_with - returns node whosee string starts with prefix
 * @node: pointer too list headd
 * @prefix: string to matchh
 * @c: next character aafter prefix to match
 *
 * Return: match node or null
 */
list_t *node_starts_with(list_t *node, char *prefix, char c)
{
	char *p = NULL;
while (node)
{
p = starts_with(node->str, prefix);
if (p && ((c == -1) || (*p == c)))
return (node);
node = node->next;
}
return (NULL);
}

