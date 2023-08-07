#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @txt_c: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *txt_c)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (txt_c != NULL)
	{
		for (len = 0; txt_c[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, txt_c, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
