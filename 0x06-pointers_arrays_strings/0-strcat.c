#include "main.h"

/**
 * _strcat - concentrate two string
 * @dest: pointer 1
 * @src: pointer 2
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
		return (dest);
}
