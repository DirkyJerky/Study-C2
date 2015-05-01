#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "common.h"
#define MAX_BUF 512

class vehicle {
    private:
        int numWheels;
        int range;

    public:
        vehicle(int w, int r) {
            numWheels = w;
            range = r;
        }
        
        void showv() {
            println("Wheels: " << numWheels);
            println("Range: " << range);
        }
};

class car : public vehicle {
    private:
        int passengers;

    public:
        car(int p, int w, int r) : vehicle(w, r) {
            passengers = p;
        }
        
        void show() {
            showv();
            println("Passengers: " << passengers);
        }
};

class truck : public vehicle {
    private:
        int loadLimit;

    public:
        truck(int l, int w, int r) : vehicle(w, r) {
            loadLimit = l;
        }
        
        void show() {
            showv();
            println("Load Limit: " << loadLimit);
        }
};

int main(int argc, char *argv[]) {
    car *iCar;
    truck *iTruck;

    demo_void(iCar = new car(5, 4, 500));
    demo_void(iTruck = new truck(30000, 12, 1200));

    println("");
    demo_void(iCar->show());
    demo_void(iTruck->show());
    
}
