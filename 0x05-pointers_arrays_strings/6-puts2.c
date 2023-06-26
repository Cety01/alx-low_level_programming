#include "main.h"

/**
 * puts2 - prints every other character of a string starting with the first
 *
 * @str: string to print characters from
 */
void puts2(char *str)
{
	int i = 0;
	int length = 0;

	while (str[length] != '\0')
		length++;


	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
