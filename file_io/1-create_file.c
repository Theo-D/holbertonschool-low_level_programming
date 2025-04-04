#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: Name of the file to be created
 * @text_content: Text to be written to the file created.
 *
 * Return: 1 if function succeeds or -1 if cuntion fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fileDesc = 0;
	ssize_t writtenChar = 0;
	int i = 0, textSize = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[i] != 0)
	{
		textSize++;
		i++;
	}

	fileDesc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (text_content == NULL)
		return (1);

	if (fileDesc == -1)
		return (-1);

	writtenChar = write(fileDesc, text_content, textSize);

	if (writtenChar == -1)
		return (-1);

	return (1);
}
