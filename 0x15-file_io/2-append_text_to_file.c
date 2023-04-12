#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: add content.
 *
 * Return: 1 if successful and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int l;
	int w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		for (l = 0; text_content[l]; l++);

		w = write(fd, text_content, l);

		if (!w)
			return (-1);
	}

	close(fd);

	return (1);
}
