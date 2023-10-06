#include "shell.h"
/**
 * is_delim - if character is  delimeterr
 * @c: charr to checkk
 * @delim: delimeterr stringg
 * Return: 1 if truee, 0 if falsee
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

