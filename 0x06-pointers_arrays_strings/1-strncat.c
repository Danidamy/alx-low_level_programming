#include "main.h"

/**
 * _strncat - Function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes to concatenate
 * Return: pointer to designated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (j < n && src[j] != '\0')
	{

		i++;
		j++;
	}
		dest[i] = src[j];


	dest[i] = '\0';

	return (dest);
}
