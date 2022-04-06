#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>/*exit*/
#include <stdlib.h>/*exit*/
/* */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>/*open,*/

#include <unistd.h>/*write,close,read*/

#include <limits.h>/*ssize_t*/
#include <stdio_ext.h>/*size of the buffer*/

ssize_t read_textfile(const char *filename, size_t letters);

#endif /*MAIN_H*/