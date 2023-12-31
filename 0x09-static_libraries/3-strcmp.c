#include "main.h"
/**
 * _strcmp - Compares two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 * Return: An integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			break;
		i++;
	}

	return (s1[i] - s2[i]);
}
