#include "main.h"
/**
 * get_stat - check concatenated command path
 * @path_concat: command concatenate with directory
 * Return: 0 success or 1 fail
 */
int get_stat(char *path_concat)
{
	struct stat st;

	return (stat(path_concat, &st));
}
