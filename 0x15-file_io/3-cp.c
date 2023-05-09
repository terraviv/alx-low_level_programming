#include "main.h"
char *render_bufy(char *file);
void ferme10_fu(int fd);
/**
 * render_bufy - nh47
 * @file: 7400
 * Return: ukilmza
 */
char *render_bufy(char *file)
{
char *mybuf41_52;
mybuf41_52 = malloc(sizeof(char) * BU40_7);
if (!mybuf41_52)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (mybuf41_52);
}

/**
 * ferme10_fu - rep25.
 * @fd: 47471q.
 */
void ferme10_fu(int fd)
{
int c = close(fd);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * main - greedg2
 * @argc: dodo225
 * @argv: An array of pointers to the arguments.
 * Return: yurs.
 */
int main(int argc, char **argv)
{
char *mybuf41_52;
int destway, goatteris;
int judge1;
int omp;
int nb = 3;
if (argc != nb)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
mybuf41_52 = render_bufy(argv[2]);
destway = open(argv[1], O_RDONLY);
omp = read(destway, mybuf41_52, 1024);
goatteris = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (destway == -1 || omp == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(mybuf41_52);
exit(98);
}
judge1 = write(goatteris, mybuf41_52, omp);
if (goatteris == -1 || judge1 == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(mybuf41_52);
exit(99);
}
omp = read(destway, mybuf41_52, 1024);
goatteris = open(argv[2], O_WRONLY | O_APPEND);
} while (omp > 0);
free(mybuf41_52);
ferme10_fu(destway);
ferme10_fu(goatteris);
return (0);
}

