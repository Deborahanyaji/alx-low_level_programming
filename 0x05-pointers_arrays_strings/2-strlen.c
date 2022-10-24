#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string pointer for the string
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int p = 0;

	/*increment up to the last character is NULL, \0*/
	while (*(s + p) != 0)
	{
		p++;
	}
		return (p);
}

