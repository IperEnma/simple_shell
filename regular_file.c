#include "main.h"
/**
 * regular_file - file or directory
 * @path: path concatenate with input
 * Return: void
 */
int regular_file(char *path)
{
	struct stat path_stat;

	stat(path, &path_stat);
	return (S_ISREG(path_stat.st_mode));
}
