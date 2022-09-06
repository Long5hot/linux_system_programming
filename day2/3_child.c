//Create 3 child processes from parent process.

#include "header.h" 

int main() {

    if(fork()==0) {
        //first child
    } 
    else {
        //Parent process 

        if(fork()==0) {
            //Second child
        } 

        else {
            //Parent process

            if(fork()==0) {
                //third child
            } 

            else {
                //Parent process
            }
        } 

        //Cant write anything here because it will be executed 
        //by second child also
    }
}