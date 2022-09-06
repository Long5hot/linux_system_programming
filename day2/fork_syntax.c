#include "header.h"

int main() {

    int pid;

    pid = fork();

    if(pid==0) {
        //Child
    } else {
        //Parent
    }

    if(fork()==0) {
        //child
    } else {
        //Parent
    }

    if(pid) {
        //Parent
    } else {
        //child
    }

    if(fork()) {
        //parent
    } else {
        //Child
    }
}