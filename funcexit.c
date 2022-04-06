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
			if (j == 4)
			{
				while (buffer[i])
				{
					i++;	
					if (buffer[i] != ' ')
						return (0);
				}
			}
		}
			 
	}
	return (1);
}
