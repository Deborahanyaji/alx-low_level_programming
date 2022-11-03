#include "main.h"

/**
 * prime_var - checking for prime n against each variable
 * @n: integer value being passed for checking
 * @var: varriable being tested against for checking prime number
 * Return: 1 if prime 0
 */
int prime_var(int n, int var)
{
	if (n % var == 0)
		return (0);
	if (var == n - 1)
		return (1);
	return (prime_var(n, var + 1));
}
/**
 * is_prime_number - function that returns 1 if the input integer
 * @n: integer value being passed
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (0);
	if (n < 0)
		return (0);
	return (prime_var(n, 2));
}
