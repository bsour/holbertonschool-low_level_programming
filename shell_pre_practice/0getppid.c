#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Parent process ID: %d\n", getppid());
    return 0;
}
