#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

int main(int argc, char **argv) {
    if (atoi(argv[1]) == 423) {
        char *dup = strdup("/bin/sh");
        gid_t gid = getegid();
        uid_t uid = geteuid();
        setresgid(gid, gid,gid);
        setresuid(uid, uid, uid);
        execv("/bin/sh", &dup);
    } else {
        fwrite("No !\n", 1, 5, stderr);
    }
    return 0;
}