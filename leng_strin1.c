#include "shell.h"
/**
 * _putchar - writes  ccharacter c to stdout
 * @c: The character to pprint
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
/**
 * _strcpy - copies   stringg
 * @dest:  ddestination
 * @src:  ssource
 *
 * Return: pointer to ddestination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
	dest[i] = src[i];
	i++;
}
dest[i] = 0;
return (dest);
}

