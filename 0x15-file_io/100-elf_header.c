#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>

#define BUF_SIZE 64

/**
 * error_exit - Print error message and exit with specified exit code
 * @exit_code: The exit code to use when exiting
 * @format: The error message format string
 * @...: Additional arguments to the format string
 */
void error_exit(int exit_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_code);
}

/**
 * print_elf_header - Print ELF header information
 * @header: Pointer to the ELF header structure
 */
void print_elf_header(unsigned char *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < 16; i++) {
		printf("%02x ", header[i]);
	}
	printf("\n");
	printf("  Class:                             ELF%d\n", header[4] == 1 ? 32 : 64);
	printf("  Data:                              2's complement, %s endian\n", header[5] == 1 ? "little" : "big");
	printf("  Version:                           %d (current)\n", header[6]);
	printf("  OS/ABI:                            ");
	switch (header[7]) {
	case 0: printf("UNIX - System V\n"); break;
	case 1: printf("UNIX - HP-UX\n"); break;
	case 2: printf("UNIX - NetBSD\n"); break;
	case 3: printf("UNIX - Linux\n"); break;
	case 6: printf("UNIX - Solaris\n"); break;
	case 9: printf("UNIX - FreeBSD\n"); break;
	default: printf("<unknown: %d>\n", header[7]); break;
	}
	printf("  ABI Version:                       %d\n", header[8]);
	printf("  Type:                              ");
	switch (*(unsigned short *)(header + 16)) {
	case 1: printf("REL (Relocatable file)\n"); break;
	case 2: printf("EXEC (Executable file)\n"); break;
	case 3: printf("DYN (Shared object file)\n"); break;
	default: printf("UNKNOWN\n"); break;
	}
	printf("  Entry point address:               0x");
	for (int i = 24; i >= 16; i--) {
		printf("%02x", header[i]);
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	int fd;
	unsigned char header[BUF_SIZE];

	if (argc != 2)
		error_exit(98, "Usage: elf_header elf_filename\n");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error_exit(98, "Error: Can't open file %s\n", argv[1]);

	if (read(fd, header, BUF_SIZE) != BUF_SIZE)
		error_exit(98, "Error: Can't read file %s\n", argv[1]);

	if (header[0] != 0x7f || header[1] != 'E' || header[2] != 'L' || header[3] != 'F')
		error_exit(98, "Error: Not an ELF file\n");

	print_elf_header(header);

	close(fd);

	return (0);
}
