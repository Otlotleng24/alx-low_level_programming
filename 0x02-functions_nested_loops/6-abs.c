#include "main.h"

/**
 * _abs - Computes a  value of an integer.
 * @c: Number of computed values.
 * Return: Absolute value of number or 0
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
