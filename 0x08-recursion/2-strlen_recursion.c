#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 *
 * @s: string.
 * Return: length of a string.
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
		return (0);
	n = _strlen_recursion(s + 1);
	return (n += 1);
}
