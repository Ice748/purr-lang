#include <stdio.h>
#include <string.h>
#include "interpreter.h"

#define ERROR_001 "ERROR 001: Too few arguments."
#define ERROR_002 "ERROR 002: Too many arguments."
#define ERROR_003 "ERROR 003: Unknown command."
#define ERROR_004 "ERROR_004: Cannot open file."
#define VERSION "0.0.1 beta"

int main(int argc, char const *argv[]) {
	if (argc == 1) {
		printf("%s\n", ERROR_001); // ERROR 001: Too few arguments.
		return 1;
	}

	if (strcmp(argv[1], "run") == 0) {
		if (argc < 3) {
			printf("%s\n", ERROR_001); // ERROR 001: Too few arguments.
			return 1;
		} else if (argc > 3) {
			printf("%s\n", ERROR_002); // ERROR 002: Too many arguments.
			return 1;
		}

		return run(argv[2]);
	}

	if (strcmp(argv[1], "version") == 0) {
		if (argc > 2) {
			printf("%s\n", ERROR_002); // ERROR 002: Too many arguments.
			return 1;
		}

		printf("%s\n", VERSION);
		return 0;
	}

	printf("%s\n", ERROR_003); // ERROR 003: Unknown command.
	return 1;
}
