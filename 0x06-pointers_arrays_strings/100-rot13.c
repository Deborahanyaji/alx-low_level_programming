#include "main.h"

/**
 * root13 - encode string to root13
 * @s: string to code
 *
 * Return: address of s
 */
char *rot13(char *s);
{
	char a[] = "
ABCDEFGHIJKLMNOPQRSTUVWXY
abcdefghijklmnopqrstuvwxyz"
;
	char b[] = "
NOPQRSTUVWXYZABCDEFGHIJKLM
nopqrstuvwxyzabcdefghijklm"
;

	int  a, b;

	for (a = 0; *(s + a); a++)
	{
	for (b = 0; b < 52; b++)
	{
	if (a[b] == *(s + a))
	{
	*(s + a) = b[b];

		break;
				}
			}
	}
		return (s);
}

