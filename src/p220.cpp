#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "common.h"
#define MAX_BUF 512

int main(int argc, char *argv[]) {
    float f;
    demo_void(f = 0.0314159);
    demo_void(std::cout << f << std::endl);
    demo_void(std::cout.setf(std::ios::uppercase | std::ios::scientific | std::ios::showpoint));
    demo_void(std::cout << f << std::endl);
    
}
