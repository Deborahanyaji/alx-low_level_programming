#include <stdio.h>
#include <stdlib.h>
/**
 * main -  function to print multiplication results
 * @argc: number of arguments
 * @argv: argument supplied
 * Return: 1 if less than two arg var supplied otherwise 0
 */
int main(int argc, char **argv)
{
	int a = 0, b = 0;

	if (argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
