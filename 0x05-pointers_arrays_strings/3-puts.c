#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 *@str: input string
 *Return: string
 */
void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
		_putchar('\n');
}

