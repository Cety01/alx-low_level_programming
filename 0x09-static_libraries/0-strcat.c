#include "main.h"
/**
 * _strcat - Concatenates two strings
 *
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int length, i;

	length = 0;
	while (dest[length] != '\0')
		length++;

	i = 0;
	while (src[i] != '\0')
	{
		dest[length] = src[i];
		length++;
		i++;
	}

	dest[length] = '\0';

	return (dest);
}
