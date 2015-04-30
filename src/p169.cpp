#include <stdio.h>
#include <math.h>
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

        char* getFormatted() {
            char *ret = new char[MAX_BUF];
            sprintf(ret, "(%d, %d)", getX(), getY());
            return ret;
        }

        coord& operator++() {
            ++x;
            ++y;
            return *this;
        }

        coord operator++(int) {
            coord *old = new coord(x, y);
            ++(*this);
            return *old;
        }

        coord& operator--() {
            --x;
            --y;
            return *this;
        }

        coord operator--(int) {
            coord *old = new coord(x, y);
            --(*this);
            return *old;
        }

        bool operator<(coord& b) {
            return ((this->getX() < b.getX()) && (this->getY() < b.getY()));
        }

        bool operator>(coord& b) {
            return ((this->getX() > b.getX()) && (this->getY() > b.getY()));
        }

        coord operator*(coord& b) {
            return *(new coord(this->getX() * b.getX(), this->getY() * b.getY()));
        }
        
        coord operator+() {
            return *(new coord(abs(this->getX()), abs(this->getY())));
        }

        coord operator+(coord b) {
            return *(new coord(this->getX() + b.getX(), this->getY() + b.getY()));
        }
};

int main(int argc, char *argv[]) {
    coord iCoord, iCoord2;
    
    demo_void(iCoord = *(new coord(1, -4)));
    demo_string(iCoord.getFormatted());
    
    println("");
    demo_void(iCoord2 = iCoord++);
    demo_string(iCoord2.getFormatted());
    demo_string(iCoord.getFormatted());
    
    println("");
    demo_void(iCoord = iCoord2--);
    demo_string(iCoord.getFormatted());
    demo_string(iCoord2.getFormatted());

    println("");
    demo_void(iCoord = *(new coord(-573, 7)));
    demo_string(iCoord.getFormatted());

    println("");
    demo_string((+iCoord).getFormatted());

    println("");
    demo_string(iCoord.getFormatted());
    demo_string(iCoord2.getFormatted());
    demo_string((iCoord * iCoord2).getFormatted());

    println("");
    demo_string(iCoord.getFormatted());
    demo_string(iCoord2.getFormatted());
    println("");
    demo_bool(iCoord > iCoord2);

    println("");
    demo_bool(iCoord < iCoord2);

    println("");
    demo_bool(+iCoord < iCoord2);

    println("");
    demo_bool(+iCoord > iCoord2);
}
