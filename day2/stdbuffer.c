#include "header.h"

int main() {
    //Whenever a process is created 3 buffers will be there for every process
    //1) stdout
    //2) stdin
    //3) stderr
    printf("Parent process ");
    fork();
    printf("Child process\n");
    //Output
    //Parent process Child process
    //Parent process Child process
    while(1);
}

//printf sends data into stdout buffer 
//stdout will print data on monitor on 4 conditions
//1) \n 
//2) scanf()
//3) fflush()
//4) normal termination


//When child process is created it will copy the data of all 3 buffers from parent process
//So in this case \n is not written thats why "Parent process" will be also copied in stdout buffer
