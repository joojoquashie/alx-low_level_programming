#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to open and read
 * @letters: number of letters to read and print
 *
 * Return: return actual numbe of letters if read otherwise return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t jread, jwrite;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	jread = read(fd, buffer, letters);
	close(fd);
	if (jread == -1)
		return (0);
	{
		free(buffer);
		return (0);
	}

	jwrite = write(STDOUT_FILENO, buffer, jread);
	free(buffer);
	if (jread != jwrite)
		return (0);
	return (jwrite);
}
