#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int m = 0;

int v(void) {
    char buff[520];
    fgets(buff, 512, stdin);
    printf(buff);
    if (m == 64) {
        fwrite("Wait what?!\n", 1, 12, stdout);
        system("/bin/sh");
    }
    return (0);
}

int main() {
    v();
    return(0);
}