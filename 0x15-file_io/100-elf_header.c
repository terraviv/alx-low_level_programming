#include "main.h"
void xv1(unsigned char *e_ident);
void xv2(unsigned char *e_ident);
void xv3(unsigned char *e_ident);
void xv4(unsigned char *e_ident);
void xv5(unsigned char *e_ident);
void xv6(unsigned char *e_ident);
void xv7(unsigned long int e_entry, unsigned char *e_ident);
void xv8(unsigned char *e_ident);
void xv9(unsigned int e_type, unsigned char *e_ident);
void xv10(int elf);
/**
 * xv1 - oikj45
 * @e_ident: 04oj,
 * Return: hygy
 */
void xv1(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * xv2 - f4
 * @e_ident: fd4
 * Return: 4110.
 */
void xv2(unsigned char *e_ident)
{
int index = 0;
printf(" Magic: ");
while (index < EI_NIDENT)
{
printf("%02x", e_ident[index]);

if (index == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
index = 1 + index;
}
}
/**
 * xv3 - loko.
 * @e_ident: kijyy.
 * Return: 4110.
 */
void xv3(unsigned char *e_ident)
{
	printf(" Class: ");
	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * xv4 - k4
 * @e_ident: m7.
 * Return: 4110.
 */
void xv4(unsigned char *e_ident)
{
	printf(" Data: ");
	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * xv5 - klincx.
 * @e_ident: A pointer to an array containing the ELF version.
 * Return: 4110.
 */
void xv5(unsigned char *e_ident)
{
	 printf(" Version: %d",
			  e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}
/**
 * xv8 - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 * Return: 4110.
 */
void xv8(unsigned char *e_ident)
{
	printf(" OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}
/**
 * xv6 - lfc
 * @e_ident: mx
 */
void xv6(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n",
		e_ident[EI_ABIVERSION]);
}
/**
 * xv9 - CX
 * @e_type:Q
 * @e_ident: pl.
 * Return: 4110.
 */
void xv9(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
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
		printf("<unknown: %x>\n", e_type);
	}
}
/**
 * xv7 - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void xv7(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}
/**
 * xv10 - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 * Description: SQ.
 */
void xv10(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 70.
 *
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	Elf64_Ehdr *charz;
	int o;
int r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	charz = malloc(sizeof(Elf64_Ehdr));
	if (charz == NULL)
	{
		xv10(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, charz, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(charz);
		xv10(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	xv1(charz->e_ident);
	printf("ELF charz:\n");
	xv2(charz->e_ident);
	xv3(charz->e_ident);
	xv4(charz->e_ident);
	xv5(charz->e_ident);
	xv8(charz->e_ident);
	xv6(charz->e_ident);
	xv9(charz->e_type, charz->e_ident);
	xv7(charz->e_entry, charz->e_ident);
	free(charz);
	xv10(o);
	return (0);
}

