#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

/**
 *display_elf_info - Displays the information contained in the elf header
 *@header: Pointer to the header file to be checked
 *
 *Return: Nothing
 */
void display_elf_info(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:    ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("Class:    %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ?
			"ELF64" : "ELF32");
	printf("Data:     %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ?
			"2's complement, little endian" : "s'2 complement, big endian");
	printf("Version:  %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:   %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ?
			"UNIX - System V" : "Others");
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:    ");
	switch (header->e_type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
	printf("ENtry point address: 0x%lx\n", (unsigned long)header->e_entry);
}
/**
 *main - The entry point of the code above
 *@argc: number of arguments passed
 *@argv: Arry of pointers to the aguments
 *
 *Return: Error code or success code
 */
int main(int argc, char *argv[])
{
	const char *elf_filename;
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Could not open file '%s' : %s\n",
				elf_filename, strerror(errno));
		return (98);
	}

	bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));
	if (bytes_read != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr,  "Error: Could not read ELF header from file'%s'\n",
				elf_filename);
		close(fd);
		return (98);
	}
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error: Not an ELF file: %s\n", elf_filename);
		close(fd);
		return (98);
	}
	display_elf_info(&header);
	close(fd);
	return (0);
}
