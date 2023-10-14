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
