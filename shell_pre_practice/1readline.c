#include <stdio.h>
#include <stdlib.h>

int main() {
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;

    printf("$ ");
    nread = getline(&line, &len, stdin);  // read input from user

    if (nread == -1) {  // check for end-of-file (EOF)
        printf("\nEnd of input reached.\n");
    } else {
        printf("%s", line);  // print user input
    }

    free(line);  // free memory allocated by getline
    return 0;
}
