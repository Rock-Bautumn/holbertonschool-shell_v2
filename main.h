#ifndef MAIN_H
#define MAIN_H

#include <linux/limits.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stddef.h>
#include <sys/stat.h>
#include <limits.h>

enum errornum{no_error, no_access, not_found, no_exist, cant_open};

int space_count(char *str, char *delimiter);
char **splitter(char fun[], char *delimiter);
char *_getenv(char *str);
char *path_cat(char *desty, char *src);
void spawn_process(char *pathandprogram, char **argv);
char *_itoa(unsigned long int value, char *newString);
int _putchar(char c);
char *string_build(char *command, int errorno);
char *expand_home(char *string);
char *islocal(char *string);
int checkforslash(char *command);
void shell_env(void);
void shell_exit(char** argv);
void shell_error(int errorno, char *command);
int is_builtin (char **argv);
void check_access(char *exepath, char **argv);
char *argtocom(char *arg);
void _puts(char *str);
void prompt(void);
char *get_input(void);
void is_program(char **argv);
char **ndsplitter(char fun[], char *delimiter);
void free_list(char **list);



#endif /* MAIN_H */


#ifndef PATH_MAX
#define PATH_MAX = 4096
#endif /* PATH_MAX */

#ifndef NAME_MAX
#define NAME_MAX = 1024
#endif /* NAME_MAX */
