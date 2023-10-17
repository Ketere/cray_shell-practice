#include "cray_shell.h"
int main(void) {
    char command[108];
    while (1) {
        cray_prompt();
        cray_input(command, sizeof(command));
        run_command(command);
        
    }
    return 0;
}
