#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
/**
 * error - Error  meesage
 * @msg:The message
 * exit: 98
 */
void error(char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * main - entry point
 * @argc: integer
 * @argv: pointer to a pointer to char
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	Elf64_Ehdr header;
	int fd;

	if (argc != 2)
	{
		error("Usage: elf_header elf_filename");
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		error("Error opening file");
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		error("Error reading header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3)
	{
	error("Not an ELF file");
	}

	printf("Magic:%02x %02x %02x %02x\n", header.e_ident[EI_MAG0],
header.e_ident[EI_MAG1],
		header.e_ident[EI_MAG2], header.e_ident[EI_MAG3]);

	printf("Class:%s\n", header.e_ident[EI_CLASS] == ELFCLASS64 ?
			"ELF64" : "ELF32");

	printf("Data:    %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ?
"2's complement, little endian" : "2's complement, big endian");

	printf("Version:                 %d\n", header.e_ident[EI_VERSION]);

	printf("OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX System V ABI");
		break;
	case ELFOSABI_HPUX:
		printf("HP-UX ABI");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone (embedded) ABI");
		break;
	default:
		printf("Unknown");
		break;
	}
	printf("\n");

	printf("ABI Version:   %d\n", header.e_ident[EI_ABIVERSION]);

	printf("Type:                              ");
	switch (header.e_type)
	{
	case ET_NONE:
		printf("NONE (No file type)");
		break;
	case ET_REL:
		printf("REL (Relocatable file)");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)");
		break;
	case ET_CORE:
		printf("CORE (Core file)");
		break;
	default:
		printf("Unknown");
		break;
	}
	printf("\n");

	printf("Entry point address:               0x%lx\n", header.e_entry);

	close(fd);
	return (0);
}
