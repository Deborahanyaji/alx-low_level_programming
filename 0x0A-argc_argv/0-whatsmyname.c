#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - function to print file name
 * @argc: count the argument supplied to the programe
 * @argv: an array of pointers to the string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
