#ifndef SHELL_H
#define SHELL_H
/*
 *The kjxjhcjxh
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

/*
 *thebse aibfbskf
 */
void cray_prompt(void);
void cray_print(const char *crayprint);
void cray_input(char *command, size_t size);
void run_command(const char *command);




#endif /* SHELL_H */
