#include "cray_shell.h"
int main(void) {
    char command[108];
    while (1) {
        cray_prompt();
        cray_input(command, sizeof(command));
        if (strcmp(command, "exit") == 0) {
            break;
        }
        run_command(command);
        
    }
    return 0;
}
