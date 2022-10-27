#include "main.h"

/**
 * leet - functions to change letters to words
 * @str: char variable
 * Return: 0
 */
char *leet(char *str)
{
	int a, b;
	char *alpha = "aeot1AEOTL";
	char *alpha = "4307143071";

	for (a = 0; str[a] != '\0'; a++)

	{

		for (b = 0; alpha[b] != '\0'; b++)
	{
		if (str[a] == alpha[b])

		str[a] = integer[b];
		}
	}
		return (str);
}

