#include "main.h"

/**
 * get_endianness - Run a checks
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	uint16_t i = 0x0001;
	uint8_t *p = (uint8_t *)&i;

	return ((p[0] == 0x01) ? 1 : 0);
}
