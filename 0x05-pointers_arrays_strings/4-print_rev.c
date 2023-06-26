#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string to print in reverse
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	for (int i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}