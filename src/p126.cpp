#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "common.h"
#define MAX_BUF 512

class aType {
    private:
        double a, b;

    public:
        aType(double x, double y) {
            a = x;
            b = y;
        }

        void show() {
            println(a << ' ' << b);
        }
};

int main(int argc, char *argv[]) {
#define BOUNDS_ROWS 2
#define BOUNDS_COLS 5

    aType *arr[BOUNDS_ROWS][BOUNDS_COLS];
    
    for(int i = 0; i < BOUNDS_ROWS; i++) {
        for(int j = 0; j < BOUNDS_COLS; j++) {
            demo_void(arr[i][j] = new aType(i, j));
        }
    }

    for(int i = 0; i < BOUNDS_ROWS; i++) {
        for(int j = 0; j < BOUNDS_COLS; j++) {
            demo_void(arr[i][j]->show());
        }
    }
}
