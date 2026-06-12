#include <stdio.h>
#include <string.h>

int run_file(const char *file_name);

int main(int argc, char *argv[]) {
  if (argc < 3) {
    printf("Usage: meow <command> <filename>\n");
    return 1;
  }

  if (strcmp(argv[1], "run") == 0) {
    char *file_name = argv[2];
    return run_file(file_name);
  } else {
    printf("Unknown command: %s. Did you mean 'run'?\n", argv[1]);
    return 1;
  }
}

int run_file(const char *file_name) {
  FILE *file = fopen(file_name, "r");

  if (file == NULL) {
    printf("Cannot open file '%s'.", file_name);
    return 1;
  }

  char buffer[256];

  while (fgets(buffer, sizeof(buffer), file) != NULL) {
    buffer[strcspn(buffer, "\r\n")] = '\0';

    if (strlen(buffer) == 0) {
      continue;
    } else if (buffer[0] == ']') {
      continue;
    } else if (buffer[0] == 'p') {
      putchar(buffer[1]);
    } else if (strcmp(buffer, "sp") == 0) {
      putchar(' ');
    } else if (strcmp(buffer, "ln") == 0) {
      putchar('\n');
    } else if (buffer[0] == 'r') {
      fclose(file);
      return buffer[1] - '0';
    }
  }
  return 0;
}
