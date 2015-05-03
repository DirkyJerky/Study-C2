#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "common.h"
#define MAX_BUF 512

int main(int argc, char *argv[]) {
    int i;
    demo_void(i = 4);
    demo_void(std::cout << i << std::endl);
    demo_void(std::cout.setf(std::ios::showpos));
    demo_void(std::cout << i << std::endl);
    
}
