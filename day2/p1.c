#include "header.h"

int main() {

    printf("in process p1 pid= %d, ppid= %d\n", getpid(), getppid());
    while(1);
}