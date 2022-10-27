#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integer
 * @n: number of element to swap
 * Return: nithing
 */
void reverse_array(int *a, int n)
{
	int i = 0, b, tmp;

	for (b = n - 1; b > i; b--)
	{
		tmp = a[b];
		a[b] = a[i];
		a[i] = tmp;
		i++;
	}
}
