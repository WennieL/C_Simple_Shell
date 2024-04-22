#ifdef SHELL_H
#define SHELL_H

/*---Libraries---*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

/* shell_interactive.c */
char *read_line(void);
char *read_stream(void);
void interactive(void);
void non_interactive(void);
int process(char **args);
char **split_line(char *line);

#endif /*--SHELL_H--*/


