#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 * struct builfunc - Structure of builtin functions
 * @name: command to match
 * @func: Name of the function
 */
typedef struct builfunc
{
	char *name;
	int (*func)(char *argv[], char **env);
} builfunc_t;

int shell(void);
char *_get_line();
int split_line(char *line, char *argv[]);
int check_builtin_func(char *argv[], char **env);

#endif /* _SHELL_H_ */