#include "main.h"
/**
 * getpath - get path from environ
 * Return: environ
 */
char *getpath()
{
	char *copy = NULL;
	char *pathcompare = "PATH=";
	int i = 0;

	for (i = 0; environ[i]; i++)
	{
			if (strncmp(environ[i], pathcompare, 5) == 0)
			{
				copy = strdup(environ[i]);
				return(copy);
			}
	}
	copy = strdup(environ[i]);
	return (copy);
}
