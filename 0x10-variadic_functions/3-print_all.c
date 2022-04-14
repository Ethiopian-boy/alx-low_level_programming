#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arguments);
void print_int(va_list arguments);
void print_float(va_list arguments);
void print_string(va_list arguments);
void print_all(const char * const format, ...);

/**
 * print_char - print characters
 * @arguments: input arguments
 */
void print_char(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}
/**
 * print_int - print integers
 * @arguments: input arguments
 */
void print_int(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}
/**
 * print_float - print floats
 * @arguments: input arguments
 */
void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}
/**
 * print_string - print strings
 * @arguments: input arguments
 */
void print_string(va_list arguments)
{
	char *args = va_arg(arguments, char *);

	if (args == NULL)
	{
		printf("%p", args);
		return;
	}
	printf("%s", args);
}
/**
 * print_all - prints anything
 * @format: input string
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}
	printf("\n");
	va_end(args);
}
