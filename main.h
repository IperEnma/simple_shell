#ifndef SIMPLESHELL
#define SIMPLESHELL
#define EISDIR 21
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
extern int errno;
extern char **environ;
/**
 * struct list_s - structure for the list
 * @s: parameters
 * @next: node next
 */
typedef struct list_s
{
	char *s;
	struct list_s *next;
} list_t;
void print_list(list_t *head);
char *_strdup(char *str);
void addnode(list_t **head, char *s);
void free_nodes(list_t *head);
char *getpath();
void tokenizador(char *env, list_t **directorys, const char *delim);
char *_concat(list_t *dir, list_t *input);
int command(list_t *head, char *path_concat);
int get_stat(char *path_concat);
int checkspace(char *s);
void function_signal(int sig);
int regular_file(char *s);
int check_directory(list_t *input);
int check_files(list_t *directorys, list_t *input);
#endif
