#include "main.h"
/**
 * funenvaux - check aux env, builtin functions
 *
 * Return: 0 no env or 1 env
 */
void funenvaux(void)
{
	int i = 0;

	if (environ)
	{
		for (i = 0; environ[i]; i++)
		{
			dprintf(1, "%s\n", environ[i]);
		}
	}
}
