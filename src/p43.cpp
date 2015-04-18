#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#define MAX_BUF 512
#define println(X) std::cout << X << "\n"

#define demo_int(X) printf( #X " -> %d\n", (X) );
#define demo_string(X) printf( #X " -> %s\n", (X) );
#define demo_float(X) printf( #X " -> %f\n", (X) );
#define demo(X) demo_int(X)

class tAndD {
    private:   
        struct tm *timeS;

    public:
        tAndD(time_t time) {
            timeS = localtime(&time);
        };

        void display() {
            println("Date is " << (1 + timeS->tm_mon) << "/" << timeS->tm_mday << "/" << (1900 + timeS->tm_year));
        };
};

int main(int argc, char *argv[]) {
    tAndD tD(time(NULL));
    tD.display();
}
