#include "main.h"

/**
 * print_triangle - function that prints a square, followed by a new line
 * @size: size of triangle
 * Return: nothing.
 */

void print_triangle(int size)
{
	int row, col, star;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				star = (size - row) - 1;
				if (col < star)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
