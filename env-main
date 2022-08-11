#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * read - read from a file descriptor.
 * description - attempts to read up to count bytes from file descriptor fd into
 * the buffer starting at buf
 * 
 * Returns: On  success returns 0, On error, -1 is returned, and errno is set 
 * appropriately
 */

void disp_cmd(void)
{
        size_t buf_size = 15;
        ssize_t nread;
        char *buf = NULL;

        printf("input command: ");
        nread = getline(&buf, &buf_size, stdin);
        /*check getline function */
        if (nread == -1)
        {
                printf("\n..... logging out\n");
                return;
        }
	
        buf_cpy = malloc(sizeof(char) * nread);
        strcpy(buf_cpy, buf);


        free(buf);
        free(buf_cpy);
}

