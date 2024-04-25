#ifdef SHELL_H
#define SHELL_H

/*---Libraries---*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

/* shell_interactive.c */
char *get_line(interactive);
char **split_line(char *line);
int execute_command(char **args);
void enviro(void);
char **argv_arr(char *input);


#endif /*--SHELL_H--*/


