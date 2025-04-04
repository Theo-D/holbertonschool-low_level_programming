#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard
 * output.
 * @filename: name of the file to be opened and read.
 * @letters: Number of letter to be read and printed to stdout.
 *
 * Return: 0 if function fails, otherwise, returns the number of written
 * characters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDesc = 0;
	char buff[1024];
	ssize_t charWritten = 0;
	ssize_t charRead = 0;

	if (filename == NULL)
		return (0);

	fileDesc = open(filename, O_RDONLY);

	if (fileDesc == -1)
		return (0);

	charRead = read(fileDesc, &buff, letters);

	if (charRead == -1)
		return (0);

	charWritten = write(STDOUT_FILENO, &buff, charRead);

	if (charWritten == -1)
		return (0);

	close(fileDesc);

	return (charWritten);
}
