#include "main.h"
/**
 * _strstr - find the first occurrence of the substring needle in the string
 * @haystack: string to be searched
 * @needle: substring to be located
 * Return: if the substring is in the beginning of the located
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int n;

	if (*neddle == 0)
		return (haystack);
	while (*haystack)
	{
		n = 0;
		if (haystack[n] == needle[n])
		{
			do	{
				if (needle[n + 1] == '\0')
					return (haystack);
				n++;
				}	while (haystack[n] == needle[n]);
			}
		}
		haystack++;
	}
			return ('\0');
}



