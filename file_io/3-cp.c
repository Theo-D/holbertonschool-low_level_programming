#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *source;
	char *destination;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source = argv[1];
	destination = argv[2];

	cp(source, destination);

	return (0);
}

/**
 * cp - copies the content of a file to another file
 * @src: source file
 * @dest: destination file
 */
void cp(const char *src, const char *dest)
{
	int fd_src, fd_dest, fd;
	char buffer[1024];
	ssize_t bytes_read = 0, bytes_written = 0;

	fd_src = open(src, O_RDONLY, 0444);
	fd_dest = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	/* Reading from source file */
	bytes_read = read(fd_src, buffer, 1024);

	while (bytes_read > 0)
	{
		/* Writing to destination file */
		bytes_written = write(fd_dest, buffer, bytes_read);
		
		/* Handling open/write failure */
		if (fd_dest == -1 || bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
		
		/* Reading from source file */
		bytes_read = read(fd_src, buffer, 1024);
	}

	/* Handling open/read failure */
	if (fd_src == -1 || bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	fd = close(fd_src);
	fd = close(fd_dest);

	/* Handling close failure */
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}
