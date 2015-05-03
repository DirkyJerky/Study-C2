#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "common.h"
#define MAX_BUF 512

int main(int argc, char *argv[]) {
    int i;

    std::cout.precision(3);
    println("      x" << "     ln(x)" << "    log(x)");
    println("");

    for(i = 2; i <= 100; i++) {
        std::cout.width(7);
        std::cout << i << "   ";
        std::cout.width(7);
        std::cout << log(i) << "   ";
        std::cout.width(7);
        std::cout << log10(i) << "   ";
        println("");
    }
    
}
