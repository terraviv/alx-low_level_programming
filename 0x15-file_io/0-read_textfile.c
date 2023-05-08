#include "main.h"
/**
 * read_textfile- 477res
 * @filename: yum
 * @letters: al
 * Return: something
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *my_buf45;
ssize_t k1, k2;
int uyt_filedesc;

my_buf45 = malloc(sizeof(char) * (letters + 1));
uyt_filedesc = open(filename, O_RDONLY);
if (uyt_filedesc == -1 || filename == NULL || my_buf45 == NULL)
{
free(my_buf45);
close(uyt_filedesc);
return (0);
}
k1 = read(uyt_filedesc, my_buf45, letters);
if (k1 == -1)
{
free(my_buf45);
close(uyt_filedesc);
return (0);
}
my_buf45[k1] = '\0';
k2 = write(STDOUT_FILENO, my_buf45, k1);
if (k2 != k1 || k2 == -1)
{
free(my_buf45);
close(uyt_filedesc);
return (0);
}
free(my_buf45);
close(uyt_filedesc);
return (k1);
}

