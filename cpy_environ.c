#include "main.h"
/**
 *
 *
 *
 */
char **cpy_environ()
{
	int i = 0;
	char **envir;

	for (i = 0; environ[i]; i++)
	;
	
	envir = malloc(i * (sizeof(char *)));

	for (i = 0; environ[i]; i++)
	{
		envir[i] = strdup(environ[i]);
	}
	envir[i] = NULL;
	return (envir);
}
