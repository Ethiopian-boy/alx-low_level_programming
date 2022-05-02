#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to crea
 * @text_content: content of the file to be created
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int RDWR;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	RDWR = write(fd, text_content, i);

	if (RDWR == -1)
		return (-1);

	close(fd);
	return (1);

}
