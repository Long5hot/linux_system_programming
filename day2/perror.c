#include "header.h"

int main() {
    FILE * fp = fopen("file.txt", "r");
    if (fp == NULL) {
        perror("Error opening file"); // prints error message
        return 0;
    }
    perror("File : "); // File : Success is printed
    printf("File opened successfully\n");
}