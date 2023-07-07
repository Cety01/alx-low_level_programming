#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 on success, 1 otherwise.
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	} else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
