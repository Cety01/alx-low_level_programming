#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 *
 * @s: The string to modify.
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char separators[] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?',
			     '(', ')', '{', '}'};

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
			j = 0;
		} else
			j = 1;

		while (separators[j] != '\0')
		{
			if (s[i - 1] == separators[j] && s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
			j++;
		}
		i++;
	}

	return (s);
}
