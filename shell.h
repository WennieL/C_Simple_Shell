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

/*---Macros---*/
#define TOK_DELIM " \t\r\n\a\""
extern char **environ;

/*---PROTOTYPES---*/
void interactive(void);
void non_interactive(void);
char *read_line(void);
char *read_stream(void);
char **split_line(char *line);
int execute_args(char **args);
int new_process(char **args);
char *handle_path(const char *command);


#endif /*--SHELL_H--*/


