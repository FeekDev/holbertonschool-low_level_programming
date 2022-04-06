#include "main.h"

/**
 * read_textfile - the function read and write
 *
 * @filename: this param send the file
 * @letters: this param give the number of letters
 * Return: the lenght of ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, out;
	char *buf = malloc(sizeof(char *) * letters);
	
	if (filename == NULL)
		return (0);

        if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0400);

	if (fd == -1)
		return (0);

	out = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, out);

	free(buf);
	close(fd);
	return (out);
}
