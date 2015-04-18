#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#define MAX_BUF 512
#define println(X) std::cout << X << std::endl

#define demo_int(X) printf( #X " -> %d\n", (X) );
#define demo_string(X) printf( #X " -> %s\n", (X) );
#define demo_float(X) printf( #X " -> %f\n", (X) );
#define demo(X) demo_int(X)

class who {
    private:
        char id;

    public:
        who(char ch) {
            id = ch;
            println("Constructing who #" << id);
        };

        ~who() {
            println("Deconstucting who #" << id);
        };

};

who makeWho(char id) {
    who whoI(id);
    return whoI;
}

int main(int argc, char *argv[]) {
    who whoI = makeWho('a');
    whoI = makeWho('b');
    whoI = makeWho('c');
}
