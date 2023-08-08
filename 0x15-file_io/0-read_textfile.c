#include <stdlib.h>
#include "main.h"

/**
 * read_textfil: read textfile, brings out stdout
 * filename: name of file read
 * letters: number of letters in a file
 * Return: number of letter read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);


	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);


	free(buf);
	close(fd);
	return (w);
}

