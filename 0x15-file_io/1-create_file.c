#include "main.h"

/**
 * create_file - function crate the file
 *
 * @filename: the name of file
 * @text_content: the string
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd, out;

	if (filename == NULL)
		return (-1);

    /*create*/
	fd = open(filename, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

    /*write*/
	out = write(fd, text_content, _strlen(text_content));
	if (out == -1)
		return (0);

	close(fd);
	return (1);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
