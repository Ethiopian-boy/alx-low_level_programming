#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: input value to check
 * Return: nothing.
 */

void print_line(int n)
{
	while(n > 0)
	{
		_putchar('_');
		n -= 1;
	}
	_putchar('\n');
}
