#include "cray_shell.h"

void read_command(char *command, size_t size) {
    if (fgets(command, size, stdin) == NULL) {
        if (feof(stdin)) {
            cray_print("\n");
            exit(EXIT_SUCCESS);
        } else {
            cray_print("Error while reading input.\n");
            exit(EXIT_FAILURE);
        }
    }
    command[strcspn(command, "\n")] = '\0'; // Remove newline
}
