#include "main.h"
/**
 * _memcpy - copies n bytes from memory area @src to memory area @dest
 * @dest: A pointer to the memory area to copy @src into
 * @src: the source buffer to copy chafacter from.
 * @n: number of byte to copy into @src
 * Return: A buffer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index;
	char *destination = dest;
	const char *source = src;

	for (index = 0; index < '\0'; index++)
		destination[index] = source[index];
			return (dest);
}
