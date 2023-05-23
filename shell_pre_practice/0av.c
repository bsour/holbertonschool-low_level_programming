#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av) {
    char **arg = av;
    
    while (*arg != NULL)
    {
        printf("%s", *arg);
        arg++;
    }
    
    return (0);
}
