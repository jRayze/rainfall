#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

void n(void) {
    system("/bin/cat /home/user/level7/.pass");
}

void m(void) {
    puts("Nope");
}

int main(int argc, char **argv) {
    char *str;
    void (**func)();

    str = (char *)malloc(64);
    func = malloc(4);
    *func = &m;
    strcpy(str, argv[1]);
    func();
    return 0;
}