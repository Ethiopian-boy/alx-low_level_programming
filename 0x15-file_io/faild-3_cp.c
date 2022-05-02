#include "main.h"
#include <stdio.h>

/**
 * check_file - check if file opens and available to copy
 * @file_from: file to copy
 * @file_to: file to be stored
 * @argv: argument vector
 *
 * Return: no return
 */

void check_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %S\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}



}

/**
 * main - main function to check
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, to_close;
	char buf[1024];
	ssize_t cp, CRW;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND | 0664);
	check_file(file_from, file_to, argv);

	cp = 1024;
	while (cp == 1024)
	{
		cp = read(file_from, buf, 1024);
		if (cp == -1)
			check_file(-1, 0, argv);
		CRW = write(file_to, buf, cp);
		if (CRW == -1)
			check_file(0, -1, argv);
	}
	to_close = close(file_from);
	if (to_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	to_close = close(file_to);
	if (to_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
