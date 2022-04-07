#include "main.h"

/**
 * main - is the entry point
 * @argc: the number of arguments
 * @argv: the vector of arguments
 * Return: int
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copie_content(argv[1], argv[2]);
	exit(0);
}

/**
 * copie_content - the puropose copy from file to other file
 * @src: is the file origin
 * @dest: is the file target
 */

void copie_content(const char *src, const char *dest)
{
	int forg, ftrg, readd;
	char bufsize[1024];

	forg = open(src, O_RDONLY);

	if (!src || forg == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file incitatous");
	}

	ftrg = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((readd = read(forg, bufsize, 1024)) > 0)
	{
		write(ftrg, bufsize, readd);
	}

	if (ftrg == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to Incitatous");
	}

	if (close(forg) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd 1");
	exit(100);

	if (close(ftrg) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd 2");
	exit(100);
}
