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
	char separators[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?',
			       '(', ')', '{', '}'};

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		for (j = 0; j < 13; j++)
		{
			if (s[i - 1] == separators[j] && s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		i++;
	}

	return (s);
}
