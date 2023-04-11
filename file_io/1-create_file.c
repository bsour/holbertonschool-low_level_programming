#include "main.h"
/**
 * create_file - creates a file and puts text in it
 * with 600 perms (do not change if it exists)
 *
 * @filename: name for file
 * @text_content: text to put into file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    FILE *fptr;
    int i;

    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        return -1;
    }
    for (i = 0; text_content[i] != '\0'; i++) {
        fputc(text_content[i], fptr);
    }
    fclose(fptr);
    return 0;
}
