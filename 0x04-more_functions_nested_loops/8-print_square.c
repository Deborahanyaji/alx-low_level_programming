#include "main.h"

/**
 * print_square - print swuare using the chafacter #
 * @size: the size of the square
 */
void print_square(int size)
{
	int hgt, wid;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wid = 0; wid < size; wid++)

				_putchar('#');
			if (hgt == size - 1)
				_putchar('\n');
		}
	}
			_putchar('\n');
}
