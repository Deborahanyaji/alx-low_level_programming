#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: string to be searched
 * @c: character to be located
 * Return: if c is a pointer to the first occurrence of the characte
 */
char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] >= '\0'; n++)
	{
	if (s[n] == c)
		return (s + n);
	}
		return ('\0');
}

