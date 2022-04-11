#include "main.h"
/**
 * funexit - exit function, integrated
 * @buffer: received command
 * Return: 0 not exit or 1 exit
 */
int funexit(char *buffer)
{
	char *exit;
	int i = 0, j = 0, m = 0;

	for (i = 0; buffer[i]; i++)
	{
		if (buffer[i] != ' ')
			m++;
	}

	exit = malloc((m) + 1);

	for (i = 0; buffer[i]; i++)
	{
		if (buffer[i] != ' ')
		{
			exit[j] = buffer[i];
			j++;
		}
	}
	exit[j] = '\0';
	if(strcmp(exit, "exit") == 0)
		return (1);
	return (0);
}
