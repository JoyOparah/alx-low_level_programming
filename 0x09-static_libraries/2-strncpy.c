#include "main.h"

/**
 *_strncpy - copy src into dest.
 *@dest: first string.
 *@src: second string.
 *@n: the number of bytes to use from src.
 *Return: string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p = 0, q = 0;

	while (n > q)
	{
		if (src[q] == '\0')
		{
			for (; q < n; q++)
			{
				dest[p] = '\0';
				p++;
			}
		}
		else
		{
			dest[p] = src[q];
			q++;
			p++;
		}
	}

	return (dest);
}
