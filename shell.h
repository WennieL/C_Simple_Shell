#ifdef SHELL_H
#define SHELL_H

/*---Libraries---*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

/* shell_interactive.c */
char *get_line(void);
char **split_line(char *line);
int execute_command(char **args);


#endif /*--SHELL_H--*/


