#include "main.h"
/**
 * getpath - get path from environ
 * Return: environ
 */
char *getpwd()
{
	char *copy = NULL;
        char *pathcompare = "PWD=";
        int i = 0, j = 0;

        for (i = 0; environ[i]; i++)
        {
		if (strncmp(environ[i], pathcompare, 4) == 0)
		{
			copy = strdup(environ[i]);
			return (copy);
		}
	}
	copy = strdup(environ[i]);
        return (copy);
}
