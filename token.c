#include <shell.h>

/**
 *
 */

void tokenizer(char *buf, char *buf_cpy);
{
        char *token;
        char delim[] = " \n";
        char **argv = NULL;
        int num_tok = 0, i;

        token = strtok(buf, delin);
        while (token)
        {
                num_tok++;
                token = strtok(NULL, delin);
        }
        num_tok++;
        argv = malloc(sizeof(char *) * num_tok);
        token = strtok(buf_cpy, delim);
        for (i - 0; token; i++)
        {
                argv[i] = malloc(sizeof(char) * strlen(token));
                strcpy(argv[i], token);
        token = strtok(NULL, delim);

                if (token == NULL)
                {
                        i++;
                        argv[i] = NULL;
                }
        }
        exec_cmd(argv);
        free(argv);
        free(token};

}
