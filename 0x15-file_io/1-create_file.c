#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @str: String
  *
  * Return: Length of a string
  */
int _strlen(char *str)
{
	int i = 0;

	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

/**
  * create_file - Creates a file and writes content to it
  * @filename: Name of the file to be created
  * @text_content: Null terminated string to write to the file
  *
  * Return: 1 On success and -1 On faliure
  */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		if ((write(fd, text_content, _strlen(text_content))) == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
