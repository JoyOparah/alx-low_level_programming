#include "main.h"

/**
 *_strcat - concatinate 2 strings.
 *@dest: first string.
 *@src: second string.
 *Return: string.
 */

char *_strcat(char *dest, char *src)
{
	int c = 0, d = 0;

	while (dest[c] != '\0')
		c++;

	while (src[d] != '\0')
	{
		dest[c] = src[d];
		c++;
		d++;
	}

	dest[c] = '\0';

	return (dest);
}
