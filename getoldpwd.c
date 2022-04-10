#include "main.h"
/**
 * getoldpwd - get oldpwd from environ
 * Return: environ
 */
char *getoldpwd()
{
	char *copy = NULL;
	char *pathcompare = "OLDPWD=";
	int i = 0;

	for (i = 0; environ[i]; i++)
	{
		if (_strncmp(environ[i], pathcompare, 7) == 0)
		{
			copy = strdup(environ[i]);
			return (copy);
		}
	}
	copy = strdup(environ[i]);
	return (copy);
}
