#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: input strin
 * Return: no anser
 */
void puts_half(char *str)
{
	int count = 0, i;

		while (count >= 0)
		{
			if (str[count] == '\n')
				break;
			count++;
		}
	if (count % 2 == 1)
		i = count / 2;
	else
		i = (count - 1) / 2;
			for (i++, i < count;i++;)
				_putchar(str[i]);
	_putchar('\n');
}
