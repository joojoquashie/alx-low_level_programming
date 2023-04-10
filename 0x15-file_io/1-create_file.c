#include "main.h"

/**
 * create_file - creates a file
 * @filename: the filename
 * @text_content: content that is written in the file
 *
 * Return: 1 if it is successful, -1 if it is not
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int jread;
	int jwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (jread = 0; text_content[jread]; jread++);

	jwrite = write(fd, text_content, jread);

	if (jwrite == -1)
		return (-1);

	close(fd);

	return (1);
}
