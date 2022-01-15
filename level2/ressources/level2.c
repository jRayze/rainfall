#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

char *p(void) {
    fflush(stdout);
    char buff[64];
    void *ret_adr;
    gets(buff);
    ret_adr = __builtin_return_address(0);
    int eax = (int)ret_adr & 0xb0000000
    if (eax == 0xb0000000) {
        printf("(%p)\n", ret_adr);
        exit(1);
    }
    puts(buff);
    return strdup(buff);
}

int main() {
    p();
    return(0);
}