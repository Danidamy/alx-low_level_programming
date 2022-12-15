#include "main.h"

/**
 * _isupper - checks if the parameter is an upper case character
 * @c: input character
 * Return: 1 if it is an upper case and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
