#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ERROR_005 "ERROR 005: Out of memory."

int lexer(const char *file_name);
int parser(const char *file_name);
int run(const char *file_name);
