#include "main.h"
/**
 * _islower - check if character c is lower
 *Return: 1 if chars is a lowercase otherwise return 0
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}