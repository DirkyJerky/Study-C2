#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "common.h"
#define MAX_BUF 512

int main(int argc, char *argv[]) {
    std::ios_base::fmtflags oldFlags = std::cout.flags();

    demo_void(std::cout.setf(std::ios::showbase | std::ios::hex));
    demo_void(std::cout.unsetf(std::ios::dec));
    demo_void(std::cout << 100 << std::endl);
    demo_void(std::cout.setf(oldFlags));
    demo_void(std::cout << 100 << std::endl);
    
}
