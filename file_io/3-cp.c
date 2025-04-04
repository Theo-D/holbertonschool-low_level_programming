#include "main.h"

/**
 * main - Calls cp().
 * @argc: Number of arguments
 * @argv: Argument value
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *src;
	char *dest;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = argv[1];
	dest = argv[2];

	cp(src, dest);

	return (0);
}

/**
 * cp - Copies the content fom a file to another file
 * @src: File from which to copy.
 * @dest: File to be copied
 *
 * Return: Nothing.
 */
void cp(const char *src, const char *dest)
{
	int srcFileDesc, destFileDesc, fileDesc;
	char buff[1024];
	ssize_t readChar = 0, writtenChar = 0;

	srcFileDesc = open(src, O_RDONLY, 0444);
	destFileDesc = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	readChar = read(srcFileDesc, buff, 1024);

	while (readChar > 0)
	{
		writtenChar = write(destFileDesc, buff, readChar);
		
		if (destFileDesc == -1 || writtenChar == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
		readChar = read(srcFileDesc, buff, 1024);
	}

	if (srcFileDesc == -1 || readChar <= 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	fileDesc = close(srcFileDesc);
	fileDesc = close(destFileDesc);

	if (fileDesc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fileDesc);
		exit(100);
	}
}
