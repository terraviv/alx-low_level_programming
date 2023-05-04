#include "main.h"
/**
 * flip_bits - zea1
 * @n: ice4
 * @m: ba4
 * Return: unintwau
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int mycpt;
unsigned long int esqaioppm;

esqaioppm = n ^ m;
mycpt = 0;
while (esqaioppm)
{
mycpt = (esqaioppm & 1) + mycpt;
esqaioppm = esqaioppm >> 1;
}
return (mycpt);
}

