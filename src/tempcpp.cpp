#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "common.h"
#define MAX_BUF 512

class %%% {
    private:
        %%%

    protected:
        %%%

    public:
        %%%

        friend std::ostream& operator<<(std::ostream &os, const %%% &ob);
        friend std::istream& operator>>(std::istream &is, %%% &ob);
};

std::ostream& operator<<(std::ostream &os, const %%% &ob) {

    return os;
}

std::istream& operator>>(std::istream &is, %%% &ob) {

    return is;
}

int main(int argc, char *argv[]) {
    
}
