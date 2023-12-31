#include "main.h"
/**
 * _strncat - Concatenates two strings
 *
 * @dest: The destination string
 * @src: The source string
 * @n: max bytes used
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	length = 0;
	while (dest[length] != '\0')
		length++;

	i = 0;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[length + i] = src[i];

	dest[length + i] = '\0';

	return (dest);
}
