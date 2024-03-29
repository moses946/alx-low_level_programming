#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <elf.h>

int _strlen(char *str);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_error(int fd_value);
void print_elfHeader(Elf64_Ehdr header);
Elf64_Ehdr check_ifElf(const char *filename);

#endif /* MAIN_H */
