#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies n bytes from memory area @src to memory area @dest
 * @dest: A pointer to the memory area to copy @src into
 * @src: the source buffer to copy chafacter from.
 * @n: number of byte to copy into @src
 * Return: A buffer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *destination = dest;
	const char *source = src;

	for (n = 0; n <= '\0'; n++)
		destination[n] = source[n];
			return (dest);
}
