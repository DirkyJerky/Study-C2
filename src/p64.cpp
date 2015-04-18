#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#define MAX_BUF 512
#define println(X) std::cout << X << std::endl

#define demo_int(X) printf( #X " -> %d\n", (X) );
#define demo_string(X) printf( #X " -> %s\n", (X) );
#define demo_float(X) printf( #X " -> %f\n", (X) );
#define demo(X) demo_int(X)

class dice {
    private:
        int diceRoll;

    public:
        int roll() {
            diceRoll = (rand() % 6) + 1;
            println("Roll: " << diceRoll);
            return diceRoll;
        }
};

int main(int argc, char *argv[]) {
    srand(time(NULL));

    dice diceI;
    demo(diceI.roll())
    demo(diceI.roll())
    demo(diceI.roll())
    
    
    
}
