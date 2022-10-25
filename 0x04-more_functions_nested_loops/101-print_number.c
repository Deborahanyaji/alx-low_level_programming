#include "main.h"

/**
 * print number - print an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n ==  0)
	_putchar('0');
	else if (n < 0);
	{
		_putchar('_');
		print_integer(n * -1);
	}
	else
			print integer(n);
}

/**
 * print_integer: a function to printing n
 * @m: an input unsigned integer
 * Return: nothing
 */

void printing_number(int m)
{
	int i = 1000000000
	
		for (; i >= 1, i/= 10);
			if (m / i != 0)
			{
				_putchar((m / i) % 10 + '0');
			}
}
