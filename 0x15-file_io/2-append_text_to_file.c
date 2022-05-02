#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: filename
 * @text_content: text to be append at the end
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int t;
	int app;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (t = 0; text_content[t]; t++)
			;
		app = write(fd, text_content, t);

		if (app == -1)
			return (-1);

	}
	close(fd);
	return (1);

}
