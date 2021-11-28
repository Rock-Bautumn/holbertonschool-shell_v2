#ifndef MAIN_H
#define MAIN_H

#include <linux/limits.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int space_count(char *str, char *delimiter);

char **splitter(char fun[]);
char *_getenv(char *str);

	
#endif /* MAIN_H */
