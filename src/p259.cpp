#include <stdio.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "common.h"
#define MAX_BUF 512

int main(int argc, char *argv[]) {
    if(argc != 2) {
        printf("Usage: %s <file>\n", argv[0]);
        exit(1);
    }

    std::ifstream fin(argv[1]);

    if(!fin) {
        println("Error opening file \"" << argv[1] << '"' << std::endl);
    }

    int temp = (EOF + 1);

    fin.seekg(-1, fin.end);
    int length = fin.tellg();

    for(int i = length - 1; i >= EOF; i--) {
        temp = fin.peek();
        fin.seekg(i, fin.beg);

        std::cout << ((char) temp);
    }
    println("");
}
