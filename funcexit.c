#include "main.h"
/**
 * funexit - exit function, integrated
 * @buffer: received command
 * Return: 0 not exit or 1 exit
 */
int funexit(char *buffer)
{
	char *exit = "exit";
	int i = 0, j = 0;

	for (i = 0; buffer[i]; i++)
	{
		if (buffer[i] == ' ')
			;
		else
		{
			if (buffer[i] == exit[j])
			{
				while (j < 5)
				{
				if (j == 4)
				{
					while (j < 5)
					{
					i++;
					if (buffer[i] == '\0')
						return (1);
					if (buffer[i] != ' ')
						return (0);
					}
				}
					if (buffer[i] == exit[j])
					{
						i++;
						j++;
					}
					else
						return (0);
				}
			}
			else
				return (0);
		}
	}
	return (0);
}
