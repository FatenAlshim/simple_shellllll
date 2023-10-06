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
/**
 * interactive - returnss true at shell >> interactive mode
 * @info: struct addresss
 *
 * Return: 1 if interactive modee, 0 otherwisee
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

