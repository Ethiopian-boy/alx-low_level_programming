#include "stdio.h"

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: int.
 */

int main(void)
{
	long i = 0;
	long j = 1;
	int n = 0;
	long tmp;

	while (n < 50)
	{
		tmp = j + i;
		if (n != 49)
			printf("%ld, ", tmp);
		else
			printf("%ld\n", tmp);
		i = j;
		j = tmp;
		n += 1;
	}
	return (0);
}
