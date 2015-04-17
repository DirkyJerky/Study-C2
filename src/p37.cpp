#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#define MAX_BUF 512
#define println(X) std::cout << X << std::endl

class stopwatch {
    private:
        time_t startT;
        time_t finishT;

    public:
        time_t getDuration() { 
            return difftime(finishT, startT);
        }
        void start() { 
            startT  = time(NULL);   
        }
        void stop()  { 
            finishT = time(NULL); 
        }
        void show() {
            println("It took you " << getDuration() << " seconds to hit enter.");
        }
        ~stopwatch() {
            show();
        }
};
void getInput() {
    println("Please press enter.");
    scanf("%*c");
}

int main(int argc, char *argv[]) {
    stopwatch swatch;
    swatch.start();

    getInput();

    swatch.stop();

}
