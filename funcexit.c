#include "main.h"
/**
 *
 *
 *
 */
int funexit(char *buffer)
{
	char *exit = "exit";
	int i = 0, j = 0;

	for (i = 0; buffer[i]; i++)
	{
		if (buffer[i] == exit[j])
		{
			j++;
			if (j == 4 && buffer[i + 1] == ' ')
			{
				while (buffer[i])
				{
					i++;	
					if (buffer[i] != ' ')
						return (1);
				}
			}
			if (j == 4 && buffer[i + 1] == '\0')
				return (1);
		}
			 
	}
	return (0);
}
