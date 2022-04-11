#include "main.h"
/**
 * funenvaux - check aux env, builtin functions
 * @buffer: received command
 * Return: 0 no env or 1 env
 */
int funenvaux(char *buffer)
{
	int status = 0, i = 0;
	
	status = funenv(buffer);
	if (environ)
	{	
		if (status == 1)
		{
			for (i = 0; environ[i]; i++)
			{
				dprintf(1, "%s", environ[i]);
			}
			return (1);
		}
	}
	return (0);
}
