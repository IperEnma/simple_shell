#include "main.h"
/**
 * funenv- print env, function integrated
 * @buffer: received command
 * Return: 0 no print or 1 print
 */
int funenv(char *buffer)
{
	char *exit, *compare = "env";
	int i = 0, j = 0, m = 0;

	for (i = 0; buffer[i]; i++)
	{
		if (buffer[i] != ' ' )
			m++;
	}

	exit = malloc(m);

	for (i = 0; buffer[i]; i++)
	{
		if (buffer[i] != ' ')
		{
			exit[j] = buffer[i];
			j++;
		}
	}
	exit[j] = '\0';

	if (strcmp(exit, compare) == 0)
	{
		free(exit);
		return (1);
	}
	free(exit);
	return (0);
}
