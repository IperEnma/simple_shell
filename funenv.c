#include "main.h"
/**
 *
 *
 *
 */
int funenv(char *buffer)
{
	char *exit = "env";
	int i = 0, j = 0;

	for (i = 0; buffer[i]; i++)
	{
		if (buffer[i] == ' ')
	       		;
		else
		{
			if (buffer[i] == exit[j])
			{
				while (buffer[i])
				{
					if (j == 2)
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
	return (1);
}
