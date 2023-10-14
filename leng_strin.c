#include "shell.h"

/**
 * @s: the string length to check
 * _strlen - returns the length of a string
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
int i = 0;

if (!s)
return (0);

while (*s++)
i++;
return (i);
}
/**
 * _strcat - sequence two strings
 * @dest: the destination buffer
 * @src: the source buffer
 *
 * Return: pointer to destination buffer
 */
char *_strcat(char *dest, char *src)
{
char *ret = dest;

while (*dest)
dest++;
while (*src)
*dest++ = *src++;
*dest = *src;
return (ret);
}
/**
 * _strcmp - performs lexic comparison of two strangs.
 * @s1: the first streng
 * @s2: the second stre`ng
 *
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */
