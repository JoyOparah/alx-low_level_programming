#include "main.h"

/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@s: string to modify.
 *
 *Return: s modified.
 */

char *string_toupper(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		if (s[p] > 96 && s[p] < 123)
		{
			s[p] -= 32;
		}
		p++;
	}

	return (s);
}
