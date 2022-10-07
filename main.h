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
 * enum crumb_free_op - maps operation to use free to an integer
 * @opflist: free list
 * @opllist: free llist
 * @oneaddr: free only one address, simple case
 */

enum crumb_free_op
{opflist, opllist, oneaddr};

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

/**
 * struct env_s - A doubly linked list to hold the virtualized
 * environment information, so it can be easily modified in place
 * @next: The next node in the linked list
 * @prev: The previous node in the linked list
 * @key: The name of the environment variable
 * @value: The data stored in the environment variable
*/

typedef struct env_s
{
	struct env_s *next;
	struct env_s *prev;
	char *key;
	char *value;
} env_t;

/**
 * struct parsed_crumb_s - A doubly linked list to hold the addresses that
 * have been used in mallocs so we can free 100% on exit
 * @next: The next node in the linked list
 * @prev: The previous node in the linked list
 * @addr: The address of the malloc that is to be freed
*/

typedef struct parse_crumb_s
{
	struct parse_crumb_s *next;
	void *free_addr;
	int operation;

} parse_crumb_t;

char *argtocom(char *arg);
char *expand_home(char *string);
char *_getenv(char *str);
char *getKey(char *str);
char *get_input(void);
char *getValue(char *str);
char *islocal(char *string);
char *_itoa(unsigned long int value, char *newString);
char **ndsplitter(char fun[], char *delimiter);
char *path_cat(char *desty, char *src);
char **splitter(char fun[], char *delimiter);
char *_strcpy(char *stringone, char *stringtwo);
char *_strcpyfree(char *dest, char *src);
char *_strdup(char *);
char *string_build(char *command, int errorno);


env_t *add_env_t_end(env_t **head, char *envItem);

int bool_argtocom(char *arg);
int bool_islocal(char *string);
int checkforslash(char *command);
int _errorputchar(char c);
int is_builtin(char **argv);
int onlyspaces(char *str);
int _putchar(char c);
int space_count(char *str, char *delimiter);
int _strcmp(char *s1, char *s2);
int _strlen(char *);


logic_t **fill_llist(char *argv);

parse_crumb_t parse_crumb(int operation, void *address);

size_t logic_count(char *argv);
size_t print_envlist(const env_t *h);

void check_access(char *exepath, char **argv);
void clists_from_str(char *input);
void _errorputs(char *str);
void execstring(char *cmdstr);
void freeEnvList(env_t **head);
void free_list(char **list);
void free_llist(logic_t **llist);
void free_parse_crumbs(void);
void is_program(char **argv);
void iterate_clist(char **clist);
void iterate_llist(logic_t **clist);
void iterate_plist(char **plist);
void logic_from_str(char *input);
void nottymode(void);
void onepiper(char *cmd1, char *cmd2);
void parseandexec(char *input);
void parse_crumb_reset(void);
void pipes_from_str(char *);
void print_crumbs(void);
void prompt(void);
void _puts(char *str);
void shell_init(char **env);
void shell_env(void);
void shell_error(int errorno, char *command);
void shell_exit(void);
void spawn_process(char *pathandprogram, char **argv);
void ttymode(void);

extern int exit_status;
extern char **environ;
extern unsigned long int loopcount;
extern env_t *envList;
extern parse_crumb_t *crumbList;


#endif /* MAIN_H */

#ifndef PATH_MAX
#define PATH_MAX 4096
#endif /* PATH_MAX */

#ifndef NAME_MAX
#define NAME_MAX 1024
#endif /* NAME_MAX */
