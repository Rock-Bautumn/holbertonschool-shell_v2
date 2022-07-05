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
#include <assert.h>

/**
 * enum errornum - maps errors to an integer
 * @no_error: no error
 * @no_access: permission denied
 * @not_found: command or file not found
 * @no_exist: file or directory doesn't exist
 * @cant_open: we can't open it
 */

enum errornum
{no_error, no_access, not_found, no_exist, cant_open};

/**
 * struct logic_s - Holds the logic and its associated statement
 * @type: 1 = &&, 2 = ||
 * @statement: the command statement dependent on the logic
 */

typedef struct logic_s
{
	char type;
	char *statement;
} logic_t;


char *argtocom(char *arg);
char *expand_home(char *string);
char *_getenv(char *str);
char *get_input(void);
char *islocal(char *string);
char *_itoa(unsigned long int value, char *newString);
char **ndsplitter(char fun[], char *delimiter);
char *path_cat(char *desty, char *src);
char **splitter(char fun[], char *delimiter);
char *_strcpy(char *stringone, char *stringtwo);
char *_strcpyfree(char *dest, char *src);
char *_strdup(char *);
char *string_build(char *command, int errorno);

int bool_argtocom(char *arg);
int bool_islocal(char *string);
int checkforslash(char *command);
int _errorputchar(char c);
int is_builtin(char **argv, char *originalinput);
int onlyspaces(char *str);
int _putchar(char c);
int space_count(char *str, char *delimiter);
int _strlen(char *);

void check_access(char *exepath, char **argv);
void clists_from_str(char *input);
void _errorputs(char *str);
void execstring(char *cmdstr);
void free_list(char **list);
void free_llist(logic_t **llist);
void is_program(char **argv, char *originalinput);
void iterate_clist(char **clist);
void logic_from_str(char *input);
void nottymode(void);
void parseandexec(char *input);
void prompt(void);
void _puts(char *str);
void shell_env(void);
void shell_error(int errorno, char *command);
void shell_exit(char **argv, char *originalinput);
void spawn_process(char *pathandprogram, char **argv);
void ttymode(void);

extern int exit_status;
extern char **environ;
extern unsigned long int loopcount;

#endif /* MAIN_H */

#ifndef PATH_MAX
#define PATH_MAX 4096
#endif /* PATH_MAX */

#ifndef NAME_MAX
#define NAME_MAX 1024
#endif /* NAME_MAX */
