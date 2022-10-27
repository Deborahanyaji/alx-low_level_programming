#include "main.h"

/**
 * _strcmp - function should work exactly like strcmp
 * @s1: var pointer
 * @s2: pointer
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
	if (s1[a] != s2[a])
		return (s1[a] - s2[a]);
	}
		return (0);
}
