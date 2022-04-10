#include "main.h"
/**
 * freeall - free all
 * @buffer: received command
 * @old_pwd: list oldpwd
 * @pwd: list pwd
 * @directorys: list path
 * Return: void
 */
void freeall(char *buffer, list_t *old_pwd, list_t *pwd, list_t *directorys)
{
	free(buffer);
	free_nodes(old_pwd);
	free_nodes(pwd);
	free_nodes(directorys);
}
