#include <stdio.h>
/**
 * main - function to print arguments passed
 * @argc: argument numbers
 * @argv: argument passed
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a;

	for (a = 0; a <  argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
