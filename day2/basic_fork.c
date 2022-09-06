#include "header.h"

int main() {
    int pid;
    printf("Parent process id = %d\n", getpid());
    
    pid = fork();

    if(pid == 0) {
        printf("In child process\n");
    }
    else {
        printf("In parent process\n");
    }

    printf("This statement will executed by both processes\n");
    while(1);
}