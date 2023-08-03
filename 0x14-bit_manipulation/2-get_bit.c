#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal num
 * @n: num to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitt_val;

	if (index > 63)
		return (-1);
	
	bitt_val = (n >> index) & 1;
	return (bitt_val);
}
