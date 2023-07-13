#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
  * _strlen - Gets the length of a string
  * @str: String
  *
  * Return: Length of string
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
  * append_text_to_file - Appends text at the end of a file
  * @filename: Name of file
  * @text_content: Null terminated string to be added to file
  *
  * Return: 1 On success and -1 On faliure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
