#include "main.h"

/**
 * _isuper - Checked if a letter is upper
 * @x: The nmber to be checked
 * Return: 1 for the uppper letter or 0 for any else
 */

int _isupper(int c)

{
	if (c >= 65  && c <= 90)
	{
	return (1);
	}
	return (0);
}
