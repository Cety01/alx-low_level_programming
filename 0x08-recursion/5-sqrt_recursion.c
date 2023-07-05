#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number
 * Return: the natural square root of n, or -1 if n does not have one.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - helps find the natural square root of a number.
 *
 * @n: the number to find the natural square root of
 * @i: the current guess
 * Return: the natural square root of n, or -1 if n does not have one.
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}
