//wait() is a blocking function

// It will block parent process till child is not completed 
//---> upon successfull waiting it return child id
//---> upon failure it will return -1

//Even if child is sending exit status at successful termination if parent 
// is not collecting then child will stay in zombie processs

//In child is not necesarry to use exit() because _start will send exit(0)
//But in parent it is necessary to use wait()

//Wait is a blocking funciton
//It will block the parent execution till child comepltes

#include "header.h"

int main() {

    if(fork()==0) {
        printf("In child process pid = %d\n", getpid());
        sleep(10);
        printf("In child process after delay..\n");
        exit(1);
    }   else {
        
        int pid, status;
        printf("In parent process before wait...\n");
        sleep(20); //child will stay 10 sec in zombie state
        pid = wait(&status);

        printf("In parent process after wait...\n");
        printf("Value of pid = %d, status = %d\n", pid, status);
        while(1);
    }
}

