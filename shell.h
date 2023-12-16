#ifndef SHELL_H
#define SHELL_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <sys/wait.h>

void hiczak_prompt_displaying(void);
void hiczak_print(const char *message);
void command_user_enter(char *command, size_t s);
void command_running(const char *command);
void error_handler(const char *error_msg);
#endif
