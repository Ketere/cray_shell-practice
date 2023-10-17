#include "cray_shell.h"
int main(void) {
    char command[108];
    while (1) {
        cray_prompt();
        user_input(command, sizeof(command));
        execute_command(command);
    }
    return 0;
}
