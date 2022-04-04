#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - contains a copy of the string given as a parameter.
 * @str: string
 * Return: p
 */
char *_strdup(char *str)
{
	int i = 0;
	char *p = NULL;

	if (str != NULL)
	{
		p = (char *)malloc(strlen(str) + 1);
		if (p != NULL)
		{
		for (i = 0; str[i]; i++)
		{
			p[i] = str[i];
		}
		}

	}

	return (p);
}
