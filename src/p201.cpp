#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "common.h"
#define MAX_BUF 512

class planet {
    protected:
        double distance;
        int revolveDays;

    public:
        planet(double d, int r) {
            distance = d;
            revolveDays = r;
        }

};

class earth : public planet {
    private:
        double circumference;

    public:
        earth(double d, int r) : planet(d, r) {
            circumference = 2 * r * M_PI;
        }

        void show() {
            demo_float(circumference);
            demo_float(distance);
            demo_int(revolveDays);
        }
};

int main(int argc, char *argv[]) {
    earth ob(93 * 1000 * 1000, 365);

    ob.show();
}
