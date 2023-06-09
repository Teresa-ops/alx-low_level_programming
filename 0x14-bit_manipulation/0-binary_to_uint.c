#include "main.h"
/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 *
 * Return: decimal (unsigned int)
 */
unsigned int binary_to_uint(const char *b)
{
if (!b)
return (0);
unsigned int dec_val = 0;
size_t i = 0;
while (b[i] == '0' || b[i] == '1')
{
dec_val = (dec_val << 1) + (b[i] - '0');
i++;
}
return (dec_val);
}
