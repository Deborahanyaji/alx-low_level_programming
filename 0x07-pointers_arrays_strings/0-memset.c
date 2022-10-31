#include "main.h"
/**
 * memset - function fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @b
 * @s: pointer to memory to be filled
 * @b: the character to fill the memory
 * @n: number of  bytes to be filled
 * Return: a pointer to be filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

		for (index = 0; index < n; index++)
		memory[n] = value;
	return (memory);
}
