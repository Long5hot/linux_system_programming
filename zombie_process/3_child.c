#include "header.h"

int main() {
    if(fork()==0) {
        //child 1
        int d;
        srand(getpid());
        d = rand()%10+1; //random delay between 1 and 10 sec
        printf("In child 1 process pid = %d, delay = %d\n", getpid(), d);
        sleep(d);
        printf("Child 1 process completed...\n");
        exit(0);
    } 
    else {
        //parent
        if(fork()==0) {
            //child 2
            int d;
            srand(getpid());
            d = rand()%10+1; //random delay between 1 and 10 sec
            printf("In child 2 process pid = %d, delay = %d\n", getpid(), d);
            sleep(d);
            printf("Child 2 process completed...\n");
            exit(0);
        }
        else {
                if(fork()==0) {
                    //child 3
                    int d;
                    srand(getpid());
                    d = rand()%10+1; //random delay between 1 and 10 sec
                    printf("In child 3 process pid = %d, delay = %d\n", getpid(), d);
                    sleep(d);
                    printf("Child 3 process completed...\n");
                    exit(0);
                } 

                else {
                      //parent
                      while(wait(0)!=-1);   //wait for all children to complete

                        printf("All child processes completed...\n");
                        printf("Parent process completed...\n");  
                }
        }
    }
}