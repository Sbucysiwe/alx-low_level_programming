#include "main.h"

/**
*get_bit -Get the bit value at a given index in a decimal number.
*@n: The decimal number to search the bit in.
*@index: The index of the bit to get.
*Return: The value of the bit at the specified index (0 or 1).
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
