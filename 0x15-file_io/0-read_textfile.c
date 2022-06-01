#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: pointer to text in a file
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, fred, fwrit;
char *Size;
Size = malloc(sizeof(char) * letters);
if (Size == NULL)
return (0);
if (filename == NULL)
return (0);
file = open(filename, O_RDONLY);
if (file == -1)
return (0);
fred = read(file, Size, letters);
if (fred == -1)
return (0);
fwrit = write(STDOUT_FILENO, Size, fred);
if (fwrit == -1)
return (0);
close(file);
free(Size);
return (fwrit);
}
