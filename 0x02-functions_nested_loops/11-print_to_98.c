#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - prints all natural numbers from n to 98
 * @n: input number to check
 * Return: nothing.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n += 1;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n -= 1;
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
