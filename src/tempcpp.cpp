#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "common.h"
#define MAX_BUF 512

std::ostream& %%%(std::ostream &os) {

    return os;
}

std::istream& %%%(std::istream &is) {

    return is;
}

int main(int argc, char *argv[]) {
    std::cout << %%% << std::endl;

}
