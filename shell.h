#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void disp_cmd(void);
void tokenizer(char *buf, char *buf_cpy);
void exec_cmd(char **argv);


#endif
