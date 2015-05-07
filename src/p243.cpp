#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "common.h"
#include <time.h>
#define MAX_BUF 512

std::ostream& td(std::ostream &os) {
    time_t iTime = time(NULL);
    char *theTime = ctime(&iTime);
    os << theTime;
    return os;
}

int main(int argc, char *argv[]) {
    demo_void(std::cout << td << std::endl);

}
