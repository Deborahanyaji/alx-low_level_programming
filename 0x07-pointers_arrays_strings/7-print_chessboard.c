#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints a chessboard.
 * @a: cheeseboard to be printed
 */
void print_chessboard(char (*a)[8])
{
	int indx1, indx2;
	int _putchar

	for (indx1 = 0; a[indx1][7]; indx1++)
	{
		for (indx2 = 0; indx2 < 8; indx2++)
			
			_putchar(a[indx1][indx2]);
	}
				_putchar('\n');
}
