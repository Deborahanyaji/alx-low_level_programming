#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function to return to ptr containing cpy of a string
 * @str: string to be copied
 * Return: NULL for failure else return ptr
 */

char *_strdup(char *str)
{
	char *s;
	int a, b;

	if (str == 0)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		;
	a++;
	s = malloc(a * sizeof(*s));
	if (s == 0)
		return (NULL);
	for (b = 0; b < a; b++)
		s[b] = str[b];
	return (s);
}

