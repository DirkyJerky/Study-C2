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

        int *getXP() {
            return &x;
        }

        int *getYP() {
            return &y;
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

};

int main(int argc, char *argv[]) {
    coord *iCoord;
    
    demo_void(iCoord = new coord(1, 4));
    demo_int(iCoord->getX());
    demo_int(iCoord->getY());
    demo_pointer(iCoord->getXP());
    demo_pointer(iCoord->getYP());
    
    demo_void(++iCoord);
    demo_int(iCoord->getX());
    demo_int(iCoord->getY());
    demo_pointer(iCoord->getXP());
    demo_pointer(iCoord->getYP());
}
