#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "common.h"
#define MAX_BUF 512

class base {
    public:
        int i;

};

class derived1 : public base {
    public:
        int j;

};

class derived2 : public base {
    public:
        int k;

};

class derived3 : public derived1, public derived2 {
    public:
        int product() {
            return i * j * k;
        }

};

int main(int argc, char *argv[]) {
    derived3 ob;

    ob.i = 5;
    ob.k = 10;
    ob.j = 44;

    demo_int(ob.product());
}
