#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 on success, 1 otherwise.
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}	
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
