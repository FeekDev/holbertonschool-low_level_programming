#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd, out;
    char *buf = malloc(sizeof(char *) * letters);

    fd = open(filename, O_RDONLY, 0400);

    if (fd == -1)
    return (0);

    out = read(fd, buf, letters);
    write(STDOUT_FILENO, buf, out);

    free(buf);
    close(fd);
    return (out);
}
