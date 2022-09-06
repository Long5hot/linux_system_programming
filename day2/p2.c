#include "header.h"

int main() {

    printf("in process p2 pid= %d, ppid= %d\n", getpid(), getppid());
    system("./p1");
    while(1);
       
}