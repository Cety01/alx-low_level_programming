#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to print half of
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		i = length / 2;
	else
		i = (length - 1) / 2 + 1;

	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
