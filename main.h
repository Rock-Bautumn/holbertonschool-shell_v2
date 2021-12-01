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

unsigned long int loopcount = 0;
enum errornum{no_error, no_access, not_found, no_exist, cant_open};

int space_count(char *str, char *delimiter);
char **splitter(char fun[]);
char *_getenv(char *str);
char *path_cat(char *desty, char *src);
void spawn_process(char *pathandprogram, char **argv);
char *_itoa(unsigned long int value, char *newString);
int _putchar(char c);
char *string_build(char *command, int errorno);

#endif /* MAIN_H */


#ifndef PATH_MAX
#define PATH_MAX = 4096
#endif /* PATH_MAX */

#ifndef NAME_MAX
#define NAME_MAX = 1024
#endif /* NAME_MAX */
