#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

char c[80];

void m(void) {
    printf("%s - %d\n", c, time(0));
}

int main(int argc, char **argv) {
    FILE *file;
    char *str; 
    char *str2;

    str = (char *)malloc(8);
    str2 = (char *)malloc(8);

    malloc();
    malloc();

    strcpy();
    strcpy();

    file = fopen("/home/user/level8/.pass", "r");
    fgets(c, 60, file);
    puts("~~");
    return 0;
}