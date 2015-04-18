#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#define MAX_BUF 512
#define println(X) std::cout << X << std::endl

#define demo_int(X) printf( #X " -> %d\n", (X) );
#define demo_string(X) printf( #X " -> %s\n", (X) );
#define demo_float(X) printf( #X " -> %f\n", (X) );
#define demo(X) demo_int(X)

#define STACKSIZE 10

class stack {
    private:
        char buffer[STACKSIZE];
        int tos;
    public:
        stack() {
            tos = 0;
        };

        void push(char ch) {
            if(tos == STACKSIZE) {
                std::cerr << "Stack is full\n";
                return;
            }
            buffer[tos] = ch;
            tos++;
        };

        char pop() {
            if(tos == 0) {
                std::cerr << "Stack is empty\n";
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

int main(int argc, char *argv[]) {
    stack st;
    st.push('a');
    st.push('9');
    st.push(';');
    st.push('\t');
    
    showstack(st);
}
