#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "common.h"
#define MAX_BUF 512

class pwr {
    private:
        int base;
        int expon;
        double result;

        void calcResult() {
            result = pow(base, expon);
        }

    public:
        pwr(int b = 0, int e = 0) : base(b), expon(e) {
            calcResult();
        }

        friend std::ostream& operator<<(std::ostream &os, const pwr &ob);
        friend std::istream& operator>>(std::istream &is, pwr &ob);
};

std::ostream& operator<<(std::ostream &os, const pwr &ob) {
    os << ob.result;
    return os;
}

std::istream& operator>>(std::istream &is, pwr &ob) {
    is >> ob.base;
    is >> ob.expon;
    ob.calcResult();
    return is;
}

int main(int argc, char *argv[]) {
    pwr iPwr;
    demo_void(std::cin >> iPwr);
    demo_void(std::cout << iPwr << std::endl);
}
