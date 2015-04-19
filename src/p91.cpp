#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#define MAX_BUF 512
#define println(X) std::cout << X << std::endl

#define demo_int(X) printf( #X " -> %d\n", (X) );
#define demo_void(X) printf( #X "\n" ); X;
#define demo_string(X) printf( #X " -> %s\n", (X) );
#define demo_float(X) printf( #X " -> %f\n", (X) );
#define demo(X) demo_int(X)

#define STACKSIZE 26

class stack {
    private:
        char buffer[STACKSIZE];
        int tos;
    public:
        stack() {
            tos = 0;
        };

        bool push(char ch) {
            if(tos == STACKSIZE) {
                return false;
            }
            buffer[tos] = ch;
            tos++;
            return true;
        };

        char pop() {
            if(tos == 0) {
                return false;
            }
            tos--;
            return buffer[tos];
        };
};

void showstack(stack stackI) {
    char popped;
    while((popped = stackI.pop())) {
        println( "'" << popped << "'");
    }
}

stack loadStack(bool);

stack loadStack() {
    return loadStack(false);
}

stack loadStack(bool upper) {
    stack stackI;
    for(char i = (upper ? 'A' : 'a'); i <= (upper ? 'Z' : 'z'); i++) {
        stackI.push(i);
    }
    return stackI;
}

int main(int argc, char *argv[]) {
    demo_void(stack st = loadStack(true))
    demo_void(showstack(st))

    demo_void(stack st2 = loadStack(false))
    demo_void(showstack(st2))
}
