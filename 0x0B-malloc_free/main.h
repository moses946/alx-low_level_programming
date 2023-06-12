#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _strlen(char *str);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

/**
  * _strlen - Returns the length of a string
  * @str: String
  *
  * Return: Length of string given in parameters
  */
int _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

#endif /* MAIN_H */
