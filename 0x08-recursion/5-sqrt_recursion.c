#include "main.h"

/**
 * root_var - function to compare variable of a number
 * @n: the integer value being tested for root
 * @var: var being tested against n
 * Return: var for root else -1
 */
int root_var(int n, int var)
{
	if (var * var == n)
		return (var);
	if (var * var < n)
		return (root_var(n, var + 1));
	return (-1);
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number being passed
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 1)
		return (-1);
	return (root_var(n, 2));
}
