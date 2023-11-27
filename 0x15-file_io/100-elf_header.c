#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_elf_header_info(Elf64_Ehdr *elf_header);

/**
 * main - Entry point of the program.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 * Return: Exit status.
 */

int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr elf_header;

if (argc != 2)
{
dprintf(2, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(2, "Error: Cannot open file %s\n", argv[1]);
exit(98);
}

if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
{
dprintf(2, "Error: Cannot read ELF header from file %s\n", argv[1]);
close(fd);
exit(98);
}

close(fd);

print_elf_header_info(&elf_header);

return (0);
}

/**
 * print_elf_header_info - Prints information from the ELF header.
 * @elf_header: Pointer to the ELF header structure.
 */

void print_elf_header_info(Elf64_Ehdr *elf_header)
{
int i;

printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", elf_header->e_ident[i]);
printf("\n");

printf("  Class:   %s\n", elf_header->e_ident[EI_CLASS] == ELFCLASS32 ?
"ELF32" : "ELF64");
printf("  Data:    %s\n", elf_header->e_ident[EI_DATA] == ELFDATA2LSB ?
"2's complement, little endian" : "2's complement, big endian");
printf("  Version: %d (current)\n", elf_header->e_ident[EI_VERSION]);
printf("  OS/ABI:  %d\n", elf_header->e_ident[EI_OSABI]);
printf("  ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
printf("  Type:    %s\n", elf_header->e_type == ET_EXEC ?
"EXEC (Executable file)" : "other");
printf("  Entry point address: %#lx\n", (unsigned long)elf_header->e_entry);
}
