#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* read_textfile - reads a text file and prints
* @filename: variable pointer
* @letters: size letters
* Description: write a function that reads a textfile and prints
* to POSIX standard output.
* Return: actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, let, w;
char *text;
text = malloc(letters);
if (text == NULL)
return (0);
if (filename == NULL)
return (0);
file = open(filename, O_RDONLY);
if (filename == -1)
{
free(text);
return (0);
}
let = read(file, text, letters);
w = write(STDOUT_FILENO, text, let);
close(file);
return (w);
}
