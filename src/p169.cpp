#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "common.h"
#define MAX_BUF 512

class coord {
    private:
        int x, y;

    public:
        coord(int ix, int iy) {
            x = ix;
            y = iy;
        }

        coord() { 
            x = 0;
            y = 0;
        }

        int getX() {
            return x;
        }

        int getY() {
            return y;
        }

        coord& operator++() {
            ++x;
            ++y;
            return *this;
        }

        coord& operator++(int) {
            return operator++();
        }
};

int main(int argc, char *argv[]) {
    coord *iCoord;
    
    demo_void(iCoord = new coord(1, 4));
    demo_int(iCoord->getX());
    demo_int(iCoord->getY());
    
    demo_void(iCoord++);
    demo_int(iCoord->getX());
    demo_int(iCoord->getY());
}
