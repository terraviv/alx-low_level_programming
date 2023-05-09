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
int index = 0;
while (index < 4) 
{
if (e_ident[index] != 127 &&
e_ident[index] != 'E' &&
e_ident[index] != 'L' &&
e_ident[index] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
index++;
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
while (index < EI_NIDENT) 
{
printf("%02x", e_ident[index]);

if (index == EI_NIDENT - 1)
printf("\n");
else
printf(" ");

index++;
}
}
/**
 * xv3 - loko.
 * @e_ident: kijyy.
 * Return: 4110.
 */
void xv3(unsigned char *e_ident)
{
printf("  Class:                             ");
if (e_ident[EI_CLASS] == ELFCLASSNONE) 
{
printf("none\n");
} else if (e_ident[EI_CLASS] == ELFCLASS32) 
{
printf("ELF32\n");
} else if (e_ident[EI_CLASS] == ELFCLASS64) 
{
printf("ELF64\n");
} else 
{
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
printf("  Data:                              ");
if (e_ident[EI_DATA] == ELFDATANONE)
{
printf("none\n");
}
else if (e_ident[EI_DATA] == ELFDATA2LSB)
{
printf("2's complement, little endian\n");
}
else if (e_ident[EI_DATA] == ELFDATA2MSB)
{
printf("2's complement, big endian\n");
}
else
{
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
printf("  Version:                           %d",
e_ident[EI_VERSION]);
if (e_ident[EI_VERSION] == EV_CURRENT)
{
printf(" (current)\n");
}
else
{
printf("\n");
}
}
/**
 * xv8 - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 * Return: 4110.
 */
void xv8(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");
if (e_ident[EI_OSABI] == ELFOSABI_NONE)
{
printf("UNIX - System V\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
{
printf("UNIX - HP-UX\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
{
printf("UNIX - NetBSD\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
{
printf("UNIX - Linux\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
{
printf("UNIX - Solaris\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
{
printf("UNIX - IRIX\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
{
printf("UNIX - FreeBSD\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
{
printf("UNIX - TRU64\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
{
printf("ARM\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
{
printf("Standalone App\n");
}
else
{
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
}
/**
 * xv6 - lfc
 * @e_ident: mx
 */
void xv6(unsigned char *e_ident)
{
printf("  ABI Version:                       %d\n",
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

printf("  Type:                              ");
if (e_type == ET_NONE)
{
printf("NONE (None)\n");
}
else if (e_type == ET_REL)
{
printf("REL (Relocatable file)\n");
}
else if (e_type == ET_EXEC)
{
printf("EXEC (Executable file)\n");
}
else if (e_type == ET_DYN)
{
printf("DYN (Shared object file)\n");
}
else if (e_type == ET_CORE)
{
printf("CORE (Core file)\n");
}
else
{
printf("<unknown: %x>\n", e_type);
}	
}
/**
 * xv7 - h14.
 * @e_entry: kjhg0.
 * @e_ident: uy.
 * Return: gth.
 */
void xv7(unsigned long int e_entry, unsigned char *e_ident)
{
printf("  Entry point address:               ");
e_ident[EI_DATA] == ELFDATA2MSB ? (
e_entry = ((e_entry << 8) & 0xFF00FF00) |
((e_entry >> 8) & 0xFF00FF),
e_entry = (e_entry << 16) | (e_entry >> 16),
e_ident[EI_CLASS] == ELFCLASS32 ? printf("%#x\n", (unsigned int)e_entry) : printf("%#lx\n", e_entry)
) : (
e_ident[EI_CLASS] == ELFCLASS32 ? printf("%#x\n", (unsigned int)e_entry) : printf("%#lx\n", e_entry)
);
}
/**
 * xv10 - op1.
 * @elf: lk1.
 * Return: SQ.
 */
void xv10(int elf)
{
	(close(elf) == -1) ? (dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf), exit(98)) : 0;
}
/**
 * main - v0
 * @argc: kilo
 * @argv: grea
 * Return: qqa.
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
Elf64_Ehdr *tetuvon;
int ouvrira14;
int lecture127;

ouvrira14 = open(argv[1], O_RDONLY);
if (ouvrira14 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
tetuvon = malloc(sizeof(Elf64_Ehdr));
if (tetuvon == NULL)
{
close_elf(ouvrira14);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
lecture127 = read(ouvrira14, tetuvon, sizeof(Elf64_Ehdr));
if (lecture127 == -1)
{
free(tetuvon);
close_elf(ouvrira14);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}

check_elf(tetuvon->e_ident);
printf("ELF Header:\n");
print_magic(tetuvon->e_ident);
print_class(tetuvon->e_ident);
print_data(tetuvon->e_ident);
print_version(tetuvon->e_ident);
print_osabi(tetuvon->e_ident);
print_abi(tetuvon->e_ident);
print_type(tetuvon->e_type, tetuvon->e_ident);
print_entry(tetuvon->e_entry, tetuvon->e_ident);
free(tetuvon);
close_elf(ouvrira14);
return (0);
}

