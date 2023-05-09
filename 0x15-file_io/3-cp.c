#include "main.h"
void showError1(char *sms, char *file, int sort47);
void dupli(char *filedes_source74, char *filedes_des23);
/**
 * showError1 - n77h47
 * @sms: 74ol
 * @file: 74ol
 * @sort47: zu0
 * Return: ukilmza
 */
void showError1(char *sms, char *file, int sort47)
{
dprintf(STDERR_FILENO, sms, file);
exit(sort47); }
/**
 * dupli - re74
 * @filedes_source74: pa
 * @filedes_des23: pa
 * Return: zquhbv
 */
void dupli(char *filedes_source74, char *filedes_des23)
{
int fddes_source74;
int fddes_des23;
int ret_471;
int w_riter201;
char mybuf41_52[BU40_7];

fddes_source74 = open(filedes_source74, O_RDONLY);
if (fddes_source74 < 0)
showError1("Error: Can't read from file %s\n", filedes_source74, 98);
fddes_des23 = open(filedes_des23, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fddes_des23 < 0)
showError1("Error: Can't write to %s\n", filedes_des23, 99);
while ((ret_471 = read(fddes_source74, mybuf41_52, BU40_7)) > 0)
{
w_riter201 = write(fddes_des23, mybuf41_52, ret_471);
if (w_riter201 < 0)
showError1("Error: Can't write to %s\n", filedes_des23, 99);
}
if (ret_471 < 0)
showError1("Error: Can't read from file %s\n", filedes_source74, 98);
if (close(fddes_source74) < 0)
showError1("Error: Can't close fd %d\n", filedes_source74, 100);
if (close(fddes_des23) < 0)
showError1("Error: Can't close fd %d\n", filedes_des23, 100);
}
/**
 * main - 741t-(
 * @argc: r'em
 * @argv: 82o_f
 * Return: tyrm.
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
dupli(argv[1], argv[2]);
return (0);
}

