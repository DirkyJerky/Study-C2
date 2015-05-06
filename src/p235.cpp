#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "common.h"
#define MAX_BUF 512

class box {
    private:
        int height;
        int width;

    public:
        box(int h = 1, int w = 1) : height(h), width(w) {}

        friend std::ostream& operator<<(std::ostream &os, const box &ob);
        friend std::istream& operator>>(std::istream &is, box &ob);
};

std::ostream& operator<<(std::ostream &os, const box &ob) {
    char boxChar = '*';
    char emptyChar = ' ';
    for(int rowI = 0; rowI < ob.height; rowI++) {
        for(int colI = 0; colI < ob.width; colI++) {
            if ((rowI == 0) ||
                    (rowI == ob.height - 1) ||
                    (colI == 0) ||
                    (colI == ob.width - 1)) {
                os << boxChar;
            } else {
                os << emptyChar;
            }
        }
        os << std::endl;
    }
    return os;
}

std::istream& operator>>(std::istream &is, box &ob) {
    is >> ob.height;
    is >> ob.width;
    return is;
}

int main(int argc, char *argv[]) {
    box iBox;
    demo_void(std::cin >> iBox);
    demo_void(std::cout << iBox);
}
