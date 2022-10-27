#include "main.h"

/**
 * root13 - function to convert to root13 code
 * @strs: string
 * Return: strs
 */
char *rot13(char *strs)
{

	char *alpha_1 = "
ABCDEFGHIJKLMNOPQRSTUVWXY
abcdefghijklmnopqrstuvwxyz "
;

	char *alpha_2 = "
NOPQRSTUVWXYZABCDEFGHIJKLM
nopqrstuvwxyzabcdefghijklm "
;

	int a, b;

	for (a = 0; strs[a] != '\0'; a++)
	{
	for (b = 0; alpha_1[b] != '\0'; b++)
	{
	if (strs[a] == alpha_1[b])
	{
	strs[a] = alpha_2[b];

		break;
				}
			}
	}
		return (strs);
}

