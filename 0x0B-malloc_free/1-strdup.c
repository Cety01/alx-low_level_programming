#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 *
 * @str: The string to duplicate.
 * Return: If str is NULL - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	unsigned int len, i;
	char *dup;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
