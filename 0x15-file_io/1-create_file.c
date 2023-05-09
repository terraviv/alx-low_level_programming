#include "main.h"
/**
 * create_file - iom711
 * @filename: foop4.
 * @text_content: 47pmo.
 * Return: ki3.
 */
int create_file(const char *filename, char *text_content)
{
int len_war45;
int sortir47;
int filedesc101;
mode_t mod1_45o;

mod1_45o = S_IRUSR | S_IWUSR;
if (filename == NULL)
return (-1);
filedesc101 = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mod1_45o);
if (filedesc101 == -1)
return (-1);
if (text_content != NULL)
{
len_war45 = strlen(text_content);
sortir47 = write(filedesc101, text_content, len_war45);
if (sortir47 == -1)
{
close(filedesc101);
return (-1);
}
}
close(filedesc101);
return (1);
}

