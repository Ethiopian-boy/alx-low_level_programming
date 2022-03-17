#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: input value to check
 * Return: nothing.
 */

void print_line(int n)
{

	if (n > 0)

	{

	while (n > 0)
	{
		_putchar('_');
		n -= 1;
	}

	}
	else
		_putchar('\n');
	_putchar('\n');
}
