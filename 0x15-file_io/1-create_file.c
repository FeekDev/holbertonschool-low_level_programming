#include "main.h"

int create_file(const char *filename, char *text_content)
{
    int fd;

    /*write*/

    fd = open(filename, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR);

    if (fd == -1)
    {
        return (-1);
    }

    if (text_content != NULL)
    write(fd, text_content, _strlen(text_content));

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