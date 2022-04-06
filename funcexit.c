#include "main.h"
/**
 *
 *
 *
 */
int funexit(char *buffer)
{
	char *exit = "exit", *comp = NULL;

	comp = strtok(buffer, " ");
	comp[strlen(comp) - 1] = '\0';
	if (strcmp(comp, exit) == 0)
		return (1);
	return (0);
}
