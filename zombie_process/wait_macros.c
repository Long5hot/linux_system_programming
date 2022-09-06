#include "header.h" 


// WIFEXITED(wstatus) 
    //return true if the child terminated successfully



int main() {

    if(fork()==0) {
        printf("In child process pid = %d\n", getpid());
        sleep(5);
        printf("In child process after delay..\n");
        exit(2);
    }   
    else {
        
        int pid, status;
        printf("In parent process before wait...\n");
        sleep(10); //child will stay 10 sec in zombie state
        pid = wait(&status);

        if(WIFEXITED(status))
            printf("Child terminated successfully %d\n", WEXITSTATUS(status));

        while(1);
    }
}

