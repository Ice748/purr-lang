#include <stdio.h>
#include <string.h>

int run_file(const char *file_name);

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage: meow <command> <filename>\n");
    return 1;
  }

  if (strcmp(argv[1], "run") == 0) {
    if (argc < 3) {
      printf("Usage: meow run <filename>\n");
      return 1;
    }
    
    char *file_name = argv[2];
    return run_file(file_name);
  } else if (strcmp(argv[1], "version") == 0) {
    printf("meow-lang v0.0.1 beta\n");
    return 0;
  } else {
    printf("Unknown command: %s.\n", argv[1]);
    return 1;
  }
}

int run_file(const char *file_name) {
  FILE *file = fopen(file_name, "r");

  if (file == NULL) {
    printf("Cannot open file '%s'.\n", file_name);
    return 1;
  }

  char buffer[256];
  int line = 0;

  while (fgets(buffer, sizeof(buffer), file) != NULL) {
    buffer[strcspn(buffer, "\r\n")] = '\0';
    line++;

    if (strlen(buffer) == 0) {
      continue;
    } else if (buffer[0] == ']') {
      continue;
    } else if (buffer[0] == 'p' && buffer[1] != '\0' && buffer[1] != ' ' && buffer[1] != '\t') {
      putchar(buffer[1]);
    } else if (strcmp(buffer, "sp") == 0) {
      putchar(' ');
    } else if (strcmp(buffer, "ln") == 0) {
      putchar('\n');
    } else if (strcmp(buffer, "tb") == 0) {
      putchar('\t');
    } else if (buffer[0] == 'r') {
      fclose(file);
      return buffer[1] - '0';
    } else {
      printf("SYNTAX ERROR: Unknown command\nLine: %d\nCommand: %s\n", line, buffer);
    }
  }

  fclose(file);
  return 0;
}
