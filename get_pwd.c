#include "main.h"
/**
 * getpwd - get pwd from environ
 * Return: environ
 */
char *getpwd()
{
	char *copy = NULL;
	char *pathcompare = "PWD=";
	int i = 0;

	if (environ)
	{
		for (i = 0; environ[i]; i++)
		{
			if (_strncmp(environ[i], pathcompare, 4) == 0)
			{
				copy = strdup(environ[i]);
				return (copy);
			}
		}
		copy = strdup(environ[i]);
		return (copy);
	}
	else
		return (0);
}
