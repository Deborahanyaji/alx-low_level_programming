#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: character to print
 * Return: on success 1
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
