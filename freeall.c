#include "main.h"
/**
 *
 *
 *
 */
void freeall(char *buffer, list_t *old_pwd, list_t *pwd, list_t *directorys)
{
	free(buffer);
	free_nodes(old_pwd);
	free_nodes(pwd);
	free_nodes(directorys);
}
