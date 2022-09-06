#include "header.h" 

int main() {
    if(fork()==0) {
        printf("in child process pid=%d, ppid = %d\n", getpid(), getppid());
        sleep(10);
        //After 5 seconds this child process will be orphan process
        //After that this process will be inherited by init
        printf("in child process pid=%d, ppid = %d\n", getpid(), getppid());    
    }
    else {
        sleep(5);
    }
}