#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "common.h"
#define MAX_BUF 512

class person {
    private:
        const char *name;
        int telephone;

    public:
        person(const char *n, int t) {
            name = n;
            telephone = t;
        };

        const char *getName() {
            return name;
        };

        int getTele() {
            return telephone;
        };
        

};

int main(int argc, char *argv[]) {
    person *myself;    
    demo_void(myself = new person("Geoff", 8826078));
    demo_string(myself->getName());
    demo(myself->getTele());
}
