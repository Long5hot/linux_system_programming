#include "header.h"

int main() {

    //parent and child process id
    //pid_t is a data type that is used to represent process id
    //pid_t is defined in sys/types.h
    //parent and child process will run concurrently
    printf("In program p3 pid= %d, ppid= %d\n", getpid(), getppid());
    fork();
    // fork();
    printf("In program p3 pid= %d, ppid= %d\n", getpid(), getppid());
    // while(1);
    return 0;
}