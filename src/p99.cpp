#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "common.h"
#define MAX_BUF 512

class letters {
    private:
        char ch;

    public:
        letters(char c) {
            ch = c;
        };

        char getChar() {
            return ch;
        };

};

#define BOUNDS 10

int main(int argc, char *argv[]) {
    letters *arr[BOUNDS];
    for(int i = 0; i < 10; i++) {
        arr[i] = new letters('A' + i); // 'A' - 'J'
    }

    for(int i = 0; i < 10; i++) {
        demo_char(arr[i]->getChar());
    }
    
}
