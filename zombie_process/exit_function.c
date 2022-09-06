//TO avoid child becoming zombie, child should send exit status
//using exit or _exit()

//parent should collect using wait() or waitpid()

//exit() --> library funciton
//_exit() --> system call

//exit(0) / exit(EXIT_SUCCESS) --> normal successful termination
//exit(1) / exit(EXIT_FAILURE) --> Failure normal termination

// exit(1) --> Abnormal termination (because of some signal)

//exit() 
#include "header.h"
void abc() {
    printf("Inside function abc\n");

}

int main() {
    printf("Execution started..\n");

    atexit(abc);  // atexit will call the abc function at the end of normal terminaation
 
    sleep(5);

    exit(0);
}

//Even if you dont write exit at the end of it
// _start will call the exit(0) at the end of execution of program


