#include "main.h"
/**
 * _strpbrk - function locates the first occurrence in the string
 * @s of any of the bytes in the string accept
 * @s: string to be searched
 * @accept: set of bytes to be searched for
 * Return: if a set is matched, a pointer to searched byte
 * if not searched is matched NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
				return (s);
		}
		s++;
	}
	return ('\0');
}

