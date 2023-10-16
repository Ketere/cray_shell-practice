#include "cray_shell.h"

void cray_print(const char *message) {
    write(STDOUT_FILENO, message, strlen(message));
}
