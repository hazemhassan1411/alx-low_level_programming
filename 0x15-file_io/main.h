#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

#define BUF_SIZE 1024

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


typedef struct Elf64_Ehdr
{
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

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
