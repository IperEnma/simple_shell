#include "main.h"
/**
 * funenvaux - check aux env, builtin functions
 * @buffer: received command
 * Return: 0 no env or 1 env
 */
void funenvaux(char **env)
{
	int i = 0;
	if (env)
	{
		for (i = 0; env[i]; i++)
		{
			dprintf(1, "%s\n", env[i]);
		}
	}
}
