#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints
 * to the POSIX STDOUT
 * @filename: The filename to open
 * @letters: The number of letters to read and print
 * Return: The number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fo , fr , fw;
    char *temp;

    if ( filename == NULL)
        return (0);
    temp = malloc(sizeof(char) * letters);

    if (temp == NULL)
        return (0);

   fo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		free(temp);
		return (0);
	}

	fr = read(fo, temp, letters);
	if (fdr < 0)
	{
		free(temp);
		return (0);
	}

	fw = write(STDOUT_FILENO, temp, fr);
	free(temp);
	close(fo);

	if (fw < 0)
		return (0);
	return ((ssize_t)fw); 

}
