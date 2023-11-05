#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * struct Elf64_Ehdr - ELF header struct
 * @e_ident:   ELF identification bytes
 * @e_type:    Type of ELF file
 * @e_machine: Target architecture
 * @e_version: ELF version
 * @e_entry:   Entry point address
 * @e_phoff:   Program header table offset
 * @e_shoff:   Section header table offset
 * @e_flags:   Processor-specific flags
 * @e_ehsize:  ELF header size
 * @e_phentsize: Program header entry size
 * @e_phnum:   Number of program header entries
 * @e_shentsize: Section header entry size
 * @e_shnum:   Number of section header entries
 * @e_shstrndx: Section name string table index
 */
typedef struct {
	unsigned char e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf64_Ehdr;

/**
 * print_elf_header_info - Print information from the ELF header
 * @header: Pointer to the ELF header
 */
void print_elf_header_info(const Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             ELF%d\n",
		   header->e_ident[4] == 1 ? 32 : 64);
	printf("  Data:                              2's complement, %s endian\n",
		   header->e_ident[5] == 1 ? "little" : "big");
	printf("  Version:                           %u\n", header->e_version);
	printf("  OS/ABI:                            %s\n",
		   header->e_ident[7] == 0 ? "UNIX - System V" : "unknown");
	printf("  ABI Version:                       %u\n", header->e_ident[8]);
	printf("  Type:                              %s (Executable file)\n",
		   header->e_type == 2 ? "EXEC" : "DYN");
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("Error reading ELF header");
		close(fd);
		return (98);
	}

	if (memcmp(header.e_ident, "\x7F\x45\x4C\x46", 4) != 0)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		return (98);
	}

	print_elf_header_info(&header);

	close(fd);
	return (0);
}
