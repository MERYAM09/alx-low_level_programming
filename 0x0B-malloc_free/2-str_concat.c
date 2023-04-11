#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Fuction which concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: Pointer to a new string created (Sucess), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	int i, x, len, len1, len2;
	char *res;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			len1++;
			i++;
		}
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i] != '\0')
		{
			len2++;
			i++;
		}
	}

	len = len1 + len2;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);

	i = 0;
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			res[i] = s1[i];
			i++;
		}
	}

	x = 0;
	if (s2 != NULL)
	{
		while (s2[x] != '\0')
		{
			res[i] = s2[x];
			i++;
			x++;
		}
	}
	res[len] = '\0';

	return (res);
}
