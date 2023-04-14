#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - function name
 * @argc: param 1.
 * @argv: param 2.
 * Return: an integer is return.
 */
int main(int argc, char *argv[])
{
int myc1, myc2, leni2;
int leni1, *moutv;
char *inp1 = argv[1], *inp2 = argv[2];
if (argc != 3)
{
printf("Error\n");
exit(98); }
leni1 = strlen(inp2);
leni2 = strlen(inp1);
for (myc1 = 0; myc1 < leni2; myc1++)
{
if (!isdigit(inp1[myc1]))
{
printf("Error\n");
exit(98); } }
for (myc1 = 0; myc1 < leni1; myc1++)
{
if (!isdigit(inp2[myc1]))
{
printf("Error\n");
exit(98); } }
moutv = malloc(sizeof(int) * (leni1 + leni2 + 1));
if (!moutv)
return (1);
for (myc1 = leni2 - 1; myc1 >= 0; myc1--)
{
int ca = 0;
for (myc2 = leni1 - 1; myc2 >= 0; myc2--)
{
int gi = (inp2[myc2] - '0') * (inp1[myc1] - '0') + ca + moutv[1 + myc1 + myc2];
ca = gi / 10;
moutv[1 + myc1 + myc2] = gi % 10; }
moutv[myc1] = moutv[myc1] + ca; }
myc1 = 0;
while ((myc1 < (leni1 + leni2))&&moutv[myc1] == 0)
myc1 = 1 + myc1;
for (; myc1 < leni1 + leni2; myc1++)
printf("%d", moutv[myc1]);
printf("\n");
return (0); }

