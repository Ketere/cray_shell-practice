#include "cray_shell.h"

void cray_print(const char *crayprint) {
    write(STDOUT_FILENO, crayprint, strlen(crayprint));
}
