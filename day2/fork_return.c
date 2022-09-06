#include "header.h"

int main() {

    //In parent process fork returns child process id
    //In child process fork returns 0
    printf("parent pid = %d\n", getpid());
    int pid = fork();
    if (pid == 0) {
        printf("In child process, pid value = %d, child pid = %d, parent pid = %d\n",pid, getpid(), getppid());
    } else {
        printf("In parent process, pid value = %d, child pid = %d, parent pid = %d\n",pid, pid, getpid());
    }


    return 0;
}