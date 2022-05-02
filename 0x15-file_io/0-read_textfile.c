#include "main.h"

/**
 * ssize_t read_text file - reads a text file and prints it
 * to the POSIX standard output
 * @filename : filename
 * @letters : the number of letters it should read and print
 *
 * return : the actual number of letters it could read and print.
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t t1, t2;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	t1 = read(fd, buf, letters);
	if (t1 == -1)
		return (0);

	t2 = write(STDOUT_FILENO, buf, t1);
	if (t2 == -1)
		return (0);

	free(buf);
	close(fd);
	return (t2);
}
