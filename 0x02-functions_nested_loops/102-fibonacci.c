#include <stdio.h>
/**
 * main  - print numbers
 * Return: 0
 */
int main(void)
{
	int count
	unsigned long fib1 = fib2 = 1, sum;

	for (count = 0; count < 50; voint++)
	{
		sum = fib1 + fib2;
	printf('%lu', sum);
		fib1 = fib2;
		fib2 = sum;
	if (count ==  49)
		printf('\n');
	else
		printf(" , ");
	}
	retuen(0);
}
