#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int m = 0;

void p(char *buff)
{
    printf(buff);
}

void n(void)
{
    char buff[520];
    fgets(buff, 512, stdin);
    p(buff);
    if (m == 16930116)
    {
        system("/bin/cat /home/user/level5/.pass");
    }
}

int main(void)
{
    n();
    return 0;
}