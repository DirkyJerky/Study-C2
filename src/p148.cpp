#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "common.h"
#define MAX_BUF 512

class date {
    private:
        int day, month, year;

    public:
        date(char *str) {
            sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
        }
        
        date(int m, int d, int y) {
            day = d;
            month = m;
            year = y;
        }

        date(time_t t) {
            struct tm *tmS = localtime(&t);        
            day = tmS->tm_mday;
            month = tmS->tm_mon + 1;
            year = tmS->tm_year + 1900;
        }

        void show() {
            println(month << "/" << day << "/" << year);
        }
};

int main(int argc, char *argv[]) {
    demo_void((new date("11 4 2005"))->show());
    demo_void((new date("1/27/1788"))->show());
    demo_void((new date(time(NULL)))->show());
    demo_void((new date(4, 24, 2015))->show());

}
