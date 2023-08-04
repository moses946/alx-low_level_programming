#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "main.h"

/**
  * close_error - Exits the program after encountering an error
  * @fd_value: Name of file that can't be closed
  *
  */
void close_error(int fd_value)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
	exit(100);
}

/**
  * main - Entry Point
  * @ac: Argument Count
  * @av: Argument Vector
  *
  * Return: 0  On Success
  * On Faliure: Exit with code depending on the error
  */
int main(int ac, char **av)
{
	int fd_read, fd_write, bytes_read = 0;
	char BUFFER[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_read = open(av[1], O_RDONLY);
	if (fd_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_write = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0600 | 060 | 04);
	if (fd_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((bytes_read = read(fd_read, BUFFER, 1024)) > 0)
	{
		if (write(fd_write, BUFFER, bytes_read) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(fd_read) == -1)
		close_error(fd_read);
	if (close(fd_write) == -1)
		close_error(fd_write);
	return (0);
}
