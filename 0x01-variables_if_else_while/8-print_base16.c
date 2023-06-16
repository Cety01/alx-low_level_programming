#include <stdio.h>
/**
 * main - entry point
 *
 * Return: zero
 */
int main(void)
{
	int i;
	int a;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
