#include "header.h" 

//zombie processes are harmful because even after execution 
//child process will still occupy the ram.....

int main() {
    if(fork()==0) {
        printf("in child process pid=%d, ppid = %d\n", getpid(), getppid());
        sleep(10);
        printf("in child process pid=%d, ppid = %d\n", getpid(), getppid());    
        //Here after 10 seconds process manager(or kernel) will make this 
        //child process as dead or zombie process
    }
    else {
        while(1);
    }
    //child process will be zombie process or defunc process 
    //because parent needs to collect exit status of child
    //Once parent gets exit status of child process manager removes child from zombie.
}

//If child wants tot send exit status to its parent then
//child need to use exit() or _exit()

//If parent want to collect the exit status then parent need to use 
//wait or waitpid()

