#include "main.h"
/**
 * suprtab - change tab to spaces
 * @buffer: received command
 * Return: void
 */
void suprtab(char *buffer)
{
	int i = 0;

	for (i = 0; buffer[i]; i++)
	{
		if (buffer[i] == '	')
		{
			buffer[i] = ' ';
		}
	}
}
