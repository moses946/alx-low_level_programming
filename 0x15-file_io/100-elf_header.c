#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <elf.h>
#include <stdio.h>

/**
  * check_ifElf - Checks if file is in ELF format
  * @filename: File to be checked
  *
  * Return: 0 if @filename is in ELF Format and 1 On Faliure
  */
Elf64_Ehdr check_ifElf(const char *filename)
{
	int fd;
	Elf64_Ehdr elf_header;

	if (filename == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Filename can't be NULL\n");
		exit(98);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "File can't be opened");
		exit(98);
	}
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		dprintf(STDERR_FILENO, "Error reading from file %s\n", filename);
		exit(98);
	}
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || 
		elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
		elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, " %s is not an ELF file\n", filename);
		exit(98);
	}

	return (elf_header);
}

/**
  * print_elfHeader - Prints parameters of the ELF File Header
  * @header: Header of the ELF file
  *
  */
void print_elfHeader(Elf64_Ehdr header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT - 1; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("%02x\n", header.e_ident[i]);
	printf("  Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : " 2's complement, big endian");
	printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch	(header.e_ident[EI_OSABI])
	{
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_HPUX:
			printf("Hp - UX\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Stand - alone\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture\n");
			break;
		default:
			printf("UNIX - System V\n");
			break;
	}
	printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header.e_type)
	{
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
				break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("NONE (Unknown type)\n");
			break;
	}
	printf("  Entry point address:               0x%lx\n", header.e_entry);
}

/**
  * main - Entry point
  * @ac: Argument count
  * @av: Argument vector
  *
  * Return: 0 On success
  */
int main(int ac, char **av)
{
	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	print_elfHeader(check_ifElf(av[1]));
	return (0);
}
