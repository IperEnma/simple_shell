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
		if (buffer[i] == ' ')
	       		continue;
		else
		{
			if (buffer[i] == exit[j])
			{
				while (buffer[i])
				{
					if (buffer[i] == exit[j])
					{
						i++;
						j++;
					}
					if (j == 3)
					{
						while (buffer[i])
						{
							i++;
							if (buffer[i] == '\0')
								return (1);
							if (buffer[i] != ' ')
								return(0);
						}
					}
				}
			}
			else
				return (0);
		}		
	}
	return (0);
}