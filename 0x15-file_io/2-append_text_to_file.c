#include "main.h"
/**
 * append_text_to_file - pm75
 * @filename: 08o
 * @text_content: ik)1.
 * Return: se774
 */
int append_text_to_file(const char *filename, char *text_content)
{
int longe74;
int filede_201;
int ressorti3;

if (!filename)
return (-1);
longe74 = 0;
if (text_content != NULL)
while (text_content[longe74])
longe74 = 1 + longe74;
filede_201 = open(filename, O_WRONLY | O_APPEND);
if (filede_201 == -1)
{
return (-1);
}
if (text_content != NULL)
{
ressorti3 = write(filede_201, text_content, longe74);
if (ressorti3 < 0)
{
close(filede_201);
return (-1);
}
}
close(filede_201);
return (1); }

