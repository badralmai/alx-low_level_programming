#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @lets: num of lets to be read
 * Return: w- actual num of bytes read and printed
 *        0 when function fails or filename is nuthing
 */
ssize_t read_textfile(const char *filename, size_t lets)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * lets);
	t = read(fd, buf, lets);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
