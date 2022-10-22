#include "main.h"

/**
 * print_diagonal - draw a diagonal line ising the \ character
 * @n: tge number of \characers to be printed
 */
void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n
; len++)
		{
			for (space = 0; space < len
; space++)
				_putchar (' ');
		_putchar('\\');
			if (len == n - 1)
			_putchar('\n');
		}
	}

		_putchar('\n');
}
