#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
  * read_textfile - Reads a text file and prints it to the standard output
  * @filename: Text file to be read
  * @letters: Number of letters it should read and print
  *
  * Return: Actual number of letters it was able to read and print
  * (On fail): Return 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t letters_read = 0, letters_written = 0;
	char *BUFFER;
	int fd;

	if (*filename == '\0')
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	BUFFER = malloc(sizeof(char) * letters);
	if (BUFFER == NULL)
		return (0);

	letters_read = read(fd, BUFFER, letters);
	if (letters_read == -1)
	{
		free(BUFFER);
		return (0);
	}

	letters_written = write(STDOUT_FILENO, BUFFER, letters_read);
	if (letters_written == -1)
	{
		free(BUFFER);
		return (0);
	}

	free(BUFFER);
	close(fd);

	return (letters_written);
}
